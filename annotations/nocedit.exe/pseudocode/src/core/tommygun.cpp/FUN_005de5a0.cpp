// Name: core_tommygun.cpp_FUN_005de5a0
// Address: 005de5a0
// Address Range: [[005de5a0, 005de5c7]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005de5a0()

#include "nocturne.h"

/* Signature: byte actors_weapon_tommygun.cpp_FUN_005de5a0(uint param_1, uint
   param_2) */

void core_tommygun_cpp_FUN_005de5a0(void)

{
  CWeapon *in_stack_00000004;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004[1].base.actor_name + 4));
  core_weapon_cpp_CWeapon_FUN_005ee640(in_stack_00000004);
  return;
}
