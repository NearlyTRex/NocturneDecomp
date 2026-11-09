// Name: shape_edittool.cpp_CStrList_copy_FUN_00480d90
// Address: 00480d90
// Address Range: [[00480d90, 00480dba]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00480d90(CStrList *this_ptr,CStrList *other)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00480d90(CStrList *this_ptr,CStrList *other)

{
  *(byte ***)&this_ptr->field_0xc = &g_CStrListVTable;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x8 = 0;
  shape_edittool_cpp_CStrList_copyFrom_FUN_00480dc0(this_ptr,other);
  return this_ptr;
}
