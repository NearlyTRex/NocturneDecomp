// Name: core_stranger.cpp_FUN_0056bd50
// Address: 0056bd50
// Address Range: [[0056bd50, 0056bef4]]
// Convention: unknown
// Signature: undefined4 * core_stranger_cpp_FUN_0056bd50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint * core_stranger_cpp_FUN_0056bd50(void)

{
  float fVar1;
  float unaff_ESI;
  byte bVar2;
  double dVar3;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float afStackY_1028 [3];
  uint *apuStackY_101c [1002];
  float fStack_4c;
  float fStack_40;
  float afStack_3c [4];
  uint *puStack_2c;
  float fStack_20;
  
  bVar2 = 0;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
  afStack_3c[2] = fStack_40;
  afStack_3c[(uint)bVar2 * -2 + 3] = afStack_3c[(uint)bVar2 * -2];
  (&puStack_2c)[(uint)bVar2 * -2 + (uint)bVar2 * -2] =
       (uint *)afStack_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  fVar1 = SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
              );
  if ((float)_DAT_005ebc5d < fVar1) {
    if ((((float)_DAT_005ebc5d <= fVar1) &&
        (dVar3 = (double)(SQRT(fVar1 * fVar1 - -*in_stack_00000008 * -*in_stack_00000008) / fVar1),
        dVar3 < 1.0)) && (0.0 <= dVar3)) {
      dVar3 = acos(dVar3);
      unaff_ESI = (float)dVar3;
      if (0.0 <= fStack_20) {
        afStack_3c[2] = afStack_3c[2] + unaff_ESI;
      }
      else {
        afStack_3c[2] = afStack_3c[2] - unaff_ESI;
      }
      afStack_3c[2] = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_3c[2]);
    }
    fStack_4c = (float)((ulonglong)(double)fVar1 >> 0x20);
    if (((_DAT_005ebc5d <= (double)fStack_4c) &&
        (dVar3 = (double)(SQRT(fStack_4c * fStack_4c - in_stack_00000008[1] * in_stack_00000008[1])
                         / fStack_4c), dVar3 < 1.0)) && (0.0 <= dVar3)) {
      dVar3 = acos(dVar3);
      if (0.0 <= unaff_ESI) {
        afStack_3c[0] = afStack_3c[0] + (float)dVar3;
      }
      else {
        afStack_3c[0] = afStack_3c[0] - (float)dVar3;
      }
      afStack_3c[0] = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_3c[0]);
    }
  }
  *puStack_2c = afStack_3c[1];
  puStack_2c[(uint)bVar2 * -2 + 1] = afStack_3c[(uint)bVar2 * -2 + 2];
  (puStack_2c + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       afStack_3c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 3];
  return puStack_2c;
}
