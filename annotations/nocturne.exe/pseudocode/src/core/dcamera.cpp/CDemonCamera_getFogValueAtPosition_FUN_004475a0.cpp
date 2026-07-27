// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
// Address: 004475a0
// Address Range: [[004475a0, 0044766d]]
// Convention: unknown
// Signature: int core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(int param_1,int *param_2)

#include "nocturne.h"

int core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  uint uVar6;
  
  fVar3 = (float10)((float)(param_2[1] - *(int *)(param_1 + 0x170)) * 0.00390625f);
  fVar4 = (float10)((float)(*param_2 - *(int *)(param_1 + 0x16c)) * 0.00390625f);
  fVar5 = (float10)((float)(param_2[2] - *(int *)(param_1 + 0x174)) * 0.00390625f);
  uVar6 = 0x447622;
  fVar3 = (float10)round
                             (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) *
                              (float10)256);
  iVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80
                    (0x140d784,param_1 + 0x16c,param_2,(int)ROUND(fVar3),uVar6);
  uVar2 = (uint)(iVar1 * 0xff) >> 0xe;
  if (0xff < uVar2) {
    return 0xffff;
  }
  return uVar2 << 8;
}
