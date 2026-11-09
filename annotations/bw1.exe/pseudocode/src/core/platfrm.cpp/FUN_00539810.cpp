// Name: core_platfrm.cpp_FUN_00539810
// Address: 00539810
// Address Range: [[00539810, 0053a334]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_00539810(CPlatform *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_FUN_00539810(CPlatform *this_ptr,float delta_time)

{
  char cVar1;
  CDemonActor *actor;
  char *name;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  uint *puVar11;
  bool bVar12;
  byte bVar13;
  float afStackY_10e4 [841];
  float *pfVar14;
  double dVar15;
  float fVar16;
  char local_3a4 [256];
  CMatrix3x4f aCStack_2a4 [48];
  CMatrix3x4f aCStack_274 [48];
  uint auStack_244 [3];
  float fStack_238;
  uint uStack_228;
  uint uStack_218;
  CMatrix3x4f aCStack_214 [48];
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
  float local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  
  bVar13 = 0;
  if (1 < *(int *)&this_ptr->field_0x4c0) {
    return;
  }
  bVar12 = false;
  local_38 = *(float *)&this_ptr->field_0x2dc;
  local_30 = 0;
  local_34 = 0;
  switch(*(uint *)&this_ptr->field_0x2d4) {
  case 0:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x3b8);
    bVar12 = iVar4 != 0;
    if (bVar12) {
      core_platfrm_cpp_FUN_0053a340(this_ptr,1.0,1.0 / *(float *)&this_ptr->field_0x2e8);
    }
    *(uint *)&this_ptr->field_0x2dc = 0;
    break;
  case 1:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x354);
    bVar12 = iVar4 != 0;
    if (bVar12) {
      core_platfrm_cpp_FUN_0053a340(this_ptr,0.0,1.0 / *(float *)&this_ptr->field_0x2ec);
    }
    *(uint *)&this_ptr->field_0x2dc = 0x3f800000;
    break;
  case 2:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x3b8);
    if (iVar4 == 0) {
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&this_ptr->field_0x354);
      if (iVar4 != 0) {
        core_platfrm_cpp_FUN_0053a340(this_ptr,0.0,1.0 / *(float *)&this_ptr->field_0x2ec);
      }
    }
    else {
      core_platfrm_cpp_FUN_0053a340(this_ptr,1.0,1.0 / *(float *)&this_ptr->field_0x2e8);
    }
    break;
  case 3:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x41c);
    if (iVar4 != 0) {
      *(uint *)&this_ptr->field_0x2d4 = 2;
      if (this_ptr->field_0x494 != '\0') {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&this_ptr->field_0x494);
      }
      break;
    }
    fVar16 = delta_time * *(float *)&this_ptr->field_0x2e4 + *(float *)&this_ptr->field_0x2dc;
    *(float *)&this_ptr->field_0x2dc = fVar16;
    if (fVar16 <= *(float *)&this_ptr->field_0x2e0) {
LAB_00539ca2:
      local_34 = 1;
      break;
    }
    *(uint *)&this_ptr->field_0x2dc = *(uint *)&this_ptr->field_0x2e0;
    if (1.0 <= *(float *)&this_ptr->field_0x2dc) {
      *(uint *)&this_ptr->field_0x2d4 = 1;
      if (*(int *)&this_ptr->field_0x4c0 != 0) {
        *(uint *)&this_ptr->field_0x4c0 = 2;
      }
      local_30 = 1;
      break;
    }
    goto LAB_00539c90;
  case 4:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x41c);
    if (iVar4 != 0) {
      *(uint *)&this_ptr->field_0x2d4 = 2;
      if (this_ptr->field_0x494 != '\0') {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&this_ptr->field_0x494);
      }
      break;
    }
    fVar16 = *(float *)&this_ptr->field_0x2dc - delta_time * *(float *)&this_ptr->field_0x2e4;
    *(float *)&this_ptr->field_0x2dc = fVar16;
    if (*(float *)&this_ptr->field_0x2e0 <= fVar16) goto LAB_00539ca2;
    *(uint *)&this_ptr->field_0x2dc = *(uint *)&this_ptr->field_0x2e0;
    if (*(float *)&this_ptr->field_0x2dc <= 0.0) {
      *(uint *)&this_ptr->field_0x2d4 = 0;
      if (*(int *)&this_ptr->field_0x4c0 != 0) {
        *(uint *)&this_ptr->field_0x4c0 = 2;
      }
      local_30 = 1;
      break;
    }
