// Name: core_dtrace.cpp_FUN_004738d0
// Address: 004738d0
// Address Range: [[004738d0, 00473b18]]
// Convention: unknown
// Signature: float core_dtrace_cpp_FUN_004738d0(CDemonRaytrace *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dtrace_cpp_FUN_004738d0(CDemonRaytrace *param_1,float *param_2,uint *param_3,uint *param_4)

{
  CDemonCube *pCVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1034 [1006];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar2 = 0;
  local_64 = *param_2;
  local_5c = param_2[2];
  local_60 = param_2[1] + _DAT_005d1b5b;
  local_58 = *param_2;
  local_50 = param_2[2];
  fVar3 = ((float10)local_64 - (float10)*(float *)&param_1->field_0x10) /
          (float10)*(float *)&param_1->field_0x28;
  fVar4 = (float10)1 / (float10)*(float *)&param_1->field_0x2c;
  fVar5 = ((float10)local_5c - (float10)*(float *)&param_1->field_0x18) /
          (float10)*(float *)&param_1->field_0x30;
  local_54 = (float)((float10)param_2[1] + (float10)_DAT_005d1b5f);
  fVar6 = ((float10)local_60 - (float10)*(float *)&param_1->field_0x14) * fVar4;
  fVar4 = (((float10)param_2[1] + (float10)_DAT_005d1b5f) - (float10)*(float *)&param_1->field_0x14)
          * fVar4;
  local_40 = local_58 - local_64;
  local_38 = local_50 - local_5c;
  local_3c = local_54 - local_60;
  round();
  round();
  local_24 = (int)ROUND(fVar3);
  local_20 = (int)ROUND(fVar5);
  round();
  round();
  local_18 = (int)ROUND(fVar6);
  local_1c = (int)ROUND(fVar4);
  local_4c = local_40;
  (&stack0xffffffb8)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((int)ROUND(fVar4) <= (int)ROUND(fVar6)) {
    do {
      pCVar1 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                         (param_1,local_24,local_18,local_20);
      if ((pCVar1 != (CDemonCube *)0x0) &&
         (local_68 = (float)core_dcube_cpp_FUN_00446b60
                                      (pCVar1,&stack0xffffff9c,&stack0xffffffb4,&stack0xffffffcc,
                                       param_3), local_14 = local_68, local_68 <= 1.0)) {
        if ((param_4 != (uint *)0x0) && (&stack0xffffffcc != param_4)) {
          *param_4 = local_34;
          param_4[1] = local_30;
          param_4[2] = local_2c;
        }
        return local_68 * local_48 + local_60;
      }
      local_18 = local_18 + -1;
    } while (local_1c <= local_18);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 1;
  }
  if (param_4 != (uint *)0x0) {
    param_4[1] = 0x3f800000;
    param_4[2] = 0;
    *param_4 = 0;
  }
  _DAT_01510dc4 = _DAT_02653710;
  _DAT_01510dc8 = _DAT_02653714;
  _DAT_01510dc0 = _DAT_0265370c;
  _DAT_01510db8 = _DAT_02653710;
  _DAT_01510dbc = _DAT_02653714;
  _DAT_01510db4 = _DAT_0265370c;
  _DAT_01510dac = _DAT_02653710;
  _DAT_01510db0 = _DAT_02653714;
  _DAT_01510da8 = _DAT_0265370c;
  return local_54;
}
