// Name: shape_edittool.cpp_CPickList_clear_FUN_00476160
// Address: 00476160
// Address Range: [[00476160, 00476198]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_clear_FUN_00476160(CPickList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_clear_FUN_00476160(CPickList *this_ptr)

{
  if (this_ptr->enabled_array != (int *)0x0) {
    free(this_ptr->enabled_array);
    this_ptr->enabled_array = (int *)0x0;
  }
  this_ptr->enabled_capacity = 0;
  shape_edittool_cpp_CStrList_clear_FUN_00473c50(&this_ptr->base);
  return;
}
