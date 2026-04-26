#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/advapi32.h"
#include "system/ddraw.h"
#include "system/dsound.h"
#include "system/kernel32.h"
#include "system/mmsystem.h"
#include "system/syncapi.h"
#include "system/user32.h"
#include "system/wingdi.h"
#include "system/winsock.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x610000
// =============================================================================

// ACCEPT_FUNC*
extern ACCEPT_FUNC* g_acceptFunc;

// BIND_FUNC*
extern BIND_FUNC* g_bindFunc;

// BRING_WINDOW_TO_TOP_FUNC*
extern BRING_WINDOW_TO_TOP_FUNC* g_BringWindowToTopFunc;

// CHAR_UPPER_BUFF_A_FUNC*
extern CHAR_UPPER_BUFF_A_FUNC* g_CharUpperBuffAFunc;

// CLOSE_CLIPBOARD_FUNC*
extern CLOSE_CLIPBOARD_FUNC* g_CloseClipboardFunc;

// CLOSE_HANDLE_FUNC*
extern CLOSE_HANDLE_FUNC* g_CloseHandleFunc;

// CLOSE_SOCKET_FUNC*
extern CLOSE_SOCKET_FUNC* g_closesocketFunc;

// CONNECT_FUNC*
extern CONNECT_FUNC* g_connectFunc;

// CREATE_BRUSH_INDIRECT_FUNC*
extern CREATE_BRUSH_INDIRECT_FUNC* g_CreateBrushIndirectFunc;

// CREATE_COMPATIBLE_DC_FUNC*
extern CREATE_COMPATIBLE_DC_FUNC* g_CreateCompatibleDCFunc;

// CREATE_DIB_SECTION_FUNC*
extern CREATE_DIB_SECTION_FUNC* g_CreateDIBSectionFunc;

// CREATE_DIRECTORY_A_FUNC*
extern CREATE_DIRECTORY_A_FUNC* g_CreateDirectoryAFunc;

// CREATE_EVENT_A_FUNC*
extern CREATE_EVENT_A_FUNC* g_CreateEventAFunc;

// CREATE_FILE_A_FUNC*
extern CREATE_FILE_A_FUNC* g_CreateFileAFunc;

// CREATE_FONT_A_FUNC*
extern CREATE_FONT_A_FUNC* g_CreateFontAFunc;

// CREATE_MUTEX_A_FUNC*
extern CREATE_MUTEX_A_FUNC* g_CreateMutexAFunc;

// CREATE_PROCESS_A_FUNC*
extern CREATE_PROCESS_A_FUNC* g_CreateProcessAFunc;

// CREATE_THREAD_FUNC*
extern CREATE_THREAD_FUNC* g_CreateThreadFunc;

// CREATE_WINDOW_EX_A_FUNC*
extern CREATE_WINDOW_EX_A_FUNC* g_CreateWindowExAFunc;

// DEF_WINDOW_PROC_A_FUNC*
extern DEF_WINDOW_PROC_A_FUNC* g_DefWindowProcAFunc;

// DELETE_CRITICAL_SECTION_FUNC*
extern DELETE_CRITICAL_SECTION_FUNC* g_DeleteCriticalSectionFunc;

// DELETE_DC_FUNC*
extern DELETE_DC_FUNC* g_DeleteDCFunc;

// DELETE_FILE_A_FUNC*
extern DELETE_FILE_A_FUNC* g_DeleteFileAFunc;

// DELETE_OBJECT_FUNC*
extern DELETE_OBJECT_FUNC* g_DeleteObjectFunc;

// DIRECT_DRAW_CREATE_FUNC*
extern DIRECT_DRAW_CREATE_FUNC* g_DirectDrawCreateFunc;

// DIRECT_SOUND_CREATE_FUNC*
extern DIRECT_SOUND_CREATE_FUNC* g_DirectSoundCreateFunc;

// DIRECT_SOUND_ENUMERATE_A_FUNC*
extern DIRECT_SOUND_ENUMERATE_A_FUNC* g_DirectSoundEnumerateAFunc;

