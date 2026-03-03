// Name: core_stranger.cpp_getWeaponInteractionType_FUN_005baf20
// Address: 005baf20
// Address Range: [[005baf20, 005baf6f]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_getWeaponInteractionType_FUN_005baf20(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_stranger_cpp_getWeaponInteractionType_FUN_005baf20(CWeapon *weapon)

{
  uint uVar1;
  CMelee *pCVar2;
  
  if (weapon == (CWeapon *)0x0) {
    return 0;
  }
  uVar1 = weapon->weapon_type;
  if (uVar1 < 7) {
    if (uVar1 == 0) {
      return 1;
    }
  }
  else if ((uVar1 < 8) || (uVar1 == 8)) {
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
