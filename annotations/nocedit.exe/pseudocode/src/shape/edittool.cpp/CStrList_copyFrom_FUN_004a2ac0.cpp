// Name: shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0
// Address: 004a2ac0
// Address Range: [[004a2ac0, 004a2b0c]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_004a2ac0(CStrList *dest_ptr,CStrList *source_ptr)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_004a2ac0(CStrList *dest_ptr,CStrList *source_ptr)

{
  char *string_data;
  int index;
  
  (*((dest_ptr->vtable)._us)->clear)(dest_ptr);
  if (source_ptr->item_count < 1) {
    return dest_ptr;
  }
  shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(dest_ptr,source_ptr->item_count);
  for (index = 0; index < source_ptr->item_count; index = index + 1) {
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(source_ptr,index);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(dest_ptr,string_data);
  }
  return dest_ptr;
}
