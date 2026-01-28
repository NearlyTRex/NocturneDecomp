#pragma once

// Function prototypes for crt/exit.cpp
// Generated from Ghidra function signatures

// Original: crt_exit.c_ExitProcess_FUN_00602700
// Address: 00602700
void __cdecl ExitProcess(int exit_code);

// Original: crt_exit.c_ProcessExitHandlers_FUN_0060ac88
// Address: 0060ac88
void __cdecl ProcessExitHandlers(uchar min_priority,uchar max_priority);

// Original: crt_exit.c_ExitHookStub_FUN_0060b530
// Address: 0060b530
void __cdecl ExitHookStub(void);

// Original: crt_exit.c_FinalExitHandler_FUN_0060b560
// Address: 0060b560
void __cdecl FinalExitHandler(int exit_code);
