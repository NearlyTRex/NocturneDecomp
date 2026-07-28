// Name: core_melee.cpp_CMelee_setWeaponState_FUN_004cf180
// Address: 004cf180
// Address Range: [[004cf180, 004cf19c]]
// Convention: unknown
// Signature: void core_melee_cpp_CMelee_setWeaponState_FUN_004cf180(CWeapon *param_1,int param_2)

#include "nocturne.h"

void core_melee_cpp_CMelee_setWeaponState_FUN_004cf180(CWeapon *param_1,int param_2)

{
  CWeapon *pCVar1;
  
  pCVar1 = param_1 + 1;
  (pCVar1->base).actor_name[0x18] = '\0';
  (pCVar1->base).actor_name[0x19] = '\0';
  (pCVar1->base).actor_name[0x1a] = '\0';
  (pCVar1->base).actor_name[0x1b] = '\0';
  core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(param_1,param_2);
  return;
}
