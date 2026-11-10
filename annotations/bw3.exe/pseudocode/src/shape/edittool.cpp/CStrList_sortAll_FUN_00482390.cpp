// Name: shape_edittool.cpp_CStrList_sortAll_FUN_00482390
// Address: 00482390
// Address Range: [[00482390, 004823a4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00482390(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00482390(CStrList *this_ptr)

{
  (*((this_ptr->vtable)._us)->sort)(this_ptr,0,this_ptr->item_count + -1);
  return;
}
