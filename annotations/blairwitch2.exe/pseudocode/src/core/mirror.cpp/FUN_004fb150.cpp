// Name: core_mirror.cpp_FUN_004fb150
// Address: 004fb150
// Address Range: [[004fb150, 004fb33f]]
// Convention: unknown
// Signature: void core_mirror_cpp_FUN_004fb150(undefined4 param_1,int *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mirror_cpp_FUN_004fb150(uint param_1,int *param_2,int *param_3)

{
  int *unaff_ESI;
  byte bVar1;
  float afStackY_1078 [9];
  int aiStackY_1054 [3];
  float afStackY_1048 [1004];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68 [2];
  float local_60;
  float local_5c [4];
  float local_4c;
  float local_48;
  float afStack_44 [4];
  float local_34;
  float local_30;
  float local_2c [4];
  float local_1c;
  float local_18;
  float afStack_14 [2];
  
  bVar1 = 0;
  afStack_44[2] = (float)*param_2 * _DAT_005fa1b8;
  afStack_44[3] = (float)param_2[1] * _DAT_005fa1b8;
  local_34 = (float)param_2[2] * _DAT_005fa1b8;
  local_2c[2] = (float)*param_3 * _DAT_005fa1bc;
  local_2c[3] = (float)param_3[1] * _DAT_005fa1bc;
  local_1c = (float)param_3[2] * _DAT_005fa1bc;
  local_84 = local_2c[2] + afStack_44[2];
  local_80 = local_2c[3] + afStack_44[3];
  local_7c = local_1c + local_34;
  if (local_2c + 2 != local_5c + 2) {
    local_2c[2] = local_84;
    local_2c[3] = local_80;
    local_1c = local_7c;
  }
  local_5c[2] = local_84;
  local_5c[3] = local_80;
  local_4c = local_7c;
  core_mirror_cpp_FUN_004fa9d0(param_1,afStack_44 + 2);
  local_90 = local_18;
  *(float *)((int)&stack0xffffff74 + (uint)bVar1 * -8) = afStack_14[(uint)bVar1 * -2];
  *(float *)((int)&stack0xffffff74 + ((uint)bVar1 * -2 + (uint)bVar1 * -2 + 1) * 4) =
       afStack_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (afStack_44 + 2 != &stack0xffffff70) {
    afStack_44[2] = local_90;
    afStack_44[3] = local_8c;
    local_34 = local_88;
  }
  core_mirror_cpp_FUN_004fa9d0(param_1,local_2c + 2);
  local_60 = local_48;
  local_5c[(uint)bVar1 * -2] = afStack_44[(uint)bVar1 * -2];
  local_5c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_44[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (local_2c + 2 != &local_60) {
    local_2c[2] = local_60;
    local_2c[3] = local_5c[0];
    local_1c = local_5c[1];
  }
  local_74 = local_2c[3] - afStack_44[3];
  local_70 = local_1c - local_34;
  local_78 = local_2c[2] - afStack_44[2];
  local_30 = local_2c[2] - afStack_44[2];
  local_2c[(uint)bVar1 * -2] = *(float *)((int)&stack0xffffff8c + (uint)bVar1 * -8);
  local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&stack0xffffff8c + ((uint)bVar1 * -2 + (uint)bVar1 * -2 + 1) * 4);
  if (local_2c + 2 != &local_30) {
    local_2c[2] = local_30;
    local_2c[3] = local_2c[0];
    local_1c = local_2c[1];
  }
  local_6c = (int)ROUND(local_2c[2] * _DAT_005fa1b4);
  local_68[0] = (int)ROUND(local_2c[3] * _DAT_005fa1b4);
  local_68[1] = (int)ROUND(local_1c * _DAT_005fa1b4);
  *unaff_ESI = (int)ROUND(local_2c[2] * _DAT_005fa1b4);
  unaff_ESI[(uint)bVar1 * -2 + 1] = local_68[(uint)bVar1 * -2];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       local_68[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  return;
}
