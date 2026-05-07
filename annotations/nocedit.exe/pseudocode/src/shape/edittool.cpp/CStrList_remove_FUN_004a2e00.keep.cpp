// Name: shape_edittool.cpp_CStrList_remove_FUN_004a2e00
// Address: 004a2e00
// MANUAL RECONSTRUCTION
// Address Range: [[004a2e00, 004a2ebb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_remove_FUN_004a2e00(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_remove_FUN_004a2e00(CStrList *this_ptr,int start_index,int end_index)

{
  int iVar1;
  
  if (((start_index < 0) || (this_ptr->item_count <= end_index)) || (end_index < start_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb7b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::remove - invalid range");
  }
  for (iVar1 = start_index; iVar1 <= end_index; iVar1 = iVar1 + 1) {
    if (this_ptr->data_array[iVar1] != (char *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (this_ptr->data_array[iVar1],"..\\shape\\edittool.cpp",0xb80);
    }
  }
  iVar1 = this_ptr->item_count - ((end_index - start_index) + 1);
  this_ptr->item_count = iVar1;
  memmove
            (this_ptr->data_array + start_index,this_ptr->data_array + end_index + 1,
             (iVar1 - start_index) * 4);
  return;
}
