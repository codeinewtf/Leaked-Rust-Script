#include "Main.h"
#include "script.h"
#include "Fonts.h"
#include "Main.h"
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <ostream>
#include <random>
#include <tchar.h>
#include <regex>
#include <sstream>
#include <winbase.h>
#include <time.h>
#include <stdio.h>
#include <WinInet.h>
#include <filesystem>
#include "imgui/imgui_internal.h"
#include <fstream>
#include <string.h>
#include <cstring>
#include "mix/md5.h"
#include "Main.h"
#include "misc.h"
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <ostream>
#include <random>
#include <tchar.h>
#include <regex>
#include <sstream>
#include <winbase.h>
#include <time.h>
#include <stdio.h>
#include <WinInet.h>
#include <filesystem>
#include <fstream>
#include <string.h>
#include <cstring>
#include <ctime>
#include <ctime>
#include <tchar.h>
#include <random>
#pragma comment(lib, "urlmon.lib")
#include <urlmon.h>
#include <sstream>
#include <iostream>
#include <Lmcons.h>
#include <string>
#include <random>
#include <Windows.h>
#include <ctime>
#include <string.h>
#include <string>
#include <stdio.h> 
#include <fstream>
#include <chrono>
#include <TlHelp32.h>
#include "lazy.h"
#include <ntstatus.h>
#include "protect/protectmain.h"
#include "skcrypt.h"
#pragma comment(lib, "ntdll.lib")
#define FG_GREEN "\033[32m"
#include "../../../../../Program Files (x86)/Microsoft DirectX SDK (June 2010)/Include/d3dx9.h"
#pragma comment(lib, "user32.lib")
using namespace std;
std::string response;
#include <random>



static std::string random_string(int length)
{
    std::string str(skCrypt("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ^!'^+%&/()=?_|<>/*-,."));
    std::random_device rd;
    std::mt19937 generator(rd());
    std::shuffle(str.begin(), str.end(), generator);
    return str.substr(0, length);    // assumes 32 < number of characters in str         
}
static DWORDLONG random_number(DWORDLONG min, DWORDLONG max)
{
    srand(time(0));
    DWORDLONG out = min + rand() % (max - min + 1);
    return out;
}
static std::string randomclassname = "                                                                                                                                     " + random_string(random_number(35, 45));


bool hideonads = false;
int birinci = 0;
int ikinci = 0;
int ucuncu = 255;


D3DCOLOR FLOAT4TOD3DCOLOR(float Col[])
{
    ImU32 col32_no_alpha = ImGui::ColorConvertFloat4ToU32(ImVec4(Col[0], Col[1], Col[2], Col[3]));
    float a = (col32_no_alpha >> 24) & 255;
    float r = (col32_no_alpha >> 16) & 255;
    float g = (col32_no_alpha >> 8) & 255;
    float b = col32_no_alpha & 255;
    return D3DCOLOR_ARGB((int)a, (int)r, (int)g, (int)b);
}

namespace Color
{
    float CrosshairColors[3] = { 255.f, 55.f, 55.f };
}