LAB_00539c90:
    *(uint *)&this_ptr->field_0x2d4 = 2;
  }
  if (*(int *)&this_ptr->field_0x4c8 != 0) {
    if (bVar12) {
      pcVar10 = local_3a4;
      pcVar8 = &this_ptr->field_0x4cc;
      pcVar7 = local_3a4;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        name = pcVar7;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
joined_r0x005398f9:
      if (local_3a4[0] != '\0') {
        if (*pcVar7 == ';') {
          *pcVar7 = '\0';
          iVar4 = core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0(g_CDemonSetPtr,name);
          if ((iVar4 != -1) && (iVar4 != *(int *)&g_CDemonSetPtr->field_0x15aeb8)) {
            core_setdir_cpp_FUN_0055b1e0(g_CDemonSetPtr,iVar4,999.0);
            *(uint *)&this_ptr->field_0x724 = 0;
            goto LAB_00539950;
          }
          pcVar7 = pcVar7 + 1;
          local_3a4[0] = *pcVar7;
          name = pcVar7;
        }
        else {
          pcVar7 = pcVar7 + 1;
          local_3a4[0] = *pcVar7;
        }
        goto joined_r0x005398f9;
      }
LAB_00539950:
      iVar4 = core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0(g_CDemonSetPtr,name);
      if ((iVar4 != -1) && (iVar4 != *(int *)&g_CDemonSetPtr->field_0x15aeb8)) {
        core_setdir_cpp_FUN_0055b1e0(g_CDemonSetPtr,iVar4,999.0);
        *(uint *)&this_ptr->field_0x724 = 0;
      }
    }
    if (local_30 != 0) {
      core_setdir_cpp_FUN_0055b200(g_CDemonSetPtr);
    }
  }
  if (*(float *)&this_ptr->field_0x2dc != local_38) {
    if ((local_34 == 0) || (this_ptr->field_0x4a8 == '\0')) {
      core_sound_cpp_FUN_0057d9d0(0x02C82A60,*(uint *)&this_ptr->field_0x4bc);
    }
    else {
      iVar4 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&this_ptr->field_0x4bc);
      if (iVar4 == 0) {
        uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x30))
                          (this_ptr,&this_ptr->field_0x4a8);
        *(uint *)&this_ptr->field_0x4bc = uVar5;
      }
    }
    fStack_3c = *(float *)&this_ptr->field_0x24;
    core_xform_cpp_FUN_005b5620
              (aCStack_274,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
    core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00539660(this_ptr);
    core_xform_cpp_FUN_005b5760
              (aCStack_2a4,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
    puVar9 = auStack_12c;
    puVar11 = &uStack_114;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    iStack_28 = 0;
    for (iStack_20 = 0; iStack_20 < *(int *)&g_CDemonSetPtr->field_0x14f0a8;
        iStack_20 = iStack_20 + 1) {
      actor = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_28);
      iVar4 = (**(code **)(*(int *)&actor->field_0x154 + 0x10c))(actor);
      if ((iVar4 < 1) &&
         (iVar4 = (**(code **)(*(int *)&actor->field_0x154 + 0x70))(actor), iVar4 == 0)) {
        if (*(int *)&this_ptr->field_0x510 == 0) {
          if ((*(float *)&this_ptr->field_0x24 < fStack_3c) &&
             (iVar4 = core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_0053ab00(this_ptr,actor),
             iVar4 != 0)) {
            (**(code **)(*(int *)&actor->field_0x154 + 0xdc))(actor,8,0,0xbf800000);
          }
        }
        else {
          core_actor_cpp_FUN_00408bb0(this_ptr,&actor->field_0x20);
          fStack_cc = fStack_9c;
          afStack_f8[(uint)bVar13 * -2 + 0xc] = afStack_f8[(uint)bVar13 * -2 + 0x18];
          afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
               afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
          if ((fStack_c8 <= fStack_104) && (fStack_110 + (float)_DAT_005ed423 <= fStack_c8)) {
            core_box_cpp_FUN_00421af0(&uStack_114,afStack_f8 + 0xb);
            fVar2 = fStack_c8;
            fVar16 = fStack_cc;
            fStack_b4 = fStack_c0;
            afStack_f8[(uint)bVar13 * -2 + 0x12] = afStack_f8[(uint)bVar13 * -2 + 0xf];
            afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
                 afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
            afStack_f8[2] = fVar16 - fStack_b4;
            afStack_f8[3] = fVar2 - fStack_b0;
            fStack_e8 = fStack_c4 - fStack_ac;
            fStack_54 = fVar16 - fStack_b4;
            afStack_f8[(uint)bVar13 * -2 + 0x2a] = afStack_f8[(uint)bVar13 * -2 + 3];
            afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
                 afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
            if ((ABS(fStack_54) <= (float)_DAT_005ed42b) && (ABS(fStack_4c) <= (float)_DAT_005ed42b)
               ) {
              fStack_50 = 0.0;
              core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)auStack_154);
              auStack_154._0_4_ = 0;
              iVar4 = (**(code **)(*(int *)&actor->field_0x154 + 0x3c))(actor,auStack_154);
              if ((((iVar4 == 2) && (fStack_c8 + (float)auStack_154._20_4_ <= fStack_104)) &&
                  (fStack_110 <= fStack_c8 + fStack_13c)) &&
                 (fVar16 = fStack_54 * fStack_54 + fStack_4c * fStack_4c,
                 fVar16 <= fStack_138 * fStack_138)) {
                fVar16 = SQRT(fVar16);
                dVar15 = (double)fVar16;
                if (0.0 < dVar15) {
                  fStack_1c = (fStack_138 + (float)_DAT_005ed433) / fVar16;
                  fStack_54 = fStack_54 * fStack_1c;
                  fStack_4c = fStack_4c * fStack_1c;
                  pfVar14 = afStack_f8 + 0x14;
                  fStack_50 = fStack_1c * 0.0;
                  fStack_78 = fStack_b4 + fStack_54;
                  fStack_74 = fStack_b0 + fStack_1c * 0.0;
                  fStack_70 = fStack_ac + fStack_4c;
                  afStack_a8[0] = fStack_78;
                  afStack_f8[(uint)bVar13 * -2 + 0x15] = afStack_f8[(uint)bVar13 * -2 + 0x21];
                  afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
                       afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
                  core_actor_cpp_FUN_00408b40(this_ptr,pfVar14,dVar15,fVar16);
                  fStack_90 = (float)uStack_48;
                  afStack_f8[(uint)bVar13 * -2 + 0x1b] = afStack_f8[(uint)bVar13 * -2 + 0x2d];
                  afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
                       afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e];
                  uStack_8c = *(uint *)&actor->field_0x24;
                  (**(code **)(*(int *)&actor->field_0x154 + 0x68))
                            (actor,afStack_f8 + 0x1a,&actor->field_0x30);
                }
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
      iVar4 = *(int *)(&g_CDemonSetPtr->field_0x14d168 + iStack_2c);
      if (this_ptr == *(CPlatform **)(iVar4 + 0xdc)) {
        pCStack_18 = (CVector3f *)(iVar4 + 0x20);
        core_xform_cpp_FUN_005b5760(aCStack_214,pCStack_18,(CVector3f *)(iVar4 + 0x30));
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_214,aCStack_274);
        puVar9 = auStack_1b4;
        puVar11 = auStack_1e4;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(auStack_1e4,aCStack_2a4);
        puVar9 = auStack_184;
        puVar11 = auStack_244;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
        }
        fStack_84 = fStack_238;
        uStack_80 = uStack_228;
        uStack_7c = uStack_218;
        fStack_6c = fStack_238;
        afStack_f8[(uint)bVar13 * -2 + 0x24] = afStack_f8[(uint)bVar13 * -2 + 0x1e];
        afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
             afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
        core_xform_cpp_FUN_005b5930(auStack_244);
        fVar3 = fStack_64;
        fVar2 = fStack_68;
        fVar16 = fStack_6c;
        uStack_60 = uStack_d8;
        afStack_f8[(uint)bVar13 * -2 + 0x27] = afStack_f8[(uint)bVar13 * -2 + 9];
        afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
             afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
        fStack_e4 = fVar16 - *(float *)pCStack_18;
        fStack_e0 = fVar2 - *(float *)&pCStack_18->field_0x4;
        fStack_dc = fVar3 - *(float *)&pCStack_18->field_0x8;
        fStack_fc = fVar16 - *(float *)pCStack_18;
        afStack_f8[(uint)bVar13 * -2] = afStack_f8[(uint)bVar13 * -2 + 6];
        afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        if ((float *)(iVar4 + 0xe0) != &fStack_fc) {
          *(float *)(iVar4 + 0xe0) = fStack_fc;
          *(float *)(iVar4 + 0xe4) = afStack_f8[0];
          *(float *)(iVar4 + 0xe8) = afStack_f8[1];
        }
        *(uint *)(iVar4 + 0xec) = 0;
        *(uint *)(iVar4 + 0xf4) = 0;
        pCStack_18 = (CVector3f *)core_actor_cpp_FUN_0040cd60(fStack_5c - *(float *)(iVar4 + 0x34));
        *(CVector3f **)(iVar4 + 0xf0) = pCStack_18;
      }
      iStack_2c = iStack_2c + 4;
    }
    core_platfrm_cpp_FUN_0053aef0(this_ptr);
  }
  return;
}
