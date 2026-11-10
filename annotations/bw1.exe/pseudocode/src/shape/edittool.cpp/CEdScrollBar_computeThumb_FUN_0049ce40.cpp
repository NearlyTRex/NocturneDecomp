// Name: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_0049ce40
// Address: 0049ce40
// Address Range: [[0049ce40, 0049cf47]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(CEdScrollBar *this_ptr)

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
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x12cb;
    core_main_c_FUN_005030e0("CEdScrollBar::computeThumb - invalid dimensions");
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
