// Name: shape_edittool.cpp_CInputString_backspace_FUN_0047abd0
// Address: 0047abd0
// Address Range: [[0047abd0, 0047ac08]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0047abd0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0047abd0(CInputString *this_ptr)

{
  int end_pos;
  
  end_pos = *(int *)(this_ptr + 0x134);
  if (end_pos < 1) {
    shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(this_ptr);
    return;
  }
  *(int *)(this_ptr + 0x134) = end_pos + -1;
  shape_edittool_cpp_CInputString_deleteRange_FUN_0047ab10(this_ptr,end_pos + -1,end_pos);
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(this_ptr);
  return;
}