// DISPATCH_MESSAGE_A_FUNC*
extern DISPATCH_MESSAGE_A_FUNC* g_DispatchMessageAFunc;

// DOS_DATE_TIME_TO_FILE_TIME_FUNC*
extern DOS_DATE_TIME_TO_FILE_TIME_FUNC* g_DosDateTimeToFileTimeFunc;

// DUPLICATE_HANDLE_FUNC*
extern DUPLICATE_HANDLE_FUNC* g_DuplicateHandleFunc;

// ENTER_CRITICAL_SECTION_FUNC*
extern ENTER_CRITICAL_SECTION_FUNC* g_EnterCriticalSectionFunc;

// EXIT_PROCESS_FUNC*
extern EXIT_PROCESS_FUNC* g_ExitProcessFunc;

// EXIT_THREAD_FUNC*
extern EXIT_THREAD_FUNC* g_ExitThreadFunc;

// FILE_TIME_TO_DOS_DATE_TIME_FUNC*
extern FILE_TIME_TO_DOS_DATE_TIME_FUNC* g_FileTimeToDosDateTimeFunc;

// FILE_TIME_TO_LOCAL_FILE_TIME_FUNC*
extern FILE_TIME_TO_LOCAL_FILE_TIME_FUNC* g_FileTimeToLocalFileTimeFunc;

// FILE_TIME_TO_SYSTEM_TIME_FUNC*
extern FILE_TIME_TO_SYSTEM_TIME_FUNC* g_FileTimeToSystemTimeFunc;

// FIND_CLOSE_FUNC*
extern FIND_CLOSE_FUNC* g_FindCloseFunc;

// FIND_FIRST_FILE_A_FUNC*
extern FIND_FIRST_FILE_A_FUNC* g_FindFirstFileAFunc;

// FIND_NEXT_FILE_A_FUNC*
extern FIND_NEXT_FILE_A_FUNC* g_FindNextFileAFunc;

// FIND_WINDOW_A_FUNC*
extern FIND_WINDOW_A_FUNC* g_FindWindowAFunc;

// FLUSH_FILE_BUFFERS_FUNC*
extern FLUSH_FILE_BUFFERS_FUNC* g_FlushFileBuffersFunc;

// FREE_ENVIRONMENT_STRINGS_A_FUNC*
extern FREE_ENVIRONMENT_STRINGS_A_FUNC* g_FreeEnvironmentStringsAFunc;

// FREE_LIBRARY_FUNC*
extern FREE_LIBRARY_FUNC* g_FreeLibraryFunc;

// GET_ACP_FUNC*
extern GET_ACP_FUNC* g_GetACPFunc;

// GET_CLIENT_RECT_FUNC*
extern GET_CLIENT_RECT_FUNC* g_GetClientRectFunc;

// GET_CLIPBOARD_DATA_FUNC*
extern GET_CLIPBOARD_DATA_FUNC* g_GetClipboardDataFunc;

// GET_COMMAND_LINE_A_FUNC*
extern GET_COMMAND_LINE_A_FUNC* g_GetCommandLineAFunc;

// GET_COMMAND_LINE_W_FUNC*
extern GET_COMMAND_LINE_W_FUNC* g_GetCommandLineWFunc;

// GET_COMPUTER_NAME_A_FUNC*
extern GET_COMPUTER_NAME_A_FUNC* g_GetComputerNameAFunc;

// GET_CONSOLE_MODE_FUNC*
extern GET_CONSOLE_MODE_FUNC* g_GetConsoleModeFunc;

// GET_CP_INFO_FUNC*
extern GET_CP_INFO_FUNC* g_GetCPInfoFunc;

// GET_CURRENT_DIRECTORY_A_FUNC*
extern GET_CURRENT_DIRECTORY_A_FUNC* g_GetCurrentDirectoryAFunc;

