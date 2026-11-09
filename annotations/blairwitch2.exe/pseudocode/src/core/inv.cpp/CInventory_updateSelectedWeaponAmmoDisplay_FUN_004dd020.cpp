// Name: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020
// Address: 004dd020
// Address Range: [[004dd020, 004dd098]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory *this_ptr,int ammo_type)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(CInventory *this_ptr,int ammo_type)

{
  char *weapon_class_name;
  
  if (*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) == 0) {
    return;
  }
  *(uint *)(*(int *)(this_ptr + 0x464) + 0x470) =
       *(uint *)(*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) + 0x6c4);
  *(uint *)(*(int *)(this_ptr + 0x464) + 0x474) =
       *(uint *)(*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) + 0x6c8);
  weapon_class_name =
       (char *)core_actor_cpp_FUN_00408a50
                         (*(uint *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610));
  core_ammo_cpp_FUN_0040e240(*(CAmmo **)(this_ptr + 0x464),weapon_class_name);
  return;
}
