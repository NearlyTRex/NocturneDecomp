// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004add80
// Address: 004add80
// Address Range: [[004add80, 004adeb5]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_onLaserHit_FUN_004add80(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_CGlass_onLaserHit_FUN_004add80(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  uint local_20;
  uint local_1c;
  
  core_actor_cpp_FUN_0040ab10(param_1,param_2);
  if (*(int *)(param_1 + 0x1e0) == 0) {
    *(float *)(param_2 + 0x48) = 1.0 - (float)*(int *)(param_1 + 0x174) * (float)1.5259021896696401e-05;
    return;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    *(uint *)(param_2 + 0x50) = 0x3f800000;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_1 + 0x154);
    fVar3 = *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x150);
    fVar5 = (float)0.5;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(param_1 + 0x36c));
    fVar6 = (float)DAT_005b762c;
    dVar7 = round((double)((fVar3 / fVar4 + fVar5) * fVar6));
    dVar8 = round((double)((1.0 - fVar1 / fVar2) * fVar6));
    local_20 = (int)ROUND(dVar7);
    local_1c = (int)ROUND(dVar8);
    if (local_20 < 0) {
      local_20 = 0;
    }
    if (DAT_005b762c <= local_20) {
      local_20 = DAT_005b762c + -1;
    }
    if (local_1c < 0) {
      local_1c = 0;
    }
    if (DAT_005b762c <= local_1c) {
      local_1c = DAT_005b762c + -1;
    }
    if (*(char *)(local_20 + local_1c * DAT_005b762c + _DAT_01c02580) == '\0') {
      *(uint *)(param_2 + 0x50) = 0x3f800000;
      return;
    }
  }
  return;
}
