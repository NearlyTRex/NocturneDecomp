// Name: shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
// Address: 004a6420
// Address Range: [[004a6420, 004a644d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420(CEdScrollBar *this_ptr,int target_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420(CEdScrollBar *this_ptr,int target_index)

{
  int iVar1;
  
  iVar1 = target_index - this_ptr->max_value;
  if (this_ptr->scroll_position <= iVar1) {
    this_ptr->scroll_position = iVar1 + 1;
  }
  if (target_index < this_ptr->scroll_position) {
    this_ptr->scroll_position = target_index;
  }
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  return;
}
