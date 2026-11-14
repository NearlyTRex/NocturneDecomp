// Name: shape_edittool.cpp_CStrList_add_FUN_00482070
// Address: 00482070
// Address Range: [[00482070, 00482088]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_add_FUN_00482070(CStrList *this_ptr,char *string_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_add_FUN_00482070(CStrList *this_ptr,char *string_data)

{
  (*((this_ptr->vtable)._us)->insert)(this_ptr,this_ptr->item_count,string_data);
  return;
}
