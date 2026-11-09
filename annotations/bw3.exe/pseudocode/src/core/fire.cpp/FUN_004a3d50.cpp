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
  byte auStack_3c [4];
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_14;
  
  bVar4 = 0;
  afStack_38[2] = *param_3 - *param_2;
  afStack_38[3] = param_3[1] - param_2[1];
  fStack_28 = param_3[2] - param_2[2];
  fVar5 = (float10)1 +
          (SQRT((float10)fStack_28 * (float10)fStack_28 +
                (float10)afStack_38[2] * (float10)afStack_38[2] +
                (float10)afStack_38[3] * (float10)afStack_38[3]) * (float10)_DAT_005c0a48) /
          (float10)param_4;
  fStack_24 = afStack_38[2];
  fStack_20 = afStack_38[3];
  fStack_1c = fStack_28;
  round();
  iVar1 = (int)ROUND(fVar5);
  fVar2 = 1.0 / (float)iVar1;
  iVar3 = 0;
  auStack_3c = (byte  [4])*param_2;
  iStack_14 = iVar1;
  afStack_38[(uint)bVar4 * -2] = param_2[(uint)bVar4 * -2 + 1];
  afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       (param_2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  afStack_38[2] = afStack_38[2] * fVar2;
  afStack_38[3] = afStack_38[3] * fVar2;
  fStack_28 = fStack_28 * fVar2;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
                (param_1,(CVector3f *)auStack_3c,param_4,param_5,param_6,param_7);
      iVar3 = iVar3 + 1;
      auStack_3c = (byte  [4])((float)auStack_3c + afStack_38[2]);
      afStack_38[0] = afStack_38[0] + afStack_38[3];
      afStack_38[1] = afStack_38[1] + fStack_28;
    } while (iVar3 < iVar1);
  }
  return;
}
