// Name: shape_edittool.cpp_CStrList_copy_FUN_00481f90
// Address: 00481f90
// Address Range: [[00481f90, 00481fba]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00481f90(CStrList *this_ptr,CStrList *other)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00481f90(CStrList *this_ptr,CStrList *other)

{
  (this_ptr->vtable)._us = (CStrList_vtable *)&g_CStrListVTable;
  this_ptr->item_count = 0;
  this_ptr->data_array = (char **)0x0;
  shape_edittool_cpp_CStrList_copyFrom_FUN_00481fc0(this_ptr,other);
  return this_ptr;
}
