// Name: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0
// Address: 004fa4e0
// Address Range: [[004fa4e0, 004fa53f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0(CInventory *this_ptr,int ammo_type)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0(CInventory *this_ptr,int ammo_type)

{
  char *weapon_class_name;
  
  if (*(int *)(this_ptr + 0x338) == 0) {
    return;
  }
  *(uint *)(*(int *)(this_ptr + 0x464) + 0x314) =
       *(uint *)(*(int *)(this_ptr + 0x338) + 0x568);
  *(uint *)(*(int *)(this_ptr + 0x464) + 0x318) =
       *(uint *)(*(int *)(this_ptr + 0x338) + 0x56c);
  weapon_class_name =
       core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830
                 (*(CDemonActor **)(this_ptr + 0x338));
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(*(CAmmo **)(this_ptr + 0x464),weapon_class_name);
  return;
}
