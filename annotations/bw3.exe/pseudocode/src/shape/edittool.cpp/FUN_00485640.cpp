// Name: shape_edittool.cpp_FUN_00485640
// Address: 00485640
// Address Range: [[00485640, 004859d4]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00485640(CEdScrollBar *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00485640(CEdScrollBar *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int y2;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_28;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004859e0(param_1);
  uVar10 = _DAT_01c5bb54;
  iVar4 = param_1->bounds_bottom;
  iVar5 = param_1->bounds_right;
  iVar9 = param_1->bounds_top;
  iVar11 = param_1->bounds_left;
  y2 = iVar4 + -2;
  iVar6 = iVar5 + -2;
  iVar3 = iVar11 + 1;
  iVar7 = iVar9 + 1;
  if (_DAT_01c5baec == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar3,iVar7,iVar6,y2,_DAT_01c5bb54,_DAT_01c5bb58);
  }
  else {
    uVar2 = _DAT_01c5bb58;
    if (_DAT_01c5baec != 0) {
      iVar1 = (_DAT_01c5bb58 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar1] << 8 | (uint)(byte)(&DAT_01c6af9a)[iVar1]);
      uVar2 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar2;
    engine_mini3d_cpp_FUN_004f3a60(iVar11,iVar9,iVar5 + -1,iVar4 + -1);
    if (_DAT_01c5baec != 0) {
      iVar4 = (uVar10 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f3520
                ((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                 (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
      uVar10 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar10;
    engine_mini3d_cpp_FUN_004f37e0(iVar3,iVar7,iVar6,y2);
  }
  iVar4 = param_1->bounds_right + -1;
  iVar5 = param_1->bounds_bottom + -1;
  iVar11 = param_1->bounds_top + 1;
  iVar9 = param_1->bounds_left + 1;
  if (param_1->orientation == 0) {
    iVar3 = param_1->thumb_end;
    iVar6 = param_1->thumb_start;
    iVar7 = iVar9;
    local_28 = iVar4;
  }
  else {
    iVar7 = param_1->thumb_start;
    iVar6 = iVar11;
    iVar3 = iVar5;
    local_28 = param_1->thumb_end;
  }
  if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_004850a0(iVar7,iVar6,local_28,iVar3,uVar8);
  if (param_1->orientation == 0) {
    if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_004850a0(iVar9,iVar11,iVar4,param_1->track_start,uVar8);
    if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_004852f0(iVar9,iVar11,iVar4,param_1->track_start,uVar8,0);
    if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_004850a0(iVar9,param_1->track_end,iVar4,iVar5,uVar8);
    if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_004852f0(iVar9,param_1->track_end,iVar4,iVar5,uVar8,1);
    return;
  }
  if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_004850a0(iVar9,iVar11,param_1->track_start,iVar5,uVar8);
  if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_004852f0(iVar9,iVar11,param_1->track_start,iVar5,uVar8,2);
  if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_004850a0(param_1->track_end,iVar11,iVar4,iVar5,uVar8);
  if ((param_1 == _DAT_01c5bb78) && (_DAT_01c5bb7c == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_004852f0(param_1->track_end,iVar11,iVar4,iVar5,uVar8,3);
  return;
}
