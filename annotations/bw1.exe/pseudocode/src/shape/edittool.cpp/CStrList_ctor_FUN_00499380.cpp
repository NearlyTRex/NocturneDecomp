// Name: shape_edittool.cpp_CStrList_ctor_FUN_00499380
// Address: 00499380
// Address Range: [[00499380, 0049939f]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00499380(CStrList *this_ptr)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00499380(CStrList *this_ptr)

{
  this_ptr->item_count = 0;
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  (this_ptr->vtable)._us = (CStrList_vtable *)&g_CStrListVTable;
  return this_ptr;
}
