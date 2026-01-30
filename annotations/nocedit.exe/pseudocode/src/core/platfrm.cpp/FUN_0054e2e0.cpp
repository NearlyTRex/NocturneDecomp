// Name: core_platfrm.cpp_FUN_0054e2e0
// Address: 0054e2e0
// Address Range: [[0054e2e0, 0054e311]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_0054e2e0(void)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_FUN_0054e2e0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000004 + 0x208;
  do {
    while (in_stack_00000008 == *(int *)(in_stack_00000004 + 0x51c)) {
      *(uint *)(in_stack_00000004 + 0x51c) = 0;
      in_stack_00000004 = in_stack_00000004 + 0x34;
      if (in_stack_00000004 == iVar1) {
        return;
      }
    }
    in_stack_00000004 = in_stack_00000004 + 0x34;
  } while (in_stack_00000004 != iVar1);
  return;
}
