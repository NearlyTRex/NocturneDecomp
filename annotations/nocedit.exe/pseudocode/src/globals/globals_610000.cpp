#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x610000
// =============================================================================

// BringWindowToTop*
BringWindowToTop* g_BringWindowToTopFunc = (BringWindowToTop*)0x00211A42; // DAT_00211a42

// CharUpperBuffA*
CharUpperBuffA* g_CharUpperBuffAFunc = (CharUpperBuffA*)0x00211A56; // DAT_00211a56

// CloseClipboard*
CloseClipboard* g_CloseClipboardFunc = (CloseClipboard*)0x00211A68; // DAT_00211a68

// CloseHandle*
CloseHandle* g_CloseHandleFunc = (CloseHandle*)0x00211C38; // DAT_00211c38

// CreateBrushIndirect*
CreateBrushIndirect* g_CreateBrushIndirectFunc = (CreateBrushIndirect*)0x00211736; // DAT_00211736

// CreateCompatibleDC*
CreateCompatibleDC* g_CreateCompatibleDCFunc = (CreateCompatibleDC*)0x0021174C; // DAT_0021174c

// CreateDIBSection*
CreateDIBSection* g_CreateDIBSectionFunc = (CreateDIBSection*)0x00211762; // DAT_00211762

// CreateDirectoryA*
CreateDirectoryA* g_CreateDirectoryAFunc = (CreateDirectoryA*)0x00211C46; // DAT_00211c46

// CreateEventA*
CreateEventA* g_CreateEventAFunc = (CreateEventA*)0x00211C5A; // DAT_00211c5a

// CreateFileA*
CreateFileA* g_CreateFileAFunc = (CreateFileA*)0x00211C6A; // DAT_00211c6a

// CreateFontA*
CreateFontA* g_CreateFontAFunc = (CreateFontA*)0x00211776; // DAT_00211776

// CreateMutexA*
CreateMutexA* g_CreateMutexAFunc = (CreateMutexA*)0x00211C78; // DAT_00211c78

// CreateProcessA*
CreateProcessA* g_CreateProcessAFunc = (CreateProcessA*)0x00211C88; // DAT_00211c88

// CreateThread*
CreateThread* g_CreateThreadFunc = (CreateThread*)0x00211C9A; // DAT_00211c9a

// CreateWindowExA*
CreateWindowExA* g_CreateWindowExAFunc = (CreateWindowExA*)0x00211A7A; // DAT_00211a7a

// DefWindowProcA*
DefWindowProcA* g_DefWindowProcAFunc = (DefWindowProcA*)0x00211A8C; // DAT_00211a8c

// DeleteCriticalSection*
DeleteCriticalSection* g_DeleteCriticalSectionFunc = (DeleteCriticalSection*)0x00211CAA; // DAT_00211caa

// DeleteDC*
DeleteDC* g_DeleteDCFunc = (DeleteDC*)0x00211784; // DAT_00211784

// DeleteFileA*
DeleteFileA* g_DeleteFileAFunc = (DeleteFileA*)0x00211CC2; // DAT_00211cc2

// DeleteObject*
DeleteObject* g_DeleteObjectFunc = (DeleteObject*)0x00211790; // DAT_00211790

// DirectDrawCreate*
DirectDrawCreate* g_DirectDrawCreateFunc = (DirectDrawCreate*)0x0021230C; // DAT_0021230c

// DirectSoundCreate*
DirectSoundCreate* g_DirectSoundCreateFunc = (DirectSoundCreate*)0x80000001; // DAT_80000001

// DirectSoundEnumerateA*
DirectSoundEnumerateA* g_DirectSoundEnumerateAFunc = (DirectSoundEnumerateA*)0x80000002; // DAT_80000002

// DispatchMessageA*
DispatchMessageA* g_DispatchMessageAFunc = (DispatchMessageA*)0x00211A9E; // DAT_00211a9e

// DosDateTimeToFileTime*
DosDateTimeToFileTime* g_DosDateTimeToFileTimeFunc = (DosDateTimeToFileTime*)0x00211CD0; // DAT_00211cd0

// DuplicateHandle*
DuplicateHandle* g_DuplicateHandleFunc = (DuplicateHandle*)0x00211CE8; // DAT_00211ce8

