// Name: core_doc.cpp_getSelectedWeapon_FUN_004766f0
// Address: 004766f0
// Address Range: [[004766f0, 004766fa]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_doc_cpp_getSelectedWeapon_FUN_004766f0(CInventory *inventory_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_doc_cpp_getSelectedWeapon_FUN_004766f0(CInventory *inventory_ptr)

{
  return inventory_ptr->selected_weapon;
}
