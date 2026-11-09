// Name: core_door.cpp_FUN_004642f0
// Address: 004642f0
// Address Range: [[004642f0, 00464a59]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_004642f0(CDemonActor *param_1,float param_2)

#include "nocturne.h"

void core_door_cpp_FUN_004642f0(CDemonActor *param_1,float param_2)

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
  fStack_58 = *(float *)&param_1[7].field_0x44;
  if (1 < *(int *)&param_1[7].field_0x60) {
    return;
  }
  switch(*(uint *)&param_1[2].field_0x30) {
  case 0:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1[2].field_0x38);
    if (iVar4 != 0) {
      cVar1 = param_1[6].field_0x54;
      *(uint *)&param_1[2].field_0x30 = 1;
      if (cVar1 != '\0') {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1[6].field_0x54);
      }
      core_setcolid_cpp_FUN_0053eea0(g_CDemonSetPtr,param_1);
    }
    *(uint *)&param_1[7].field_0x44 = 0;
    break;
  case 1:
    *(float *)&param_1[7].field_0x44 =
         (param_2 * *(float *)&param_1[7].field_0x48) / *(float *)&param_1[7].field_0x4c + fStack_58
    ;
    if (*(float *)&param_1[7].field_0x48 <= 0.0) {
      if (*(float *)&param_1[7].field_0x44 < *(float *)&param_1[7].field_0x48) {
        *(uint *)&param_1[2].field_0x30 = 2;
        *(uint *)&param_1[7].field_0x44 = *(uint *)&param_1[7].field_0x48;
        if (*(int *)&param_1[7].field_0x60 != 0) {
          *(uint *)&param_1[7].field_0x60 = 2;
        }
      }
    }
    else if (*(float *)&param_1[7].field_0x48 < *(float *)&param_1[7].field_0x44) {
      *(uint *)&param_1[2].field_0x30 = 2;
      *(uint *)&param_1[7].field_0x44 = *(uint *)&param_1[7].field_0x48;
      if (*(int *)&param_1[7].field_0x60 != 0) {
        *(uint *)&param_1[7].field_0x60 = 2;
      }
    }
    break;
  case 2:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1[2].field_0x9c);
    if ((iVar4 != 0) &&
       (cVar1 = param_1[6].field_0xb8, *(uint *)&param_1[2].field_0x30 = 3, cVar1 != '\0')) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1[6].field_0xb8);
    }
    *(uint *)&param_1[7].field_0x44 = *(uint *)&param_1[7].field_0x48;
    break;
  case 3:
    *(float *)&param_1[7].field_0x44 =
         fStack_58 - (param_2 * *(float *)&param_1[7].field_0x48) / *(float *)&param_1[7].field_0x50
    ;
    if (*(float *)&param_1[7].field_0x48 <= 0.0) {
      if (0.0 < *(float *)&param_1[7].field_0x44) {
        *(uint *)&param_1[2].field_0x30 = 0;
        *(uint *)&param_1[7].field_0x44 = 0;
        if (*(int *)&param_1[7].field_0x60 != 0) {
          *(uint *)&param_1[7].field_0x60 = 2;
        }
        core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(g_CDemonSetPtr,param_1);
      }
    }
    else if (*(float *)&param_1[7].field_0x44 < 0.0) {
      *(uint *)&param_1[2].field_0x30 = 0;
      *(uint *)&param_1[7].field_0x44 = 0;
      if (*(int *)&param_1[7].field_0x60 != 0) {
        *(uint *)&param_1[7].field_0x60 = 2;
      }
      core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(g_CDemonSetPtr,param_1);
    }
  }
  if (*(int *)&param_1[2].field_0x30 == 0) {
    if (param_1[3].field_0xc == '\0') goto LAB_004643c7;
    commands = &param_1[3].field_0xc;
  }
  else {
    if ((*(int *)&param_1[2].field_0x30 != 2) || (param_1[2].field_0x100 == '\0'))
    goto LAB_004643c7;
    commands = &param_1[2].field_0x100;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,commands);
LAB_004643c7:
  core_door_cpp_FUN_00463d80(param_1);
  if ((*(float *)&param_1[7].field_0x44 != fStack_58) && (*(int *)&param_1[2].field_0x28 != 3)) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
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
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)auStack_108);
      iVar3 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x3c))(iVar4,auStack_108);
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
        core_dirmat_cpp_FUN_0045b870(puVar2,pfVar5);
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
             ((fStack_c0 <= fStack_4c && (fStack_14 <= fStack_b4)))) goto LAB_00464830;
          fStack_18 = fStack_ec * fStack_ec;
          fStack_30 = SQRT(fStack_18 - (fStack_bc - fStack_b0) * (fStack_bc - fStack_b0));
          fStack_40 = fStack_a8 + fStack_30;
          fStack_30 = fStack_a8 - fStack_30;
          if (((fStack_c0 <= fStack_40) && (fStack_40 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_30 && (fStack_30 <= fStack_b4)))) goto LAB_00464830;
          fStack_3c = SQRT(fStack_18 - (fStack_c8 - fStack_b0) * (fStack_c8 - fStack_b0));
          fStack_28 = fStack_a8 + fStack_3c;
          fStack_3c = fStack_a8 - fStack_3c;
          if (((fStack_c0 <= fStack_28) && (fStack_28 <= fStack_b4)) ||
             ((fStack_c0 <= fStack_3c && (fStack_3c <= fStack_b4)))) goto LAB_00464830;
          fStack_38 = SQRT(fStack_18 - (fStack_b4 - fStack_a8) * (fStack_b4 - fStack_a8));
          fStack_34 = fStack_b0 + fStack_38;
          fStack_38 = fStack_b0 - fStack_38;
          if (((fStack_c8 <= fStack_34) && (fStack_34 <= fStack_bc)) ||
             ((fStack_c8 <= fStack_38 && (fStack_38 <= fStack_bc)))) goto LAB_00464830;
          fStack_44 = SQRT(fStack_18 - (fStack_c0 - fStack_a8) * (fStack_c0 - fStack_a8));
          fStack_2c = fStack_b0 + fStack_44;
          fStack_44 = fStack_b0 - fStack_44;
          if (((fStack_c8 <= fStack_2c) && (fStack_2c <= fStack_bc)) ||
             ((fStack_c8 <= fStack_44 && (fStack_44 <= fStack_bc)))) goto LAB_00464830;
        }
      }
      iStack_24 = iStack_24 + 1;
      iStack_20 = iStack_20 + 4;
    }
    if (iStack_5c != 0) {
LAB_00464830:
      *(uint *)&param_1->field_0x20 = uStack_8c;
      *(uint *)&param_1->field_0x24 = uStack_88;
      *(uint *)&param_1->field_0x28 = uStack_84;
      *(float *)&param_1[7].field_0x44 = fStack_58;
      core_door_cpp_FUN_00463d80(param_1);
      return;
    }
  }
  return;
}
