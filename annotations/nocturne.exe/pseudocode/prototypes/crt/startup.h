#pragma once

// Function prototypes for crt/startup.cpp
// Generated from Ghidra function signatures

// Original: crt_startup.c_initialize_runtime_FUN_0056720c
// Address: 0056720c
void __cdecl initialize::runtime(HMODULE hModule,void *pThreadParam,int unused);

// Original: crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458
// Address: 00567458
void __watcallRegister InitializeWinAppRuntime(void *pParam);

// Original: crt_startup.c_WriteErrorAndExit_FUN_0056dd80
// Address: 0056dd80
void __cdecl WriteErrorAndExit(char *error_message,int exit_code);

// Original: crt_startup.c_HandleRuntimeError_FUN_0056ddc0
// Address: 0056ddc0
void __cdecl HandleRuntimeError(char *error_message,int error_level);

// Original: crt_startup.cpp_WinMainBootstrap_FUN_0056df10
// Address: 0056df10
void __watcallRegister WinMainBootstrap(void);

// Original: crt_startup.c_ExitApplication_FUN_0056fcd4
// Address: 0056fcd4
void __cdecl ExitApplication(int exit_code);