// GET_CURRENT_PROCESS_FUNC*
extern GET_CURRENT_PROCESS_FUNC* g_GetCurrentProcessFunc;

// GET_CURRENT_PROCESS_ID_FUNC*
extern GET_CURRENT_PROCESS_ID_FUNC* g_GetCurrentProcessIdFunc;

// GET_CURRENT_THREAD_FUNC*
extern GET_CURRENT_THREAD_FUNC* g_GetCurrentThreadFunc;

// GET_CURRENT_THREAD_ID_FUNC*
extern GET_CURRENT_THREAD_ID_FUNC* g_GetCurrentThreadIdFunc;

// GET_ENVIRONMENT_STRINGS_FUNC*
extern GET_ENVIRONMENT_STRINGS_FUNC* g_GetEnvironmentStringsFunc;

// GET_EXIT_CODE_PROCESS_FUNC*
extern GET_EXIT_CODE_PROCESS_FUNC* g_GetExitCodeProcessFunc;

// GET_FILE_ATTRIBUTES_A_FUNC*
extern GET_FILE_ATTRIBUTES_A_FUNC* g_GetFileAttributesAFunc;

// GET_FILE_TIME_FUNC*
extern GET_FILE_TIME_FUNC* g_GetFileTimeFunc;

// GET_FILE_TYPE_FUNC*
extern GET_FILE_TYPE_FUNC* g_GetFileTypeFunc;

// GET_FULL_PATH_NAME_A_FUNC*
extern GET_FULL_PATH_NAME_A_FUNC* g_GetFullPathNameAFunc;

// GET_KEY_NAME_TEXT_A_FUNC*
extern GET_KEY_NAME_TEXT_A_FUNC* g_GetKeyNameTextAFunc;

// GET_LAST_ACTIVE_POPUP_FUNC*
extern GET_LAST_ACTIVE_POPUP_FUNC* g_GetLastActivePopupFunc;

// GET_LAST_ERROR_FUNC*
extern GET_LAST_ERROR_FUNC* g_GetLastErrorFunc;

// GET_LOCAL_TIME_FUNC*
extern GET_LOCAL_TIME_FUNC* g_GetLocalTimeFunc;

// GET_MODULE_FILE_NAME_A_FUNC*
extern GET_MODULE_FILE_NAME_A_FUNC* g_GetModuleFileNameAFunc;

// GET_MODULE_FILE_NAME_W_FUNC*
extern GET_MODULE_FILE_NAME_W_FUNC* g_GetModuleFileNameWFunc;

// GET_MODULE_HANDLE_A_FUNC*
extern GET_MODULE_HANDLE_A_FUNC* g_GetModuleHandleAFunc;

// GET_OEMCP_FUNC*
extern GET_OEMCP_FUNC* g_GetOEMCPFunc;

// GET_PROC_ADDRESS_FUNC*
extern GET_PROC_ADDRESS_FUNC* g_GetProcAddressFunc;

// GET_SOCK_NAME_FUNC*
extern GET_SOCK_NAME_FUNC* g_getsocknameFunc;

// GET_STD_HANDLE_FUNC*
extern GET_STD_HANDLE_FUNC* g_GetStdHandleFunc;

// GET_STOCK_OBJECT_FUNC*
extern GET_STOCK_OBJECT_FUNC* g_GetStockObjectFunc;

// GET_TEXT_EXTENT_POINT32_A_FUNC*
extern GET_TEXT_EXTENT_POINT32_A_FUNC* g_GetTextExtentPoint32A;

// GET_TIME_ZONE_INFORMATION_FUNC*
extern GET_TIME_ZONE_INFORMATION_FUNC* g_GetTimeZoneInformationFunc;

// GET_USER_NAME_A_FUNC*
extern GET_USER_NAME_A_FUNC* g_GetUserNameAFunc;

// GET_VERSION_FUNC*
extern GET_VERSION_FUNC* g_GetVersionFunc;

// GLOBAL_ALLOC_FUNC*
extern GLOBAL_ALLOC_FUNC* g_GlobalAllocFunc;

