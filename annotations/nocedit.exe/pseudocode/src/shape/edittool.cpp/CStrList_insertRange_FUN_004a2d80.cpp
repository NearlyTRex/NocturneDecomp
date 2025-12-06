// Name: shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80
// Address: 004a2d80
// Address Range: [[004a2d80, 004a2ddb]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80(CStrList * this_ptr, int insertion_index, CStrList * source_list)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_insertRange_FUN_004a2d80
          (CStrList *this_ptr,int insertion_index,CStrList *source_list)

{
  CStrList_vtable *pCVar1;
  char *string_data;
  int index;
  CStrList *in_stack_00000010;
  int *in_stack_00000030;
  
  shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0
            (this_ptr,source_list->item_count + this_ptr->item_count);
  index = 0;
  if (in_stack_00000010->item_count < 1) {
    return;
  }
  do {
    pCVar1 = this_ptr->vtable;
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000010,index);
    index = index + 1;
    (*pCVar1->insert)(this_ptr,(int)source_list,string_data);
    source_list = (CStrList *)((int)&source_list->item_count + 1);
  } while (index < *in_stack_00000030);
  return;
}
