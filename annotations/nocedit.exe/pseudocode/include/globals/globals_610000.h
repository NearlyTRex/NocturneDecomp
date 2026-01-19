#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/advapi32.h"
#include "system/ddraw.h"
#include "system/dsound.h"
#include "system/kernel32.h"
#include "system/mmsystem.h"
#include "system/user32.h"
#include "system/wingdi.h"
#include "system/winsock.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x610000
// =============================================================================

// BringWindowToTop*
extern BringWindowToTop* g_BringWindowToTopFunc;

// CharUpperBuffA*
extern CharUpperBuffA* g_CharUpperBuffAFunc;

// CloseClipboard*
extern CloseClipboard* g_CloseClipboardFunc;

// CloseHandle*
extern CloseHandle* g_CloseHandleFunc;

// CreateBrushIndirect*
extern CreateBrushIndirect* g_CreateBrushIndirectFunc;

// CreateCompatibleDC*
extern CreateCompatibleDC* g_CreateCompatibleDCFunc;

// CreateDIBSection*
extern CreateDIBSection* g_CreateDIBSectionFunc;

// CreateDirectoryA*
extern CreateDirectoryA* g_CreateDirectoryAFunc;

// CreateEventA*
extern CreateEventA* g_CreateEventAFunc;

// CreateFileA*
extern CreateFileA* g_CreateFileAFunc;

// CreateFontA*
extern CreateFontA* g_CreateFontAFunc;

// CreateMutexA*
extern CreateMutexA* g_CreateMutexAFunc;

// CreateProcessA*
extern CreateProcessA* g_CreateProcessAFunc;

// CreateThread*
extern CreateThread* g_CreateThreadFunc;

// CreateWindowExA*
extern CreateWindowExA* g_CreateWindowExAFunc;

// DefWindowProcA*
extern DefWindowProcA* g_DefWindowProcAFunc;

// DeleteCriticalSection*
extern DeleteCriticalSection* g_DeleteCriticalSectionFunc;

// DeleteDC*
extern DeleteDC* g_DeleteDCFunc;

// DeleteFileA*
extern DeleteFileA* g_DeleteFileAFunc;

// DeleteObject*
extern DeleteObject* g_DeleteObjectFunc;

// DirectDrawCreate*
extern DirectDrawCreate* g_DirectDrawCreateFunc;

// DirectSoundCreate*
extern DirectSoundCreate* g_DirectSoundCreateFunc;

// DirectSoundEnumerateA*
extern DirectSoundEnumerateA* g_DirectSoundEnumerateAFunc;

// DispatchMessageA*
extern DispatchMessageA* g_DispatchMessageAFunc;

// DosDateTimeToFileTime*
extern DosDateTimeToFileTime* g_DosDateTimeToFileTimeFunc;

// DuplicateHandle*
extern DuplicateHandle* g_DuplicateHandleFunc;

// EnterCriticalSection*
extern EnterCriticalSection* g_EnterCriticalSectionFunc;

// ExitProcess*
extern ExitProcess* g_ExitProcessFunc;

// ExitThread*
extern ExitThread* g_ExitThreadFunc;

// FileTimeToDosDateTime*
extern FileTimeToDosDateTime* g_FileTimeToDosDateTimeFunc;

// FileTimeToLocalFileTime*
extern FileTimeToLocalFileTime* g_FileTimeToLocalFileTimeFunc;

// FileTimeToSystemTime*
extern FileTimeToSystemTime* g_FileTimeToSystemTimeFunc;

// FindClose*
extern FindClose* g_FindCloseFunc;

// FindFirstFileA*
extern FindFirstFileA* g_FindFirstFileAFunc;

// FindNextFileA*
extern FindNextFileA* g_FindNextFileAFunc;

// FindWindowA*
extern FindWindowA* g_FindWindowAFunc;

// FlushFileBuffers*
extern FlushFileBuffers* g_FlushFileBuffersFunc;

// FreeEnvironmentStringsA*
extern FreeEnvironmentStringsA* g_FreeEnvironmentStringsAFunc;

// FreeLibrary*
extern FreeLibrary* g_FreeLibraryFunc;

// GetACP*
extern GetACP* g_GetACPFunc;

// GetCPInfo*
extern GetCPInfo* g_GetCPInfoFunc;

// GetClientRect*
extern GetClientRect* g_GetClientRectFunc;

// GetClipboardData*
extern GetClipboardData* g_GetClipboardDataFunc;

// GetCommandLineA*
extern GetCommandLineA* g_GetCommandLineAFunc;

// GetCommandLineW*
extern GetCommandLineW* g_GetCommandLineWFunc;