// GLOBAL_FREE_FUNC*
extern GLOBAL_FREE_FUNC* g_GlobalFreeFunc;

// GLOBAL_LOCK_FUNC*
extern GLOBAL_LOCK_FUNC* g_GlobalLockFunc;

// GLOBAL_MEMORY_STATUS_FUNC*
extern GLOBAL_MEMORY_STATUS_FUNC* g_GlobalMemoryStatusFunc;

// GLOBAL_UNLOCK_FUNC*
extern GLOBAL_UNLOCK_FUNC* g_GlobalUnlockFunc;

// HOST_TO_NETWORK_SHORT_FUNC*
extern HOST_TO_NETWORK_SHORT_FUNC* g_htonsFunc;

// IMPERSONATE_LOGGED_ON_USER_FUNC*
extern IMPERSONATE_LOGGED_ON_USER_FUNC* g_ImpersonateLoggedOnUserFunc;

// INITIALIZE_CRITICAL_SECTION_FUNC*
extern INITIALIZE_CRITICAL_SECTION_FUNC* g_InitializeCriticalSectionFunc;

// INVALIDATE_RECT_FUNC*
extern INVALIDATE_RECT_FUNC* g_InvalidateRectFunc;

// IOCTL_SOCKET_FUNC*
extern IOCTL_SOCKET_FUNC* g_ioctlsocketFunc;

// IS_ICONIC_FUNC*
extern IS_ICONIC_FUNC* g_IsIconicFunc;

// JOY_GET_DEV_CAPS_A_FUNC*
extern JOY_GET_DEV_CAPS_A_FUNC* g_joyGetDevCapsAFunc;

// JOY_GET_POS_FUNC*
extern JOY_GET_POS_FUNC* g_joyGetPosFunc;

// LEAVE_CRITICAL_SECTION_FUNC*
extern LEAVE_CRITICAL_SECTION_FUNC* g_LeaveCriticalSectionFunc;

// LISTEN_FUNC*
extern LISTEN_FUNC* g_listenFunc;

// LOAD_CURSOR_A_FUNC*
extern LOAD_CURSOR_A_FUNC* g_LoadCursorAFunc;

// LOAD_ICON_A_FUNC*
extern LOAD_ICON_A_FUNC* g_LoadIconAFunc;

// LOAD_LIBRARY_A_FUNC*
extern LOAD_LIBRARY_A_FUNC* g_LoadLibraryAFunc;

// LOCAL_FILE_TIME_TO_FILE_TIME_FUNC*
extern LOCAL_FILE_TIME_TO_FILE_TIME_FUNC* g_LocalFileTimeToFileTimeFunc;

// LOGON_USER_A_FUNC*
extern LOGON_USER_A_FUNC* g_LogonUserAFunc;

// MCI_GET_ERROR_STRING_A_FUNC*
extern MCI_GET_ERROR_STRING_A_FUNC* g_mciGetErrorStringAFunc;

// MCI_SEND_STRING_A_FUNC*
extern MCI_SEND_STRING_A_FUNC* g_mciSendStringAFunc;

// MESSAGE_BOX_A_FUNC*
extern MESSAGE_BOX_A_FUNC* g_MessageBoxAFunc;

// MOVE_FILE_A_FUNC*
extern MOVE_FILE_A_FUNC* g_MoveFileAFunc;

// MOVE_WINDOW_FUNC*
extern MOVE_WINDOW_FUNC* g_MoveWindowFunc;

// MULTI_BYTE_TO_WIDE_CHAR_FUNC*
extern MULTI_BYTE_TO_WIDE_CHAR_FUNC* g_MultiByteToWideCharFunc;

// NETWORK_TO_HOST_SHORT_FUNC*
extern NETWORK_TO_HOST_SHORT_FUNC* g_ntohsFunc;

// OPEN_CLIPBOARD_FUNC*
extern OPEN_CLIPBOARD_FUNC* g_OpenClipboardFunc;

