// Name: core_keyactor.cpp_FUN_00501900
// Address: 00501900
// Address Range: [[00501900, 0050191b]]
// Convention: __cdecl
// Signature: int __cdecl core_keyactor_cpp_FUN_00501900(void)

#include "nocturne.h"

/* Signature: byte actors_other_keyactor.cpp_FUN_00501900(byte param_1, uint
   param_2) */

int __cdecl core_keyactor_cpp_FUN_00501900(void)

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
