// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
// Address: 004475a0
// Address Range: [[004475a0, 0044766d]]
// Convention: unknown
// Signature: int core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(int param_1,int *param_2)

#include "nocturne.h"

int core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  uint uVar7;
  
  fVar1 = (float)(*param_2 - *(int *)(param_1 + 0x16c)) * 0.00390625f;
  fVar2 = (float)(param_2[1] - *(int *)(param_1 + 0x170)) * 0.00390625f;
  fVar3 = (float)(param_2[2] - *(int *)(param_1 + 0x174)) * 0.00390625f;
  uVar7 = 0x447622;
  dVar6 = round
                    ((double)(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) *
                             (float)256));
  iVar4 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80
                    (0x140d784,param_1 + 0x16c,param_2,(int)ROUND(dVar6),uVar7);
  uVar5 = (uint)(iVar4 * 0xff) >> 0xe;
  if (0xff < uVar5) {
    return 0xffff;
  }
  return uVar5 << 8;
}
