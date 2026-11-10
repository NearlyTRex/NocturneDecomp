// Name: shape_edittool.cpp_CStrList_add_FUN_00480e70
// Address: 00480e70
// Address Range: [[00480e70, 00480e88]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_add_FUN_00480e70(CStrList *this_ptr,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_add_FUN_00480e70(CStrList *this_ptr,char *string_data)

{
  (*((this_ptr->vtable)._us)->insert)(this_ptr,this_ptr->item_count,string_data);
  return;
}
