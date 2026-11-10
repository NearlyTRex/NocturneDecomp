// Name: shape_edittool.cpp_CStrList_swap_FUN_004826c0
// Address: 004826c0
// Address Range: [[004826c0, 00482733]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004826c0(CStrList *this_ptr,int index1,int index2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004826c0(CStrList *this_ptr,int index1,int index2)

{
  char *pcVar1;
  char **ppcVar2;
  
  if ((((index1 < 0) || (this_ptr->item_count <= index1)) || (index2 < 0)) ||
     (this_ptr->item_count <= index2)) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xd2a;
    core_main_c_FUN_004e4330("CStrList::swap - invalid indices");
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
