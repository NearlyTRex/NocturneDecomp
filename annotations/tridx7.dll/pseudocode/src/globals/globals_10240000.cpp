#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10240000
// =============================================================================

// IMAGE_RESOURCE_DATA_ENTRY
IMAGE_RESOURCE_DATA_ENTRY DAT_10243048 = {
    .OffsetToData = 0x00243060,
    .Size = 0x0000006C,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};

// IMAGE_RESOURCE_DIRECTORY
IMAGE_RESOURCE_DIRECTORY DAT_10243018 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x37FCF2FB,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_10243030 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x37FCF2FB,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};

// PascalUnicode
PascalUnicode Rsrc_StringTable_1_409 = L"";
PascalUnicode pu_DirectX6_Some_hardware_10243062 = L"DirectX6 (Some hardware)";
PascalUnicode DAT_10243094 = L"DirectX6 Debug";
PascalUnicode DAT_102430B2 = L"";
PascalUnicode DAT_102430B4 = L"";
PascalUnicode DAT_102430B6 = L"";
PascalUnicode DAT_102430B8 = L"";
PascalUnicode DAT_102430BA = L"";
PascalUnicode DAT_102430BC = L"";
PascalUnicode DAT_102430BE = L"";
PascalUnicode DAT_102430C0 = L"";
PascalUnicode DAT_102430C2 = L"";
PascalUnicode DAT_102430C4 = L"";
PascalUnicode DAT_102430C6 = L"";
PascalUnicode DAT_102430C8 = L"";
PascalUnicode DAT_102430CA = L"";

// TerminatedCString
TerminatedCString DAT_102422A2 = "GetPrivateProfileIntA";
TerminatedCString DAT_102422BA = "ExitProcess";
TerminatedCString DAT_102422C6 = "KERNEL32.dll";
TerminatedCString DAT_102422D6 = "LoadStringA";
TerminatedCString DAT_102422E4 = "MessageBoxA";
TerminatedCString DAT_102422F2 = "ShowCursor";
TerminatedCString DAT_10242300 = "SetCursorPos";
TerminatedCString DAT_1024230E = "USER32.dll";
TerminatedCString DAT_1024231C = "DirectDrawCreate";
TerminatedCString DAT_10242330 = "DirectDrawEnumerateExA";
TerminatedCString DAT_10242348 = "DDRAW.dll";
TerminatedCString DAT_10242354 = "GetCommandLineA";
TerminatedCString DAT_10242366 = "GetProcAddress";
TerminatedCString DAT_10242378 = "GetModuleHandleA";
TerminatedCString DAT_1024238C = "GetVersion";
TerminatedCString DAT_1024239A = "InitializeCriticalSection";
TerminatedCString DAT_102423B6 = "DeleteCriticalSection";
TerminatedCString DAT_102423CE = "EnterCriticalSection";
TerminatedCString DAT_102423E6 = "LeaveCriticalSection";
TerminatedCString DAT_102423FE = "FatalAppExitA";
TerminatedCString DAT_1024240E = "HeapFree";
TerminatedCString DAT_1024241A = "GetLastError";
TerminatedCString DAT_1024242A = "CloseHandle";
TerminatedCString DAT_10242438 = "TerminateProcess";
TerminatedCString DAT_1024244C = "GetCurrentProcess";
TerminatedCString DAT_10242460 = "GetCurrentThreadId";
TerminatedCString DAT_10242476 = "TlsSetValue";
TerminatedCString DAT_10242484 = "TlsAlloc";
TerminatedCString DAT_10242490 = "TlsFree";
TerminatedCString DAT_1024249A = "SetLastError";
TerminatedCString DAT_102424AA = "TlsGetValue";
TerminatedCString DAT_102424B8 = "GetCurrentThread";
TerminatedCString DAT_102424CC = "HeapCreate";
TerminatedCString DAT_102424DA = "HeapDestroy";
TerminatedCString DAT_102424E8 = "SetHandleCount";
TerminatedCString DAT_102424FA = "GetFileType";
TerminatedCString DAT_10242508 = "GetStdHandle";
TerminatedCString DAT_10242518 = "GetStartupInfoA";
TerminatedCString DAT_1024252A = "GetModuleFileNameA";
TerminatedCString DAT_10242540 = "GetCPInfo";
TerminatedCString DAT_1024254C = "GetACP";
TerminatedCString DAT_10242556 = "GetOEMCP";
TerminatedCString DAT_10242562 = "FreeEnvironmentStringsA";
TerminatedCString DAT_1024257C = "MultiByteToWideChar";
TerminatedCString DAT_10242592 = "GetEnvironmentStrings";
TerminatedCString DAT_102425AA = "FreeEnvironmentStringsW";
TerminatedCString DAT_102425C4 = "GetEnvironmentStringsW";
TerminatedCString DAT_102425DE = "WideCharToMultiByte";
TerminatedCString DAT_102425F4 = "WriteFile";
TerminatedCString DAT_10242600 = "HeapAlloc";
TerminatedCString DAT_1024260C = "SetStdHandle";
TerminatedCString DAT_1024261C = "FlushFileBuffers";
TerminatedCString DAT_10242630 = "CreateFileA";
TerminatedCString DAT_1024263E = "SetFilePointer";
TerminatedCString DAT_10242650 = "UnhandledExceptionFilter";
TerminatedCString DAT_1024266C = "LoadLibraryA";
TerminatedCString DAT_1024267C = "Sleep";
TerminatedCString DAT_10242684 = "SetEndOfFile";
TerminatedCString DAT_10242694 = "ReadFile";
TerminatedCString DAT_102426A0 = "SetConsoleCtrlHandler";
TerminatedCString DAT_102426B8 = "GetStringTypeA";
TerminatedCString DAT_102426CA = "GetStringTypeW";
TerminatedCString DAT_102426DC = "LCMapStringA";
TerminatedCString DAT_102426EC = "LCMapStringW";
TerminatedCString DAT_102426FC = "IsValidLocale";
TerminatedCString DAT_1024270C = "IsValidCodePage";
TerminatedCString DAT_1024271E = "GetUserDefaultLCID";
TerminatedCString DAT_10242734 = "GetLocaleInfoA";
TerminatedCString DAT_10242746 = "GetLocaleInfoW";
TerminatedCString DAT_10242758 = "GetTimeZoneInformation";
TerminatedCString DAT_10242772 = "CompareStringA";
TerminatedCString DAT_10242784 = "CompareStringW";
TerminatedCString DAT_10242796 = "SetEnvironmentVariableA";
TerminatedCString DAT_102427B0 = "HeapReAlloc";

