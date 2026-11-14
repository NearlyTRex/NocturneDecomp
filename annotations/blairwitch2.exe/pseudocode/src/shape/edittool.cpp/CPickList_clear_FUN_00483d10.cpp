// Name: shape_edittool.cpp_CPickList_clear_FUN_00483d10
// Address: 00483d10
// Address Range: [[00483d10, 00483d73]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_clear_FUN_00483d10(CPickList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_clear_FUN_00483d10(CPickList *this_ptr)

{
  if (this_ptr->enabled_array != (int *)0x0) {
    FUN_005b86a0(this_ptr->enabled_array);
    this_ptr->enabled_array = (int *)0x0;
  }
  this_ptr->enabled_capacity = 0;
  if (this_ptr->hotkey_array != (int *)0x0) {
    FUN_005b86a0(this_ptr->hotkey_array);
    this_ptr->hotkey_array = (int *)0x0;
  }
  this_ptr->hotkey_capacity = 0;
  shape_edittool_cpp_CStrList_clear_FUN_00480e10(&this_ptr->base);
  return;
}