// EnterCriticalSection*
EnterCriticalSection* g_EnterCriticalSectionFunc = (EnterCriticalSection*)0x00211CFA; // DAT_00211cfa

// ExitProcess*
ExitProcess* g_ExitProcessFunc = (ExitProcess*)0x00211D12; // DAT_00211d12

// ExitThread*
ExitThread* g_ExitThreadFunc = (ExitThread*)0x00211D20; // DAT_00211d20

// FileTimeToDosDateTime*
FileTimeToDosDateTime* g_FileTimeToDosDateTimeFunc = (FileTimeToDosDateTime*)0x00211D2E; // DAT_00211d2e

// FileTimeToLocalFileTime*
FileTimeToLocalFileTime* g_FileTimeToLocalFileTimeFunc = (FileTimeToLocalFileTime*)0x00211D46; // DAT_00211d46

// FileTimeToSystemTime*
FileTimeToSystemTime* g_FileTimeToSystemTimeFunc = (FileTimeToSystemTime*)0x00211D60; // DAT_00211d60

// FindClose*
FindClose* g_FindCloseFunc = (FindClose*)0x00211D78; // DAT_00211d78

// FindFirstFileA*
FindFirstFileA* g_FindFirstFileAFunc = (FindFirstFileA*)0x00211D84; // DAT_00211d84

// FindNextFileA*
FindNextFileA* g_FindNextFileAFunc = (FindNextFileA*)0x00211D96; // DAT_00211d96

// FindWindowA*
FindWindowA* g_FindWindowAFunc = (FindWindowA*)0x00211AB2; // DAT_00211ab2

// FlushFileBuffers*
FlushFileBuffers* g_FlushFileBuffersFunc = (FlushFileBuffers*)0x00211DA6; // DAT_00211da6

// FreeEnvironmentStringsA*
FreeEnvironmentStringsA* g_FreeEnvironmentStringsAFunc = (FreeEnvironmentStringsA*)0x00211DBA; // DAT_00211dba

// FreeLibrary*
FreeLibrary* g_FreeLibraryFunc = (FreeLibrary*)0x00211DD4; // DAT_00211dd4

// GetACP*
GetACP* g_GetACPFunc = (GetACP*)0x00211DE2; // DAT_00211de2

// GetCPInfo*
GetCPInfo* g_GetCPInfoFunc = (GetCPInfo*)0x00211DEC; // DAT_00211dec

// GetClientRect*
GetClientRect* g_GetClientRectFunc = (GetClientRect*)0x00211AC0; // DAT_00211ac0

// GetClipboardData*
GetClipboardData* g_GetClipboardDataFunc = (GetClipboardData*)0x00211AD0; // DAT_00211ad0

// GetCommandLineA*
GetCommandLineA* g_GetCommandLineAFunc = (GetCommandLineA*)0x00211DF8; // DAT_00211df8

// GetCommandLineW*
GetCommandLineW* g_GetCommandLineWFunc = (GetCommandLineW*)0x00211E0A; // DAT_00211e0a

// GetComputerNameA*
GetComputerNameA* g_GetComputerNameAFunc = (GetComputerNameA*)0x00211E1C; // DAT_00211e1c

// GetConsoleMode*
GetConsoleMode* g_GetConsoleModeFunc = (GetConsoleMode*)0x00211E30; // DAT_00211e30

// GetCurrentDirectoryA*
GetCurrentDirectoryA* g_GetCurrentDirectoryAFunc = (GetCurrentDirectoryA*)0x00211E42; // DAT_00211e42

// GetCurrentProcess*
GetCurrentProcess* g_GetCurrentProcessFunc = (GetCurrentProcess*)0x00211E5A; // DAT_00211e5a

// GetCurrentProcessId*
GetCurrentProcessId* g_GetCurrentProcessIdFunc = (GetCurrentProcessId*)0x00211E6E; // DAT_00211e6e

// GetCurrentThread*
GetCurrentThread* g_GetCurrentThreadFunc = (GetCurrentThread*)0x00211E9A; // DAT_00211e9a

// GetCurrentThreadId*
GetCurrentThreadId* g_GetCurrentThreadIdFunc = (GetCurrentThreadId*)0x00211E84; // DAT_00211e84

// GetEnvironmentStrings*
GetEnvironmentStrings* g_GetEnvironmentStringsFunc = (GetEnvironmentStrings*)0x00211EAE; // DAT_00211eae