// PEEK_MESSAGE_A_FUNC*
extern PEEK_MESSAGE_A_FUNC* g_PeekMessageAFunc;

// POST_QUIT_MESSAGE_FUNC*
extern POST_QUIT_MESSAGE_FUNC* g_PostQuitMessageFunc;

// QUERY_PERFORMANCE_COUNTER_FUNC*
extern QUERY_PERFORMANCE_COUNTER_FUNC* g_QueryPerformanceCounterFunc;

// QUERY_PERFORMANCE_FREQUENCY_FUNC*
extern QUERY_PERFORMANCE_FREQUENCY_FUNC* g_QueryPerformanceFrequencyFunc;

// READ_CONSOLE_INPUT_A_FUNC*
extern READ_CONSOLE_INPUT_A_FUNC* g_ReadConsoleInputAFunc;

// READ_FILE_FUNC*
extern READ_FILE_FUNC* g_ReadFileFunc;

// RECTANGLE_FUNC*
extern RECTANGLE_FUNC* g_RectangleFunc;

// RECV_FROM_FUNC*
extern RECV_FROM_FUNC* g_recvfromFunc;

// RECV_FUNC*
extern RECV_FUNC* g_recvFunc;

// REGISTER_CLASS_A_FUNC*
extern REGISTER_CLASS_A_FUNC* g_RegisterClassAFunc;

// REG_CLOSE_KEY_FUNC*
extern REG_CLOSE_KEY_FUNC* g_RegCloseKeyFunc;

// REG_CREATE_KEY_EX_A_FUNC*
extern REG_CREATE_KEY_EX_A_FUNC* g_RegCreateKeyExAFunc;

// REG_OPEN_KEY_EX_A_FUNC*
extern REG_OPEN_KEY_EX_A_FUNC* g_RegOpenKeyExAFunc;

// REG_QUERY_VALUE_EX_A_FUNC*
extern REG_QUERY_VALUE_EX_A_FUNC* g_RegQueryValueExAFunc;

// REG_SET_VALUE_EX_A_FUNC*
extern REG_SET_VALUE_EX_A_FUNC* g_RegSetValueExAFunc;

// RELEASE_MUTEX_FUNC*
extern RELEASE_MUTEX_FUNC* g_ReleaseMutexFunc;

// REVERT_TO_SELF_FUNC*
extern REVERT_TO_SELF_FUNC* g_RevertToSelfFunc;

// SELECT_OBJECT_FUNC*
extern SELECT_OBJECT_FUNC* g_SelectObjectFunc;

// SEND_FUNC*
extern SEND_FUNC* g_sendFunc;

// SEND_TO_FUNC*
extern SEND_TO_FUNC* g_sendtoFunc;

// SET_BK_COLOR_FUNC*
extern SET_BK_COLOR_FUNC* g_SetBkColorFunc;

// SET_BK_MODE_FUNC*
extern SET_BK_MODE_FUNC* g_SetBkModeFunc;

// SET_CLIPBOARD_DATA_FUNC*
extern SET_CLIPBOARD_DATA_FUNC* g_SetClipboardDataFunc;

// SET_CONSOLE_CTRL_HANDLER_FUNC*
extern SET_CONSOLE_CTRL_HANDLER_FUNC* g_SetConsoleCtrlHandlerFunc;

// SET_CONSOLE_MODE_FUNC*
extern SET_CONSOLE_MODE_FUNC* g_SetConsoleModeFunc;

// SET_CURRENT_DIRECTORY_A_FUNC*
extern SET_CURRENT_DIRECTORY_A_FUNC* g_SetCurrentDirectoryAFunc;

// SET_CURSOR_FUNC*
extern SET_CURSOR_FUNC* g_SetCursorFunc;

// SET_CURSOR_POS_FUNC*
extern SET_CURSOR_POS_FUNC* g_SetCursorPosFunc;

// SET_END_OF_FILE_FUNC*
extern SET_END_OF_FILE_FUNC* g_SetEndOfFileFunc;

