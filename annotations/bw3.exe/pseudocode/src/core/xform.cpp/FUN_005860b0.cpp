// Name: core_xform.cpp_FUN_005860b0
// Address: 005860b0
// Address Range: [[005860b0, 005861c6]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005860b0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_005860b0(float *param_1)

{
  float *unaff_ESI;
  float *pfVar1;
  byte bVar2;
  float afStackY_181c [1524];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  bVar2 = 0;
  local_1c = *param_1 * _DAT_005d81e7;
  core_dirmat_cpp_FUN_0045bef0(&stack0xffffffd0,&local_28,&local_1c);
  local_c = param_1[2] * _DAT_005d81e7;
  core_dirmat_cpp_FUN_0045bef0(&stack0xffffffd4,&local_24,&local_c);
  local_14 = param_1[1] * _DAT_005d81e7;
  core_dirmat_cpp_FUN_0045bef0(&local_18,&local_20,&local_14);
  local_10 = local_24 * local_28;
  local_38 = local_10 * local_18 + -local_2c * local_20 * local_30;
  local_3c = local_2c * local_28 * local_18 + local_24 * local_20 * local_30;
  local_40 = local_10 * local_20 + local_2c * local_30 * local_18;
  local_34 = local_28 * local_20 * local_2c - local_24 * local_30 * local_18;
  pfVar1 = unaff_ESI + (uint)bVar2 * -2 + 1;
  *unaff_ESI = local_40;
  *pfVar1 = *(float *)((int)&stack0xffffffc4 + (uint)bVar2 * -8);
  pfVar1[(uint)bVar2 * -2 + 1] =
       *(float *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  (pfVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       ((float *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8))
       [(uint)bVar2 * -2 + 1];
  return;
}
