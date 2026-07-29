// Name: shape_edittool.cpp_CStrList_ctor_FUN_00473b60
// Address: 00473b60
// Address Range: [[00473b60, 00473b7f]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00473b60(CStrList *this_ptr)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00473b60(CStrList *this_ptr)

{
  this_ptr->item_count = 0;
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  this_ptr->vtable = &g_CStrListVTable;
  return this_ptr;
}
