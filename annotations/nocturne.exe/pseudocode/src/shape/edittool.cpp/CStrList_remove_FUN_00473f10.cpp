// Name: shape_edittool.cpp_CStrList_remove_FUN_00473f10
// Address: 00473f10
// Address Range: [[00473f10, 00473fc1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_remove_FUN_00473f10(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_remove_FUN_00473f10(CStrList *this_ptr,int start_index,int end_index)

{
  void *ptr;
  int iVar1;
  
  if (((start_index < 0) || (this_ptr->item_count <= end_index)) || (end_index < start_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2563;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CStrList::remove - invalid range");
  }
  if (start_index <= end_index) {
    iVar1 = start_index * 4;
    do {
      ptr = *(void **)((int)this_ptr->data_array + iVar1);
      if (ptr != (void *)0x0) {
        free(ptr);
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 <= end_index * 4);
  }
  iVar1 = this_ptr->item_count - ((end_index - start_index) + 1);
  this_ptr->item_count = iVar1;
  memmove
            (this_ptr->data_array + start_index,this_ptr->data_array + end_index + 1,
             (iVar1 - start_index) * 4);
  return;
}
