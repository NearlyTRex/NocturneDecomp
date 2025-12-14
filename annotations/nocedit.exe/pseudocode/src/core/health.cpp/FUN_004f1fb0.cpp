// Name: core_health.cpp_FUN_004f1fb0
// Address: 004f1fb0
// Address Range: [[004f1fb0, 004f1fcb]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1fb0()

#include "nocturne.h"

/* Signature: byte actors_other_health.cpp_FUN_004f1fb0(byte param_1, uint
   param_2) */

uint core_health_cpp_FUN_004f1fb0(void)

{
  int iVar1;
  uint uVar2;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
