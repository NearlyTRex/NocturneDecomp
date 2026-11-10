// Name: shape_edittool.cpp_CInputString_backspace_FUN_0047bc60
// Address: 0047bc60
// Address Range: [[0047bc60, 0047bc98]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0047bc60(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0047bc60(CInputString *this_ptr)

{
  int end_pos;
  
  end_pos = this_ptr->cursor_position;
  if (end_pos < 1) {
    shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(this_ptr);
    return;
  }
  this_ptr->cursor_position = end_pos + -1;
  shape_edittool_cpp_CInputString_deleteRange_FUN_0047bba0(this_ptr,end_pos + -1,end_pos);
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(this_ptr);
  return;
}
