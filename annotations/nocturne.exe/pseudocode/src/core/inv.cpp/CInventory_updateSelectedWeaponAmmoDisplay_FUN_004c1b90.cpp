// Name: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
// Address: 004c1b90
// Address Range: [[004c1b90, 004c1bef]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(CInventory *this_ptr,int ammo_type)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(CInventory *this_ptr,int ammo_type)

{
  char *weapon_class_name;
  
  if (this_ptr->selected_weapon == (CWeapon *)0x0) {
    return;
  }
  this_ptr->ammo_ptr->ammo_count = this_ptr->selected_weapon->ammo_count;
  this_ptr->ammo_ptr->ammo_type = this_ptr->selected_weapon->ammo_type;
  weapon_class_name =
       core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(&this_ptr->selected_weapon->base);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(this_ptr->ammo_ptr,weapon_class_name);
  return;
}
