// Name: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_00485590
// Address: 00485590
// Address Range: [[00485590, 0048563c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_00485590(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_00485590(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(this_ptr + 0x14) = left_pos;
  *(int *)(this_ptr + 0x18) = top_pos;
  *(int *)(this_ptr + 0x1c) = right_pos + 1;
  *(int *)(this_ptr + 0x20) = bottom_pos + 1;
  iVar1 = *(int *)(this_ptr + 0x1c) - *(int *)(this_ptr + 0x14);
  iVar2 = *(int *)(this_ptr + 0x20) - *(int *)(this_ptr + 0x18);
  if (iVar2 < iVar1) {
    *(int *)(this_ptr + 0x24) = *(int *)(this_ptr + 0x14) + iVar2 + -1;
    iVar3 = *(int *)(this_ptr + 0x1c) - iVar2;
    *(uint *)(this_ptr + 0x10) = 1;
  }
  else {
    *(int *)(this_ptr + 0x24) = *(int *)(this_ptr + 0x18) + iVar1 + -1;
    iVar3 = *(int *)(this_ptr + 0x20) - iVar1;
    *(uint *)(this_ptr + 0x10) = 0;
  }
  *(int *)(this_ptr + 0x28) = iVar3 + 1;
  if (((3 < iVar1) && (3 < iVar2)) && (3 < *(int *)(this_ptr + 0x28) - *(int *)(this_ptr + 0x24))) {
    return;
  }
  _DAT_01d71de0 = "..\\shape\\edittool.cpp";
  _DAT_01d71de4 = 0x127f;
  core_main_c_FUN_004e4330("CEdScrollBar::setPosition - invalid dimensions.");
  return;
}
