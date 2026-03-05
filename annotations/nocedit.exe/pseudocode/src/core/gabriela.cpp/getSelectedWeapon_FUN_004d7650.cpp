// Name: core_gabriela.cpp_getSelectedWeapon_FUN_004d7650
// Address: 004d7650
// Address Range: [[004d7650, 004d765a]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_gabriela_cpp_getSelectedWeapon_FUN_004d7650(CInventory *inventory_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_gabriela_cpp_getSelectedWeapon_FUN_004d7650(CInventory *inventory_ptr)

{
  return inventory_ptr->selected_weapon;
}
