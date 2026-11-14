// Name: shape_edittool.cpp_CStrList_ctor_FUN_00481f20
// Address: 00481f20
// Address Range: [[00481f20, 00481f3f]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00481f20(CStrList *this_ptr)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00481f20(CStrList *this_ptr)

{
  this_ptr->item_count = 0;
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  (this_ptr->vtable)._us = (CStrList_vtable *)&g_CStrListVTable;
  return this_ptr;
}
