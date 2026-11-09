// Name: shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
// Address: 00482440
// Address Range: [[00482440, 0048244e]]
// Convention: __cdecl
// Signature: char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(CStrList *this_ptr,int index)

#include "nocturne.h"

char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(CStrList *this_ptr,int index)

{
  return *(char **)(*(int *)&this_ptr->field_0x8 + index * 4);
}
