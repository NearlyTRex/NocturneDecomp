// Name: core_zombie.cpp_CZombie_FUN_005fc920
// Address: 005fc920
// Address Range: [[005fc920, 005fc950]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fc920(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc920(CZombie* param_1, uint
   param_2) */

int __cdecl core_zombie_cpp_CZombie_FUN_005fc920(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CTentacle");
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042bf30(in_stack_00000004);
  return iVar1;
}