// GetExitCodeProcess*
GetExitCodeProcess* g_GetExitCodeProcessFunc = (GetExitCodeProcess*)0x00211EC6; // DAT_00211ec6

// GetFileAttributesA*
GetFileAttributesA* g_GetFileAttributesAFunc = (GetFileAttributesA*)0x00211EDC; // DAT_00211edc

// GetFileTime*
GetFileTime* g_GetFileTimeFunc = (GetFileTime*)0x00211EF2; // DAT_00211ef2

// GetFileType*
GetFileType* g_GetFileTypeFunc = (GetFileType*)0x00211F00; // DAT_00211f00

// GetFullPathNameA*
GetFullPathNameA* g_GetFullPathNameAFunc = (GetFullPathNameA*)0x00211F0E; // DAT_00211f0e

// GetKeyNameTextA*
GetKeyNameTextA* g_GetKeyNameTextAFunc = (GetKeyNameTextA*)0x00211AE4; // DAT_00211ae4

// GetLastActivePopup*
GetLastActivePopup* g_GetLastActivePopupFunc = (GetLastActivePopup*)0x00211AF6; // DAT_00211af6

// GetLastError*
GetLastError* g_GetLastErrorFunc = (GetLastError*)0x00211F22; // DAT_00211f22

// GetLocalTime*
GetLocalTime* g_GetLocalTimeFunc = (GetLocalTime*)0x00211F32; // DAT_00211f32

// GetModuleFileNameA*
GetModuleFileNameA* g_GetModuleFileNameAFunc = (GetModuleFileNameA*)0x00211F42; // DAT_00211f42

// GetModuleFileNameW*
GetModuleFileNameW* g_GetModuleFileNameWFunc = (GetModuleFileNameW*)0x00211F58; // DAT_00211f58

// GetModuleHandleA*
GetModuleHandleA* g_GetModuleHandleAFunc = (GetModuleHandleA*)0x00211F6E; // DAT_00211f6e

// GetOEMCP*
GetOEMCP* g_GetOEMCPFunc = (GetOEMCP*)0x00211F82; // DAT_00211f82

// GetProcAddress*
GetProcAddress* g_GetProcAddressFunc = (GetProcAddress*)0x00211F8E; // DAT_00211f8e

// GetStdHandle*
GetStdHandle* g_GetStdHandleFunc = (GetStdHandle*)0x00211FA0; // DAT_00211fa0

// GetStockObject*
GetStockObject* g_GetStockObjectFunc = (GetStockObject*)0x002117A0; // DAT_002117a0

// GetTextExtentPoint32A*
GetTextExtentPoint32A* g_GetTextExtentPoint32A = (GetTextExtentPoint32A*)0x002117B2; // DAT_002117b2

// GetTimeZoneInformation*
GetTimeZoneInformation* g_GetTimeZoneInformationFunc = (GetTimeZoneInformation*)0x00211FB0; // DAT_00211fb0

// GetUserNameA*
GetUserNameA* g_GetUserNameAFunc = (GetUserNameA*)0x002119A4; // DAT_002119a4

// GetVersion*
GetVersion* g_GetVersionFunc = (GetVersion*)0x00211FCA; // DAT_00211fca

// GlobalAlloc*
GlobalAlloc* g_GlobalAllocFunc = (GlobalAlloc*)0x00211FD8; // DAT_00211fd8

// GlobalFree*
GlobalFree* g_GlobalFreeFunc = (GlobalFree*)0x00211FE6; // DAT_00211fe6

// GlobalLock*
GlobalLock* g_GlobalLockFunc = (GlobalLock*)0x00211FF4; // DAT_00211ff4

// GlobalMemoryStatus*
GlobalMemoryStatus* g_GlobalMemoryStatusFunc = (GlobalMemoryStatus*)0x00212002; // DAT_00212002

// GlobalUnlock*
GlobalUnlock* g_GlobalUnlockFunc = (GlobalUnlock*)0x00212018; // DAT_00212018

// ImpersonateLoggedOnUser*
ImpersonateLoggedOnUser* g_ImpersonateLoggedOnUserFunc = (ImpersonateLoggedOnUser*)0x002119B4; // DAT_002119b4

