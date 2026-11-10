// Name: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320
// Address: 0049d320
// Address Range: [[0049d320, 0049d34a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(CEdScrollBar *this_ptr)

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
