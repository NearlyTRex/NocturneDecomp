// Name: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_0049c9f0
// Address: 0049c9f0
// Address Range: [[0049c9f0, 0049ca9c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_0049c9f0(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_0049c9f0(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  this_ptr->bounds_left = left_pos;
  this_ptr->bounds_top = top_pos;
  this_ptr->bounds_right = right_pos + 1;
  this_ptr->bounds_bottom = bottom_pos + 1;
  iVar1 = this_ptr->bounds_right - this_ptr->bounds_left;
  iVar2 = this_ptr->bounds_bottom - this_ptr->bounds_top;
  if (iVar2 < iVar1) {
    this_ptr->track_start = this_ptr->bounds_left + iVar2 + -1;
    iVar3 = this_ptr->bounds_right - iVar2;
    this_ptr->orientation = 1;
  }
  else {
    this_ptr->track_start = this_ptr->bounds_top + iVar1 + -1;
    iVar3 = this_ptr->bounds_bottom - iVar1;
    this_ptr->orientation = 0;
  }
  this_ptr->track_end = iVar3 + 1;
  if (((3 < iVar1) && (3 < iVar2)) && (3 < this_ptr->track_end - this_ptr->track_start)) {
    return;
  }
  _DAT_01d1d400 = "..\\shape\\edittool.cpp";
  _DAT_01d1d404 = 0x127c;
  core_main_c_FUN_005030e0("CEdScrollBar::setPosition - invalid dimensions.");
  return;
}
