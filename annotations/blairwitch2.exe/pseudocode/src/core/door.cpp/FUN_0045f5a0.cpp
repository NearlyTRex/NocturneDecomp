// Name: core_door.cpp_FUN_0045f5a0
// Address: 0045f5a0
// Address Range: [[0045f5a0, 0045fd09]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_0045f5a0(CDemonActor *param_1,float param_2)

#include "nocturne.h"

void core_door_cpp_FUN_0045f5a0(CDemonActor *param_1,float param_2)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_108c [991];
  char *commands;
  byte auStack_108 [24];
  float fStack_f0;
  float fStack_ec;
  float afStack_e0 [6];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [5];
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_80;
  float afStack_7c [8];
  int iStack_5c;
  float fStack_58;
  byte *puStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  uStack_8c = *(uint *)&param_1->field_0x20;
  uStack_88 = *(uint *)&param_1->field_0x24;
  uStack_84 = *(uint *)&param_1->field_0x28;
  fStack_58 = *(float *)&param_1[4].field_0x38;
  if (1 < *(int *)&param_1[4].field_0x54) {
    return;
  }
  switch(*(uint *)&param_1[1].field_0x188) {
  case 0:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1[1].field_0x190);
    if (iVar4 != 0) {
      cVar1 = param_1[3].field_0x1a4;
      *(uint *)&param_1[1].field_0x188 = 1;
      if (cVar1 != '\0') {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,&param_1[3].field_0x1a4);
      }
      core_setcolid_cpp_FUN_005380c0(g_CDemonSetPtr,param_1);
    }
    *(uint *)&param_1[4].field_0x38 = 0;
    break;
  case 1:
    *(float *)&param_1[4].field_0x38 =
         (param_2 * *(float *)&param_1[4].field_0x3c) / *(float *)&param_1[4].field_0x40 + fStack_58
    ;
    if (*(float *)&param_1[4].field_0x3c <= 0.0) {
      if (*(float *)&param_1[4].field_0x38 < *(float *)&param_1[4].field_0x3c) {
        *(uint *)&param_1[1].field_0x188 = 2;
        *(uint *)&param_1[4].field_0x38 = *(uint *)&param_1[4].field_0x3c;
        if (*(int *)&param_1[4].field_0x54 != 0) {
          *(uint *)&param_1[4].field_0x54 = 2;
        }
      }
    }
    else if (*(float *)&param_1[4].field_0x3c < *(float *)&param_1[4].field_0x38) {
      *(uint *)&param_1[1].field_0x188 = 2;
      *(uint *)&param_1[4].field_0x38 = *(uint *)&param_1[4].field_0x3c;
      if (*(int *)&param_1[4].field_0x54 != 0) {
        *(uint *)&param_1[4].field_0x54 = 2;
      }
    }
    break;
  case 2:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1[1].field_0x1f4);
    if ((iVar4 != 0) &&
       (cVar1 = param_1[3].field_0x208, *(uint *)&param_1[1].field_0x188 = 3, cVar1 != '\0'))
    {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,&param_1[3].field_0x208);
    }
    *(uint *)&param_1[4].field_0x38 = *(uint *)&param_1[4].field_0x3c;
    break;
  case 3:
    *(float *)&param_1[4].field_0x38 =
         fStack_58 - (param_2 * *(float *)&param_1[4].field_0x3c) / *(float *)&param_1[4].field_0x44
    ;
    if (*(float *)&param_1[4].field_0x3c <= 0.0) {
      if (0.0 < *(float *)&param_1[4].field_0x38) {
        *(uint *)&param_1[1].field_0x188 = 0;
        *(uint *)&param_1[4].field_0x38 = 0;
        if (*(int *)&param_1[4].field_0x54 != 0) {
          *(uint *)&param_1[4].field_0x54 = 2;
        }
        core_setcolid_cpp_FUN_00538020(g_CDemonSetPtr,param_1);
      }
    }
    else if (*(float *)&param_1[4].field_0x38 < 0.0) {
      *(uint *)&param_1[1].field_0x188 = 0;
      *(uint *)&param_1[4].field_0x38 = 0;
      if (*(int *)&param_1[4].field_0x54 != 0) {
        *(uint *)&param_1[4].field_0x54 = 2;
      }
      core_setcolid_cpp_FUN_00538020(g_CDemonSetPtr,param_1);
    }
  }
  if (*(int *)&param_1[1].field_0x188 == 0) {
    if (param_1[2].field_0x8 == '\0') goto LAB_0045f677;
    commands = &param_1[2].field_0x8;
  }
  else {
    if ((*(int *)&param_1[1].field_0x188 != 2) || (param_1[1].field_0x258 == '\0'))
    goto LAB_0045f677;
    commands = &param_1[1].field_0x258;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,commands);
