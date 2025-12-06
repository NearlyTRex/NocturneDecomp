// Name: core_melee.cpp_FUN_0050ecd0
// Address: 0050ecd0
// Address Range: [[0050ecd0, 0050ecec]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050ecd0()

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_FUN_0050ecd0(uint param_1, uint
   param_2) */

void core_melee_cpp_FUN_0050ecd0(void)

{
  CWeapon *pCVar1;
  CWeapon *in_stack_00000004;
  
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_actor).actor_name[0x18] = '\0';
  (pCVar1->base_actor).actor_name[0x19] = '\0';
  (pCVar1->base_actor).actor_name[0x1a] = '\0';
  (pCVar1->base_actor).actor_name[0x1b] = '\0';
  core_weapon_cpp_CWeapon_FUN_005ee640(in_stack_00000004);
  return;
}
