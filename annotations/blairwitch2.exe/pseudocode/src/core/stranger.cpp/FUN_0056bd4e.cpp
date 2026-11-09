// Name: core_stranger.cpp_FUN_0056bd4e
// Address: 0056bd4e
// Address Range: [[0056bd4e, 0056bef4]]
// Convention: unknown
// Signature: float * core_stranger_cpp_FUN_0056bd4e(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_stranger_cpp_FUN_0056bd4e(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  float afStackY_1028 [1007];
  float fStack_40;
  float fStack_34;
  float fStack_30;
  
  bVar4 = 0;
  core_vecdir_cpp_FUN_005838f0(param_1);
  fStack_34 = fStack_40;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fVar2 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if ((float)_DAT_005ebc5d < fVar2) {
    fVar1 = -*param_2;
    if ((((float)_DAT_005ebc5d <= fVar2) &&
        (fVar3 = SQRT(fVar2 * fVar2 - fVar1 * fVar1) / fVar2, fVar3 < 1.0)) && (0.0 <= fVar3)) {
      fVar5 = (float10)fVar3;
      acos();
      if (0.0 <= fVar1) {
        fStack_30 = fStack_30 + (float)fVar5;
      }
      else {
        fStack_30 = fStack_30 - (float)fVar5;
      }
      fStack_30 = (float)core_actor_cpp_FUN_0040d0c0(fStack_30);
    }
    fVar1 = param_2[1];
    if (((_DAT_005ebc5d <= (double)fVar2) &&
        (fVar2 = SQRT(fVar2 * fVar2 - fVar1 * fVar1) / fVar2, fVar2 < 1.0)) && (0.0 <= fVar2)) {
      fVar5 = (float10)fVar2;
      acos();
      if (0.0 <= fVar1) {
        fStack_34 = fStack_34 + (float)fVar5;
      }
      else {
        fStack_34 = fStack_34 - (float)fVar5;
      }
      fStack_34 = (float)core_actor_cpp_FUN_0040d0c0(fStack_34);
    }
  }
  *unaff_ESI = fStack_34;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(float *)((int)&stack0xffffffd0 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return unaff_ESI;
}
