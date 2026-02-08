// Name: core_weapon.cpp_CWeapon_canPickup_FUN_005ee340
// Address: 005ee340
// Address Range: [[005ee340, 005ee3dd]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_005ee340(CWeapon *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_005ee340(CWeapon *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (((((this_ptr->carried_by_actor == (CDemonActor *)0x0) && (this_ptr->weapon_state == 0)) &&
       (*(int *)(this_ptr->unk3 + 0x254) != 0)) &&
      ((float)0.5 <
       SQRT(*(float *)(this_ptr->unk3 + 0x54) * *(float *)(this_ptr->unk3 + 0x54) +
            *(float *)(this_ptr->unk3 + 0x4c) * *(float *)(this_ptr->unk3 + 0x4c) +
            *(float *)(this_ptr->unk3 + 0x50) * *(float *)(this_ptr->unk3 + 0x50)))) ||
     (this_ptr->carried_by_actor != (CDemonActor *)0x0)) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CIcePick");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
    if ((this_ptr->weapon_state != 0) && (this_ptr->weapon_state != 3)) {
      return 0;
    }
  }
  return 3;
}
