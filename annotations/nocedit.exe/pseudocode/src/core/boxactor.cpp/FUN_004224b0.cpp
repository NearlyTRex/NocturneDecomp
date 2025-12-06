// Name: core_boxactor.cpp_FUN_004224b0
// Address: 004224b0
// Address Range: [[004224b0, 004224de]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004224b0()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_004224b0(uint param_1, uint
   param_2) */

uint core_boxactor_cpp_FUN_004224b0(void)

{
  int iVar1;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x314) != 3) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(in_stack_00000004 + 0x314);
}
