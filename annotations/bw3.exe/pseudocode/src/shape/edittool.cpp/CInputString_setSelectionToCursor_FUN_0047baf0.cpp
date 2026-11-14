// Name: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0
// Address: 0047baf0
// Address Range: [[0047baf0, 0047bb00]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString *this_ptr)

{
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}