// GetComputerNameA*
extern GetComputerNameA* g_GetComputerNameAFunc;

// GetConsoleMode*
extern GetConsoleMode* g_GetConsoleModeFunc;

// GetCurrentDirectoryA*
extern GetCurrentDirectoryA* g_GetCurrentDirectoryAFunc;

// GetCurrentProcess*
extern GetCurrentProcess* g_GetCurrentProcessFunc;

// GetCurrentProcessId*
extern GetCurrentProcessId* g_GetCurrentProcessIdFunc;

// GetCurrentThread*
extern GetCurrentThread* g_GetCurrentThreadFunc;

// GetCurrentThreadId*
extern GetCurrentThreadId* g_GetCurrentThreadIdFunc;

// GetEnvironmentStrings*
extern GetEnvironmentStrings* g_GetEnvironmentStringsFunc;

// GetExitCodeProcess*
extern GetExitCodeProcess* g_GetExitCodeProcessFunc;

// GetFileAttributesA*
extern GetFileAttributesA* g_GetFileAttributesAFunc;

// GetFileTime*
extern GetFileTime* g_GetFileTimeFunc;

// GetFileType*
extern GetFileType* g_GetFileTypeFunc;

// GetFullPathNameA*
extern GetFullPathNameA* g_GetFullPathNameAFunc;

// GetKeyNameTextA*
extern GetKeyNameTextA* g_GetKeyNameTextAFunc;

// GetLastActivePopup*
extern GetLastActivePopup* g_GetLastActivePopupFunc;

// GetLastError*
extern GetLastError* g_GetLastErrorFunc;

// GetLocalTime*
extern GetLocalTime* g_GetLocalTimeFunc;

// GetModuleFileNameA*
extern GetModuleFileNameA* g_GetModuleFileNameAFunc;

// GetModuleFileNameW*
extern GetModuleFileNameW* g_GetModuleFileNameWFunc;

// GetModuleHandleA*
extern GetModuleHandleA* g_GetModuleHandleAFunc;

// GetOEMCP*
extern GetOEMCP* g_GetOEMCPFunc;

// GetProcAddress*
extern GetProcAddress* g_GetProcAddressFunc;

// GetStdHandle*
extern GetStdHandle* g_GetStdHandleFunc;

// GetStockObject*
extern GetStockObject* g_GetStockObjectFunc;

// GetTextExtentPoint32A*
extern GetTextExtentPoint32A* g_GetTextExtentPoint32A;

// GetTimeZoneInformation*
extern GetTimeZoneInformation* g_GetTimeZoneInformationFunc;

// GetUserNameA*
extern GetUserNameA* g_GetUserNameAFunc;

// GetVersion*
extern GetVersion* g_GetVersionFunc;

// GlobalAlloc*
extern GlobalAlloc* g_GlobalAllocFunc;

// GlobalFree*
extern GlobalFree* g_GlobalFreeFunc;

// GlobalLock*
extern GlobalLock* g_GlobalLockFunc;

// GlobalMemoryStatus*
extern GlobalMemoryStatus* g_GlobalMemoryStatusFunc;

// GlobalUnlock*
extern GlobalUnlock* g_GlobalUnlockFunc;

// ImpersonateLoggedOnUser*
extern ImpersonateLoggedOnUser* g_ImpersonateLoggedOnUserFunc;

// InitializeCriticalSection*
extern InitializeCriticalSection* g_InitializeCriticalSectionFunc;

// InvalidateRect*
extern InvalidateRect* g_InvalidateRectFunc;

// IsIconic*
extern IsIconic* g_IsIconicFunc;

// LeaveCriticalSection*
extern LeaveCriticalSection* g_LeaveCriticalSectionFunc;

// LoadCursorA*
extern LoadCursorA* g_LoadCursorAFunc;

// LoadIconA*
extern LoadIconA* g_LoadIconAFunc;

// LoadLibraryA*
extern LoadLibraryA* g_LoadLibraryAFunc;

// LocalFileTimeToFileTime*
extern LocalFileTimeToFileTime* g_LocalFileTimeToFileTimeFunc;

// LogonUserA*
extern LogonUserA* g_LogonUserAFunc;

// MessageBoxA*
extern MessageBoxA* g_MessageBoxAFunc;

// MoveFileA*
extern MoveFileA* g_MoveFileAFunc;

// MoveWindow*
extern MoveWindow* g_MoveWindowFunc;

// MultiByteToWideChar*
extern MultiByteToWideChar* g_MultiByteToWideCharFunc;

// OpenClipboard*
extern OpenClipboard* g_OpenClipboardFunc;

