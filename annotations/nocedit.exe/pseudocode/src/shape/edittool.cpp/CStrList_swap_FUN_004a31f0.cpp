// Name: shape_edittool.cpp_CStrList_swap_FUN_004a31f0
// Address: 004a31f0
// Address Range: [[004a31f0, 004a3263]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004a31f0(CStrList *this_ptr,int index1,int index2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004a31f0(CStrList *this_ptr,int index1,int index2)

{
  char *pcVar1;
  char **ppcVar2;
  
  if ((((index1 < 0) || (this_ptr->item_count <= index1)) || (index2 < 0)) ||
     (this_ptr->item_count <= index2)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc2e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::swap - invalid indices");
    if (index1 == index2) {
      return;
    }
  }
  else if (index1 == index2) {
    return;
  }
  ppcVar2 = this_ptr->data_array + index1;
  pcVar1 = *ppcVar2;
  *ppcVar2 = this_ptr->data_array[index2];
  this_ptr->data_array[index2] = pcVar1;
  return;
}