// InitializeCriticalSection*
InitializeCriticalSection* g_InitializeCriticalSectionFunc = (InitializeCriticalSection*)0x00212028; // DAT_00212028

// InvalidateRect*
InvalidateRect* g_InvalidateRectFunc = (InvalidateRect*)0x00211B0C; // DAT_00211b0c

// IsIconic*
IsIconic* g_IsIconicFunc = (IsIconic*)0x00211B1E; // DAT_00211b1e

// LeaveCriticalSection*
LeaveCriticalSection* g_LeaveCriticalSectionFunc = (LeaveCriticalSection*)0x00212044; // DAT_00212044

// LoadCursorA*
LoadCursorA* g_LoadCursorAFunc = (LoadCursorA*)0x00211B2A; // DAT_00211b2a

// LoadIconA*
LoadIconA* g_LoadIconAFunc = (LoadIconA*)0x00211B38; // DAT_00211b38

// LoadLibraryA*
LoadLibraryA* g_LoadLibraryAFunc = (LoadLibraryA*)0x0021205C; // DAT_0021205c

// LocalFileTimeToFileTime*
LocalFileTimeToFileTime* g_LocalFileTimeToFileTimeFunc = (LocalFileTimeToFileTime*)0x0021206C; // DAT_0021206c

// LogonUserA*
LogonUserA* g_LogonUserAFunc = (LogonUserA*)0x002119CE; // DAT_002119ce

// MessageBoxA*
MessageBoxA* g_MessageBoxAFunc = (MessageBoxA*)0x00211B44; // DAT_00211b44

// MoveFileA*
MoveFileA* g_MoveFileAFunc = (MoveFileA*)0x00212086; // DAT_00212086

// MoveWindow*
MoveWindow* g_MoveWindowFunc = (MoveWindow*)0x00211B52; // DAT_00211b52

// MultiByteToWideChar*
MultiByteToWideChar* g_MultiByteToWideCharFunc = (MultiByteToWideChar*)0x00212092; // DAT_00212092

// OpenClipboard*
OpenClipboard* g_OpenClipboardFunc = (OpenClipboard*)0x00211B60; // DAT_00211b60

// PeekMessageA*
PeekMessageA* g_PeekMessageAFunc = (PeekMessageA*)0x00211B70; // DAT_00211b70

// PostQuitMessage*
PostQuitMessage* g_PostQuitMessageFunc = (PostQuitMessage*)0x00211B80; // DAT_00211b80

// QueryPerformanceCounter*
QueryPerformanceCounter* g_QueryPerformanceCounterFunc = (QueryPerformanceCounter*)0x002120A8; // DAT_002120a8

// QueryPerformanceFrequency*
QueryPerformanceFrequency* g_QueryPerformanceFrequencyFunc = (QueryPerformanceFrequency*)0x002120C2; // DAT_002120c2

// ReadConsoleInputA*
ReadConsoleInputA* g_ReadConsoleInputAFunc = (ReadConsoleInputA*)0x002120DE; // DAT_002120de

// ReadFile*
ReadFile* g_ReadFileFunc = (ReadFile*)0x002120F2; // DAT_002120f2

// Rectangle*
Rectangle* g_RectangleFunc = (Rectangle*)0x002117CA; // DAT_002117ca

// RegCloseKey*
RegCloseKey* g_RegCloseKeyFunc = (RegCloseKey*)0x002119DC; // DAT_002119dc

// RegCreateKeyExA*
RegCreateKeyExA* g_RegCreateKeyExAFunc = (RegCreateKeyExA*)0x002119EA; // DAT_002119ea

// RegOpenKeyExA*
RegOpenKeyExA* g_RegOpenKeyExAFunc = (RegOpenKeyExA*)0x002119FC; // DAT_002119fc

// RegQueryValueExA*
RegQueryValueExA* g_RegQueryValueExAFunc = (RegQueryValueExA*)0x00211A0C; // DAT_00211a0c

// RegSetValueExA*
RegSetValueExA* g_RegSetValueExAFunc = (RegSetValueExA*)0x00211A20; // DAT_00211a20

// RegisterClassA*
RegisterClassA* g_RegisterClassAFunc = (RegisterClassA*)0x00211B92; // DAT_00211b92

// ReleaseMutex*
ReleaseMutex* g_ReleaseMutexFunc = (ReleaseMutex*)0x002120FE; // DAT_002120fe