// PeekMessageA*
extern PeekMessageA* g_PeekMessageAFunc;

// PostQuitMessage*
extern PostQuitMessage* g_PostQuitMessageFunc;

// QueryPerformanceCounter*
extern QueryPerformanceCounter* g_QueryPerformanceCounterFunc;

// QueryPerformanceFrequency*
extern QueryPerformanceFrequency* g_QueryPerformanceFrequencyFunc;

// ReadConsoleInputA*
extern ReadConsoleInputA* g_ReadConsoleInputAFunc;

// ReadFile*
extern ReadFile* g_ReadFileFunc;

// Rectangle*
extern Rectangle* g_RectangleFunc;

// RegCloseKey*
extern RegCloseKey* g_RegCloseKeyFunc;

// RegCreateKeyExA*
extern RegCreateKeyExA* g_RegCreateKeyExAFunc;

// RegOpenKeyExA*
extern RegOpenKeyExA* g_RegOpenKeyExAFunc;

// RegQueryValueExA*
extern RegQueryValueExA* g_RegQueryValueExAFunc;

// RegSetValueExA*
extern RegSetValueExA* g_RegSetValueExAFunc;

// RegisterClassA*
extern RegisterClassA* g_RegisterClassAFunc;

// ReleaseMutex*
extern ReleaseMutex* g_ReleaseMutexFunc;

// RevertToSelf*
extern RevertToSelf* g_RevertToSelfFunc;

// SelectObject*
extern SelectObject* g_SelectObjectFunc;

// SetBkColor*
extern SetBkColor* g_SetBkColorFunc;

// SetBkMode*
extern SetBkMode* g_SetBkModeFunc;

// SetClipboardData*
extern SetClipboardData* g_SetClipboardDataFunc;

// SetConsoleCtrlHandler*
extern SetConsoleCtrlHandler* g_SetConsoleCtrlHandlerFunc;

// SetConsoleMode*
extern SetConsoleMode* g_SetConsoleModeFunc;

// SetCurrentDirectoryA*
extern SetCurrentDirectoryA* g_SetCurrentDirectoryAFunc;

// SetCursor*
extern SetCursor* g_SetCursorFunc;

// SetCursorPos*
extern SetCursorPos* g_SetCursorPosFunc;

// SetEndOfFile*
extern SetEndOfFile* g_SetEndOfFileFunc;

// SetEnvironmentVariableA*
extern SetEnvironmentVariableA* g_SetEnvironmentVariableAFunc;

// SetEnvironmentVariableW*
extern SetEnvironmentVariableW* g_SetEnvironmentVariableWFunc;

// SetEvent*
extern SetEvent* g_SetEventFunc;

// SetFileAttributesA*
extern SetFileAttributesA* g_SetFileAttributesAFunc;

// SetFilePointer*
extern SetFilePointer* g_SetFilePointerFunc;

// SetFileTime*
extern SetFileTime* g_SetFileTimeFunc;

// SetFocus*
extern SetFocus* g_SetFocusFunc;

// SetForegroundWindow*
extern SetForegroundWindow* g_SetForegroundWindowFunc;

// SetLastError*
extern SetLastError* g_SetLastErrorFunc;

// SetRectEmpty*
extern SetRectEmpty* g_SetRectEmptyFunc;

// SetStdHandle*
extern SetStdHandle* g_SetStdHandleFunc;

// SetTextColor*
extern SetTextColor* g_SetTextColorFunc;

// SetThreadPriority*
extern SetThreadPriority* g_SetThreadPriorityFunc;

// SetUnhandledExceptionFilter*
extern SetUnhandledExceptionFilter* g_SetUnhandledExceptionFilterFunc;

// ShowWindow*
extern ShowWindow* g_ShowWindowFunc;

// Sleep*
extern Sleep* g_SleepFunc;

// SystemTimeToFileTime*
extern SystemTimeToFileTime* g_SystemTimeToFileTimeFunc;

// TextOutA*
extern TextOutA* g_TextOutAFunc;

// TlsAlloc*
extern TlsAlloc* g_TlsAllocFunc;

// TlsFree*
extern TlsFree* g_TlsFreeFunc;

// TlsGetValue*
extern TlsGetValue* g_TlsGetValueFunc;

// TlsSetValue*
extern TlsSetValue* g_TlsSetValueFunc;

// TranslateMessage*
extern TranslateMessage* g_TranslateMessageFunc;

// UnhandledExceptionFilter*
extern UnhandledExceptionFilter* g_UnhandledExceptionFilterFunc;

// UpdateWindow*
extern UpdateWindow* g_UpdateWindowFunc;

