// Name: shape_edittool.cpp_CStrList_copy_FUN_004a2a90
// Address: 004a2a90
// Address Range: [[004a2a90, 004a2aba]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004a2a90(CStrList *this_ptr,CStrList *other)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004a2a90(CStrList *this_ptr,CStrList *other)

{
  this_ptr->vtable = &g_CStrListVTable;
  this_ptr->item_count = 0;
  this_ptr->data_array = (char **)0x0;
  shape_edittool_cpp_CStrList_copyFrom_FUN_004a2ac0(this_ptr,other);
  return this_ptr;
}
