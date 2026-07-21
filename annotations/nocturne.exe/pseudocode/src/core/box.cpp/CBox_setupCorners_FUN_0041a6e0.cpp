// Name: core_box.cpp_CBox_setupCorners_FUN_0041a6e0
// Address: 0041a6e0
// Address Range: [[0041a6e0, 0041a90d]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041a6e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041a6e0(int param_1,uint param_2,uint param_3,uint *param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((uint *)(param_1 + 0xa4) != param_4) {
    *(uint *)(param_1 + 0xa4) = *param_4;
    *(uint *)(param_1 + 0xa8) = param_4[1];
    *(uint *)(param_1 + 0xac) = param_4[2];
  }
  fVar1 = (float)ram0x0057964d;
  fVar2 = (float)ram0x0057964d;
  fVar3 = (float)ram0x0057964d;
  fVar4 = (float)ram0x0057964d;
  fVar5 = (float)ram0x0057964d;
  fVar6 = (float)ram0x0057964d;
  *(uint *)(param_1 + 0xb0) = 8;
  fVar7 = (float)ram0x0057964d;
  *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xa4) * fVar1;
  fVar1 = (float)ram0x0057964d;
  *(float *)(param_1 + 0xb8) = -*(float *)(param_1 + 0xa8) * fVar7;
  fVar7 = (float)ram0x0057964d;
  *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xac) * fVar2;
  fVar2 = (float)ram0x0057964d;
  *(float *)(param_1 + 0xe8) = -*(float *)(param_1 + 0xa4) * fVar7;
  fVar7 = (float)ram0x0057964d;
  *(float *)(param_1 + 0xec) = -*(float *)(param_1 + 0xa8) * fVar2;
  fVar2 = (float)ram0x0057964d;
  *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xac) * fVar3;
  fVar3 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x11c) = -*(float *)(param_1 + 0xa4) * fVar2;
  fVar2 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x120) = -*(float *)(param_1 + 0xa8) * fVar3;
  fVar3 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0xa4) * fVar4;
  fVar4 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x184) = *(float *)(param_1 + 0xa4) * fVar5;
  fVar5 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0xa8) * fVar6;
  fVar6 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0xac) * fVar1;
  fVar1 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0xa8) * fVar7;
  fVar7 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0xac) * fVar5;
  fVar5 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0xa8) * fVar6;
  *(float *)(param_1 + 0x124) = -*(float *)(param_1 + 0xac) * fVar2;
  *(float *)(param_1 + 0x154) = -*(float *)(param_1 + 0xa8) * fVar3;
  *(float *)(param_1 + 0x158) = -*(float *)(param_1 + 0xac) * fVar4;
  *(float *)(param_1 + 0x1b8) = -*(float *)(param_1 + 0xa4) * fVar1;
  *(float *)(param_1 + 0x1ec) = -*(float *)(param_1 + 0xa4) * fVar7;
  *(float *)(param_1 + 500) = -*(float *)(param_1 + 0xac) * fVar5;
  fVar1 = (float)ram0x0057964d;
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0xa4) * fVar1;
  *(float *)(param_1 + 0x224) = *(float *)(param_1 + 0xa8) * fVar1;
  *(float *)(param_1 + 0x228) = -*(float *)(param_1 + 0xac) * fVar1;
  core_box_cpp_CBox_updateTransform_FUN_0041aaa0(param_1,param_2,param_3,param_5);
  return;
}
