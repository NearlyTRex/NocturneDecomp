// Name: core_health.cpp_FUN_004f1fb0
// Address: 004f1fb0
// Address Range: [[004f1fb0, 004f1fcb]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_FUN_004f1fb0(void)

#include "nocturne.h"

/* Signature: byte actors_other_health.cpp_FUN_004f1fb0(byte param_1, uint
   param_2) */

int __cdecl core_health_cpp_FUN_004f1fb0(void)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
