// Name: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50
// Address: 00492f50
// Address Range: [[00492f50, 00492f60]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString *this_ptr)

{
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}
