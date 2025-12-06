// Name: shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
// Address: 004a2de0
// Address Range: [[004a2de0, 004a2df4]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(CStrList *this_ptr,int index)

{
  (*this_ptr->vtable->remove)(this_ptr,index,index);
  return;
}
