#pragma once

// Function prototypes for crt/stack.cpp
// Generated from Ghidra function signatures

// Original: crt_stack.c___STK_FUN_005ff9f3
// Address: 005ff9f3
void __stk_probe ::_STK(void);

// Original: crt_stack.c_check_stack_target_FUN_005ffa03
// Address: 005ffa03
void __stk_probe check::stack_target(void);

// Original: crt_stack.c_stack_overflow_handler_FUN_005ffa22
// Address: 005ffa22
void __watcallStack stack::overflow_handler(SIZE_T required_bytes);

// Original: crt_stack.c_ProbeStackSpace_FUN_005ffa2f
// Address: 005ffa2f
void __stdcall ProbeStackSpace(uint size);

// Original: crt_stack.c_GetStackUsage_FUN_0060c260
// Address: 0060c260
int __cdecl GetStackUsage(void);