// RevertToSelf*
RevertToSelf* g_RevertToSelfFunc = (RevertToSelf*)0x00211A32; // DAT_00211a32

// SelectObject*
SelectObject* g_SelectObjectFunc = (SelectObject*)0x002117D6; // DAT_002117d6

// SetBkColor*
SetBkColor* g_SetBkColorFunc = (SetBkColor*)0x002117E6; // DAT_002117e6

// SetBkMode*
SetBkMode* g_SetBkModeFunc = (SetBkMode*)0x002117F4; // DAT_002117f4

// SetClipboardData*
SetClipboardData* g_SetClipboardDataFunc = (SetClipboardData*)0x00211BA4; // DAT_00211ba4

// SetConsoleCtrlHandler*
SetConsoleCtrlHandler* g_SetConsoleCtrlHandlerFunc = (SetConsoleCtrlHandler*)0x0021210E; // DAT_0021210e

// SetConsoleMode*
SetConsoleMode* g_SetConsoleModeFunc = (SetConsoleMode*)0x00212126; // DAT_00212126

// SetCurrentDirectoryA*
SetCurrentDirectoryA* g_SetCurrentDirectoryAFunc = (SetCurrentDirectoryA*)0x00212138; // DAT_00212138

// SetCursor*
SetCursor* g_SetCursorFunc = (SetCursor*)0x00211BC8; // DAT_00211bc8

// SetCursorPos*
SetCursorPos* g_SetCursorPosFunc = (SetCursorPos*)0x00211BB8; // DAT_00211bb8

// SetEndOfFile*
SetEndOfFile* g_SetEndOfFileFunc = (SetEndOfFile*)0x00212150; // DAT_00212150

// SetEnvironmentVariableA*
SetEnvironmentVariableA* g_SetEnvironmentVariableAFunc = (SetEnvironmentVariableA*)0x00212160; // DAT_00212160

// SetEnvironmentVariableW*
SetEnvironmentVariableW* g_SetEnvironmentVariableWFunc = (SetEnvironmentVariableW*)0x0021217A; // DAT_0021217a

// SetEvent*
SetEvent* g_SetEventFunc = (SetEvent*)0x00212194; // DAT_00212194

// SetFileAttributesA*
SetFileAttributesA* g_SetFileAttributesAFunc = (SetFileAttributesA*)0x002121A0; // DAT_002121a0

// SetFilePointer*
SetFilePointer* g_SetFilePointerFunc = (SetFilePointer*)0x002121B6; // DAT_002121b6

// SetFileTime*
SetFileTime* g_SetFileTimeFunc = (SetFileTime*)0x002121C8; // DAT_002121c8

// SetFocus*
SetFocus* g_SetFocusFunc = (SetFocus*)0x00211BD4; // DAT_00211bd4

// SetForegroundWindow*
SetForegroundWindow* g_SetForegroundWindowFunc = (SetForegroundWindow*)0x00211BE0; // DAT_00211be0

// SetLastError*
SetLastError* g_SetLastErrorFunc = (SetLastError*)0x002121D6; // DAT_002121d6

// SetRectEmpty*
SetRectEmpty* g_SetRectEmptyFunc = (SetRectEmpty*)0x00211BF6; // DAT_00211bf6

// SetStdHandle*
SetStdHandle* g_SetStdHandleFunc = (SetStdHandle*)0x002121E6; // DAT_002121e6

// SetTextColor*
SetTextColor* g_SetTextColorFunc = (SetTextColor*)0x00211800; // DAT_00211800

// SetThreadPriority*
SetThreadPriority* g_SetThreadPriorityFunc = (SetThreadPriority*)0x002121F6; // DAT_002121f6

// SetUnhandledExceptionFilter*
SetUnhandledExceptionFilter* g_SetUnhandledExceptionFilterFunc = (SetUnhandledExceptionFilter*)0x0021220A; // DAT_0021220a

// ShowWindow*
ShowWindow* g_ShowWindowFunc = (ShowWindow*)0x00211C06; // DAT_00211c06

// Sleep*
Sleep* g_SleepFunc = (Sleep*)0x00212228; // DAT_00212228

// SystemTimeToFileTime*
SystemTimeToFileTime* g_SystemTimeToFileTimeFunc = (SystemTimeToFileTime*)0x00212230; // DAT_00212230

