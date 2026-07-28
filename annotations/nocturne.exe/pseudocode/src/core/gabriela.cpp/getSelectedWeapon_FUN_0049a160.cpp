// Name: core_gabriela.cpp_getSelectedWeapon_FUN_0049a160
// Address: 0049a160
// Address Range: [[0049a160, 0049a16a]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_gabriela_cpp_getSelectedWeapon_FUN_0049a160(CInventory *inventory_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_gabriela_cpp_getSelectedWeapon_FUN_0049a160(CInventory *inventory_ptr)

{
  return inventory_ptr->selected_weapon;
}
