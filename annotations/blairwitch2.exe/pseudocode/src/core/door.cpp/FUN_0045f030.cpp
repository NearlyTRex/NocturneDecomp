// Name: core_door.cpp_FUN_0045f030
// Address: 0045f030
// Address Range: [[0045f030, 0045f586]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_0045f030(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_door_cpp_FUN_0045f030(CDemonActor *param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10fc [997];
  float *pfVar6;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_120 [4];
  float afStack_110 [4];
  float fStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float afStack_ec [4];
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [4];
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float afStack_6c [4];
  float afStack_5c [5];
  float fStack_48;
  float fStack_3c;
  uint uStack_30;
  uint uStack_24;
  float afStack_20 [2];
  float *pfStack_18;
  uint uStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
  puVar3 = (uint *)&stack0xfffffec8;
  puVar4 = &stack0xfffffeb0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  switch(*(uint *)&param_1[1].field_0x180) {
  case 0:
    *(uint *)&param_1->field_0x30 = 0;
    *(uint *)&param_1->field_0x38 = 0;
    *(uint *)&param_1->field_0x20 = *(uint *)&param_1[4].field_0x20;
    *(uint *)&param_1->field_0x24 = *(uint *)&param_1[4].field_0x24;
    *(uint *)&param_1->field_0x28 = *(uint *)&param_1[4].field_0x28;
    if (*(int *)&param_1[1].field_0x18c == 0) {
      fVar1 = *(float *)&param_1[4].field_0x38 * (float)_DAT_005d0a00 +
              *(float *)&param_1[4].field_0x30;
    }
    else {
      fVar1 = *(float *)&param_1[4].field_0x30 -
              *(float *)&param_1[4].field_0x38 * (float)_DAT_005d0a00;
    }
    *(float *)&param_1->field_0x34 = fVar1;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
    if (ABS(local_150) <= ABS(fStack_144)) {
      local_150 = fStack_144 + (float)_DAT_005d0a10;
    }
    else {
      local_150 = local_150 + (float)_DAT_005d0a18;
    }
    *(float *)&param_1[4].field_0x48 = local_150;
    pfStack_18 = (float *)&param_1[4].field_0x48;
    *(uint *)&param_1[4].field_0x4c = 0x40600000;
    *(uint *)&param_1[4].field_0x50 = 0;
    core_actor_cpp_FUN_00408d70(param_1,pfStack_18);
    fStack_84 = fStack_48;
    afStack_b0[(uint)bVar5 * 0xfffffffe + 0xc] = afStack_5c[(uint)bVar5 * -2 + 6];
    afStack_b0[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xd] =
         (float)*(uint *)((int)afStack_20 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -8) * 4);
    if (afStack_b0 + 0xb != pfStack_18) {
      *pfStack_18 = fStack_84;
      pfStack_18[1] = fStack_80;
      pfStack_18[2] = fStack_7c;
    }
    break;
  case 1:
    *(float *)&param_1->field_0x24 =
         *(float *)&param_1[4].field_0x24 + *(float *)&param_1[4].field_0x38;
    afStack_c0[1] = 3.5;
    afStack_c0[0] = 0.0;
    afStack_c0[2] = 0.0;
    core_actor_cpp_FUN_00408d70(param_1,afStack_ec + 0xb);
    fStack_90 = (float)uStack_30;
    afStack_b0[(uint)bVar5 * 0xfffffffe + 9] = afStack_5c[(uint)bVar5 * -2 + 0xc];
    afStack_b0[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 10] =
         afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    if ((float *)&param_1[4].field_0x48 != afStack_b0 + 8) {
      *(float *)&param_1[4].field_0x48 = fStack_90;
      *(uint *)&param_1[4].field_0x4c = uStack_8c;
      *(uint *)&param_1[4].field_0x50 = uStack_88;
    }
    break;
  case 2:
    if (*(int *)&param_1[1].field_0x184 == 1) {
      afStack_120[0] = *(float *)&param_1[4].field_0x38;
    }
    else {
      afStack_120[0] = -*(float *)&param_1[4].field_0x38;
    }
    afStack_120[1] = 0.0;
    afStack_120[2] = 0.0;
    core_dirmat_cpp_FUN_00449530(&param_1->field_0x3c,afStack_120);
    afStack_110[2] = afStack_120[3];
    *(uint *)((int)afStack_110 + ((uint)bVar5 * -2 + 3) * 4) =
         *(uint *)((int)afStack_110 + (uint)bVar5 * 0xfffffff8);
    *(uint *)((int)afStack_110 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
         *(uint *)((int)afStack_110 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
    fStack_cc = *(float *)&param_1[4].field_0x20 + afStack_110[2];
    fStack_c8 = *(float *)&param_1[4].field_0x24 + afStack_110[3];
    fStack_c4 = *(float *)&param_1[4].field_0x28 + fStack_100;
    afStack_c0[3] = fStack_cc;
    afStack_b0[(uint)bVar5 * -2] = afStack_ec[(uint)bVar5 * 0xfffffffe + 9];
    afStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_ec[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 10];
    *(float *)&param_1->field_0x20 = afStack_c0[3];
    *(float *)&param_1->field_0x24 = afStack_b0[0];
    *(float *)&param_1->field_0x28 = afStack_b0[1];
    afStack_6c[1] = 3.5;
    afStack_6c[0] = 0.0;
    afStack_6c[2] = 0.0;
    core_actor_cpp_FUN_00408d70(param_1,afStack_b0 + 0x11);
    fStack_d8 = (float)uStack_f0;
    afStack_ec[(uint)bVar5 * 0xfffffffe + 6] = afStack_ec[(uint)bVar5 * -2];
    afStack_ec[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 7] =
         afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if ((float *)&param_1[4].field_0x48 != afStack_ec + 5) {
      *(float *)&param_1[4].field_0x48 = fStack_d8;
      *(uint *)&param_1[4].field_0x4c = uStack_d4;
      *(uint *)&param_1[4].field_0x50 = uStack_d0;
    }
    break;
  case 3:
    *(float *)&param_1->field_0x30 = *(float *)&param_1[4].field_0x38 * (float)_DAT_005d0a00;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
    fStack_9c = local_150 + fStack_144;
    fStack_98 = fStack_14c + fStack_140;
    fStack_94 = fStack_148 + fStack_13c;
    afStack_b0[2] = local_150 + fStack_144;
    afStack_b0[(uint)bVar5 * -2 + 3] = afStack_b0[(uint)bVar5 * -2 + 6];
    afStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    pfVar6 = afStack_b0 + 0x14;
    afStack_ec[2] = afStack_b0[2] * _DAT_005d0a08;
    afStack_ec[3] = afStack_b0[3] * _DAT_005d0a08;
    fStack_dc = fStack_a0 * _DAT_005d0a08;
    afStack_6c[3] = afStack_b0[2] * _DAT_005d0a08;
    afStack_5c[(uint)bVar5 * -2] = afStack_ec[(uint)bVar5 * -2 + 3];
    afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    core_actor_cpp_FUN_00408d70(param_1,pfVar6);
    uStack_24 = afStack_5c[2];
    *(float *)((int)afStack_20 + (uint)bVar5 * -8) = afStack_5c[(uint)bVar5 * -2 + 3];
    *(float *)((int)afStack_20 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
         afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if ((uint *)&param_1[4].field_0x48 != &uStack_24) {
      *(uint *)&param_1[4].field_0x48 = uStack_24;
      *(float *)&param_1[4].field_0x4c = afStack_20[0];
      *(float *)&param_1[4].field_0x50 = afStack_20[1];
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\door.cpp";
    _DAT_01d046a4 = 0x117;
    core_main_c_FUN_004e4500("CDoor::reposition - Unknown type");
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,&param_1[4].field_0x70);
  if (iVar2 != 0) {
    *(uint *)&param_1[4].field_0x58 = *(uint *)&param_1[4].field_0x6c;
  }
  if (0.0 < *(float *)&param_1[4].field_0x58) {
    uStack_fc = core_actor_cpp_FUN_0040cf60
                          (-*(float *)&param_1[4].field_0x58,*(uint *)&param_1[4].field_0x58);
    uStack_f8 = 0;
    uStack_14 = uStack_fc;
    uStack_f4 = core_actor_cpp_FUN_0040cf60
                          (-*(float *)&param_1[4].field_0x58,*(uint *)&param_1[4].field_0x58);
    uStack_14 = uStack_f4;
    core_actor_cpp_FUN_00408cf0(param_1,&uStack_fc);
    fStack_78 = fStack_3c;
    afStack_b0[(uint)bVar5 * 0xfffffffe + 0xf] =
         (float)*(uint *)((int)afStack_20 + ((uint)bVar5 * -2 + -6) * 4);
    afStack_b0[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0x10] =
         (float)*(uint *)((int)afStack_20 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -5) * 4);
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_78;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_74;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_70;
    *(uint *)&param_1[4].field_0x58 = 0;
    return;
  }
  return;
}
