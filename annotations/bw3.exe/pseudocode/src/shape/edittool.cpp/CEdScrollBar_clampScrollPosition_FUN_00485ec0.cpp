// Name: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0
// Address: 00485ec0
// Address Range: [[00485ec0, 00485eea]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(CEdScrollBar *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->item_count - this_ptr->page_size;
  if (iVar1 < this_ptr->scroll_position) {
    this_ptr->scroll_position = iVar1;
    if (-1 < this_ptr->scroll_position) {
      return;
    }
  }
  else if (-1 < this_ptr->scroll_position) {
    return;
  }
  this_ptr->scroll_position = 0;
  return;
}
