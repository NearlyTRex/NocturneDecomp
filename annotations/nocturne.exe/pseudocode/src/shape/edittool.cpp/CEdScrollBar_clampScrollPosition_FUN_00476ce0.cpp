// Name: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0
// Address: 00476ce0
// Address Range: [[00476ce0, 00476d0a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(CEdScrollBar *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->current_value - this_ptr->max_value;
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
