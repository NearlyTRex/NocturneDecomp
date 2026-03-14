// Name: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
// Address: 004ffe10
// Address Range: [[004ffe10, 004ffe6f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory *this_ptr,int ammo_type)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory *this_ptr,int ammo_type)

{
  char *weapon_class_name;
  
  if (this_ptr->selected_weapon == (CWeapon *)0x0) {
    return;
  }
  this_ptr->ammo_ptr->ammo_count = this_ptr->selected_weapon->ammo_count;
  this_ptr->ammo_ptr->ammo_type = this_ptr->selected_weapon->ammo_type;
  weapon_class_name =
       core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&this_ptr->selected_weapon->base);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(this_ptr->ammo_ptr,weapon_class_name);
  return;
}