// VirtualAlloc*
extern VirtualAlloc* g_VirtualAllocFunc;

// VirtualFree*
extern VirtualFree* g_VirtualFreeFunc;

// VirtualQuery*
extern VirtualQuery* g_VirtualQueryFunc;

// WSACleanup*
extern WSACleanup* g_WSACleanupFunc;

// WSAStartup*
extern WSAStartup* g_WSAStartupFunc;

// WaitForSingleObject*
extern WaitForSingleObject* g_WaitForSingleObjectFunc;

// WideCharToMultiByte*
extern WideCharToMultiByte* g_WideCharToMultiByteFunc;

// WriteConsoleA*
extern WriteConsoleA* g_WriteConsoleAFunc;

// WriteFile*
extern WriteFile* g_WriteFileFunc;

// accept*
extern accept* g_acceptFunc;

// bind*
extern bind* g_bindFunc;

// closesocket*
extern closesocket* g_closesocketFunc;

// connect*
extern connect* g_connectFunc;

// dword
extern dword DWORD_00611000;
extern dword DAT_00611004;
extern dword DAT_00611008;
extern dword DAT_00611018;
extern dword DAT_0061101C;
extern dword DAT_0061102C;
extern dword DAT_00611030;
extern dword DAT_00611040;
extern dword DAT_00611044;
extern dword DAT_00611054;
extern dword DAT_00611058;
extern dword DAT_00611068;
extern dword DAT_0061106C;
extern dword DAT_0061107C;
extern dword DAT_00611080;
extern dword DAT_00611090;
extern dword DAT_00611094;

// getsockname*
extern getsockname* g_getsocknameFunc;

// htons*
extern htons* g_htonsFunc;

// int
extern int INT_00613000;
extern int INT_006142ec;
extern int g_RandToFloatFixedMultiplier;
extern int INT_00614304;
extern int INT_00614308;
extern int INT_0061430c;

// ioctlsocket*
extern ioctlsocket* g_ioctlsocketFunc;

// joyGetDevCapsA*
extern joyGetDevCapsA* g_joyGetDevCapsAFunc;

// joyGetPos*
extern joyGetPos* g_joyGetPosFunc;

// listen*
extern listen* g_listenFunc;

// mciGetErrorStringA*
extern mciGetErrorStringA* g_mciGetErrorStringAFunc;

// mciSendStringA*
extern mciSendStringA* g_mciSendStringAFunc;

// ntohs*
extern ntohs* g_ntohsFunc;

// recv*
extern recv* g_recvFunc;

// recvfrom*
extern recvfrom* g_recvfromFunc;

// send*
extern send* g_sendFunc;

// sendto*
extern sendto* g_sendtoFunc;

// setsockopt*
extern setsockopt* g_setsockoptFunc;

// shutdown*
extern shutdown* g_shutdownFunc;

// timeBeginPeriod*
extern timeBeginPeriod* g_timeBeginPeriodFunc;

// timeEndPeriod*
extern timeEndPeriod* g_timeEndPeriodFunc;

// timeGetTime*
extern timeGetTime* g_timeGetTimeFunc;

// undefined1
extern undefined1 DAT_00614464;

// waveInAddBuffer*
extern waveInAddBuffer* g_waveInAddBufferFunc;

// waveInClose*
extern waveInClose* g_waveInCloseFunc;

// waveInGetDevCapsA*
extern waveInGetDevCapsA* g_waveInGetDevCapsAFunc;

// waveInOpen*
extern waveInOpen* g_waveInOpenFunc;

// waveInPrepareHeader*
extern waveInPrepareHeader* g_waveInPrepareHeaderFunc;

// waveInReset*
extern waveInReset* g_waveInResetFunc;

// waveInStart*
extern waveInStart* g_waveInStartFunc;

// waveInUnprepareHeader*
extern waveInUnprepareHeader* g_waveInUnprepareHeaderFunc;

// waveOutClose*
extern waveOutClose* g_waveOutCloseFunc;

// waveOutGetDevCapsA*
extern waveOutGetDevCapsA* g_waveOutGetDevCapsAFunc;

// waveOutOpen*
extern waveOutOpen* g_waveOutOpenFunc;

// waveOutPrepareHeader*
extern waveOutPrepareHeader* g_waveOutPrepareHeaderFunc;

// waveOutReset*
extern waveOutReset* g_waveOutResetFunc;

// waveOutUnprepareHeader*
extern waveOutUnprepareHeader* g_waveOutUnprepareHeaderFunc;

// waveOutWrite*
extern waveOutWrite* g_waveOutWriteFunc;

