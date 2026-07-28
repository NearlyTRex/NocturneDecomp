// Name: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130
// Address: 0046f130
// Address Range: [[0046f130, 0046f140]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString *this_ptr)

{
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}
