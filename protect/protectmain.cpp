#include "protectmain.h"
#include "antidump.h"
#include "anti_debugger.h"


std::uintptr_t process_find(const std::string& name)
{
	const auto snap = LI_FN(CreateToolhelp32Snapshot).safe()(TH32CS_SNAPPROCESS, 0);
	if (snap == INVALID_HANDLE_VALUE) {
		return 0;
	}

	PROCESSENTRY32 proc_entry{};
	proc_entry.dwSize = sizeof proc_entry;

	auto found_process = false;
	if (!!LI_FN(Process32First).safe()(snap, &proc_entry)) {
		do {
			if (name == proc_entry.szExeFile) {
				found_process = true;
				break;
			}
		} while (!!LI_FN(Process32Next).safe()(snap, &proc_entry));
	}

	LI_FN(CloseHandle).safe()(snap);
	return found_process
		? proc_entry.th32ProcessID
		: 0;
}


void blue_screen()
{
    BOOLEAN bluescr;
    ULONG cevap;
    RtlAdjustPrivilege(19, TRUE, FALSE, &bluescr);
    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &cevap);
}

void kill_process()
{
	system(_("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1").c_str());
	system(_("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1").c_str());
	system(_("sc stop HTTPDebuggerPro >nul 2>&1").c_str());
	system(_("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1").c_str());
	system(_("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1").c_str());
	system(_("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1").c_str());
}

void find_exe_title()
{
	while (true) {
		if (process_find(_("KsDumperClient.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("HTTPDebuggerUI.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("HTTPDebuggerSvc.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("FolderChangesView.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("ProcessHacker.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("procmon.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("idaq.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("idaq64.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("Wireshark.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("Fiddler.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("Xenos64.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("Cheat Engine.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("HTTP Debugger Windows Service (32 bit).exe")))
		{
			blue_screen();
		}
		else if (process_find(_("KsDumper.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("x64dbg.exe")))
		{
			blue_screen();
		}
		else if (process_find(_("ProcessHacker.exe")))
		{
			blue_screen();
		}
		else if (FindWindow(0, _("IDA: Quick start").c_str()))
		{
			blue_screen();
		}

		else if (FindWindow(0, _("Memory Viewer").c_str()))
		{
			blue_screen();
		}
		else if (FindWindow(0, _("Process List").c_str()))
		{
			blue_screen();
		}
		else if (FindWindow(0, _("KsDumper").c_str()))
		{
			blue_screen();
		}
		else if (FindWindow(0, _("HTTP Debugger").c_str()))
		{
			blue_screen();
		}
		else if (FindWindow(0, _("OllyDbg").c_str()))
		{
			blue_screen();
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));

	}
}

void mainprotect() {
	std::thread(hidethread).detach();
	std::thread(remotepresent).detach();
	std::thread(contextthread).detach();
	std::thread(debugstring).detach();
	std::thread(kill_process).detach();
	std::thread(find_exe_title).detach();
}