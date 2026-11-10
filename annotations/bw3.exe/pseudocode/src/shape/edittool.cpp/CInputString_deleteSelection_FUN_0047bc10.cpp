// Name: shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10
// Address: 0047bc10
// Address Range: [[0047bc10, 0047bc5a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString *this_ptr)

{
  int start_pos;
  int end_pos;
  
  start_pos = this_ptr->selection_start;
  end_pos = this_ptr->cursor_position;
  if (start_pos < end_pos) {
    shape_edittool_cpp_CInputString_deleteRange_FUN_0047bba0(this_ptr,start_pos,end_pos);
    this_ptr->cursor_position = this_ptr->selection_start;
    return;
  }
  if (start_pos <= end_pos) {
    return;
  }
  shape_edittool_cpp_CInputString_deleteRange_FUN_0047bba0(this_ptr,end_pos,start_pos);
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}
