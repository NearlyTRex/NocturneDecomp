// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
// Address: 004a5c10
// Address Range: [[004a5c10, 004a5e9b]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar *this_ptr)

{
  int iVar1;
  int width;
  int width_00;
  int top;
  int left;
  int top_00;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(this_ptr);
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (this_ptr->bounds_left + 1,this_ptr->bounds_top + 1,this_ptr->bounds_right + -2,
             this_ptr->bounds_bottom + -2,g_ShadowColor,g_ShadowHighlightColor);
  iVar1 = this_ptr->bounds_left + 1;
  width = this_ptr->bounds_right + -1;
  top_00 = this_ptr->bounds_top + 1;
  left = this_ptr->bounds_bottom + -1;
  if (this_ptr->orientation == 0) {
    top = this_ptr->thumb_start;
  }
  else {
    iVar1 = this_ptr->thumb_start;
    top = top_00;
  }
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 0)) {
    width_00 = 1;
  }
  else {
    width_00 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,top,width_00,width_00,width_00);
  if (this_ptr->orientation != 0) {
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,top_00,this_ptr->track_start,left,iVar1);
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0
              (iVar1,top_00,this_ptr->track_start,left,iVar1,2);
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004a58f0(this_ptr->track_end,top_00,left,left,iVar1);
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(this_ptr->track_end,top_00,left,left,iVar1,3);
    return;
  }
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,top_00,width,this_ptr->track_start,iVar1);
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(iVar1,top_00,0,this_ptr->track_start,iVar1,0);
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(left,this_ptr->track_end,left,left,iVar1);
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(left,this_ptr->track_end,left,left,iVar1,1);
  return;
}
