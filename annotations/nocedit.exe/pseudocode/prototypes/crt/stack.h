#pragma once

// Function prototypes for crt/stack.cpp
// Generated from Ghidra function signatures

// Original: crt_stack.c_stack_probe_FUN_005ff9f3
// Address: 005ff9f3
uint stack::probe(uint stack_size);

// Original: crt_stack.c_check_stack_target_FUN_005ffa03
// Address: 005ffa03
void check::stack_target(void * target_stack_ptr);

// Original: crt_stack.c_stack_overflow_handler_FUN_005ffa22
// Address: 005ffa22
void stack::overflow_handler(SIZE_T required_bytes);

// Original: crt_stack.c_ProbeStackSpace_FUN_005ffa2f
// Address: 005ffa2f
void ProbeStackSpace(uint size);

// Original: crt_stack.c_GetStackUsage_FUN_0060c260
// Address: 0060c260
int GetStackUsage(void);