// SET_ENVIRONMENT_VARIABLE_A_FUNC*
extern SET_ENVIRONMENT_VARIABLE_A_FUNC* g_SetEnvironmentVariableAFunc;

// SET_ENVIRONMENT_VARIABLE_W_FUNC*
extern SET_ENVIRONMENT_VARIABLE_W_FUNC* g_SetEnvironmentVariableWFunc;

// SET_EVENT_FUNC*
extern SET_EVENT_FUNC* g_SetEventFunc;

// SET_FILE_ATTRIBUTES_A_FUNC*
extern SET_FILE_ATTRIBUTES_A_FUNC* g_SetFileAttributesAFunc;

// SET_FILE_POINTER_FUNC*
extern SET_FILE_POINTER_FUNC* g_SetFilePointerFunc;

// SET_FILE_TIME_FUNC*
extern SET_FILE_TIME_FUNC* g_SetFileTimeFunc;

// SET_FOCUS_FUNC*
extern SET_FOCUS_FUNC* g_SetFocusFunc;

// SET_FOREGROUND_WINDOW_FUNC*
extern SET_FOREGROUND_WINDOW_FUNC* g_SetForegroundWindowFunc;

// SET_LAST_ERROR_FUNC*
extern SET_LAST_ERROR_FUNC* g_SetLastErrorFunc;

// SET_RECT_EMPTY_FUNC*
extern SET_RECT_EMPTY_FUNC* g_SetRectEmptyFunc;

// SET_SOCK_OPT_FUNC*
extern SET_SOCK_OPT_FUNC* g_setsockoptFunc;

// SET_STD_HANDLE_FUNC*
extern SET_STD_HANDLE_FUNC* g_SetStdHandleFunc;

// SET_TEXT_COLOR_FUNC*
extern SET_TEXT_COLOR_FUNC* g_SetTextColorFunc;

// SET_THREAD_PRIORITY_FUNC*
extern SET_THREAD_PRIORITY_FUNC* g_SetThreadPriorityFunc;

// SET_UNHANDLED_EXCEPTION_FILTER_FUNC*
extern SET_UNHANDLED_EXCEPTION_FILTER_FUNC* g_SetUnhandledExceptionFilterFunc;

// SHOW_WINDOW_FUNC*
extern SHOW_WINDOW_FUNC* g_ShowWindowFunc;

// SHUTDOWN_FUNC*
extern SHUTDOWN_FUNC* g_shutdownFunc;

// SLEEP_FUNC*
extern SLEEP_FUNC* g_SleepFunc;

// SYSTEM_TIME_TO_FILE_TIME_FUNC*
extern SYSTEM_TIME_TO_FILE_TIME_FUNC* g_SystemTimeToFileTimeFunc;

// TEXT_OUT_A_FUNC*
extern TEXT_OUT_A_FUNC* g_TextOutAFunc;

// TIME_BEGIN_PERIOD_FUNC*
extern TIME_BEGIN_PERIOD_FUNC* g_timeBeginPeriodFunc;

// TIME_END_PERIOD_FUNC*
extern TIME_END_PERIOD_FUNC* g_timeEndPeriodFunc;

// TIME_GET_TIME_FUNC*
extern TIME_GET_TIME_FUNC* g_timeGetTimeFunc;

// TLS_ALLOC_FUNC*
extern TLS_ALLOC_FUNC* g_TlsAllocFunc;

// TLS_FREE_FUNC*
extern TLS_FREE_FUNC* g_TlsFreeFunc;

// TLS_GET_VALUE_FUNC*
extern TLS_GET_VALUE_FUNC* g_TlsGetValueFunc;

// TLS_SET_VALUE_FUNC*
extern TLS_SET_VALUE_FUNC* g_TlsSetValueFunc;

// TRANSLATE_MESSAGE_FUNC*
extern TRANSLATE_MESSAGE_FUNC* g_TranslateMessageFunc;

