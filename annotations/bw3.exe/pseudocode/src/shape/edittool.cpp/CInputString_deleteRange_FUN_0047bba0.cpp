// Name: shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0
// Address: 0047bba0
// Address Range: [[0047bba0, 0047bc0c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0047bba0(CInputString *this_ptr,int start_pos,int end_pos)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0047bba0(CInputString *this_ptr,int start_pos,int end_pos)

{
  int iVar1;
  
  if (start_pos < 0) {
    start_pos = 0;
  }
  if (*(int *)(this_ptr + 0x130) < end_pos) {
    end_pos = *(int *)(this_ptr + 0x130);
  }
  if (start_pos < end_pos) {
    memmove
              (this_ptr + start_pos,this_ptr + end_pos,*(int *)(this_ptr + 0x130) - end_pos);
    iVar1 = *(int *)(this_ptr + 0x130) - (end_pos - start_pos);
    *(int *)(this_ptr + 0x130) = iVar1;
    if (iVar1 < *(int *)(this_ptr + 0x134)) {
      *(int *)(this_ptr + 0x134) = iVar1;
    }
    this_ptr[*(int *)(this_ptr + 0x130)] = (CInputString)0x0;
  }
  return;
}
