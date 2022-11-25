#pragma once
#include <Windows.h>
#include <iostream>
#include <intrin.h>
#include <chrono>
#include <string>
#include <vector>
#include <mmsystem.h>
#include <winbase.h>
#include <tchar.h>
#pragma comment(lib, "winmm.lib")

int IsMuzzleBoost(float Delay);
double ScopeAttachment();
double BarrelAttachment();
void little_sleep(std::chrono::milliseconds us);
void ms_sleep(int milliseconds);
void pQuerySleep(int ms);
void Smoothing(double delay, double control_time, int x, int y);
bool RecoilExecution();

namespace Util
{
	static void accurate_sleep(int ms)
	{
		LONGLONG timerResolution;
		LONGLONG wantedTime;
		LONGLONG currentTime;

		QueryPerformanceFrequency((LARGE_INTEGER*)&timerResolution);
		timerResolution /= 1000;

		QueryPerformanceCounter((LARGE_INTEGER*)&currentTime);
		wantedTime = currentTime / timerResolution + ms;
		currentTime = 0;
		while (currentTime < wantedTime)
		{
			QueryPerformanceCounter((LARGE_INTEGER*)&currentTime);
			currentTime /= timerResolution;
		}
	}

	void simple_smooth(int move_point_x, int move_point_y, double delay)
	{
		for (int i = 0; i < 5; i++) {
			mouse_event(1, move_point_x / 5, move_point_y / 5, 0, 0);

			accurate_sleep(delay / 5);
		}
		mouse_event(1, move_point_x % 5, move_point_y % 5, 0, 0);
	}
}