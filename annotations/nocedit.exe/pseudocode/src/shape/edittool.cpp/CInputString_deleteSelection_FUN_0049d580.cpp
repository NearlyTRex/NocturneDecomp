// Name: shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
// Address: 0049d580
// Address Range: [[0049d580, 0049d5ca]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(CInputString *this_ptr)

{
  int start_pos;
  int end_pos;
  
  start_pos = this_ptr->selection_start;
  end_pos = this_ptr->cursor_position;
  if (start_pos < end_pos) {
    shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(this_ptr,start_pos,end_pos);
    this_ptr->cursor_position = this_ptr->selection_start;
    return;
  }
  if (start_pos <= end_pos) {
    return;
  }
  shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(this_ptr,end_pos,start_pos);
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}
