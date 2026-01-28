// Name: shape_edittool.cpp_CStrList_add_FUN_004a2b80
// Address: 004a2b80
// Address Range: [[004a2b80, 004a2b98]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *this_ptr,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *this_ptr,char *string_data)

{
  (*this_ptr->vtable->insert)(this_ptr,this_ptr->item_count,string_data);
  return;
}
