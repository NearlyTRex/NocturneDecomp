// Name: core_charactr.cpp_FUN_00432f10
// Address: 00432f10
// Address Range: [[00432f10, 00433b27]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00432f10(CCharacter *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00432f10(CCharacter *param_1,float param_2,int param_3)

{
  EDeathState EVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CCharacter *pCVar4;
  CSkeleton *pCVar5;
  float fVar6;
  CLocation *pCVar7;
  CDeformableModelInstance *this_ptr;
  byte bVar8;
  float afStackY_1228 [1013];
  char *pcVar9;
  float *pfVar10;
  uint *puVar11;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  uint uStack_1ec;
  uint uStack_1e0;
  float fStack_1d4;
  float fStack_1d0;
  uint uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  float fStack_1b0;
  uint uStack_1a4;
  CVector3f CStack_198;
  CVector3f CStack_18c;
  float fStack_180;
  float afStack_17c [5];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float afStack_fc [4];
  float afStack_ec [4];
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float afStack_8c [5];
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint auStack_5c [5];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  CSkeleton *pCStack_34;
  CCharacter *pCStack_30;
  int iStack_2c;
  CCharacter *pCStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  EVar1 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1);
  if (EVar1 != DEATH_STATE_ALIVE) {
    param_3 = 1;
  }
  pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         (&param_1->model);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
  if (iVar2 == -1) {
    param_3 = 1;
  }
  pCStack_28 = (CCharacter *)0x0;
  pCVar4 = pCStack_28;
  if ((param_3 == 0) &&
     (pCVar4 = param_1->look_at_target, param_1->look_at_target == (CCharacter *)0x0)) {
    if (param_1->look_at_search_timer <= 0.0) {
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
      if (iVar2 == -1) {
        afStack_fc[1] = 5.5;
        afStack_fc[0] = 0.0;
        afStack_fc[2] = 0.0;
        core_actor_cpp_FUN_00408b40(param_1,afStack_11c + 8);
        CStack_18c.x = fStack_78;
        *(float *)((int)&CStack_18c + (uint)bVar8 * -8 + 4) = afStack_8c[(uint)bVar8 * -2 + 6];
        *(float *)((int)&CStack_18c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        if (&CStack_12c != &CStack_18c) {
          CStack_12c.x = CStack_18c.x;
          CStack_12c.y = CStack_18c.y;
          CStack_12c.z = CStack_18c.z;
        }
      }
      else {
        core_skeleton_cpp_FUN_00569130(&param_1->model,iVar2);
        puVar11 = &stack0xfffffe5c;
        uStack_1a4 = uStack_d8;
        *(float *)((int)&stack0xfffffe60 + (uint)bVar8 * 0xfffffffe * 4) =
             afStack_ec[(uint)bVar8 * -2 + 6];
        afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8] =
             afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        core_actor_cpp_FUN_00408b40(param_1,puVar11);
        CStack_198.x = fStack_cc;
        *(float *)((int)&CStack_198 + (uint)bVar8 * -8 + 4) = afStack_ec[(uint)bVar8 * -2 + 9];
        *(float *)((int)&CStack_198 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        if (&CStack_12c != &CStack_198) {
          CStack_12c.x = CStack_198.x;
          CStack_12c.y = CStack_198.y;
          CStack_12c.z = CStack_198.z;
        }
      }
      iStack_2c = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                            (0x01C51D80,"heroCanSee");
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < g_CDemonSetPtr->character_count; iStack_20 = iStack_20 + 1) {
        pCVar4 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_24);
        if ((((pCVar4 != param_1) &&
             (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (&pCVar4->base,g_CTVBatClassInfo.name_hash),
             pCVar3 == (CDemonActor *)0x0)) && ((pCVar4->is_spectral == 0 || (iStack_2c != 0)))) &&
           ((iVar2 = (*((pCVar4->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar4->base),
            iVar2 == 0 &&
            (EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
            EVar1 == DEATH_STATE_ALIVE)))) {
          iVar2 = -1;
          if ((pCVar4->model).model_name[0] != '\0') {
            iVar2 = 0;
            pcVar9 = "Bip01 head";
            pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                               (&pCVar4->model);
            iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar5,pcVar9,iVar2);
          }
          if (iVar2 < 0) {
            pCVar7 = &(pCVar4->base).location;
            if ((CLocation *)&CStack_144 != pCVar7) {
              CStack_144.x = (pCVar7->position).x;
              CStack_144.y = (pCVar4->base).location.position.y;
              CStack_144.z = (pCVar4->base).location.position.z;
            }
            CStack_144.y = CStack_144.y + _DAT_005d5d4f;
          }
          else {
            core_skeleton_cpp_FUN_00569130(&pCVar4->model,iVar2);
            puVar11 = &stack0xfffffe14;
            uStack_1ec = afStack_11c[2];
            *(float *)((int)&stack0xfffffe18 + (uint)bVar8 * 0xfffffffe * 4) =
                 afStack_11c[(uint)bVar8 * -2 + 3];
            *(float *)(&stack0xfffffe1c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            core_actor_cpp_FUN_00408b40(pCVar4,puVar11);
            CStack_138.x = fStack_108;
            *(float *)((int)&CStack_138 + (uint)bVar8 * -8 + 4) = afStack_11c[(uint)bVar8 * -2 + 6];
            *(float *)((int)&CStack_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            if (&CStack_144 != &CStack_138) {
              CStack_144.x = CStack_138.x;
              CStack_144.y = CStack_138.y;
              CStack_144.z = CStack_138.z;
            }
          }
          pfVar10 = afStack_11c + 0xb;
          fStack_21c = CStack_144.x - CStack_12c.x;
          fStack_218 = CStack_144.y - CStack_12c.y;
          fStack_214 = CStack_144.z - CStack_12c.z;
          afStack_fc[3] = CStack_144.x - CStack_12c.x;
          afStack_ec[(uint)bVar8 * -2] = *(float *)((int)&stack0xfffffde8 + (uint)bVar8 * -8);
          afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&stack0xfffffdec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          core_actor_cpp_FUN_00408b00(param_1,pfVar10);
          fStack_234 = fStack_180;
          (&stack0xfffffdd0)[(uint)bVar8 * 0xfffffffe] = afStack_17c[(uint)bVar8 * -2];
          *(float *)((int)&stack0xfffffdd4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if ((0.0 <= fStack_22c) &&
             (fStack_244 = fStack_22c * fStack_22c +
                           fStack_234 * fStack_234 + fStack_230 * fStack_230, fStack_1c = fStack_244
             , (int)fStack_244 < 0x44610001)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xfffffdcc);
            fStack_b4 = fStack_1bc;
            afStack_ec[(uint)bVar8 * -2 + 0xf] =
                 *(float *)((int)&stack0xfffffe48 + (uint)bVar8 * 0xfffffffe * 4);
            afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
                 *(float *)(&stack0xfffffe4c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if ((ABS(fStack_b0) <= (float)_DAT_005d5d77) && (ABS(fStack_b4) <= (float)_DAT_005d5d7f)
               ) {
              fStack_248 = 10.0;
              pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (&pCVar4->base,g_CEnemyClassInfo.name_hash);
              if ((pCVar3 != (CDemonActor *)0x0) &&
                 (fStack_248 = 30.0, (CCharacter *)pCVar3[0x90].validation_magic == param_1)) {
                fStack_248 = 40.0;
              }
              if ((fStack_248 < (float)_DAT_005d5d87) &&
                 (iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar4->base,"CHero"),
                 iVar2 != 0)) {
                fStack_248 = 15.0;
              }
              fStack_248 = ((float)_DAT_005d5d8f / (SQRT(fStack_244) + (float)_DAT_005d5d8f)) *
                           fStack_248;
              if (pCVar4 == param_1->look_at_candidate) {
                fStack_248 = fStack_248 * (float)_DAT_005d5d47;
              }
              if (((pCVar3 != (CDemonActor *)0x0) &&
                  (pCVar3[0x90].orient_matrix.m[2].x == 1.4013e-45)) ||
                 (_DAT_005d5d97 <= fStack_248)) {
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&param_1->base);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCVar4->base);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                  (g_CDemonSetPtr,&CStack_12c,&CStack_144);
                if ((iVar2 == 0) && (pCStack_28 = pCVar4, &stack0xfffffe38 != afStack_ec + 0xe)) {
                  fStack_1c8 = fStack_b4;
                  fStack_1c4 = fStack_b0;
                  uStack_1c0 = uStack_ac;
                }
              }
            }
          }
        }
        iStack_24 = iStack_24 + 4;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,2.0);
      param_1->look_at_search_timer = fStack_18;
    }
    else {
      pCStack_28 = param_1->look_at_candidate;
      param_1->look_at_search_timer = param_1->look_at_search_timer - param_2;
    }
  }
  else {
    pCStack_28 = pCVar4;
    param_1->look_at_search_timer = 0.0;
  }
  param_1->look_at_candidate = pCStack_28;
  if (pCStack_28 != (CCharacter *)0x0) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
    if (iVar2 == -1) {
      uStack_48 = 0;
      uStack_44 = 0x40b00000;
      uStack_40 = 0;
      core_actor_cpp_FUN_00408b40(param_1,auStack_5c + 5);
      afStack_ec[2] = fStack_240;
      afStack_ec[(uint)bVar8 * -2 + 3] = *(float *)(&stack0xfffffdc4 + (uint)bVar8 * -8);
      afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)(&stack0xfffffdc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      if (afStack_ec + 0x14 != afStack_ec + 2) {
        fStack_9c = afStack_ec[2];
        fStack_98 = afStack_ec[3];
        fStack_94 = fStack_dc;
      }
    }
    else {
      core_skeleton_cpp_FUN_00569130(&param_1->model,iVar2);
      pfVar10 = afStack_17c + 2;
      afStack_17c[2] = (float)uStack_90;
      afStack_17c[(uint)bVar8 * -2 + 3] = afStack_8c[(uint)bVar8 * -2];
      afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,pfVar10);
      fStack_168 = afStack_8c[2];
      afStack_17c[(uint)bVar8 * -2 + 6] = afStack_8c[(uint)bVar8 * -2 + 3];
      afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      if (afStack_ec + 0x14 != afStack_17c + 5) {
        fStack_9c = fStack_168;
        fStack_98 = fStack_164;
        fStack_94 = fStack_160;
      }
    }
    pCVar4 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c600
                       (&param_1->look_at_candidate->base,g_CCharacterClassInfo.name_hash);
    pCStack_30 = pCVar4;
    if (pCVar4 == (CCharacter *)0x0) {
      pCVar4 = param_1->look_at_candidate;
      pCVar7 = &(pCVar4->base).location;
      if ((CLocation *)(afStack_8c + 8) != pCVar7) {
        fStack_6c = (pCVar7->position).x;
        fStack_68 = (pCVar4->base).location.position.y;
        fStack_154 = (pCVar4->base).location.position.z;
LAB_0043370e:
        fStack_64 = fStack_154;
      }
    }
    else {
      EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
      if ((EVar1 == DEATH_STATE_ALIVE) || ((pCVar4->model).model_name[0] == '\0')) {
        iVar2 = 0;
        pcVar9 = "Bip01 head";
        this_ptr = &pCStack_30->model;
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar5,pcVar9,iVar2);
        if (iVar2 == -1) {
          pCVar7 = &(pCStack_30->base).location;
          if ((CLocation *)(afStack_8c + 8) != pCVar7) {
            fStack_6c = (pCVar7->position).x;
            fStack_68 = (pCStack_30->base).location.position.y;
            fStack_64 = (pCStack_30->base).location.position.z;
          }
          fStack_68 = fStack_68 + _DAT_005d5d4f;
        }
        else {
          core_skeleton_cpp_FUN_00569130(this_ptr,iVar2);
          uStack_204 = uStack_228;
          *(uint *)((int)&stack0xfffffe00 + (uint)bVar8 * 0xfffffffe * 4) =
               *(uint *)(&stack0xfffffddc + (uint)bVar8 * -8);
          *(uint *)(&stack0xfffffe04 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xfffffde0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          core_actor_cpp_FUN_00408b40(pCStack_30,&stack0xfffffdfc);
          fStack_15c = fStack_120;
          afStack_17c[(uint)bVar8 * -2 + 9] = afStack_11c[(uint)bVar8 * -2];
          afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
               afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (afStack_8c + 8 != afStack_17c + 8) {
            fStack_6c = fStack_15c;
            fStack_68 = fStack_158;
            goto LAB_0043370e;
          }
        }
      }
      else {
        core_skeleton_cpp_FUN_00569130(&pCVar4->model,0);
        puVar11 = &stack0xfffffe20;
        uStack_1e0 = auStack_5c[2];
        *(uint *)((int)&stack0xfffffe24 + (uint)bVar8 * 0xfffffffe * 4) =
             auStack_5c[(uint)bVar8 * -2 + 3];
        *(uint *)(&stack0xfffffe28 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             auStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        core_actor_cpp_FUN_00408b40(pCVar4,puVar11);
        fStack_210 = fStack_60;
        (&stack0xfffffdf4)[(uint)bVar8 * 0xfffffffe] = (float)auStack_5c[(uint)bVar8 * -2];
        *(uint *)((int)&stack0xfffffdf8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             auStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (afStack_8c + 8 != &stack0xfffffdf0) {
          fStack_6c = fStack_210;
          fStack_68 = fStack_20c;
          fStack_154 = fStack_208;
          goto LAB_0043370e;
        }
      }
    }
    fStack_1f8 = fStack_6c - fStack_9c;
    fStack_1f4 = fStack_68 - fStack_98;
    fStack_1f0 = fStack_64 - fStack_94;
    fStack_1b0 = fStack_6c - fStack_9c;
    *(uint *)((int)&stack0xfffffe54 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xfffffe0c + (uint)bVar8 * -8);
    *(uint *)(&stack0xfffffe58 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xfffffe10 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    core_actor_cpp_FUN_00408b00(param_1,&stack0xfffffe50);
    afStack_a8[0] = (float)uStack_c0;
    afStack_ec[(uint)bVar8 * -2 + 0x12] = afStack_ec[(uint)bVar8 * -2 + 0xc];
    afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
         afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_ec + 0x11);
    fStack_1d4 = fStack_150;
    (&stack0xfffffe30)[(uint)bVar8 * 0xfffffffe] = afStack_17c[(uint)bVar8 * -2 + 0xc];
    *(float *)((int)&stack0xfffffe34 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    if (&stack0xfffffe38 != &stack0xfffffe2c) {
      fStack_1c8 = fStack_1d4;
      fStack_1c4 = fStack_1d0;
      uStack_1c0 = uStack_1cc;
    }
    if ((float)_DAT_005d5d57 < ABS(fStack_1c4)) {
      param_1->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)_DAT_005d5d5f < ABS(fStack_1c8)) {
      param_1->look_at_candidate = (CCharacter *)0x0;
      goto LAB_00432fb1;
    }
  }
  if (param_1->look_at_candidate != (CCharacter *)0x0) {
    fVar6 = param_2 / _DAT_005d5d67 + param_1->look_at_weight;
    param_1->look_at_weight = fVar6;
    if (1.0 < fVar6) {
      param_1->look_at_weight = 1.0;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_1c4 - param_1->look_at_yaw);
    param_1->look_at_yaw = fStack_18 * (float)_DAT_005d5d6f + param_1->look_at_yaw;
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_1c8 - param_1->look_at_pitch);
    param_1->look_at_pitch = fVar6 * (float)_DAT_005d5d6f + param_1->look_at_pitch;
    return;
  }
LAB_00432fb1:
  fVar6 = param_1->look_at_weight - param_2 / _DAT_005d5d67;
  param_1->look_at_weight = fVar6;
  if (fVar6 < 0.0) {
    param_1->look_at_pitch = 0.0;
    param_1->look_at_weight = 0.0;
    param_1->look_at_yaw = 0.0;
    return;
  }
  return;
}
