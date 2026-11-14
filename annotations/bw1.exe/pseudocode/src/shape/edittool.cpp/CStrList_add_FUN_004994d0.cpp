// Name: shape_edittool.cpp_CStrList_add_FUN_004994d0
// Address: 004994d0
// Address Range: [[004994d0, 004994e8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_add_FUN_004994d0(CStrList *this_ptr,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_add_FUN_004994d0(CStrList *this_ptr,char *string_data)

{
  (*((this_ptr->vtable)._us)->insert)(this_ptr,this_ptr->item_count,string_data);
  return;
}