// TextOutA*
TextOutA* g_TextOutAFunc = (TextOutA*)0x00211810; // DAT_00211810

// TlsAlloc*
TlsAlloc* g_TlsAllocFunc = (TlsAlloc*)0x00212248; // DAT_00212248

// TlsFree*
TlsFree* g_TlsFreeFunc = (TlsFree*)0x00212254; // DAT_00212254

// TlsGetValue*
TlsGetValue* g_TlsGetValueFunc = (TlsGetValue*)0x0021225E; // DAT_0021225e

// TlsSetValue*
TlsSetValue* g_TlsSetValueFunc = (TlsSetValue*)0x0021226C; // DAT_0021226c

// TranslateMessage*
TranslateMessage* g_TranslateMessageFunc = (TranslateMessage*)0x00211C14; // DAT_00211c14

// UnhandledExceptionFilter*
UnhandledExceptionFilter* g_UnhandledExceptionFilterFunc = (UnhandledExceptionFilter*)0x0021227A; // DAT_0021227a

// UpdateWindow*
UpdateWindow* g_UpdateWindowFunc = (UpdateWindow*)0x00211C28; // DAT_00211c28

// VirtualAlloc*
VirtualAlloc* g_VirtualAllocFunc = (VirtualAlloc*)0x00212296; // DAT_00212296

// VirtualFree*
VirtualFree* g_VirtualFreeFunc = (VirtualFree*)0x002122A6; // DAT_002122a6

// VirtualQuery*
VirtualQuery* g_VirtualQueryFunc = (VirtualQuery*)0x002122B4; // DAT_002122b4

// WSACleanup*
WSACleanup* g_WSACleanupFunc = (WSACleanup*)0x80000074; // DAT_80000074

// WSAStartup*
WSAStartup* g_WSAStartupFunc = (WSAStartup*)0x80000073; // DAT_80000073

// WaitForSingleObject*
WaitForSingleObject* g_WaitForSingleObjectFunc = (WaitForSingleObject*)0x002122C4; // DAT_002122c4

// WideCharToMultiByte*
WideCharToMultiByte* g_WideCharToMultiByteFunc = (WideCharToMultiByte*)0x002122DA; // DAT_002122da

// WriteConsoleA*
WriteConsoleA* g_WriteConsoleAFunc = (WriteConsoleA*)0x002122F0; // DAT_002122f0

// WriteFile*
WriteFile* g_WriteFileFunc = (WriteFile*)0x00212300; // DAT_00212300

// accept*
accept* g_acceptFunc = (accept*)0x80000001; // DAT_80000001

// bind*
bind* g_bindFunc = (bind*)0x80000002; // DAT_80000002

// closesocket*
closesocket* g_closesocketFunc = (closesocket*)0x80000003; // DAT_80000003

// connect*
connect* g_connectFunc = (connect*)0x80000004; // DAT_80000004

// dword
dword DWORD_00611000 = 0x2110b4;
dword DAT_00611004 = 0x0;
dword DAT_00611008 = 0x0;
dword DAT_00611018 = 0x0;
dword DAT_0061101C = 0x0;
dword DAT_0061102C = 0x0;
dword DAT_00611030 = 0x0;
dword DAT_00611040 = 0x0;
dword DAT_00611044 = 0x0;
dword DAT_00611054 = 0x0;
dword DAT_00611058 = 0x0;
dword DAT_00611068 = 0x0;
dword DAT_0061106C = 0x0;
dword DAT_0061107C = 0x0;
dword DAT_00611080 = 0x0;
dword DAT_00611090 = 0x0;
dword DAT_00611094 = 0x0;

// getsockname*
getsockname* g_getsocknameFunc = (getsockname*)0x80000006; // DAT_80000006

// htons*
htons* g_htonsFunc = (htons*)0x80000009; // DAT_80000009

// int
int INT_00613000 = 0x10101;
int INT_006142ec = 0x33800001;
int g_RandToFloatFixedMultiplier = 0x33800001;
int INT_00614304 = 0x33800001;
int INT_00614308 = 0x38000100;
int INT_0061430c = 0x33800001;

// ioctlsocket*
ioctlsocket* g_ioctlsocketFunc = (ioctlsocket*)0x8000000C; // DAT_8000000c