// UNHANDLED_EXCEPTION_FILTER_FUNC*
extern UNHANDLED_EXCEPTION_FILTER_FUNC* g_UnhandledExceptionFilterFunc;

// UPDATE_WINDOW_FUNC*
extern UPDATE_WINDOW_FUNC* g_UpdateWindowFunc;

// VIRTUAL_ALLOC_FUNC*
extern VIRTUAL_ALLOC_FUNC* g_VirtualAllocFunc;

// VIRTUAL_FREE_FUNC*
extern VIRTUAL_FREE_FUNC* g_VirtualFreeFunc;

// VIRTUAL_QUERY_FUNC*
extern VIRTUAL_QUERY_FUNC* g_VirtualQueryFunc;

// WAIT_FOR_SINGLE_OBJECT_FUNC*
extern WAIT_FOR_SINGLE_OBJECT_FUNC* g_WaitForSingleObjectFunc;

// WAVE_IN_ADD_BUFFER_FUNC*
extern WAVE_IN_ADD_BUFFER_FUNC* g_waveInAddBufferFunc;

// WAVE_IN_CLOSE_FUNC*
extern WAVE_IN_CLOSE_FUNC* g_waveInCloseFunc;

// WAVE_IN_GET_DEV_CAPS_A_FUNC*
extern WAVE_IN_GET_DEV_CAPS_A_FUNC* g_waveInGetDevCapsAFunc;

// WAVE_IN_OPEN_FUNC*
extern WAVE_IN_OPEN_FUNC* g_waveInOpenFunc;

// WAVE_IN_PREPARE_HEADER_FUNC*
extern WAVE_IN_PREPARE_HEADER_FUNC* g_waveInPrepareHeaderFunc;

// WAVE_IN_RESET_FUNC*
extern WAVE_IN_RESET_FUNC* g_waveInResetFunc;

// WAVE_IN_START_FUNC*
extern WAVE_IN_START_FUNC* g_waveInStartFunc;

// WAVE_IN_UNPREPARE_HEADER_FUNC*
extern WAVE_IN_UNPREPARE_HEADER_FUNC* g_waveInUnprepareHeaderFunc;

// WAVE_OUT_CLOSE_FUNC*
extern WAVE_OUT_CLOSE_FUNC* g_waveOutCloseFunc;

// WAVE_OUT_GET_DEV_CAPS_A_FUNC*
extern WAVE_OUT_GET_DEV_CAPS_A_FUNC* g_waveOutGetDevCapsAFunc;

// WAVE_OUT_OPEN_FUNC*
extern WAVE_OUT_OPEN_FUNC* g_waveOutOpenFunc;

// WAVE_OUT_PREPARE_HEADER_FUNC*
extern WAVE_OUT_PREPARE_HEADER_FUNC* g_waveOutPrepareHeaderFunc;

// WAVE_OUT_RESET_FUNC*
extern WAVE_OUT_RESET_FUNC* g_waveOutResetFunc;

// WAVE_OUT_UNPREPARE_HEADER_FUNC*
extern WAVE_OUT_UNPREPARE_HEADER_FUNC* g_waveOutUnprepareHeaderFunc;

// WAVE_OUT_WRITE_FUNC*
extern WAVE_OUT_WRITE_FUNC* g_waveOutWriteFunc;

// WIDE_CHAR_TO_MULTI_BYTE_FUNC*
extern WIDE_CHAR_TO_MULTI_BYTE_FUNC* g_WideCharToMultiByteFunc;

// WRITE_CONSOLE_A_FUNC*
extern WRITE_CONSOLE_A_FUNC* g_WriteConsoleAFunc;

// WRITE_FILE_FUNC*
extern WRITE_FILE_FUNC* g_WriteFileFunc;

// WSA_CLEANUP_FUNC*
extern WSA_CLEANUP_FUNC* g_WSACleanupFunc;

// WSA_STARTUP_FUNC*
extern WSA_STARTUP_FUNC* g_WSAStartupFunc;

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

// int
extern int INT_00613000;

