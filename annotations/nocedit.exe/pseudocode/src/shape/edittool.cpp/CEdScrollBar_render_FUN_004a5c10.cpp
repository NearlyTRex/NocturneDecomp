// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
// Address: 004a5c10
// Address Range: [[004a5c10, 004a5e9b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar *this_ptr)

{
  int iVar1;
  int width;
  int iVar4;
  int iVar2;
  int border_style_flag;
  int top;
  int height;
  int iVar3;
  int local_20;
  int local_1c;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(this_ptr);
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (this_ptr->bounds_left + 1,this_ptr->bounds_top + 1,this_ptr->bounds_right + -2,
             this_ptr->bounds_bottom + -2,g_ShadowColor,g_ScrollBarHighlightColor);
  iVar1 = this_ptr->bounds_left + 1;
  width = this_ptr->bounds_right + -1;
  iVar3 = this_ptr->bounds_top + 1;
  height = this_ptr->bounds_bottom + -1;
  if (this_ptr->orientation == 0) {
    local_1c = this_ptr->thumb_end;
    top = this_ptr->thumb_start;
    iVar4 = iVar1;
    local_20 = width;
  }
  else {
    local_20 = this_ptr->thumb_end;
    iVar4 = this_ptr->thumb_start;
    top = iVar3;
    local_1c = height;
  }
  if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 0)) {
    border_style_flag = 1;
  }
  else {
    border_style_flag = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar4,top,local_20,local_1c,border_style_flag);
  if (this_ptr->orientation != 0) {
    if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 1)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,iVar3,this_ptr->track_start,height,iVar4);
    if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 1)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0
              (iVar1,iVar3,this_ptr->track_start,height,iVar2,2);
    if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 2)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004a58f0(this_ptr->track_end,iVar3,width,height,iVar4);
    if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 2)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0
              (this_ptr->track_end,iVar3,width,height,iVar4,3);
    return;
  }
  if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 1)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,iVar3,width,this_ptr->track_start,iVar4);
  if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 1)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(iVar1,iVar3,width,this_ptr->track_start,iVar4,0)
  ;
  if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 2)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,this_ptr->track_end,width,height,iVar4);
  if ((this_ptr == g_ActiveControl) && (g_ScrollAction == 2)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(iVar1,this_ptr->track_end,width,height,iVar4,1);
  return;
}
