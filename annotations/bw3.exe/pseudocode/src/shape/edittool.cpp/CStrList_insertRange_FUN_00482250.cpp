// Name: shape_edittool.cpp_CStrList_insertRange_FUN_00482250
// Address: 00482250
// Address Range: [[00482250, 004822ab]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00482250(CStrList *this_ptr,int insert_index,CStrList *source_list)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00482250(CStrList *this_ptr,int insert_index,CStrList *source_list)

{
  CStrList_vtable *pCVar1;
  char *string_data;
  int index;
  
  shape_edittool_cpp_CStrList_allocate_FUN_004821a0
            (this_ptr,source_list->item_count + this_ptr->item_count);
  index = 0;
  if (source_list->item_count < 1) {
    return;
  }
  do {
    pCVar1 = (this_ptr->vtable)._us;
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440(source_list,index);
    index = index + 1;
    (*pCVar1->insert)(this_ptr,insert_index,string_data);
    insert_index = insert_index + 1;
  } while (index < source_list->item_count);
  return;
}
