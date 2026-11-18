// Name: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004dd310
// Address: 004dd310
// Address Range: [[004dd310, 004dd331]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd310(CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd310(CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category)

{
  if (weapon_category == 5) {
    return 1;
  }
  return (uint)(weapon_category == *(int *)(weapon_actor[4].actor_name + 0x14));
}
