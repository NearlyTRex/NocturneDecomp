// Name: shape_edittool.cpp_CStrList_sortAll_FUN_00481190
// Address: 00481190
// Address Range: [[00481190, 004811a4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00481190(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00481190(CStrList *this_ptr)

{
  (*((this_ptr->vtable)._us)->sort)(this_ptr,0,this_ptr->item_count + -1);
  return;
}
