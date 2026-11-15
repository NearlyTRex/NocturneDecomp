// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_00485640
// Address: 00485640
// Address Range: [[00485640, 004859d4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00485640(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00485640(CEdScrollBar *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_28;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004859e0(this_ptr);
  uVar10 = _DAT_01c5bb54;
  iVar4 = this_ptr->bounds_bottom;
  iVar5 = this_ptr->bounds_right;
  iVar9 = this_ptr->bounds_top;
  iVar11 = this_ptr->bounds_left;
  iVar8 = iVar4 + -2;
  iVar6 = iVar5 + -2;
  iVar3 = iVar11 + 1;
  iVar7 = iVar9 + 1;
  if (_DAT_01c5baec == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar3,iVar7,iVar6,iVar8,_DAT_01c5bb54,_DAT_01c5bb58)
    ;
  }
  else {
    uVar2 = _DAT_01c5bb58;
    if (_DAT_01c5baec != 0) {
      iVar1 = (_DAT_01c5bb58 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar1] << 8 | (uint)(byte)(&DAT_01c6af9a)[iVar1]);
      uVar2 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar2;
    engine_mini3d_cpp_drawRect_FUN_004f3a60(iVar11,iVar9,iVar5 + -1,iVar4 + -1);
    if (_DAT_01c5baec != 0) {
      iVar4 = (uVar10 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                 (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
      uVar10 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar10;
    engine_mini3d_cpp_fillRect_FUN_004f37e0(iVar3,iVar7,iVar6,iVar8);
  }
  iVar4 = this_ptr->bounds_right + -1;
  iVar5 = this_ptr->bounds_bottom + -1;
  iVar11 = this_ptr->bounds_top + 1;
  iVar9 = this_ptr->bounds_left + 1;
  if (this_ptr->orientation == 0) {
    iVar3 = this_ptr->thumb_end;
    iVar6 = this_ptr->thumb_start;
    iVar7 = iVar9;
    local_28 = iVar4;
  }
  else {
    iVar7 = this_ptr->thumb_start;
    iVar6 = iVar11;
    iVar3 = iVar5;
    local_28 = this_ptr->thumb_end;
  }
  if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 0)) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar7,iVar6,local_28,iVar3,iVar8);
  if (this_ptr->orientation == 0) {
    if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar9,iVar11,iVar4,this_ptr->track_start,iVar3);
    if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0
              (iVar9,iVar11,iVar4,this_ptr->track_start,iVar3,0);
    if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar9,this_ptr->track_end,iVar4,iVar5,iVar11);
    if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0
              (iVar9,this_ptr->track_end,iVar4,iVar5,iVar11,1);
    return;
  }
  if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004850a0(iVar9,iVar11,this_ptr->track_start,iVar5,iVar3);
  if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0
            (iVar9,iVar11,this_ptr->track_start,iVar5,iVar3,2);
  if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004850a0(this_ptr->track_end,iVar11,iVar4,iVar5,iVar9);
  if ((this_ptr == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0(this_ptr->track_end,iVar11,iVar4,iVar5,iVar9,3);
  return;
}
