// Name: shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
// Address: 004998a0
// Address Range: [[004998a0, 004998ae]]
// Convention: __cdecl
// Signature: char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(CStrList *this_ptr,int index)

#include "nocturne.h"

char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(CStrList *this_ptr,int index)

{
  return *(char **)(*(int *)&this_ptr->field_0x8 + index * 4);
}
