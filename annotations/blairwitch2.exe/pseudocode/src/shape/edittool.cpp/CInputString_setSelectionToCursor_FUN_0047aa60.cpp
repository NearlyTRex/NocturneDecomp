// Name: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60
// Address: 0047aa60
// Address Range: [[0047aa60, 0047aa70]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(CInputString *this_ptr)

{
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}
