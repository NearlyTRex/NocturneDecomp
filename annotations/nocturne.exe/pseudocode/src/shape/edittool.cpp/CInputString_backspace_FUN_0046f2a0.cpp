// Name: shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0
// Address: 0046f2a0
// Address Range: [[0046f2a0, 0046f2d8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0046f2a0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0046f2a0(CInputString *this_ptr)

{
  int end_pos;
  
  end_pos = this_ptr->cursor_position;
  if (end_pos < 1) {
    shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(this_ptr);
    return;
  }
  this_ptr->cursor_position = end_pos + -1;
  shape_edittool_cpp_CInputString_deleteRange_FUN_0046f1e0(this_ptr,end_pos + -1,end_pos);
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(this_ptr);
  return;
}
