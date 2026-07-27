// Name: core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
// Address: 004d7bd0
// Address Range: [[004d7bd0, 004d7d6f]]
// Convention: unknown
// Signature: void core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0(undefined4 param_1,int *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0(uint param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_1024 [1006];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  byte local_48 [12];
  int local_3c;
  int local_38 [2];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [12];
  
  bVar2 = 0;
  local_24 = (float)*param_2 * 0.00390625f;
  local_20 = (float)param_2[1] * 0.00390625f;
  local_1c = (float)param_2[2] * 0.00390625f;
  local_54 = (float)*param_3 * _DAT_005a088c;
  local_50 = (float)param_3[1] * _DAT_005a088c;
  local_4c = (float)param_3[2] * _DAT_005a088c;
  local_60 = local_54 + local_24;
  local_5c = local_50 + local_20;
  local_58 = local_4c + local_1c;
  if (&local_54 != &local_60) {
    local_54 = local_60;
    local_50 = local_5c;
    local_4c = local_58;
  }
  pfVar1 = (float *)core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                              (param_1,local_48,&local_24);
  if (&local_24 != pfVar1) {
    local_24 = *pfVar1;
    local_20 = pfVar1[1];
    local_1c = pfVar1[2];
  }
  pfVar1 = (float *)core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
                              (param_1,local_18,&local_54);
  if (&local_54 != pfVar1) {
    local_54 = *pfVar1;
    local_50 = pfVar1[1];
    local_4c = pfVar1[2];
  }
  local_2c = local_50 - local_20;
  local_28 = local_4c - local_1c;
  local_30 = local_54 - local_24;
  if (&local_54 != &local_30) {
    local_54 = local_54 - local_24;
    local_50 = local_50 - local_20;
    local_4c = local_4c - local_1c;
  }
  local_3c = (int)ROUND(local_54 * 65536.0f);
  local_38[0] = (int)ROUND(local_50 * 65536.0f);
  local_38[1] = (int)ROUND(local_4c * 65536.0f);
  *unaff_ESI = (int)ROUND(local_54 * 65536.0f);
  unaff_ESI[(uint)bVar2 * -2 + 1] = local_38[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return;
}
