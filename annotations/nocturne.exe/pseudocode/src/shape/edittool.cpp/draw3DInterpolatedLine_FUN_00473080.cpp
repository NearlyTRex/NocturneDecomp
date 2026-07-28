// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_00473080
// Address: 00473080
// Address Range: [[00473080, 0047318e]]
// Convention: unknown
// Signature: void shape_edittool_cpp_draw3DInterpolatedLine_FUN_00473080(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_draw3DInterpolatedLine_FUN_00473080(float *param_1,float *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_8c [12];
  uint auStackY_5c [5];
  uint uStackY_48;
  byte local_24 [12];
  int iStack_18;
  int iStack_14;
  float fStack_10;
  
  bVar4 = 0;
  local_24._0_4_ = (uint)ROUND(*param_1 * _DAT_0059ca4c);
  local_24._4_4_ = (uint)ROUND(param_1[1] * _DAT_0059ca4c);
  local_24._8_4_ = (uint)ROUND(param_1[2] * _DAT_0059ca4c);
  uStackY_48 = 0x4730c2;
  engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)local_24);
  local_24._0_4_ = param_2[1] * 0.000878906456455297._0_4_;
  local_24._4_4_ = 0.000878906456455297._0_4_ * param_2[2];
  fStack_10 = *param_1 * 0.000878906456455297._4_4_ + *param_2 * 0.000878906456455297._0_4_;
  local_24._8_4_ = (uint)ROUND(fStack_10 * _DAT_0059ca4c);
  iStack_18 = (int)ROUND((param_1[1] * 0.000878906456455297._4_4_ + (float)local_24._0_4_) *
                         _DAT_0059ca4c);
  iStack_14 = (int)ROUND((0.000878906456455297._4_4_ * param_1[2] + (float)local_24._4_4_) *
                         _DAT_0059ca4c);
  engine_matrix_c_transformToCache_FUN_004cd210(1,(CVector3i *)(local_24 + 8));
  puVar2 = &DAT_005c5044;
  puVar3 = auStackY_5c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = &DAT_005c5014;
  puVar3 = auStackY_8c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290();
  return;
}
