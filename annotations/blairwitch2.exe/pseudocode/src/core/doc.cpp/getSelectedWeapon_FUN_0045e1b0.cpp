// Name: core_doc.cpp_getSelectedWeapon_FUN_0045e1b0
// Address: 0045e1b0
// Address Range: [[0045e1b0, 0045e1c1]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_doc_cpp_getSelectedWeapon_FUN_0045e1b0(CInventory *inventory_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_doc_cpp_getSelectedWeapon_FUN_0045e1b0(CInventory *inventory_ptr)

{
  return inventory_ptr->selected_weapons[inventory_ptr->current_group];
}
