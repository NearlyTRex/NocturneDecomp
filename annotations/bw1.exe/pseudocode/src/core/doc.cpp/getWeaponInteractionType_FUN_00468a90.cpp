// Name: core_doc.cpp_getWeaponInteractionType_FUN_00468a90
// Address: 00468a90
// Address Range: [[00468a90, 00468ad5]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_getWeaponInteractionType_FUN_00468a90(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_doc_cpp_getWeaponInteractionType_FUN_00468a90(CWeapon *weapon)

{
  CDemonActor *pCVar1;
  
  if (weapon == (CWeapon *)0x0) {
    return 0;
  }
  switch(weapon->weapon_type) {
  case WEAPON_TYPE_GUN:
  case WEAPON_TYPE_FLASHLIGHT:
    return 1;
  case WEAPON_TYPE_MELEE:
  case WEAPON_TYPE_BARON:
    pCVar1 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(&weapon->base,g_CMeleeClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      return 0;
    }
    if (pCVar1[4].location.position.z == 0.0) {
      return 0;
    }
  }
  return 3;
}
