// Name: shape_edittool.cpp_CStrList_insertRange_FUN_00473e90
// Address: 00473e90
// Address Range: [[00473e90, 00473eeb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00473e90(CStrList *this_ptr,int insertion_index,CStrList *source_list)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00473e90(CStrList *this_ptr,int insertion_index,CStrList *source_list)

{
  CStrList_vtable *pCVar1;
  char *string_data;
  int index;
  
  shape_edittool_cpp_CStrList_allocate_FUN_00473de0
            (this_ptr,source_list->item_count + this_ptr->item_count);
  index = 0;
  if (source_list->item_count < 1) {
    return;
  }
  do {
    pCVar1 = this_ptr->vtable;
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(source_list,index);
    index = index + 1;
    (*pCVar1->insert)(this_ptr,insertion_index,string_data);
    insertion_index = insertion_index + 1;
  } while (index < source_list->item_count);
  return;
}
