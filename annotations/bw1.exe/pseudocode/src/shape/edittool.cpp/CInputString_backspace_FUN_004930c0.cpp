// Name: shape_edittool.cpp_CInputString_backspace_FUN_004930c0
// Address: 004930c0
// Address Range: [[004930c0, 004930f8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_004930c0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_004930c0(CInputString *this_ptr)

{
  int end_pos;
  
  end_pos = *(int *)(this_ptr + 0x134);
  if (end_pos < 1) {
    shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(this_ptr);
    return;
  }
  *(int *)(this_ptr + 0x134) = end_pos + -1;
  shape_edittool_cpp_CInputString_deleteRange_FUN_00493000(this_ptr,end_pos + -1,end_pos);
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(this_ptr);
  return;
}