int crosshairthread_2() {
    ::SetWindowPos(main_hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE);
    ragedc = GetDC(HWND_DESKTOP);
    while (1)
    {
        if (crosshai == true)
        {
            for (int i = 0; i < crosshairsize; i++)
            {
                if (hideonads == true)
                {
                    if (!GetAsyncKeyState(VK_RBUTTON))
                         {
                             {
                                {
                                     SetPixel(ragedc, cx + i, cy + ((crosshairsize - 0) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                     SetPixel(ragedc, cx + i, cy + ((crosshairsize - 2) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                     SetPixel(ragedc, cx + ((crosshairsize - 0) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                     SetPixel(ragedc, cx + ((crosshairsize - 2) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                }
                                cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((crosshairsize - 1) / 2);
                                cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((crosshairsize - 1) / 2);
                            }
                        }
                }
                if (hideonads == false)
                {
                     {
                         {
                            {
                                 SetPixel(ragedc, cx + i, cy + ((crosshairsize - 0) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                 SetPixel(ragedc, cx + i, cy + ((crosshairsize - 2) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                 SetPixel(ragedc, cx + ((crosshairsize - 0) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                 SetPixel(ragedc, cx + ((crosshairsize - 2) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                            }
                            cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((crosshairsize - 1) / 2);
                            cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((crosshairsize - 1) / 2);
                        }
                    }
                }
            }
            Sleep(1);
        }
        Sleep(1);
    }
    Sleep(1);
}
#include <Windows.h>
#include <Iphlpapi.h>
#include <Assert.h>
#include <string>
#pragma comment(lib, "iphlpapi.lib")
char szBuffer[512];
std::string hwid_data;
#pragma comment(lib,"advapi32.lib")
TCHAR   MachineName[32];
DWORD   buf = 32;
char value_clean[64];

char* getdMacAddresses()
{

    IP_ADAPTER_INFO AdapterInfo[32];       // Allocate information for up to 32 NICs
    DWORD dwBufLen = sizeof(AdapterInfo);  // Save memory size of buffer
    DWORD dwStatus = GetAdaptersInfo(      // Call GetAdapterInfo
        AdapterInfo,                 // [out] buffer to receive data
        &dwBufLen);                  // [in] size of receive data buffer

    //Exit When Error 
    if (dwStatus != ERROR_SUCCESS)
        return 0;

    PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;
    while (pAdapterInfo)
    {
        if (pAdapterInfo->Type == MIB_IF_TYPE_ETHERNET)
        {

            sprintf_s(szBuffer, sizeof(szBuffer), "%.2x-%.2x-%.2x-%.2x-%.2x-%.2x"
                , pAdapterInfo->Address[0]
                , pAdapterInfo->Address[1]
                , pAdapterInfo->Address[2]
                , pAdapterInfo->Address[3]
                , pAdapterInfo->Address[4]
                , pAdapterInfo->Address[5]
            );

            return szBuffer;

        }


        pAdapterInfo = pAdapterInfo->Next;

    }

    return 0;
}
std::string getHWID() {
    HW_PROFILE_INFO hwProfileInfo;
    GetCurrentHwProfile(&hwProfileInfo);
    std::string hwidWString = hwProfileInfo.szHwProfileGuid;
    std::string hwid(hwidWString.begin(), hwidWString.end());

    return hwid;
}
int r = 0;
int g = 0;
int b = 255;
#define INFO_BUFFER_SIZE 32767
TCHAR  infoBuf[INFO_BUFFER_SIZE];

DWORD  bufCharCount = INFO_BUFFER_SIZE;

const string cmd1p1 = "curl -i -H \"Accept: application/json\" -H \"Content-Type:application/json\" -X POST --data \"{\\\"content\\\": \\\"";
const string cmd1p2 = "\\\"}\" ";
void SendText(string text, string webhook_url) {

    string cmd = cmd1p1 + text + cmd1p2 + webhook_url;

    WinExec(cmd.c_str(), SW_HIDE);
}
int accent_color[4] = { 130, 34, 35, 255 };
int selection_count = 0;
int legit_group_count = 0;
IDirect3DTexture9* legit_image = nullptr;
IDirect3DTexture9* rage_image = nullptr;
IDirect3DTexture9* visuals_image = nullptr;
IDirect3DTexture9* players_image = nullptr;
IDirect3DTexture9* misc_image = nullptr;
IDirect3DTexture9* settings_image = nullptr;
static void hidescript()
{
    if (GetAsyncKeyState(VK_INSERT))
    {
        HWND hWnd = FindWindowA(0, ((randomclassname.c_str())));
        if (hidescript2 == true)
        {
            ::ShowWindow(hWnd, SW_HIDE);
            hidescript2 = true;
            hidescript1 = true;
        }
        else if (hidescript1 == true)
        {
            ::ShowWindow(hWnd, SW_HIDE);
            hidescript2 = true;
            hidescript1 = true;
        }

    }
}
void getsettings()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\client.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("input.sensitivity") != std::string::npos) { // makes sure we read the correct line of the .cfg file

            std::string sensString = line;
            size_t pos = sensString.find(' ');

            sensString = sensString.substr(pos + 2);
            std::stringstream sensConv(sensString);

            sensConv >> game_sensitivity;
        }
    }
}
void akkeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedakbind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.akbind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> akbind;
        }
    }
}
void legitmodebind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedkeybindlegitmode.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.legitmode") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> legitmode1;
        }
    }
}
void holokeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedholosightbind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.holosightbind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> hhbind;
        }
    }
}
void simplekeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedsimplesightbind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.simplesightbind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> ssbind;
        }
    }
}
void barrelskeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedsuppressorbind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.suppressorbind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> slbind;
        }
    }
}
void x8keybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedx8bind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.x8bind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> xxbind;
        }
    }
}
void x16keybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedx16bind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.x16bind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> yybind;
        }
    }
}
void m2keybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedm2bind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.m2bind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> m2bind;
        }
    }
}
void lrkeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedlrbind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.lrbind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> lrbind;
        }
    }
}
void sarkeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedsarbind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.sarbind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> smbind;
        }
    }
}
void mp5keybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedmp5bind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.mp5bind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> mpbind;
        }
    }
}
void smgkeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedsmgbind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.smgbind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> csbind;
        }
    }
}
void tommykeybind()
{
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
            "Uninstall\\Steam App 252490"),
        &hKey);

    RegQueryValueExA(hKey, std::string(skCrypt("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    std::string client(skCrypt("\\cfg\\selectedtommybind.cfg"));

    file.open(std::string(value) + client); // path to rust

    while (std::getline(file, line))
    {
        fileLine++;
        if (line.find("selected.tommybind") != std::string::npos) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos + 2);
            std::stringstream fovConv(fovString);

            fovConv >> tmbind;
        }
    }
}
int APIENTRY WindownsMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    barrelskeybind();    holokeybind();
    simplekeybind();
    x16keybind();
    x8keybind();
    mp5keybind();
    smgkeybind();
    tommykeybind();
    sarkeybind();
    m2keybind();
    akkeybind();
    lrkeybind();
    getsettings();
    legitmodebind();
    SetPriorityClass(GetCurrentProcess(), 0x00000080);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)RecoilExecution, 0, 0, 0);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)crosshairthread_2, 0, 0, 0);
    hidescript();
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, randomclassname.c_str(), NULL };
    RegisterClassEx(&wc);
    main_hwnd = CreateWindow(wc.lpszClassName, randomclassname.c_str(), WS_POPUP, 0, 0, 5, 5, NULL, NULL, wc.hInstance, NULL);

    if (!CreateDeviceD3D(main_hwnd)) {
        CleanupDeviceD3D();
        UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }
    ShowWindow(main_hwnd, SW_HIDE);
    UpdateWindow(main_hwnd);
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = nullptr; //crutial for not leaving the imgui.ini file
    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable; // Enable Multi-Viewport / Platform Windows

    ImGui::GetStyle().FrameRounding = 4.0f;
    ImGui::GetStyle().GrabRounding = 4.0f;

    ImGuiStyle& style = ImGui::GetStyle();
    style.FramePadding = ImVec2(0, 0);
    style.WindowRounding = (120);
    style.ChildRounding = (12);
    style.WindowRounding = 12.f;
    style.ChildRounding = 12.f;
    style.ScrollbarRounding = 12.f;

    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImColor(250, 252, 255);
    colors[ImGuiCol_TextDisabled] = ImColor(250, 252, 255);
    colors[ImGuiCol_WindowBg] = ImColor(25, 25, 25, 255);
    colors[ImGuiCol_ChildBg] = ImColor(18, 18, 18);
    colors[ImGuiCol_PopupBg] = ImColor(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border] = ImColor(0, 0, 0);
    colors[ImGuiCol_BorderShadow] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg] = ImColor(30, 30, 30, 255);
    colors[ImGuiCol_FrameBgHovered] = ImColor(40, 40, 40, 255);
    colors[ImGuiCol_FrameBgActive] = ImColor(40, 40, 40, 255);
    colors[ImGuiCol_TitleBg] = ImColor(0.04f, 0.04f, 0.04f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImColor(0.16f, 0.29f, 0.48f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImColor(0.00f, 0.00f, 0.00f, 0.51f);
    colors[ImGuiCol_MenuBarBg] = ImColor(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImColor(0, 0, 0, 0);
    colors[ImGuiCol_ScrollbarGrab] = ImColor(0, 0, 0, 0);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(0, 0, 0, 0);
    colors[ImGuiCol_ScrollbarGrabActive] = ImColor(0, 0, 0, 0);
    colors[ImGuiCol_CheckMark] = ImColor(237, 5, 5);
    colors[ImGuiCol_SliderGrab] = ImColor(237, 5, 5);
    colors[ImGuiCol_SliderGrabActive] = ImColor(237, 5, 5);
    colors[ImGuiCol_Button] = ImColor(18, 18, 18);
    colors[ImGuiCol_ButtonHovered] = ImColor(18, 18, 18);
    colors[ImGuiCol_ButtonActive] = ImColor(18, 18, 18);
    colors[ImGuiCol_Header] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_HeaderHovered] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_HeaderActive] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_Separator] = colors[ImGuiCol_Border];
    colors[ImGuiCol_SeparatorHovered] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_SeparatorActive] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_ResizeGrip] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_ResizeGripHovered] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_ResizeGripActive] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_TabHovered] = colors[ImGuiCol_HeaderHovered];
    colors[ImGuiCol_PlotLines] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PlotLinesHovered] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PlotHistogram] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PlotHistogramHovered] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_TextSelectedBg] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_DragDropTarget] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_NavHighlight] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_NavWindowingHighlight] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_NavWindowingDimBg] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_ModalWindowDimBg] = ImColor(0.00f, 0.00f, 0.00f, 0.00f);

    ImGui_ImplWin32_Init(main_hwnd);
    ImGui_ImplDX9_Init(g_pd3dDevice);
    io.Fonts->AddFontDefault();
    ImFont* mdFont = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Verdana.ttf", 15.f);
    IM_ASSERT(mdFont != NULL);
    DWORD window_flags = ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoResize;
    RECT screen_rect;
    GetWindowRect(GetDesktopWindow(), &screen_rect);
    auto x = float(screen_rect.right - width) / 2.f;
    auto y = float(screen_rect.bottom - height) / 2.f;
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    int clicked = 0;
    static const char* renk[] = { "White", "Black","Purple", "Yellow", "Red", "Orange", "Blue", "Green" };
    static int selectedrenk = 0;

    while (msg.message != WM_QUIT)

    {
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX9_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        {
            if (legit_image == nullptr)D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice
                , &legit, sizeof(legit),
                20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &legit_image);
            if (visuals_image == nullptr)D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice
                , &visuals, sizeof(visuals),
                20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &visuals_image);
            if (players_image == nullptr)D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice
                , &players, sizeof(players),
                20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &players_image);
            if (misc_image == nullptr)D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice
                , &misc, sizeof(misc),
                20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &misc_image);
            if (settings_image == nullptr)D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice
                , &settings, sizeof(settings),
                20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &settings_image);
            (ImVec2(x, y), ImGuiCond_Once);
            ImGui::SetNextWindowSize(ImVec2(width, height));
            ImGui::SetNextWindowBgAlpha(1.0f);
            if (GetAsyncKeyState(VK_INSERT) & 1)
            {
                hidescript();
                showing = !showing;
            }
            if (showing)
            {
                ImGui::Begin(randomclassname.c_str(), &loader_active, window_flags);
                {
                    ImGui::Text("                                                                                                                            ChairsRus");
                    const ImVec2 pos = ImGui::GetWindowPos();
                    ImDrawList* draw = ImGui::GetWindowDrawList();
                    ImGui::SetCursorPos(ImVec2(10, 45));
                    ImGui::BeginGroup();
                    if (ImGui::selection("players", players_image, 0 == selection_count))
                        selection_count = 0;
                    if (ImGui::selection("legit", legit_image, 1 == selection_count))
                        selection_count = 1;
                    if (ImGui::selection("visuals", visuals_image, 2 == selection_count))
                        selection_count = 2;
                    if (ImGui::selection("misc", misc_image, 3 == selection_count))
                        selection_count = 3;
                    if (ImGui::selection("settings", settings_image, 4 == selection_count))
                        selection_count = 4;
                    ImGui::EndGroup();
                    ImGui::SetCursorPos(ImVec2(85, 15));
                    ImGui::BeginGroup();
                    if (selection_count == 0)
                    {
                        if (legit_group_count == 0)
                        {
                            Recoils();
                            ImGui::SetCursorPos(ImVec2(85, 40));
                            ImGui::BeginChild("Weapon", ImVec2(282, 300));
                            ImGui::Spacing();
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(20);
                            ImGui::Combo(skCrypt("Weapons"), &selectedItemWP, itemWP, IM_ARRAYSIZE(itemWP));
                            if (selectedItemWP == 0) {
                                Active_Weapon = "NONE";
                                ak_active = false; lr_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                                m249_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 1) {
                                Active_Weapon = "AK47";
                                ak_active = true; lr_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                                m249_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 2) {
                                Active_Weapon = "LR300";
                                lr_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                                m249_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 3) {
                                Active_Weapon = "MP5A4";
                                lr_active = false; ak_active = false; mp5_active = true; custom_active = false; thompson_active = false; semi_active = false;
                                m249_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 4) {
                                Active_Weapon = "CUSTOM";
                                custom_active = true; ak_active = false; mp5_active = false; lr_active = false; thompson_active = false; semi_active = false;
                                m249_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 5) {
                                Active_Weapon = "THOMPSON";
                                thompson_active = true; ak_active = false; mp5_active = false; custom_active = false; lr_active = false; semi_active = false;
                                m249_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 6) {
                                Active_Weapon = "SAR";
                                semi_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; lr_active = false;
                                m249_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 7) {
                                Active_Weapon = "M249";
                                m249_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                                lr_active = false; python_active = false; m39_active = false;
                            }
                            if (selectedItemWP == 8) {
                                Active_Weapon = "HMLMG";
                                python_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                                m249_active = false; lr_active = false; m39_active = false;
                            }
                            ImGui::Spacing();
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(56);
                            ImGui::Combo(skCrypt("Scopes"), &selectedItemSC, itemSC, IM_ARRAYSIZE(itemSC));
                            if (selectedItemSC == 0) {
                                Active_Scopes = "NONE";
                                sniper_active = false; x16_active = false; holo_active = false; simple_active = false;
                            }
                            if (selectedItemSC == 1) {
                                Active_Scopes = "8X";
                                sniper_active = true; x16_active = false; holo_active = false; simple_active = false;
                            }
                            if (selectedItemSC == 2) {
                                Active_Scopes = "16X";
                                sniper_active = false; x16_active = true; holo_active = false; simple_active = false;
                            }
                            if (selectedItemSC == 3) {
                                Active_Scopes = "HOLO";
                                sniper_active = false; x16_active = false; holo_active = true; simple_active = false;
                            }
                            if (selectedItemSC == 4) {
                                Active_Scopes = "SIMPLE";
                                sniper_active = false; x16_active = false; holo_active = false; simple_active = true;
                            }
                            if (selectedItemBR == 1) {
                                Active_Barrel = "SILENCER";
                                silencer_active = true;
                            }
                            ImGui::Spacing();
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(99);
                            ImGui::Checkbox(skCrypt("HipFire"), &hip_activee);
                            if (hip_activee == true);
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(155);
                            ImGui::EndChild();
                            ImGui::SetCursorPos(ImVec2(382, 40));
                            ImGui::BeginChild("Sense", ImVec2(282, 300));
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(25);
                            ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Sense"));
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(20);
                            ImGui::SliderFloat(skCrypt("##Sense"), &game_sensitivity, 0, 2, "% .2f");

                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(70);
                            ImGui::Text(("Randomize X"));
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(70);
                            ImGui::SliderFloat(("##X"), &XCONTROL, 1, 5, ("% .2f"));

                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(113);
                            ImGui::Text(("Randomize Y"));
                            ImGui::SetCursorPosX(25);
                            ImGui::SetCursorPosY(116);
                            ImGui::SliderFloat(("##Y"), &YCONTROL, 1, 5, ("% .2f"));
                            ImGui::EndChild();
                        }

                    }
                    ImGui::EndGroup();
                    if (selection_count == 1)
                    {
                        Recoils();
                        ImGui::SetCursorPos(ImVec2(85, 40));
                        ImGui::BeginChild("misc", ImVec2(282, 300));
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(20);
                        ImGui::Checkbox(skCrypt("Weapon"), &show_another_window);
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(50);
                        ImGui::Checkbox(skCrypt("Hide On Ads"), &hideonads);
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(75);
                        ImGui::Checkbox(skCrypt("Hide Menu / Show Menu"), &hideshow31);
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(100);
                        ImGui::Checkbox(skCrypt("Rapid Fire"), &bRapid);
                        if (bRapid == true)
                        {
                            ImGui::SetCursorPosX(100);
                            ImGui::SetCursorPosY(100);
                            ImGui::KeyBind(skCrypt("##Rapid Key"), rpbind, ImVec2(50, 20));
                            bRapid = true;
                            ImGui::SameLine();
                        }
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(125);
                        ImGui::Checkbox(skCrypt("Beep Sound"), &BSound);
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(150);
                        ImGui::Checkbox(skCrypt("Legit Mode"), &legitmode1);
                        if (legitmode1 == true)
                        {
                            legitmode1 = true;
                        }
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(175);
                        ImGui::Checkbox(skCrypt("Anti Afk"), &antiafk2);
                        if (antiafk2 == true)
                        {
                            antiafk2 = true;
                        }


                        ImGui::EndChild();
                        ImGui::SetCursorPos(ImVec2(382, 40));
                        ImGui::BeginChild("miscs", ImVec2(282, 300));
                        ImGui::SetCursorPosX(25);
                        ImGui::SetCursorPosY(20);
                        ImGui::Checkbox("Auto Codelock", &auto_lock);
                        if (auto_lock == true)
                        {
                            ImGui::SameLine();
                            ImGui::Spacing();
                            ImGui::SameLine();
                            ImGui::Spacing();
                            ImGui::SameLine();
                            ImGui::Text("");
                            ImGui::SameLine();
                            ImGui::Text("       Combination");
                            ImGui::KeyBind("##c1", code1, ImVec2(55, 20));
                            ImGui::SameLine(55);
                            ImGui::KeyBind("##c2", code2, ImVec2(55, 20));
                            ImGui::SameLine(110);
                            ImGui::KeyBind("##c3", code3, ImVec2(55, 20));
                            ImGui::SameLine(165);
                            ImGui::KeyBind("##c4", code4, ImVec2(55, 20));
                            ImGui::SameLine(200);
                            ImGui::KeyBind("##Code bind", codekey, ImVec2(55, 20));
                        }
                        INPUT input;
                        input.type = INPUT_KEYBOARD;
                        input.ki.wScan = 0;
                        input.ki.time = 0;
                        input.ki.dwExtraInfo = 0;
                        if (auto_lock == true && (GetAsyncKeyState(codekey)))
                        {
                            // Press the first key
                            input.ki.wVk = code1;
                            input.ki.dwFlags = 0;
                            SendInput(1, &input, sizeof(INPUT));
                            // Release the first key
                            input.ki.wVk = code1;
                            input.ki.dwFlags = KEYEVENTF_KEYUP;
                            SendInput(1, &input, sizeof(INPUT));
                            Sleep(20);
                            // Press the 2nd key
                            input.ki.wVk = code2;
                            input.ki.dwFlags = 0;
                            SendInput(1, &input, sizeof(INPUT));
                            // Release the 2nd key
                            input.ki.wVk = code2;
                            input.ki.dwFlags = KEYEVENTF_KEYUP;
                            SendInput(1, &input, sizeof(INPUT));
                            Sleep(20);
                            // Press the 3rd key
                            input.ki.wVk = code3;
                            input.ki.dwFlags = 0;
                            SendInput(1, &input, sizeof(INPUT));
                            // Release the 3rd key
                            input.ki.wVk = code3;
                            input.ki.dwFlags = KEYEVENTF_KEYUP;
                            SendInput(1, &input, sizeof(INPUT));
                            Sleep(20);
                            input.ki.wVk = code4;
                            input.ki.dwFlags = 0;
                            SendInput(1, &input, sizeof(INPUT));
                            // Release the 3rd key
                            input.ki.wVk = code4;
                            input.ki.dwFlags = KEYEVENTF_KEYUP;
                            SendInput(1, &input, sizeof(INPUT));
                            Sleep(300);
                        }
                        ImGui::EndChild();
                    }
                    if (selection_count == 2)
                    {
                        Recoils();
                        ImGui::SetCursorPos(ImVec2(85, 40));
                        ImGui::BeginChild("keys", ImVec2(282, 300));
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(70);
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(40);
                        ImGui::Text(skCrypt("Ak"));
                        ImGui::SameLine(125);
                        ImGui::Text(skCrypt("Lr"));
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(15);
                        ImGui::KeyBind(skCrypt("##ak"), akbind, ImVec2(80, 20));
                        ImGui::SameLine();
                        ImGui::KeyBind(skCrypt("##lr"), lrbind, ImVec2(80, 20));
                        ImGui::Spacing();
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(40);
                        ImGui::Text(skCrypt("Mp5"));
                        ImGui::SameLine(120);
                        ImGui::Text(skCrypt("Custom"));
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(15);
                        ImGui::KeyBind(skCrypt("##mp"), mpbind, ImVec2(80, 20));
                        ImGui::SameLine();
                        ImGui::KeyBind(skCrypt("##cs"), csbind, ImVec2(80, 20));
                        ImGui::Spacing();
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(40);
                        ImGui::Text(skCrypt("Tommy"));
                        ImGui::SameLine(110);
                        ImGui::Text(skCrypt("Sar"));
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(15);
                        ImGui::KeyBind(skCrypt("##tm"), tmbind, ImVec2(80, 20));
                        ImGui::SameLine();
                        ImGui::KeyBind(skCrypt("##sm"), smbind, ImVec2(80, 20));
                        ImGui::Spacing();
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(40);
                        ImGui::Text(skCrypt("M249"));
                        ImGui::SameLine(120);
                        ImGui::Text(skCrypt("Hmlng"));
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(15);
                        ImGui::KeyBind(skCrypt("##m2"), m2bind, ImVec2(80, 20));
                        ImGui::SameLine();
                        ImGui::KeyBind(skCrypt("##pt"), ptbind, ImVec2(80, 20));
                        ImGui::EndChild();
                        ImGui::SetCursorPos(ImVec2(382, 40));
                        ImGui::BeginChild("keys2", ImVec2(282, 300));
                        ImGui::SameLine(80);
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(45);
                        ImGui::Text(skCrypt("8X"));
                        ImGui::SameLine(130);
                        ImGui::Text(skCrypt("16X"));
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(15);
                        ImGui::KeyBind(skCrypt("##8X"), xxbind, ImVec2(80, 20));
                        ImGui::SameLine();
                        ImGui::KeyBind(skCrypt("##16X"), yybind, ImVec2(80, 20));
                        ImGui::Spacing();
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(40);
                        ImGui::Text(skCrypt("Holo"));
                        ImGui::SameLine(110);
                        ImGui::Text(skCrypt("Simple"));
                        ImGui::Text(skCrypt(""));
                        ImGui::SameLine(15);
                        ImGui::KeyBind(skCrypt("##Holo"), hhbind, ImVec2(80, 20));
                        ImGui::SameLine();
                        ImGui::KeyBind(skCrypt("##Simple"), ssbind, ImVec2(80, 20));
                        ImGui::EndChild();
                    }
                    if (selection_count == 4)
                    {
                        Recoils();
                        ImGui::SetCursorPos(ImVec2(85, 40));
                        ImGui::BeginChild("my config", ImVec2(282, 300));

                        ImGui::Text("Comming soon");

                        ImGui::EndChild();
                        ImGui::SetCursorPos(ImVec2(382, 40));
                        ImGui::BeginChild("Other config", ImVec2(282, 300));

                        ImGui::Text("Comming soon");

                        ImGui::EndChild();
                    }
                    if (selection_count == 3)
                    {
                        Recoils();
                        ImGui::SetCursorPos(ImVec2(85, 40));
                        ImGui::BeginChild("Config", ImVec2(282, 300));

                        ImGui::Text("Comming soon");

                        ImGui::EndChild();
                        ImGui::SetCursorPos(ImVec2(382, 40));
                        ImGui::BeginChild("Discord", ImVec2(282, 300));

                        if (ImGui::Button("Website", { 57.f,19.f }))
                        {
                            system("start https://chairsrus.sell.app/");
                        }

                        if (ImGui::Button("Buy Key", { 57.f,19.f }))
                        {
                            system("start https://discord.gg/magz");
                        }

                        ImGui::EndChild();
                    }


                }
                if (show_another_window)
                {
                    Recoils();
                    ImGui::SetNextWindowSize(ImVec2(120, 65), ImGuiCond_Once);
                    ImGui::SetNextWindowPos(ImVec2(110, 65), ImGuiCond_Once);
                    ImGui::SetNextWindowBgAlpha(5.0f);
                    ImGui::Begin(skCrypt("Weapons"), &show_another_window, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_Tooltip | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar);
                    ImGui::Separator();
                    ImGui::PushItemWidth(120);
                    ImGui::Text(skCrypt("Weapon"));
                    ImGui::SameLine();
                    ImGui::TextColored(ImColor(0, 0, 255), Active_Weapon);
                    ImGui::Text(skCrypt("Scope"));
                    ImGui::SameLine();
                    ImGui::TextColored(ImColor(0, 0, 255), Active_Scopes);
                    ImGui::Separator();
                    ImGui::End();
                }
                ImGui::End();
            }
        }
      
        ImGui::EndFrame();

        g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, 0, 1.0f, 0);
        if (g_pd3dDevice->BeginScene() >= 0)
        {
            ImGui::Render();
            ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
            g_pd3dDevice->EndScene();
        }

        if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        {
            ImGui::UpdatePlatformWindows();
            ImGui::RenderPlatformWindowsDefault();
        }

        HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
        { }
        if (!loader_active) {
            msg.message = WM_QUIT;
        }
    }

    ImGui_ImplDX9_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    DestroyWindow(main_hwnd);
    UnregisterClass(wc.lpszClassName, wc.hInstance);

    return 0;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;    
    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            g_d3dpp.BackBufferWidth = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            ResetDevice();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU)
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}


