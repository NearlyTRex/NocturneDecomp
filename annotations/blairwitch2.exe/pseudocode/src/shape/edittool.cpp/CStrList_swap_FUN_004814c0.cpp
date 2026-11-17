// Name: shape_edittool.cpp_CStrList_swap_FUN_004814c0
// Address: 004814c0
// Address Range: [[004814c0, 00481533]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004814c0(CStrList *this_ptr,int index1,int index2)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004814c0(CStrList *this_ptr,int index1,int index2)

{
  char *pcVar1;
  char **ppcVar2;
  
  if ((((index1 < 0) || (this_ptr->item_count <= index1)) || (index2 < 0)) ||
     (this_ptr->item_count <= index2)) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xcae;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CStrList::swap - invalid indices");
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
