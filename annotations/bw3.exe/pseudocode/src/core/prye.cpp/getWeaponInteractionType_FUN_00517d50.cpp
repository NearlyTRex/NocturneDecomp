// Name: core_prye.cpp_getWeaponInteractionType_FUN_00517d50
// Address: 00517d50
// Address Range: [[00517d50, 00517db9]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_getWeaponInteractionType_FUN_00517d50(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_prye_cpp_getWeaponInteractionType_FUN_00517d50(CWeapon *weapon)

{
  int iVar1;
  CDemonActor *pCVar2;
  
  if (weapon == (CWeapon *)0x0) {
    return 0;
  }
  switch(weapon->weapon_type) {
  case WEAPON_TYPE_GUN:
  case WEAPON_TYPE_FLASHLIGHT:
    iVar1 = 1;
    break;
  default:
    return 3;
  case WEAPON_TYPE_MELEE:
  case WEAPON_TYPE_BARON:
    pCVar2 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(&weapon->base,g_CMeleeClassInfo.name_hash);
    if ((pCVar2 != (CDemonActor *)0x0) && (pCVar2[4].orient_matrix.m[0].z != 0.0)) {
      return 3;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (&weapon->base,g_CHolycrossClassInfo.name_hash);
    iVar1 = 0;
    if (pCVar2 != (CDemonActor *)0x0) {
      return 3;
    }
  }
  return iVar1;
}
