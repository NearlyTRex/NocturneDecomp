// Name: shape_edittool.cpp_CStrList_copy_FUN_004993f0
// Address: 004993f0
// Address Range: [[004993f0, 0049941a]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004993f0(CStrList *this_ptr,CStrList *other)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004993f0(CStrList *this_ptr,CStrList *other)

{
  *(byte ***)&this_ptr->field_0xc = &g_CStrListVTable;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x8 = 0;
  shape_edittool_cpp_CStrList_copyFrom_FUN_00499420(this_ptr,other);
  return this_ptr;
}