// dword
dword DWORD_10242000 = 0x24205C;
dword DAT_10242004 = 0;
dword DAT_10242008 = 0;
dword DAT_10242018 = 0;
dword DAT_1024201C = 0;
dword DAT_1024202C = 0;
dword DAT_10242030 = 0;

// undefined1
undefined1 DAT_10240620 = 0x00;
undefined1 DAT_10240798 = 0x00;
undefined1 DAT_1024079a = 0x00;

// undefined2
undefined2 DAT_102407ec = 0x0000;
undefined2 DAT_102407ee = 0x0000;
undefined2 DAT_102407f0 = 0x0000;
undefined2 DAT_102407f2 = 0x0000;
undefined2 DAT_102407f4 = 0x0000;
undefined2 DAT_102407f6 = 0x0000;
undefined2 DAT_102407f8 = 0x0000;
undefined2 DAT_102407fa = 0x0000;
undefined2 DAT_10240840 = 0x0000;
undefined2 DAT_10240842 = 0x0000;
undefined2 DAT_10240844 = 0x0000;
undefined2 DAT_10240846 = 0x0000;
undefined2 DAT_10240848 = 0x0000;
undefined2 DAT_1024084a = 0x0000;
undefined2 DAT_1024084c = 0x0000;
undefined2 DAT_1024084e = 0x0000;

// undefined4
undefined4 DAT_10240610 = 0x00000000;
undefined4 DAT_1024061c = 0x00000000;
undefined4 DAT_10240624 = 0x00000000;
undefined4 DAT_10240794 = 0x00000000;
undefined4 DAT_102407a0 = 0x00000000;
undefined4 DAT_102407a8 = 0x00000000;
undefined4 DAT_102407fc = 0x00000000;
undefined4 DAT_10240850 = 0x00000000;
undefined4 DAT_10240854 = 0x00000000;
undefined4 DAT_10240858 = 0x00000000;
undefined4 DAT_1024085c = 0x00000000;
undefined4 DAT_10241860 = 0x00000000;
undefined4 DAT_10241870 = 0x00000000;
undefined4 DAT_10241874 = 0x00000000;
undefined4 DAT_10241970 = 0x00000000;
undefined4 DAT_10241974 = 0x00000000;
undefined4 DAT_10241978 = 0x00000000;
undefined4 DAT_1024197c = 0x00000000;
undefined4 DAT_10241980 = 0x00000000;
undefined4 DAT_10241984 = 0x00000000;

// word
word DAT_102443AE = 0;
word DAT_10244852 = 0;
word DAT_10244A4A = 0;
word DAT_10244CF6 = 0;
word DAT_10244E2E = 0;
word DAT_10244F12 = 0;
word DAT_1024512E = 0;
word DAT_10245176 = 0;
word DAT_1024533E = 0;
word DAT_102453BA = 0;

