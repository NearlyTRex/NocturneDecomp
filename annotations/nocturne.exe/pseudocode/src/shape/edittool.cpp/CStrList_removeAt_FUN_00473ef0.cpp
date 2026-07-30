// Name: shape_edittool.cpp_CStrList_removeAt_FUN_00473ef0
// Address: 00473ef0
// Address Range: [[00473ef0, 00473f04]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_00473ef0(CStrList *this_ptr,int index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_00473ef0(CStrList *this_ptr,int index)

{
  (*((this_ptr->vtable)._us)->remove)(this_ptr,index,index);
  return;
}
