// Name: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00546740
// Address: 00546740
// Address Range: [[00546740, 00546767]]
// Convention: unknown
// Signature: void core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00546740(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00546740(CWeapon *param_1,int param_2)

{
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.actor_name + 4));
  core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(param_1,param_2);
  return;
}
