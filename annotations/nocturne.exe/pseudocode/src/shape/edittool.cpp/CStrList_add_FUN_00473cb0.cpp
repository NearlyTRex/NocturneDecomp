// Name: shape_edittool.cpp_CStrList_add_FUN_00473cb0
// Address: 00473cb0
// Address Range: [[00473cb0, 00473cc8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_add_FUN_00473cb0(CStrList *this_ptr,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_add_FUN_00473cb0(CStrList *this_ptr,char *string_data)

{
  (*((this_ptr->vtable)._us)->insert)(this_ptr,this_ptr->item_count,string_data);
  return;
}
