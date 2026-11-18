// Name: core_game.cpp_getSelectedWeapon_FUN_004c4d50
// Address: 004c4d50
// Address Range: [[004c4d50, 004c4d5a]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_game_cpp_getSelectedWeapon_FUN_004c4d50(CInventory *inventory_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_game_cpp_getSelectedWeapon_FUN_004c4d50(CInventory *inventory_ptr)

{
  return inventory_ptr->selected_weapon;
}
