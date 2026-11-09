// Name: core_bat.cpp_FUN_00410d80
// Address: 00410d80
// Address Range: [[00410d80, 00410f6e]]
// Convention: unknown
// Signature: void core_bat_cpp_FUN_00410d80(CBat *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bat_cpp_FUN_00410d80(CBat *param_1,float param_2)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1028 [1010];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  int iStack_14;
  
  bVar4 = 0;
  fStack_38 = *(float *)&param_1->field_0x20;
  fStack_34 = *(float *)&param_1->field_0x24;
  fStack_30 = *(float *)&param_1->field_0x28;
  *(float *)&param_1->field_0x304 =
       *(float *)&param_1->field_0x308 * param_2 + *(float *)&param_1->field_0x304;
  core_bat_cpp_CBat_updateCoursePosition_FUN_00411060(param_1);
  fStack_40 = *(float *)&param_1->field_0x20 - fStack_34;
  fStack_3c = *(float *)&param_1->field_0x24 - fStack_30;
  fStack_38 = *(float *)&param_1->field_0x28 - fStack_2c;
  fStack_2c = fStack_40;
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_44 = (fStack_24 * (float)_DAT_005d3651) / param_2 + (float)_DAT_005d3659;
  if (fStack_44 < (float)_DAT_005d3661) {
    fStack_44 = 10.0;
  }
  if ((float)_DAT_005d3669 < fStack_44) {
    fStack_44 = 60.0;
  }
  *(float *)&param_1->field_0x310 =
       (fStack_44 - *(float *)&param_1->field_0x310) * (float)_DAT_005d3671 +
       *(float *)&param_1->field_0x310;
  *(float *)&param_1->field_0x184 =
       param_2 * *(float *)&param_1->field_0x310 * *(float *)&param_1->field_0x30c +
       *(float *)&param_1->field_0x184;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&param_1->field_0x188);
  iStack_14 = *(int *)&pCVar1->field_0x100;
  if (*(float *)&param_1->field_0x184 < (float)iStack_14) {
    if (*(float *)&param_1->field_0x184 < 0.0) {
      iStack_14 = iStack_14 + -1;
      *(float *)&param_1->field_0x184 = (float)iStack_14;
    }
  }
  else {
    *(uint *)&param_1->field_0x184 = 0;
  }
  if ((param_1->field_0x314 != '\0') &&
     (param_2 = *(float *)&param_1->field_0x384 - param_2, *(float *)&param_1->field_0x384 = param_2
     , param_2 <= 0.0)) {
    iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x380);
    if (iVar2 == 0) {
      iVar2 = sound_sndmain_cpp_FUN_00574010
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42480000);
      if (iVar2 != 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))();
        *(uint *)&param_1->field_0x380 = uVar3;
      }
    }
    uVar3 = core_actor_cpp_FUN_0040cc00();
    *(uint *)&param_1->field_0x384 = uVar3;
    return;
  }
  return;
}
