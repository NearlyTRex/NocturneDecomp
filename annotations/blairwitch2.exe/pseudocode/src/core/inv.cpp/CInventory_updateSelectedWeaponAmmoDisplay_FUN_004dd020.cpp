// Name: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020
// Address: 004dd020
// Address Range: [[004dd020, 004dd098]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory *this_ptr,int ammo_type)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory *this_ptr,int ammo_type)

{
  char *weapon_class_name;
  
  if (this_ptr->selected_weapons[this_ptr->current_group] == (CWeapon *)0x0) {
    return;
  }
  this_ptr->ammo_ptr->ammo_count = this_ptr->selected_weapons[this_ptr->current_group]->ammo_count;
  this_ptr->ammo_ptr->ammo_type = this_ptr->selected_weapons[this_ptr->current_group]->ammo_type;
  weapon_class_name =
       (char *)core_actor_cpp_FUN_00408a50(this_ptr->selected_weapons[this_ptr->current_group]);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(this_ptr->ammo_ptr,weapon_class_name);
  return;
}
