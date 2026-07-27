// Name: core_dtri.cpp_FUN_0046e9f0
// Address: 0046e9f0
// Address Range: [[0046e9f0, 0046eb3b]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046e9f0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046e9f0(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uStack_84;
  int iStack_80;
  int *piStack_7c;
  int local_74;
  uint local_6c;
  uint local_60;
  uint local_54;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_30 = (int)ROUND(*param_1 * _DAT_0059c8e0);
  local_2c = (int)ROUND(param_1[1] * _DAT_0059c8e0);
  local_28 = (int)ROUND(param_1[2] * _DAT_0059c8e0);
  piStack_7c = &local_30;
  iStack_80 = *0x01B4D738;
  uStack_84 = 0x46ea35;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c();
  local_18 = (int)ROUND(param_1[3] * _DAT_0059c8e0);
  local_14 = (int)ROUND(param_1[4] * _DAT_0059c8e0);
  local_10 = (int)ROUND(param_1[5] * _DAT_0059c8e0);
  piStack_7c = &local_18;
  iStack_80 = *0x01B4D738 + 0x30;
  uStack_84 = 0x46ea77;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c();
  local_24 = (int)ROUND(param_1[6] * _DAT_0059c8e0);
  local_20 = (int)ROUND(param_1[7] * _DAT_0059c8e0);
  local_1c = (int)ROUND(param_1[8] * _DAT_0059c8e0);
  piStack_7c = &local_24;
  iStack_80 = *0x01B4D738 + 0x60;
  uStack_84 = 0x46eab9;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c();
  local_74 = 3;
  fVar1 = (float10)_DAT_0057e4ae;
  piStack_7c = (int *)0x46ead5;
  fVar2 = (float10)round((float10)param_1[9] * fVar1);
  local_74 = (int)ROUND(fVar2);
  iStack_80 = 0x46eae3;
  fVar2 = (float10)round((float10)param_1[10] * fVar1);
  local_74 = (int)ROUND(fVar2);
  puVar5 = &uStack_84;
  uStack_84 = 0x46eaef;
  fVar1 = (float10)round(fVar1 * (float10)param_1[0xb]);
  local_74 = (int)ROUND(fVar1);
  local_6c = 0;
  local_60 = 1;
  local_54 = 2;
  uVar3 = 0x46eb29;
  piVar4 = 0x01B4D738;
  fVar1 = (float10)round
                             ((float10)param_1[0xc] * (float10)65536 *
                              (float10)256);
  local_74 = (int)ROUND(fVar1);
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(uVar3,piVar4,puVar5);
  return;
}
