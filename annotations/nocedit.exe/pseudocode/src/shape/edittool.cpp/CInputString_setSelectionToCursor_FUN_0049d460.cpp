// Name: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
// Address: 0049d460
// Address Range: [[0049d460, 0049d470]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString *this_ptr)

{
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}
