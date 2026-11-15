// Name: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd2d0
// Address: 004dd2d0
// Address Range: [[004dd2d0, 004dd309]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd2d0(CInventory *this_ptr,int ammo_type)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd2d0(CInventory *this_ptr,int ammo_type)

{
  if (this_ptr->selected_weapon == (CWeapon *)0x0) {
    return;
  }
  this_ptr->ammo_ptr->ammo_count = this_ptr->selected_weapon->ammo_count;
  this_ptr->ammo_ptr->ammo_type = this_ptr->selected_weapon->ammo_type;
  return;
}
