// Name: shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
// Address: 00481240
// Address Range: [[00481240, 0048124e]]
// Convention: __cdecl
// Signature: char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(CStrList *this_ptr,int index)

#include "nocturne.h"

char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(CStrList *this_ptr,int index)

{
  return *(char **)(*(int *)&this_ptr->field_0x8 + index * 4);
}
