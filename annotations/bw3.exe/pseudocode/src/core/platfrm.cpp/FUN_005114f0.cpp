// Name: core_platfrm.cpp_FUN_005114f0
// Address: 005114f0
// Address Range: [[005114f0, 00512014]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_005114f0(CPlatform *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_platfrm_cpp_FUN_005114f0(CPlatform *param_1,float param_2)

{
  char cVar1;
  CDemonActor *actor;
  float fVar2;
  char *name;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  bool bVar13;
  byte bVar14;
  float afStackY_10e4 [841];
  float *pfVar15;
  char acStack_3a4 [256];
  byte auStack_2a4 [48];
  CMatrix3x4f aCStack_274 [48];
  uint auStack_244 [3];
  float fStack_238;
  uint uStack_228;
  uint uStack_218;
  byte auStack_214 [48];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  uint auStack_184 [12];
  byte auStack_154 [24];
  float fStack_13c;
  float fStack_138;
  uint auStack_12c [6];
  uint uStack_114;
  float fStack_110;
  float fStack_104;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_90;
  uint uStack_8c;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float *pfStack_18;
  
  bVar14 = 0;
  if (1 < *(int *)&param_1->field_0x4c0) {
    return;
  }
  bVar13 = false;
  fStack_38 = *(float *)&param_1->field_0x2dc;
  iStack_30 = 0;
  iStack_34 = 0;
  switch(*(uint *)&param_1->field_0x2d4) {
  case 0:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1->field_0x3b8);
    bVar13 = iVar5 != 0;
    if (bVar13) {
      core_platfrm_cpp_FUN_00512020(param_1,1.0,1.0 / *(float *)&param_1->field_0x2e8);
    }
    *(uint *)&param_1->field_0x2dc = 0;
    break;
  case 1:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1->field_0x354);
    bVar13 = iVar5 != 0;
    if (bVar13) {
      core_platfrm_cpp_FUN_00512020(param_1,0.0,1.0 / *(float *)&param_1->field_0x2ec);
    }
    *(uint *)&param_1->field_0x2dc = 0x3f800000;
    break;
  case 2:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1->field_0x3b8);
    if (iVar5 == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,&param_1->field_0x354);
      if (iVar5 != 0) {
        core_platfrm_cpp_FUN_00512020(param_1,0.0,1.0 / *(float *)&param_1->field_0x2ec);
      }
    }
    else {
      core_platfrm_cpp_FUN_00512020(param_1,1.0,1.0 / *(float *)&param_1->field_0x2e8);
    }
    break;
  case 3:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1->field_0x41c);
    if (iVar5 != 0) {
      *(uint *)&param_1->field_0x2d4 = 2;
      if (param_1->field_0x494 != '\0') {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1->field_0x494);
      }
      break;
    }
    fVar2 = param_2 * *(float *)&param_1->field_0x2e4 + *(float *)&param_1->field_0x2dc;
    *(float *)&param_1->field_0x2dc = fVar2;
    if (fVar2 <= *(float *)&param_1->field_0x2e0) {
LAB_00511982:
      iStack_34 = 1;
      break;
    }
    *(uint *)&param_1->field_0x2dc = *(uint *)&param_1->field_0x2e0;
    if (1.0 <= *(float *)&param_1->field_0x2dc) {
      *(uint *)&param_1->field_0x2d4 = 1;
      if (*(int *)&param_1->field_0x4c0 != 0) {
        *(uint *)&param_1->field_0x4c0 = 2;
      }
      iStack_30 = 1;
      break;
    }
    goto LAB_00511970;
  case 4:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1->field_0x41c);
    if (iVar5 != 0) {
      *(uint *)&param_1->field_0x2d4 = 2;
      if (param_1->field_0x494 != '\0') {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1->field_0x494);
      }
      break;
    }
    fVar2 = *(float *)&param_1->field_0x2dc - param_2 * *(float *)&param_1->field_0x2e4;
    *(float *)&param_1->field_0x2dc = fVar2;
    if (*(float *)&param_1->field_0x2e0 <= fVar2) goto LAB_00511982;
    *(uint *)&param_1->field_0x2dc = *(uint *)&param_1->field_0x2e0;
    if (*(float *)&param_1->field_0x2dc <= 0.0) {
      *(uint *)&param_1->field_0x2d4 = 0;
      if (*(int *)&param_1->field_0x4c0 != 0) {
        *(uint *)&param_1->field_0x4c0 = 2;
      }
      iStack_30 = 1;
      break;
    }