LAB_0045f677:
  core_door_cpp_FUN_0045f030(param_1);
  if ((*(float *)&param_1[4].field_0x38 != fStack_58) && (*(int *)&param_1[1].field_0x180 != 3)) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
    pfStack_1c = (float *)&param_1->field_0x20;
    pfVar5 = afStack_e0;
    pfVar6 = &fStack_c8;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
    }
    puStack_54 = &param_1->field_0x3c;
    iStack_5c = 0;
    iStack_24 = 0;
    iStack_20 = 0;
    while( true ) {
      if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iStack_24) break;
      iVar4 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_20);
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)auStack_108);
      iVar3 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x44))(iVar4,auStack_108);
      puVar2 = puStack_54;
      if (((iVar3 == 2) &&
          ((float)auStack_108._20_4_ + *(float *)(iVar4 + 0x24) <=
           *(float *)&param_1->field_0x24 + fStack_b8)) &&
         (*(float *)&param_1->field_0x24 + fStack_c4 <= fStack_f0 + *(float *)(iVar4 + 0x24))) {
        fStack_a4 = *(float *)(iVar4 + 0x20) - *pfStack_1c;
        afStack_a0[0] = *(float *)(iVar4 + 0x24) - pfStack_1c[1];
        pfVar5 = afStack_7c + 2;
        afStack_a0[1] = *(float *)(iVar4 + 0x28) - pfStack_1c[2];
        afStack_7c[2] = fStack_a4;
        afStack_7c[(uint)bVar7 * -2 + 3] = afStack_a0[(uint)bVar7 * -2];
        afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        core_dirmat_cpp_FUN_004495a0(puVar2,pfVar5);
        fStack_80 = afStack_a0[2];
        afStack_7c[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2 + 3];
        afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        if (&fStack_b0 != &fStack_80) {
          fStack_b0 = fStack_80;
          fStack_ac = afStack_7c[0];
          fStack_a8 = afStack_7c[1];
        }
        fStack_48 = fStack_b0 + fStack_ec;
        if (((fStack_c8 <= fStack_48) && (fStack_50 = fStack_b0 - fStack_ec, fStack_50 <= fStack_bc)
            ) && ((fStack_14 = fStack_a8 + fStack_ec, fStack_c0 <= fStack_14 &&
                  (fStack_4c = fStack_a8 - fStack_ec, fStack_4c <= fStack_b4)))) {
          if (((fStack_c8 <= fStack_50) && (fStack_48 <= fStack_bc)) &&
             ((fStack_c0 <= fStack_4c && (fStack_14 <= fStack_b4)))) goto LAB_0045fae0;
          fStack_18 = fStack_ec * fStack_ec;
          fStack_30 = SQRT(fStack_18 - (fStack_bc - fStack_b0) * (fStack_bc - fStack_b0));
          fStack_40 = fStack_a8 + fStack_30;
          fStack_30 = fStack_a8 - fStack_30;
          if (((fStack_c0 <= fStack_40) && (fStack_40 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_30 && (fStack_30 <= fStack_b4)))) goto LAB_0045fae0;
          fStack_3c = SQRT(fStack_18 - (fStack_c8 - fStack_b0) * (fStack_c8 - fStack_b0));
          fStack_28 = fStack_a8 + fStack_3c;
          fStack_3c = fStack_a8 - fStack_3c;
          if (((fStack_c0 <= fStack_28) && (fStack_28 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_3c && (fStack_3c <= fStack_b4)))) goto LAB_0045fae0;
          fStack_38 = SQRT(fStack_18 - (fStack_b4 - fStack_a8) * (fStack_b4 - fStack_a8));
          fStack_34 = fStack_b0 + fStack_38;
          fStack_38 = fStack_b0 - fStack_38;
          if (((fStack_c8 <= fStack_34) && (fStack_34 <= fStack_bc)) ||
             ((fStack_c8 <= fStack_38 && (fStack_38 <= fStack_bc)))) goto LAB_0045fae0;
          fStack_44 = SQRT(fStack_18 - (fStack_c0 - fStack_a8) * (fStack_c0 - fStack_a8));
          fStack_2c = fStack_b0 + fStack_44;
          fStack_44 = fStack_b0 - fStack_44;
          if (((fStack_c8 <= fStack_2c) && (fStack_2c <= fStack_bc)) ||
             ((fStack_c8 <= fStack_44 && (fStack_44 <= fStack_bc)))) goto LAB_0045fae0;
        }
      }
      iStack_24 = iStack_24 + 1;
      iStack_20 = iStack_20 + 4;
    }
    if (iStack_5c != 0) {
LAB_0045fae0:
      *(uint *)&param_1->field_0x20 = uStack_8c;
      *(uint *)&param_1->field_0x24 = uStack_88;
      *(uint *)&param_1->field_0x28 = uStack_84;
      *(float *)&param_1[4].field_0x38 = fStack_58;
      core_door_cpp_FUN_0045f030(param_1);
      return;
    }
  }
  return;
}
