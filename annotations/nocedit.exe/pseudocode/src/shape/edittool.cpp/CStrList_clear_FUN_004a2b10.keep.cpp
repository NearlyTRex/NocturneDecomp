// Name: shape_edittool.cpp_CStrList_clear_FUN_004a2b10
// Address: 004a2b10
// MANUAL RECONSTRUCTION
// Address Range: [[004a2b10, 004a2b7e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_clear_FUN_004a2b10(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_clear_FUN_004a2b10(CStrList *this_ptr)

{
  int iVar2;

  if (this_ptr->data_array != (char **)0x0) {
    for (iVar2 = 0; iVar2 < this_ptr->item_count; iVar2 = iVar2 + 1) {
      if (this_ptr->data_array[iVar2] != (char *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (this_ptr->data_array[iVar2],"..\\shape\\edittool.cpp",2827);
      }
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->data_array,"..\\shape\\edittool.cpp",2829);
  }
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  this_ptr->item_count = 0;
  return;
}
