// Name: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
// Address: 004a5ea0
// Address Range: [[004a5ea0, 004a5fa7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->current_value <= this_ptr->max_value) || (this_ptr->current_value < 1)) {
    this_ptr->thumb_start = this_ptr->track_start;
    this_ptr->thumb_end = this_ptr->track_end;
    return;
  }
  iVar3 = this_ptr->track_end - this_ptr->track_start;
  if (iVar3 < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4442;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEdScrollBar::computeThumb - invalid dimensions");
  }
  iVar1 = (this_ptr->max_value * iVar3) / this_ptr->current_value;
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
          (this_ptr->current_value - this_ptr->max_value);
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
