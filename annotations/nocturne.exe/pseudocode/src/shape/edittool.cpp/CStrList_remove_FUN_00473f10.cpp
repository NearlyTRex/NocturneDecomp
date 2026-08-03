// Name: shape_edittool.cpp_CStrList_remove_FUN_00473f10
// Address: 00473f10
// Address Range: [[00473f10, 00473fc1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_remove_FUN_00473f10(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_remove_FUN_00473f10(CStrList *this_ptr,int start_index,int end_index)

{
  int iVar1;
  int iVar2;
  
  if (((start_index < 0) || (this_ptr->item_count <= end_index)) || (end_index < start_index)) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0xa03;
    core_main_c_FUN_004c8440("CStrList::remove - invalid range");
  }
  if (start_index <= end_index) {
    iVar2 = start_index * 4;
    do {
      iVar1 = *(int *)((int)this_ptr->data_array + iVar2);
      if (iVar1 != 0) {
        FUN_005638d0(iVar1);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 <= end_index * 4);
  }
  iVar2 = this_ptr->item_count - ((end_index - start_index) + 1);
  this_ptr->item_count = iVar2;
  memmove
            (this_ptr->data_array + start_index,this_ptr->data_array + end_index + 1,
             (iVar2 - start_index) * 4);
  return;
}
