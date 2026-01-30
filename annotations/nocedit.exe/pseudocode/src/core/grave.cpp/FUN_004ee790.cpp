// Name: core_grave.cpp_FUN_004ee790
// Address: 004ee790
// Address Range: [[004ee790, 004ee7e7]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_FUN_004ee790(void)

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_FUN_004ee790(uint param_1) */

void __cdecl core_grave_cpp_FUN_004ee790(void)

{
  int in_stack_00000004;
  
  if ((*(int *)(in_stack_00000004 + 0x2dc) == 0) && (*(int *)(in_stack_00000004 + 0x2e0) == 0)) {
    *(uint *)(in_stack_00000004 + 0x2e0) = 1;
    *(uint *)(in_stack_00000004 + 0x2d4) = 0;
    if (*(char *)(in_stack_00000004 + 0x34c) != '\0') {
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    }
    core_set_cpp_CDemonSet_FUN_0056ade0(g_CDemonSetPtr);
  }
  return;
}
