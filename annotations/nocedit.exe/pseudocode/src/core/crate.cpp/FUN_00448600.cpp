// Name: core_crate.cpp_FUN_00448600
// Address: 00448600
// Address Range: [[00448600, 0044861b]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448600()

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_00448600(byte param_1, uint param_2)
    */

int core_crate_cpp_FUN_00448600(void)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  if (iVar1 != 0) {
    iVar1 = 4;
  }
  return iVar1;
}
