#pragma once

// Function prototypes for crt/startup.cpp
// Generated from Ghidra function signatures

// Original: crt_startup.c_reportAbnormalTermination_FUN_00601628
// Address: 00601628
void __watcallRegister reportAbnormalTermination(void);

// Original: crt_startup.c_initialize_runtime_FUN_0060245c
// Address: 0060245c
void __cdecl initialize::runtime(HMODULE hModule,void *pThreadParam,int unused);

// Original: crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
// Address: 006026a8
void __watcallRegister InitializeWinAppRuntime(void *pParam);

// Original: crt_startup.c_WriteErrorAndExit_FUN_00606620
// Address: 00606620
void __cdecl WriteErrorAndExit(char *error_message,int exit_code);

// Original: crt_startup.c_HandleRuntimeError_FUN_00606660
// Address: 00606660
void __cdecl HandleRuntimeError(char *error_message,int error_level);

// Original: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// Address: 00609e70
void __watcallRegister WinMainBootstrap(void);

// Original: crt_startup.c_ExitApplication_FUN_0060b534
// Address: 0060b534
void __cdecl ExitApplication(int exit_code);
