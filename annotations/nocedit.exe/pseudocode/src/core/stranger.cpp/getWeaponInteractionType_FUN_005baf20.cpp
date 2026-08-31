// Name: core_stranger.cpp_getWeaponInteractionType_FUN_005baf20
// Address: 005baf20
// Address Range: [[005baf20, 005baf6f]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_getWeaponInteractionType_FUN_005baf20(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_stranger_cpp_getWeaponInteractionType_FUN_005baf20(CWeapon *weapon)

{
  EWeaponType EVar1;
  CMelee *pCVar2;
  
  if (weapon == (CWeapon *)0x0) {
    return 0;
  }
  EVar1 = weapon->weapon_type;
  if (EVar1 < WEAPON_TYPE_MELEE) {
    if (EVar1 == WEAPON_TYPE_GUN) {
      return 1;
    }
  }
  else if ((EVar1 < WEAPON_TYPE_BARON) || (EVar1 == WEAPON_TYPE_BARON)) {
    pCVar2 = (CMelee *)
             core_actor_cpp_castToClassHash_FUN_0040c790(&weapon->base,g_CMeleeClassInfo.name_hash);
    if (pCVar2 == (CMelee *)0x0) {
      return 0;
    }
    if (pCVar2->can_go_in_inventory == 0) {
      return 0;
    }
    return 3;
  }
  return 3;
}
