// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_00484440
// Address: 00484440
// Address Range: [[00484440, 004847d4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00484440(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00484440(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int y2;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_28;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(this_ptr);
  iVar8 = g_ShadowColor;
  iVar3 = this_ptr->bounds_bottom;
  iVar4 = this_ptr->bounds_right;
  iVar7 = this_ptr->bounds_top;
  iVar9 = this_ptr->bounds_left;
  y2 = iVar3 + -2;
  iVar5 = iVar4 + -2;
  iVar2 = iVar9 + 1;
  iVar6 = iVar7 + 1;
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250
              (iVar2,iVar6,iVar5,y2,g_ShadowColor,g_ScrollBarHighlightColor);
  }
  else {
    iVar1 = g_ScrollBarHighlightColor;
    if (g_INT_01c25f84 != 0) {
      iVar1 = (g_ScrollBarHighlightColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2]);
      iVar1 = g_INT_01c35e60;
    }
    g_INT_01c35e60 = iVar1;
    engine_mini3d_cpp_drawRect_FUN_004f9340(iVar9,iVar7,iVar4 + -1,iVar3 + -1);
    if (g_INT_01c25f84 != 0) {
      iVar3 = (iVar8 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar3 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar3] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << 8);
      iVar8 = g_INT_01c35e60;
    }
    g_INT_01c35e60 = iVar8;
    engine_mini3d_cpp_fillRect_FUN_004f90d0(iVar2,iVar6,iVar5,y2);
  }
  iVar3 = this_ptr->bounds_right + -1;
  iVar4 = this_ptr->bounds_bottom + -1;
  iVar9 = this_ptr->bounds_top + 1;
  iVar7 = this_ptr->bounds_left + 1;
  if (this_ptr->orientation == 0) {
    iVar8 = this_ptr->thumb_end;
    iVar2 = this_ptr->thumb_start;
    iVar5 = iVar7;
    local_28 = iVar3;
  }
  else {
    iVar5 = this_ptr->thumb_start;
    iVar2 = iVar9;
    iVar8 = iVar4;
    local_28 = this_ptr->thumb_end;
  }
  if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 0)) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00483ea0(iVar5,iVar2,local_28,iVar8,iVar6);
  if (this_ptr->orientation == 0) {
    if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 1)) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_00483ea0(iVar7,iVar9,iVar3,this_ptr->track_start,iVar8);
    if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 1)) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004840f0
              (iVar7,iVar9,iVar3,this_ptr->track_start,iVar8,0);
    if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 2)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_00483ea0(iVar7,this_ptr->track_end,iVar3,iVar4,iVar9);
    if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 2)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004840f0(iVar7,this_ptr->track_end,iVar3,iVar4,iVar9,1)
    ;
    return;
  }
  if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 1)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00483ea0(iVar7,iVar9,this_ptr->track_start,iVar4,iVar8);
  if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 1)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004840f0(iVar7,iVar9,this_ptr->track_start,iVar4,iVar8,2)
  ;
  if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 2)) {
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00483ea0(this_ptr->track_end,iVar9,iVar3,iVar4,iVar7);
  if ((this_ptr == (CEdScrollBar *)g_ActiveControl) && (g_ScrollAction == 2)) {
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004840f0(this_ptr->track_end,iVar9,iVar3,iVar4,iVar7,3);
  return;
}
