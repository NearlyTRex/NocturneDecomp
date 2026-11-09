// Name: shape_spotview.cpp_FUN_005619ee
// Address: 005619ee
// Address Range: [[005619ee, 00561ccc]]
// Convention: unknown
// Signature: void shape_spotview_cpp_FUN_005619ee(CSpotView *param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_spotview_cpp_FUN_005619ee(CSpotView *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_20;
  float fVar5;
  float fStack_c;
  
  fStack_20 = 1.0;
  iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x38);
  if (iVar4 == 0) {
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
    if (iVar4 != 0) {
      fStack_20 = 4.0;
    }
  }
  else {
    fStack_20 = 0.05;
  }
  fVar3 = (float)_DAT_005eb0f8;
  fVar1 = *(float *)&g_CGamePtr->field_0x284 * fStack_20;
  fVar5 = *(float *)(param_1 + 0x2c) * (float)_DAT_005eb100;
  fVar2 = fVar1 * _DAT_005eb0f0;
  if (fVar5 < 1.0) {
    fVar5 = 1.0;
  }
  fVar5 = fVar5 * fVar1;
  fStack_c = *(float *)(param_1 + 0x2c);
  if (*(float *)(param_1 + 0x2c) < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((param_2 & 2) != 0) {
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x52);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar2;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x53);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fVar2;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x35);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar2;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x37);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fVar2;
    }
  }
  if ((param_2 & 1) != 0) {
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x4a);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fVar2;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x4e);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - fVar2;
    }
  }
  if ((param_2 & 8) != 0) {
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x4b);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fStack_c;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x4d);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fStack_c;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x10);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_c;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1e);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - fStack_c;
    }
  }
  if ((param_2 & 4) != 0) {
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x48);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar5;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x50);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar5;
    }
  }
  if ((param_2 & 0x10) != 0) {
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xd);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) / (fStack_20 * fVar3);
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xc);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * fStack_20 * fVar3;
    }
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4c);
  if (iVar4 == 0) {
    shape_spotview_cpp_FUN_00561cd0(param_1);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_005619a0(param_1,param_2);
  shape_spotview_cpp_FUN_00561cd0(param_1);
  return;
}
