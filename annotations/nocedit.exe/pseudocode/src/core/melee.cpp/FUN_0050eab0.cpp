// Name: core_melee.cpp_FUN_0050eab0
// Address: 0050eab0
// Address Range: [[0050eab0, 0050eade]]
// Convention: __cdecl
// Signature: int __cdecl core_melee_cpp_FUN_0050eab0(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_FUN_0050eab0(uint param_1, uint
   param_2) */

int __cdecl core_melee_cpp_FUN_0050eab0(void)

{
  int iVar1;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x588) != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}
