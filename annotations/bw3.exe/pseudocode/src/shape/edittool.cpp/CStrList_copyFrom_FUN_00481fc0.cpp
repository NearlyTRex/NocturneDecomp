// Name: shape_edittool.cpp_CStrList_copyFrom_FUN_00481fc0
// Address: 00481fc0
// Address Range: [[00481fc0, 0048200c]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00481fc0(CStrList *this_ptr,CStrList *source_ptr)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00481fc0(CStrList *this_ptr,CStrList *source_ptr)

{
  char *string_data;
  int index;
  
  (**(code **)(*(int *)&this_ptr->field_0xc + 0x14))(this_ptr);
  if (*(int *)source_ptr < 1) {
    return this_ptr;
  }
  shape_edittool_cpp_CStrList_allocate_FUN_004821a0(this_ptr,*(int *)source_ptr);
  for (index = 0; index < *(int *)source_ptr; index = index + 1) {
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(source_ptr,index);
    shape_edittool_cpp_CStrList_add_FUN_00482070(this_ptr,string_data);
  }
  return this_ptr;
}
