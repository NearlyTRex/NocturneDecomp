// Name: shape_edittool.cpp_CStrList_sortAll_FUN_004a2ec0
// Address: 004a2ec0
// Address Range: [[004a2ec0, 004a2ed4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(CStrList *this_ptr)

{
  (*((this_ptr->vtable)._us)->sort)(this_ptr,0,this_ptr->item_count + -1);
  return;
}
