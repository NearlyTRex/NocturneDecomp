// Name: shape_edittool.cpp_CStrList_ctor_FUN_00499380
// Address: 00499380
// Address Range: [[00499380, 0049939f]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00499380(CStrList *this_ptr)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00499380(CStrList *this_ptr)

{
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x8 = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  *(byte ***)&this_ptr->field_0xc = &g_CStrListVTable;
  return this_ptr;
}
