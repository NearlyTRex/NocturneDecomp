// Name: shape_edittool.cpp_FUN_00484440
// Address: 00484440
// Address Range: [[00484440, 004847d4]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00484440(CEdScrollBar *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00484440(CEdScrollBar *param_1)

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
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(param_1);
  uVar10 = _DAT_01c263ec;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar9 = *(int *)(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x14);
  y2 = iVar4 + -2;
  iVar6 = iVar5 + -2;
  iVar3 = iVar11 + 1;
  iVar7 = iVar9 + 1;
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar3,iVar7,iVar6,y2,_DAT_01c263ec,_DAT_01c263f0);
  }
  else {
    uVar2 = _DAT_01c263f0;
    if (_DAT_01c25f84 != 0) {
      iVar1 = (_DAT_01c263f0 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar1] << 8 | (uint)(byte)(&DAT_01c3583a)[iVar1]);
      uVar2 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar2;
    engine_mini3d_cpp_FUN_004f9340(iVar11,iVar9,iVar5 + -1,iVar4 + -1);
    if (_DAT_01c25f84 != 0) {
      iVar4 = (uVar10 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                 (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
      uVar10 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar10;
    engine_mini3d_cpp_FUN_004f90d0(iVar3,iVar7,iVar6,y2);
  }
  iVar4 = *(int *)(param_1 + 0x1c) + -1;
  iVar5 = *(int *)(param_1 + 0x20) + -1;
  iVar11 = *(int *)(param_1 + 0x18) + 1;
  iVar9 = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x2c);
    iVar7 = iVar9;
    local_28 = iVar4;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x2c);
    iVar6 = iVar11;
    iVar3 = iVar5;
    local_28 = *(int *)(param_1 + 0x30);
  }
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_00483ea0(iVar7,iVar6,local_28,iVar3,uVar8);
  if (*(int *)(param_1 + 0x10) == 0) {
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_00483ea0(iVar9,iVar11,iVar4,*(uint *)(param_1 + 0x24),uVar8);
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_004840f0(iVar9,iVar11,iVar4,*(uint *)(param_1 + 0x24),uVar8,0);
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_00483ea0(iVar9,*(uint *)(param_1 + 0x28),iVar4,iVar5,uVar8);
    if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    shape_edittool_cpp_FUN_004840f0(iVar9,*(uint *)(param_1 + 0x28),iVar4,iVar5,uVar8,1);
    return;
  }
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_00483ea0(iVar9,iVar11,*(uint *)(param_1 + 0x24),iVar5,uVar8);
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_004840f0(iVar9,iVar11,*(uint *)(param_1 + 0x24),iVar5,uVar8,2);
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_00483ea0(*(uint *)(param_1 + 0x28),iVar11,iVar4,iVar5,uVar8);
  if ((param_1 == _DAT_01c26410) && (_DAT_01c26414 == 2)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  shape_edittool_cpp_FUN_004840f0(*(uint *)(param_1 + 0x28),iVar11,iVar4,iVar5,uVar8,3);
  return;
}
