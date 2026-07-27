// Name: shape_edittool.cpp_FUN_00476580
// Address: 00476580
// Address Range: [[00476580, 004767fb]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00476580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00476580(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_20;
  uint local_1c;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(param_1);
  engine_2d_c_fillRectWithBorder_FUN_00403ef0
            (*(int *)(param_1 + 0x14) + 1,*(int *)(param_1 + 0x18) + 1,*(int *)(param_1 + 0x1c) + -2
             ,*(int *)(param_1 + 0x20) + -2,0,7);
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  iVar7 = *(int *)(param_1 + 0x18) + 1;
  iVar2 = *(int *)(param_1 + 0x1c) + -1;
  iVar6 = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = iVar1;
    iVar4 = *(int *)(param_1 + 0x2c);
    local_20 = iVar2;
    local_1c = *(int *)(param_1 + 0x30);
  }
  else {
    local_20 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar4 = iVar7;
    local_1c = iVar6;
  }
  if ((param_1 == _DAT_01bcde24) && (_DAT_01bcde28 == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00476260(iVar3,iVar4,local_20,local_1c,uVar5);
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((param_1 == _DAT_01bcde24) && (_DAT_01bcde28 == 1)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_00476260
              (iVar1,iVar7,*(uint *)(param_1 + 0x24),iVar6,uVar5);
    if ((param_1 != _DAT_01bcde24) || (uVar5 = 1, _DAT_01bcde28 != 1)) {
      uVar5 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_00476310
              (iVar1,iVar7,*(uint *)(param_1 + 0x24),iVar6,uVar5,2);
    if ((param_1 == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_00476260
              (*(uint *)(param_1 + 0x28),iVar7,iVar2,iVar6,uVar5);
    if ((param_1 == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_00476310
              (*(uint *)(param_1 + 0x28),iVar7,iVar2,iVar6,uVar5,3);
    return;
  }
  if ((param_1 == _DAT_01bcde24) && (_DAT_01bcde28 == 1)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00476260
            (iVar1,iVar7,iVar2,*(uint *)(param_1 + 0x24),uVar5);
  if ((param_1 != _DAT_01bcde24) || (uVar5 = 1, _DAT_01bcde28 != 1)) {
    uVar5 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_00476310
            (iVar1,iVar7,iVar2,*(uint *)(param_1 + 0x24),uVar5,0);
  if ((param_1 == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_00476260
            (iVar1,*(uint *)(param_1 + 0x28),iVar2,iVar6,uVar5);
  if ((param_1 == _DAT_01bcde24) && (_DAT_01bcde28 == 2)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_00476310
            (iVar1,*(uint *)(param_1 + 0x28),iVar2,iVar6,uVar5,1);
  return;
}
