// Name: core_weapon.cpp_CWeapon_canPickup_FUN_005ee340
// Address: 005ee340
// Address Range: [[005ee340, 005ee3dd]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_005ee340(CWeapon *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_005ee340(CWeapon *this_ptr,CDemonActor *picker)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (((((this_ptr->carried_by_actor == (CDemonActor *)0x0) &&
        (this_ptr->weapon_state == WEAPON_STATE_LYING_AROUND)) &&
       ((this_ptr->physics_box).is_valid != 0)) &&
      (fVar1 = (this_ptr->physics_box).linear_velocity_local.y,
      fVar2 = (this_ptr->physics_box).linear_velocity_local.x,
      fVar3 = (this_ptr->physics_box).linear_velocity_local.z,
      (float)0.5 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1))) ||
     (this_ptr->carried_by_actor != (CDemonActor *)0x0)) {
    return 0;
  }
  iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CIcePick");
  if (iVar4 == 0) {
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
    if (iVar4 != 0) {
      return 2;
    }
    if ((this_ptr->weapon_state != WEAPON_STATE_LYING_AROUND) &&
       (this_ptr->weapon_state != WEAPON_STATE_ON_HOOK)) {
      return 0;
    }
  }
  return 3;
}
