// Name: core_doc.cpp_getWeaponInteractionType_FUN_0044fec0
// Address: 0044fec0
// Address Range: [[0044fec0, 0044ff0b]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_getWeaponInteractionType_FUN_0044fec0(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_doc_cpp_getWeaponInteractionType_FUN_0044fec0(CWeapon *weapon)

{
  CDemonActor *pCVar1;
  
  if (weapon == (CWeapon *)0x0) {
    return 0;
  }
  switch(weapon->weapon_type) {
  case WEAPON_TYPE_GUN:
  case WEAPON_TYPE_FLASHLIGHT:
  case WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN:
    return 1;
  default:
    return 3;
  case WEAPON_TYPE_UNUSED:
  case WEAPON_TYPE_MELEE:
  case WEAPON_TYPE_BARON:
  case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
  case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
    break;
  }
  pCVar1 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(&weapon->base,g_CMeleeClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[2].particle_systems[0].fade_end != 0.0)) {
    return 5;
  }
  return 0;
}
