// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_00485640
// Address: 00485640
// Address Range: [[00485640, 004859d4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00485640(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00485640(CEdScrollBar *this_ptr)

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
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004859e0(this_ptr);
  iVar8 = g_INT_01c5bb54;
  iVar3 = this_ptr->bounds_bottom;
  iVar4 = this_ptr->bounds_right;
  iVar7 = this_ptr->bounds_top;
  iVar9 = this_ptr->bounds_left;
  y2 = iVar3 + -2;
  iVar5 = iVar4 + -2;
  iVar2 = iVar9 + 1;
  iVar6 = iVar7 + 1;
  if (g_INT_01c5baec == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar2,iVar6,iVar5,y2,g_INT_01c5bb54,g_INT_01c5bb58);
  }
  else {
    iVar1 = g_INT_01c5bb58;
    if (g_INT_01c5baec != 0) {
      iVar1 = (g_INT_01c5bb58 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar1] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar1 + 2]);
      iVar1 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar1;
    engine_mini3d_cpp_drawRect_FUN_004f3a60(iVar9,iVar7,iVar4 + -1,iVar3 + -1);
    if (g_INT_01c5baec != 0) {
      iVar3 = (iVar8 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 2] |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] << 8);
      iVar8 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar8;
    engine_mini3d_cpp_fillRect_FUN_004f37e0(iVar2,iVar6,iVar5,y2);
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
  if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 0)) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar5,iVar2,local_28,iVar8,iVar6);
  if (this_ptr->orientation == 0) {
    if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 1)) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar7,iVar9,iVar3,this_ptr->track_start,iVar8);
    if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 1)) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0
              (iVar7,iVar9,iVar3,this_ptr->track_start,iVar8,0);
    if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 2)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar7,this_ptr->track_end,iVar3,iVar4,iVar9);
    if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 2)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0(iVar7,this_ptr->track_end,iVar3,iVar4,iVar9,1)
    ;
    return;
  }
  if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 1)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar7,iVar9,this_ptr->track_start,iVar4,iVar8);
  if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 1)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0(iVar7,iVar9,this_ptr->track_start,iVar4,iVar8,2)
  ;
  if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 2)) {
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004850a0(this_ptr->track_end,iVar9,iVar3,iVar4,iVar7);
  if ((this_ptr == (CEdScrollBar *)g_PTR_01c5bb78) && (g_INT_01c5bb7c == 2)) {
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0(this_ptr->track_end,iVar9,iVar3,iVar4,iVar7,3);
  return;
}
