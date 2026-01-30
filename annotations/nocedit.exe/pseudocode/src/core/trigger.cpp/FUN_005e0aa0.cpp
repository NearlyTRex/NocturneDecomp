// Name: core_trigger.cpp_FUN_005e0aa0
// Address: 005e0aa0
// Address Range: [[005e0aa0, 005e0ab8]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_FUN_005e0aa0(void)

#include "nocturne.h"

/* Signature: byte actors_other_trigger.cpp_FUN_005e0aa0(uint param_1) */

void __cdecl core_trigger_cpp_FUN_005e0aa0(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x174) != 4) {
    return;
  }
  *(uint *)(in_stack_00000004 + 0x2f0) = 1;
  return;
}
