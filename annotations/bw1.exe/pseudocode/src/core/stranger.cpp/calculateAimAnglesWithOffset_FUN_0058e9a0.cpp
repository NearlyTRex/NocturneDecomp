// Name: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_0058e9a0
// Address: 0058e9a0
// Address Range: [[0058e9a0, 0058eb44]]
// Convention: unknown
// Signature: float * core_stranger_cpp_calculateAimAnglesWithOffset_FUN_0058e9a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float * core_stranger_cpp_calculateAimAnglesWithOffset_FUN_0058e9a0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float afStackY_1028 [1007];
  float fStack_40;
  float fStack_34;
  float fStack_30;
  
  bVar4 = 0;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
  fStack_34 = fStack_40;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fVar2 = SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
              );
  if ((float)_DAT_005f6ed1 < fVar2) {
    fVar1 = -*in_stack_00000008;
    if ((((float)_DAT_005f6ed1 <= fVar2) &&
        (fVar3 = SQRT(fVar2 * fVar2 - fVar1 * fVar1) / fVar2, fVar3 < 1.0)) && (0.0 <= fVar3)) {
      fVar5 = (float10)fVar3;
      acos();
      if (0.0 <= fVar1) {
        fStack_30 = fStack_30 + (float)fVar5;
      }
      else {
        fStack_30 = fStack_30 - (float)fVar5;
      }
      fStack_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_30);
    }
    fVar1 = in_stack_00000008[1];
    if (((_DAT_005f6ed1 <= (double)fVar2) &&
        (fVar2 = SQRT(fVar2 * fVar2 - fVar1 * fVar1) / fVar2, fVar2 < 1.0)) && (0.0 <= fVar2)) {
      fVar5 = (float10)fVar2;
      acos();
      if (0.0 <= fVar1) {
        fStack_34 = fStack_34 + (float)fVar5;
      }
      else {
        fStack_34 = fStack_34 - (float)fVar5;
      }
      fStack_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_34);
    }
  }
  *unaff_ESI = fStack_34;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(float *)((int)&stack0xffffffd0 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return unaff_ESI;
}