// joyGetDevCapsA*
joyGetDevCapsA* g_joyGetDevCapsAFunc = (joyGetDevCapsA*)0x0021181C; // DAT_0021181c

// joyGetPos*
joyGetPos* g_joyGetPosFunc = (joyGetPos*)0x0021182E; // DAT_0021182e

// listen*
listen* g_listenFunc = (listen*)0x8000000D; // DAT_8000000d

// mciGetErrorStringA*
mciGetErrorStringA* g_mciGetErrorStringAFunc = (mciGetErrorStringA*)0x0021183A; // DAT_0021183a

// mciSendStringA*
mciSendStringA* g_mciSendStringAFunc = (mciSendStringA*)0x00211850; // DAT_00211850

// ntohs*
ntohs* g_ntohsFunc = (ntohs*)0x8000000F; // DAT_8000000f

// recv*
recv* g_recvFunc = (recv*)0x80000010; // DAT_80000010

// recvfrom*
recvfrom* g_recvfromFunc = (recvfrom*)0x80000011; // DAT_80000011

// send*
send* g_sendFunc = (send*)0x80000013; // DAT_80000013

// sendto*
sendto* g_sendtoFunc = (sendto*)0x80000014; // DAT_80000014

// setsockopt*
setsockopt* g_setsockoptFunc = (setsockopt*)0x80000015; // DAT_80000015

// shutdown*
shutdown* g_shutdownFunc = (shutdown*)0x80000017; // DAT_80000017

// timeBeginPeriod*
timeBeginPeriod* g_timeBeginPeriodFunc = (timeBeginPeriod*)0x00211862; // DAT_00211862

// timeEndPeriod*
timeEndPeriod* g_timeEndPeriodFunc = (timeEndPeriod*)0x00211874; // DAT_00211874

// timeGetTime*
timeGetTime* g_timeGetTimeFunc = (timeGetTime*)0x00211884; // DAT_00211884

// undefined1
undefined1 DAT_00614464 = 0;

// waveInAddBuffer*
waveInAddBuffer* g_waveInAddBufferFunc = (waveInAddBuffer*)0x00211892; // DAT_00211892

// waveInClose*
waveInClose* g_waveInCloseFunc = (waveInClose*)0x002118A4; // DAT_002118a4

// waveInGetDevCapsA*
waveInGetDevCapsA* g_waveInGetDevCapsAFunc = (waveInGetDevCapsA*)0x002118B2; // DAT_002118b2

// waveInOpen*
waveInOpen* g_waveInOpenFunc = (waveInOpen*)0x002118C6; // DAT_002118c6

// waveInPrepareHeader*
waveInPrepareHeader* g_waveInPrepareHeaderFunc = (waveInPrepareHeader*)0x002118D4; // DAT_002118d4

// waveInReset*
waveInReset* g_waveInResetFunc = (waveInReset*)0x002118EA; // DAT_002118ea

// waveInStart*
waveInStart* g_waveInStartFunc = (waveInStart*)0x002118F8; // DAT_002118f8

// waveInUnprepareHeader*
waveInUnprepareHeader* g_waveInUnprepareHeaderFunc = (waveInUnprepareHeader*)0x00211906; // DAT_00211906

// waveOutClose*
waveOutClose* g_waveOutCloseFunc = (waveOutClose*)0x0021191E; // DAT_0021191e

// waveOutGetDevCapsA*
waveOutGetDevCapsA* g_waveOutGetDevCapsAFunc = (waveOutGetDevCapsA*)0x0021192E; // DAT_0021192e

// waveOutOpen*
waveOutOpen* g_waveOutOpenFunc = (waveOutOpen*)0x00211944; // DAT_00211944

// waveOutPrepareHeader*
waveOutPrepareHeader* g_waveOutPrepareHeaderFunc = (waveOutPrepareHeader*)0x00211952; // DAT_00211952

// waveOutReset*
waveOutReset* g_waveOutResetFunc = (waveOutReset*)0x0021196A; // DAT_0021196a

// waveOutUnprepareHeader*
waveOutUnprepareHeader* g_waveOutUnprepareHeaderFunc = (waveOutUnprepareHeader*)0x0021197A; // DAT_0021197a

// waveOutWrite*
waveOutWrite* g_waveOutWriteFunc = (waveOutWrite*)0x00211994; // DAT_00211994

