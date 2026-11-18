// Name: core_script.cpp_CInventory_getSelectedItem_FUN_0052a6a0
// Address: 0052a6a0
// Address Range: [[0052a6a0, 0052a6b1]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_script_cpp_CInventory_getSelectedItem_FUN_0052a6a0(CInventory *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_script_cpp_CInventory_getSelectedItem_FUN_0052a6a0(CInventory *this_ptr)

{
  return this_ptr->selected_items[this_ptr->current_group];
}
