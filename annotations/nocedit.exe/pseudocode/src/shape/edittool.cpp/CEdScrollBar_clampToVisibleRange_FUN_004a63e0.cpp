// Name: shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
// Address: 004a63e0
// Address Range: [[004a63e0, 004a641d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0(CEdScrollBar *this_ptr,int *value_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0(CEdScrollBar *this_ptr,int *value_ptr)

{
  int iVar1;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  iVar1 = this_ptr->scroll_position + this_ptr->max_value;
  if (*value_ptr < iVar1) {
    iVar1 = this_ptr->scroll_position;
    if (iVar1 <= *value_ptr) {
      return;
    }
  }
  else {
    *value_ptr = iVar1 + -1;
    iVar1 = this_ptr->scroll_position;
    if (iVar1 <= *value_ptr) {
      return;
    }
  }
  *value_ptr = iVar1;
  return;
}
