#pragma once

// Function prototypes for crt/startup.cpp
// Generated from Ghidra function signatures

// Original: crt_startup.c_notifyAbnormalTermination_FUN_00601620
// Address: 00601620
void notifyAbnormalTermination(void);

// Original: crt_startup.c_reportAbnormalTermination_FUN_00601628
// Address: 00601628
void reportAbnormalTermination(void);

// Original: crt_startup.c_initialize_runtime_FUN_0060245c
// Address: 0060245c
void initialize::runtime(HMODULE hModule, void * pThreadParam, int unused);

// Original: crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
// Address: 006026a8
void InitializeWinAppRuntime(void * pParam);

// Original: crt_startup.c_WriteErrorAndExit_FUN_00606620
// Address: 00606620
void WriteErrorAndExit(char * error_message, int exit_code);

// Original: crt_startup.c_HandleRuntimeError_FUN_00606660
// Address: 00606660
void HandleRuntimeError(char * error_message, int error_level);

// Original: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// Address: 00609e70
void WinMainBootstrap(void);

// Original: crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
// Address: 0060a23c
void * GetOrCreateThreadData(void * pThreadData);

// Original: crt_startup.c_GetModuleFileNameCompat_FUN_0060a560
// Address: 0060a560
DWORD GetModuleFileNameCompat(HMODULE hModule, LPWSTR lpFilename, DWORD nSize);

// Original: crt_startup.c_staticInit_FUN_0060aef4
// Address: 0060aef4
void staticInit(void);

// Original: crt_startup.c_ExitApplication_FUN_0060b534
// Address: 0060b534
void ExitApplication(int exit_code);

// Original: crt_startup.c_PlaceholderStub_FUN_0060ca80
// Address: 0060ca80
undefined PlaceholderStub();

// Original: crt_startup.c_FUN_0060d230
// Address: 0060d230
int FUN_0060d230(UINT cp);
