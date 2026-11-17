// Name: shape_edittool.cpp_CStrList_insertRange_FUN_004996b0
// Address: 004996b0
// Address Range: [[004996b0, 0049970b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_004996b0(CStrList *this_ptr,int insert_index,CStrList *source_list)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_004996b0(CStrList *this_ptr,int insert_index,CStrList *source_list)

{
  CStrList_vtable *pCVar1;
  char *string_data;
  int index;
  
  shape_edittool_cpp_CStrList_allocate_FUN_00499600
            (this_ptr,source_list->item_count + this_ptr->item_count);
  index = 0;
  if (source_list->item_count < 1) {
    return;
  }
  do {
    pCVar1 = (this_ptr->vtable)._us;
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(source_list,index);
    index = index + 1;
    (*pCVar1->insert)(this_ptr,insert_index,string_data);
    insert_index = insert_index + 1;
  } while (index < source_list->item_count);
  return;
}
