// Name: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004847e0
// Address: 004847e0
// Address Range: [[004847e0, 004848e7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->item_count <= this_ptr->page_size) || (this_ptr->item_count < 1)) {
    this_ptr->thumb_start = this_ptr->track_start;
    this_ptr->thumb_end = this_ptr->track_end;
    return;
  }
  iVar3 = this_ptr->track_end - this_ptr->track_start;
  if (iVar3 < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x124a;
    core_main_c_FUN_004e4500("CEdScrollBar::computeThumb - invalid dimensions");
  }
  iVar1 = (this_ptr->page_size * iVar3) / this_ptr->item_count;
  if (this_ptr->orientation == 0) {
    iVar2 = this_ptr->bounds_right - this_ptr->bounds_left;
  }
  else {
    iVar2 = this_ptr->bounds_bottom - this_ptr->bounds_top;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  iVar3 = this_ptr->track_start +
          ((iVar3 - iVar1) * this_ptr->scroll_position) /
          (this_ptr->item_count - this_ptr->page_size);
  this_ptr->thumb_start = iVar3;
  if (iVar3 < this_ptr->track_start) {
    this_ptr->thumb_start = this_ptr->track_start;
  }
  iVar1 = this_ptr->thumb_start + iVar1;
  this_ptr->thumb_end = iVar1;
  if (this_ptr->track_end < iVar1) {
    this_ptr->thumb_end = this_ptr->track_end;
    this_ptr->thumb_start = this_ptr->thumb_start - (iVar1 - this_ptr->track_end);
  }
  if (this_ptr->track_start <= this_ptr->thumb_start) {
    return;
  }
  this_ptr->thumb_start = this_ptr->track_start;
  return;
}
