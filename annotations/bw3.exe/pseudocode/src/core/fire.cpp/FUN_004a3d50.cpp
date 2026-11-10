// Name: core_fire.cpp_FUN_004a3d50
// Address: 004a3d50
// Address Range: [[004a3d50, 004a3e66]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a3d50(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6,SMRGLTextureBasic *param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a3d50(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6,SMRGLTextureBasic *param_7)

{
  int iVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1024 [1011];
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_14;
  
  bVar4 = 0;
  fStack_30 = *param_3 - *param_2;
  fStack_2c = param_3[1] - param_2[1];
  fStack_28 = param_3[2] - param_2[2];
  fVar5 = (float10)1 +
          (SQRT((float10)fStack_28 * (float10)fStack_28 +
                (float10)fStack_30 * (float10)fStack_30 + (float10)fStack_2c * (float10)fStack_2c) *
          (float10)_DAT_005c0a48) / (float10)param_4;
  fStack_24 = fStack_30;
  fStack_20 = fStack_2c;
  fStack_1c = fStack_28;
  round();
  iVar1 = (int)ROUND(fVar5);
  fVar2 = 1.0 / (float)iVar1;
  iVar3 = 0;
  CStack_3c.x = *param_2;
  iStack_14 = iVar1;
  *(float *)((int)&CStack_3c + (uint)bVar4 * -8 + 4) = param_2[(uint)bVar4 * -2 + 1];
  *(float *)((int)&CStack_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       (param_2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  fStack_30 = fStack_30 * fVar2;
  fStack_2c = fStack_2c * fVar2;
  fStack_28 = fStack_28 * fVar2;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
                (param_1,&CStack_3c,param_4,param_5,param_6,param_7);
      iVar3 = iVar3 + 1;
      CStack_3c.x = CStack_3c.x + fStack_30;
      CStack_3c.y = CStack_3c.y + fStack_2c;
      CStack_3c.z = CStack_3c.z + fStack_28;
    } while (iVar3 < iVar1);
  }
  return;
}
