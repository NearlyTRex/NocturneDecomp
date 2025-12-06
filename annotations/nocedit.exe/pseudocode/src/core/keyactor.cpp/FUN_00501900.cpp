// Name: core_keyactor.cpp_FUN_00501900
// Address: 00501900
// Address Range: [[00501900, 0050191b]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501900()

#include "nocturne.h"

/* Signature: byte actors_other_keyactor.cpp_FUN_00501900(byte param_1, uint
   param_2) */

int core_keyactor_cpp_FUN_00501900(void)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  if (iVar1 != 0) {
    iVar1 = 2;
  }
  return iVar1;
}
