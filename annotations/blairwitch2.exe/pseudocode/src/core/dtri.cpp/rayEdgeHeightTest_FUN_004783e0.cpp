// Name: core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0
// Address: 004783e0
// Address Range: [[004783e0, 0047854c]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0(float *param_1,float *param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar3 = *param_2 - *param_1;
  fVar1 = param_2[2] - param_1[2];
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (0.0 < fVar2) {
    fVar1 = (*param_1 * fVar3 + param_1[2] * fVar1) * (float)_DAT_005d1de3;
    fVar3 = fVar1 * fVar1 -
            fVar2 * (float)_DAT_005d1deb *
            ((*param_1 * *param_1 + param_1[2] * param_1[2]) - param_3 * param_3);
    if (0.0 <= fVar3) {
      fVar4 = (-fVar1 - SQRT(fVar3)) / (fVar2 * (float)_DAT_005d1de3);
      uVar5 = 0;
      if (((0.0 <= fVar4) && (fVar4 <= 1.0)) &&
         (fVar4 = (param_2[1] - param_1[1]) * fVar4 + param_1[1], *param_4 < fVar4)) {
        uVar5 = 1;
        *param_4 = fVar4;
      }
      fVar1 = (SQRT(fVar3) - fVar1) / (fVar2 * (float)_DAT_005d1de3);
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
         (fVar1 = (param_2[1] - param_1[1]) * fVar1 + param_1[1], *param_4 < fVar1)) {
        uVar5 = 1;
        *param_4 = fVar1;
      }
      return uVar5;
    }
  }
  return 0;
}