string anahtar, mixx, mixed;

template< typename ... Args >
std::string stringer(Args const& ... args)
{
    std::ostringstream stream;
    using List = int[];
    (void)List {
        0, ((void)(stream << args), 0) ...
    };
    return stream.str();
}

string getHwid() {
    time_t now = time(0);
    string time = to_string(now);
    string finalTime = time.substr(0, 7);

    string a, b, c, d, e;
    HW_PROFILE_INFO hwProfileInfo;
    GetCurrentHwProfile(&hwProfileInfo);
    CHAR* hwidWString = hwProfileInfo.szHwProfileGuid;
    string hwid = hwidWString;

    a = hwid.substr(1, 8);
    b = hwid.substr(10, 4);
    c = hwid.substr(15, 4);
    d = hwid.substr(20, 4);
    e = hwid.substr(25, 12);

    string mix = stringer(a, c, d, e, a, b, e, a, d, c, e, a);
    mixx = md5(md5(md5(md5(md5(mix)))));
    string birlestir = stringer(mixx, finalTime, mixx);
    mixed = md5(md5(birlestir));
    return mixed;
}



int main() {
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    getdMacAddresses();
    GetUserName(infoBuf, &bufCharCount);
    mainprotect();
    WindownsMain(0, 0, 0, 0);
}





