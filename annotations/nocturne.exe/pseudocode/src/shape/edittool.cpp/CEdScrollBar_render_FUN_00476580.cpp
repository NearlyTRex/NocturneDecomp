// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_00476580
// Address: 00476580
// Address Range: [[00476580, 004767fb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00476580(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00476580(CEdScrollBar *this_ptr)

{
  int iVar1;
  int right;
  int iVar2;
  int top;
  int pressed;
  int bottom;
  int iVar3;
  int local_20;
  int local_1c;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(this_ptr);
  engine_2d_c_fillRectWithBorder_FUN_00403ef0
            (this_ptr->bounds_left + 1,this_ptr->bounds_top + 1,this_ptr->bounds_right + -2,
             this_ptr->bounds_bottom + -2,0,7);
  iVar1 = this_ptr->bounds_left + 1;
  iVar3 = this_ptr->bounds_top + 1;
  right = this_ptr->bounds_right + -1;
  bottom = this_ptr->bounds_bottom + -1;
  if (this_ptr->orientation == 0) {
    iVar2 = iVar1;
    top = this_ptr->thumb_start;
    local_20 = right;
    local_1c = this_ptr->thumb_end;
  }
  else {
    local_20 = this_ptr->thumb_end;
    iVar2 = this_ptr->thumb_start;
    top = iVar3;
    local_1c = bottom;
  }
  if ((this_ptr == _DAT_01bcde24) && (_DAT_01bcde28 == 0)) {
    pressed = 1;
  }
  else {
    pressed = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00476260(iVar2,top,local_20,local_1c,pressed);
  if (this_ptr->orientation != 0) {
    if ((this_ptr == _DAT_01bcde24) && (_DAT_01bcde28 == 1)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_00476260(iVar1,iVar3,this_ptr->track_start,bottom,iVar2);
    if ((this_ptr != _DAT_01bcde24) || (iVar2 = 1, _DAT_01bcde28 != 1)) {
      iVar2 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_00476310
              (iVar1,iVar3,this_ptr->track_start,bottom,iVar2,2);
    if ((this_ptr == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_00476260(this_ptr->track_end,iVar3,right,bottom,iVar1);
    if ((this_ptr == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_00476310
              (this_ptr->track_end,iVar3,right,bottom,iVar1,3);
    return;
  }
  if ((this_ptr == _DAT_01bcde24) && (_DAT_01bcde28 == 1)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00476260(iVar1,iVar3,right,this_ptr->track_start,iVar2);
  if ((this_ptr != _DAT_01bcde24) || (iVar2 = 1, _DAT_01bcde28 != 1)) {
    iVar2 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_00476310(iVar1,iVar3,right,this_ptr->track_start,iVar2,0)
  ;
  if ((this_ptr == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00476260(iVar1,this_ptr->track_end,right,bottom,iVar3);
  if ((this_ptr == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_00476310(iVar1,this_ptr->track_end,right,bottom,iVar3,1);
  return;
}
