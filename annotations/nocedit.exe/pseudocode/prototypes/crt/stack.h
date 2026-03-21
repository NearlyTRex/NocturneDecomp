#pragma once

// Function prototypes for crt/stack.cpp
// Generated from Ghidra function signatures

// Original: crt_stack.c_stack_overflow_handler_FUN_005ffa22
// Address: 005ffa22
void __watcallStack stack::overflow_handler(SIZE_T required_bytes);

// Original: crt_stack.c_ProbeStackSpace_FUN_005ffa2f
// Address: 005ffa2f
void __stdcall ProbeStackSpace(uint size);

// Original: crt_stack.c_GetStackUsage_FUN_0060c260
// Address: 0060c260
int __cdecl GetStackUsage(void);