LAB_00511970:
    *(uint *)&param_1->field_0x2d4 = 2;
  }
  if (*(int *)&param_1->field_0x4c8 != 0) {
    if (bVar13) {
      pcVar11 = acStack_3a4;
      pcVar9 = &param_1->field_0x4cc;
      pcVar8 = acStack_3a4;
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        name = pcVar8;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
joined_r0x005115d9:
      if (acStack_3a4[0] != '\0') {
        if (*pcVar8 == ';') {
          *pcVar8 = '\0';
          iVar5 = core_set_cpp_CDemonSet_findCameraByName_FUN_00535360(g_CDemonSetPtr,name);
          if ((iVar5 != -1) && (iVar5 != *(int *)&g_CDemonSetPtr->field_0x15aeb8)) {
            core_setdir_cpp_FUN_00540ba0(g_CDemonSetPtr,iVar5,999.0);
            *(uint *)&param_1->field_0x724 = 0;
            goto LAB_00511630;
          }
          pcVar8 = pcVar8 + 1;
          acStack_3a4[0] = *pcVar8;
          name = pcVar8;
        }
        else {
          pcVar8 = pcVar8 + 1;
          acStack_3a4[0] = *pcVar8;
        }
        goto joined_r0x005115d9;
      }
LAB_00511630:
      iVar5 = core_set_cpp_CDemonSet_findCameraByName_FUN_00535360(g_CDemonSetPtr,name);
      if ((iVar5 != -1) && (iVar5 != *(int *)&g_CDemonSetPtr->field_0x15aeb8)) {
        core_setdir_cpp_FUN_00540ba0(g_CDemonSetPtr,iVar5,999.0);
        *(uint *)&param_1->field_0x724 = 0;
      }
    }
    if (iStack_30 != 0) {
      core_setdir_cpp_FUN_00540bc0(g_CDemonSetPtr);
    }
  }
  if (*(float *)&param_1->field_0x2dc != fStack_38) {
    if ((iStack_34 == 0) || (param_1->field_0x4a8 == '\0')) {
      core_sound_cpp_FUN_00560b00(0x02CF5680,*(uint *)&param_1->field_0x4bc);
    }
    else {
      iVar5 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1->field_0x4bc);
      if (iVar5 == 0) {
        uVar6 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))(param_1,&param_1->field_0x4a8);
        *(uint *)&param_1->field_0x4bc = uVar6;
      }
    }
    fStack_3c = *(float *)&param_1->field_0x24;
    core_xform_cpp_FUN_00583800
              (aCStack_274,(CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30);
    core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00511340(param_1);
    core_xform_cpp_FUN_00583940(auStack_2a4,&param_1->field_0x20,&param_1->field_0x30);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
    puVar10 = auStack_12c;
    puVar12 = &uStack_114;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
    }
    iStack_28 = 0;
    for (iStack_20 = 0; iStack_20 < *(int *)&g_CDemonSetPtr->field_0x14f0a8;
        iStack_20 = iStack_20 + 1) {
      actor = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_28);
      iVar5 = (**(code **)(*(int *)&actor->field_0x154 + 0x10c))(actor);
      if ((iVar5 < 1) &&
         (iVar5 = (**(code **)(*(int *)&actor->field_0x154 + 0x70))(actor), iVar5 == 0)) {
        if (*(int *)&param_1->field_0x510 == 0) {
          if ((*(float *)&param_1->field_0x24 < fStack_3c) &&
             (iVar5 = core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005127f0(param_1,actor),
             iVar5 != 0)) {
            (**(code **)(*(int *)&actor->field_0x154 + 0xdc))(actor,8,0,0xbf800000);
          }
        }
        else {
          core_actor_cpp_FUN_00408bf0(param_1,&actor->field_0x20);
          fStack_cc = fStack_9c;
          afStack_f8[(uint)bVar14 * -2 + 0xc] = afStack_f8[(uint)bVar14 * -2 + 0x18];
          afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
               afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
          if ((fStack_c8 <= fStack_104) && (fStack_110 + (float)_DAT_005cc28b <= fStack_c8)) {
            core_box_cpp_FUN_0041ee30(&uStack_114,afStack_f8 + 0xb);
            fVar3 = fStack_c8;
            fVar2 = fStack_cc;
            fStack_b4 = fStack_c0;
            afStack_f8[(uint)bVar14 * -2 + 0x12] = afStack_f8[(uint)bVar14 * -2 + 0xf];
            afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
                 afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
            afStack_f8[2] = fVar2 - fStack_b4;
            afStack_f8[3] = fVar3 - fStack_b0;
            fStack_e8 = fStack_c4 - fStack_ac;
            fStack_54 = fVar2 - fStack_b4;
            afStack_f8[(uint)bVar14 * -2 + 0x2a] = afStack_f8[(uint)bVar14 * -2 + 3];
            afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2b] =
                 afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
            if ((ABS(fStack_54) <= (float)_DAT_005cc293) && (ABS(fStack_4c) <= (float)_DAT_005cc293)
               ) {
              fStack_50 = 0.0;
              core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)auStack_154);
              auStack_154._0_4_ = 0;
              iVar5 = (**(code **)(*(int *)&actor->field_0x154 + 0x3c))(actor,auStack_154);
              if ((((iVar5 == 2) && (fStack_c8 + (float)auStack_154._20_4_ <= fStack_104)) &&
                  (fStack_110 <= fStack_c8 + fStack_13c)) &&
                 ((fVar2 = fStack_54 * fStack_54 + fStack_4c * fStack_4c,
                  fVar2 <= fStack_138 * fStack_138 && (fVar2 = SQRT(fVar2), 0.0 < fVar2)))) {
                fStack_1c = (fStack_138 + (float)_DAT_005cc29b) / fVar2;
                fStack_54 = fStack_54 * fStack_1c;
                fStack_4c = fStack_4c * fStack_1c;
                pfVar15 = afStack_f8 + 0x14;
                fStack_50 = fStack_1c * 0.0;
                fStack_78 = fStack_b4 + fStack_54;
                fStack_74 = fStack_b0 + fStack_1c * 0.0;
                fStack_70 = fStack_ac + fStack_4c;
                afStack_a8[0] = fStack_78;
                afStack_f8[(uint)bVar14 * -2 + 0x15] = afStack_f8[(uint)bVar14 * -2 + 0x21];
                afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
                     afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
                core_actor_cpp_FUN_00408b80(param_1,pfVar15);
                fStack_90 = (float)uStack_48;
                afStack_f8[(uint)bVar14 * -2 + 0x1b] = afStack_f8[(uint)bVar14 * -2 + 0x2d];
                afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c] =
                     afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2e];
                uStack_8c = *(uint *)&actor->field_0x24;
                (**(code **)(*(int *)&actor->field_0x154 + 0x68))
                          (actor,afStack_f8 + 0x1a,&actor->field_0x30);
              }
            }
          }
        }
      }
      iStack_28 = iStack_28 + 4;
    }
    iStack_2c = 0;
    for (iStack_24 = 0; iStack_24 < *(int *)&g_CDemonSetPtr->field_0x14d164;
        iStack_24 = iStack_24 + 1) {
      iVar5 = *(int *)(&g_CDemonSetPtr->field_0x14d168 + iStack_2c);
      if (param_1 == *(CPlatform **)(iVar5 + 0xdc)) {
        pfStack_18 = (float *)(iVar5 + 0x20);
        core_xform_cpp_FUN_00583940(auStack_214,pfStack_18,iVar5 + 0x30);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_214,aCStack_274);
        puVar10 = auStack_1b4;
        puVar12 = auStack_1e4;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_1e4,auStack_2a4);
        puVar10 = auStack_184;
        puVar12 = auStack_244;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        }
        fStack_84 = fStack_238;
        uStack_80 = uStack_228;
        uStack_7c = uStack_218;
        fStack_6c = fStack_238;
        afStack_f8[(uint)bVar14 * -2 + 0x24] = afStack_f8[(uint)bVar14 * -2 + 0x1e];
        afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
             afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f];
        core_xform_cpp_FUN_00583b10(auStack_244);
        fVar4 = fStack_64;
        fVar3 = fStack_68;
        fVar2 = fStack_6c;
        uStack_60 = uStack_d8;
        afStack_f8[(uint)bVar14 * -2 + 0x27] = afStack_f8[(uint)bVar14 * -2 + 9];
        afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28] =
             afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        fStack_e4 = fVar2 - *pfStack_18;
        fStack_e0 = fVar3 - pfStack_18[1];
        fStack_dc = fVar4 - pfStack_18[2];
        fStack_fc = fVar2 - *pfStack_18;
        afStack_f8[(uint)bVar14 * -2] = afStack_f8[(uint)bVar14 * -2 + 6];
        afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
        if ((float *)(iVar5 + 0xe0) != &fStack_fc) {
          *(float *)(iVar5 + 0xe0) = fStack_fc;
          *(float *)(iVar5 + 0xe4) = afStack_f8[0];
          *(float *)(iVar5 + 0xe8) = afStack_f8[1];
        }
        *(uint *)(iVar5 + 0xec) = 0;
        *(uint *)(iVar5 + 0xf4) = 0;
        pfStack_18 = (float *)core_actor_cpp_FUN_0040cfa0(fStack_5c - *(float *)(iVar5 + 0x34));
        *(float **)(iVar5 + 0xf0) = pfStack_18;
      }
      iStack_2c = iStack_2c + 4;
    }
    core_platfrm_cpp_FUN_00512be0(param_1);
  }
  return;
}
