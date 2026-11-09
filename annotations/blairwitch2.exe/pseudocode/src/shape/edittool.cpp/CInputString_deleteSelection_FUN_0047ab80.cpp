// Name: shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80
// Address: 0047ab80
// Address Range: [[0047ab80, 0047abca]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString *this_ptr)

{
  int start_pos;
  int end_pos;
  
  start_pos = *(int *)(this_ptr + 0x138);
  end_pos = *(int *)(this_ptr + 0x134);
  if (start_pos < end_pos) {
    shape_edittool_cpp_CInputString_deleteRange_FUN_0047ab10(this_ptr,start_pos,end_pos);
    *(uint *)(this_ptr + 0x134) = *(uint *)(this_ptr + 0x138);
    return;
  }
  if (start_pos <= end_pos) {
    return;
  }
  shape_edittool_cpp_CInputString_deleteRange_FUN_0047ab10(this_ptr,end_pos,start_pos);
  *(uint *)(this_ptr + 0x138) = *(uint *)(this_ptr + 0x134);
  return;
}
