#pragma once

// Function prototypes for crt/exit.cpp
// Generated from Ghidra function signatures

// Original: crt_exit.c_ExitProcess_FUN_005674b0
// Address: 005674b0
void __cdecl ExitProcess(int exit_code);

// Original: crt_exit.c_ProcessExitHandlers_FUN_0056efb8
// Address: 0056efb8
void __cdecl ProcessExitHandlers(uchar min_priority,uchar max_priority);

// Original: crt_exit.c_FinalExitHandler_FUN_0056fd00
// Address: 0056fd00
void __cdecl FinalExitHandler(int exit_code);
