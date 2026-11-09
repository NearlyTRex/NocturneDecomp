// Name: core_xform.cpp_FUN_005b7ff0
// Address: 005b7ff0
// Address Range: [[005b7ff0, 005b80f6]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b7ff0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_005b7ff0(float *param_1)

{
  float *unaff_ESI;
  float *pfVar1;
  byte bVar2;
  float afStackY_1820 [1524];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float afStack_10 [2];
  
  bVar2 = 0;
  fStack_20 = *param_1 * _DAT_005fa1c0;
  core_dirmat_cpp_FUN_0045fd80(&stack0xffffffcc,&fStack_28,&fStack_20);
  fStack_1c = param_1[2] * _DAT_005fa1c0;
  core_dirmat_cpp_FUN_0045fd80(&stack0xffffffd0,afStack_10,&fStack_1c);
  fStack_18 = param_1[1] * _DAT_005fa1c0;
  core_dirmat_cpp_FUN_0045fd80(&fStack_2c,&fStack_24,&fStack_18);
  fStack_14 = fStack_28 * afStack_10[0];
  fStack_40 = -fStack_34 * afStack_10[0] * fStack_24 - fStack_28 * fStack_30 * fStack_2c;
  fStack_38 = fStack_34 * afStack_10[0] * fStack_2c - fStack_28 * fStack_30 * fStack_24;
  fStack_44 = fStack_34 * fStack_30 * fStack_2c + fStack_14 * fStack_24;
  fStack_3c = fStack_34 * fStack_30 * fStack_24 - fStack_14 * fStack_2c;
  pfVar1 = unaff_ESI + (uint)bVar2 * -2 + 1;
  *unaff_ESI = fStack_44;
  *pfVar1 = *(float *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
  pfVar1[(uint)bVar2 * -2 + 1] =
       *(float *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  (pfVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       ((float *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8))
       [(uint)bVar2 * -2 + 1];
  return;
}
