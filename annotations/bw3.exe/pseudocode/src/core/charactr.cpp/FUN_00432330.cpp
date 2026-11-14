// Name: core_charactr.cpp_FUN_00432330
// Address: 00432330
// Address Range: [[00432330, 00432ffc]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00432330(CCharacter *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00432330(CCharacter *param_1,float param_2,int param_3)

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
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  CVector3f CStack_21c;
  float fStack_210;
  float afStack_20c [5];
  float fStack_1f8;
  float afStack_1ec [3];
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  CVector3f CStack_1bc;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float afStack_1a0 [4];
  float fStack_190;
  CVector3f CStack_18c;
  CVector3f CStack_180;
  uint uStack_174;
  float afStack_170 [5];
  float fStack_15c;
  CVector3f CStack_150;
  float fStack_144;
  float afStack_140 [4];
  uint uStack_130;
  float fStack_12c;
  float afStack_120 [3];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [3];
  float fStack_fc;
  float afStack_f0 [3];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [9];
  float afStack_a4 [5];
  float fStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CSkeleton *pCStack_30;
  CCharacter *pCStack_2c;
  int iStack_28;
  CCharacter *pCStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  EVar1 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1);
  if (EVar1 != DEATH_STATE_ALIVE) {
    param_3 = 1;
  }
  pCStack_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         (&param_1->model);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
  if (iVar2 == -1) {
    param_3 = 1;
  }
  pCStack_24 = (CCharacter *)0x0;
  pCVar4 = pCStack_24;
  if ((param_3 == 0) &&
     (pCVar4 = param_1->look_at_target, param_1->look_at_target == (CCharacter *)0x0)) {
    if (param_1->look_at_search_timer <= 0.0) {
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
      if (iVar2 == -1) {
        afStack_c8[3] = 5.5;
        afStack_c8[2] = 0.0;
        afStack_c8[4] = 0.0;
        core_actor_cpp_FUN_00408b80(param_1,afStack_c8 + 2);
        CStack_1bc.x = fStack_12c;
        *(float *)((int)&CStack_1bc + (uint)bVar8 * -8 + 4) = afStack_140[(uint)bVar8 * -2 + 6];
        *(float *)((int)&CStack_1bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        if (&CStack_180 != &CStack_1bc) {
          CStack_180.x = CStack_1bc.x;
          CStack_180.y = CStack_1bc.y;
          CStack_180.z = CStack_1bc.z;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&param_1->model,iVar2,&CStack_d8);
        pfVar10 = afStack_140 + 8;
        afStack_120[0] = CStack_d8.x;
        afStack_140[(uint)bVar8 * -2 + 9] = *(float *)((int)&CStack_d8 + (uint)bVar8 * -8 + 4);
        afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             *(float *)((int)&CStack_d8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_FUN_00408b80(param_1,pfVar10);
        CStack_60.x = fStack_15c;
        *(float *)((int)&CStack_60 + (uint)bVar8 * -8 + 4) = afStack_170[(uint)bVar8 * -2 + 6];
        *(float *)((int)&CStack_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_170[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        if (&CStack_180 != &CStack_60) {
          CStack_180.x = CStack_60.x;
          CStack_180.y = CStack_60.y;
          CStack_180.z = CStack_60.z;
        }
      }
      iStack_28 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (0x01C6E360,"heroCanSee");
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1) {
        pCVar4 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_20);
        if (((pCVar4 != param_1) &&
            (((((pCVar4->is_spectral == 0 || (iStack_28 != 0)) &&
               (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CBugsClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0)) &&
              ((pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CTVBatClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0 &&
               (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CPryeMorphClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0)))) &&
             (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar4->base,g_CSpiritEagleClassInfo.name_hash),
             pCVar3 == (CDemonActor *)0x0)))) &&
           ((((pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (&pCVar4->base,g_CSpiritBearClassInfo.name_hash),
              pCVar3 == (CDemonActor *)0x0 &&
              (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (&pCVar4->base,g_CSpiritIndianClassInfo.name_hash),
              pCVar3 == (CDemonActor *)0x0)) &&
             (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar4->base,g_CStylerClassInfo.name_hash),
             pCVar3 == (CDemonActor *)0x0)) &&
            ((((pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CStylerDemonClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0 &&
               (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CDarkwolfClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0)) &&
              (iVar2 = (*((pCVar4->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar4->base),
              iVar2 == 0)) &&
             (EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
             EVar1 == DEATH_STATE_ALIVE)))))) {
          iVar2 = -1;
          if ((pCVar4->model).model_name[0] != '\0') {
            iVar2 = 0;
            pcVar9 = "Bip01 head";
            pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                               (&pCVar4->model);
            iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar5,pcVar9,iVar2);
          }
          if (iVar2 < 0) {
            pCVar7 = &(pCVar4->base).location;
            if ((CLocation *)&CStack_150 != pCVar7) {
              CStack_150.x = (pCVar7->position).x;
              CStack_150.y = (pCVar4->base).location.position.y;
              CStack_150.z = (pCVar4->base).location.position.z;
            }
            CStack_150.y = CStack_150.y + _DAT_005b8696;
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                      (&pCVar4->model,iVar2,&CStack_6c);
            pfVar10 = afStack_140 + 0xe;
            afStack_108[0] = CStack_6c.x;
            afStack_140[(uint)bVar8 * -2 + 0xf] = *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + 4)
            ;
            afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
                 *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            core_actor_cpp_FUN_00408b80(pCVar4,pfVar10);
            CStack_21c.x = fStack_cc;
            *(float *)((int)&CStack_21c + (uint)bVar8 * -8 + 4) = afStack_c8[(uint)bVar8 * -2];
            *(float *)((int)&CStack_21c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (&CStack_150 != &CStack_21c) {
              CStack_150.x = CStack_21c.x;
              CStack_150.y = CStack_21c.y;
              CStack_150.z = CStack_21c.z;
            }
          }
          pfVar10 = afStack_140 + 0x14;
          fStack_228 = CStack_150.x - CStack_180.x;
          fStack_224 = CStack_150.y - CStack_180.y;
          fStack_220 = CStack_150.z - CStack_180.z;
          afStack_f0[0] = CStack_150.x - CStack_180.x;
          afStack_140[(uint)bVar8 * -2 + 0x15] = afStack_20c[(uint)bVar8 * -2 + -6];
          afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
               afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -5];
          core_actor_cpp_FUN_00408b40(param_1,pfVar10);
          fStack_1d4 = fStack_240;
          afStack_20c[(uint)bVar8 * -2 + 0xf] = *(float *)(&stack0xfffffdc4 + (uint)bVar8 * -8);
          afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
               *(float *)(&stack0xfffffdc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          if ((0.0 <= fStack_1cc) &&
             (fStack_248 = fStack_1cc * fStack_1cc +
                           fStack_1d4 * fStack_1d4 + fStack_1d0 * fStack_1d0, fStack_34 = fStack_248
             , (int)fStack_248 < 0x44610001)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_20c + 0xe);
            fStack_1e0 = fStack_1f8;
            afStack_20c[(uint)bVar8 * -2 + 0xc] = afStack_20c[(uint)bVar8 * -2 + 6];
            afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                 afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            if ((ABS(fStack_1dc) <= (float)_DAT_005b86be) &&
               (ABS(fStack_1e0) <= (float)_DAT_005b86c6)) {
              fStack_244 = 10.0;
              pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar4->base,g_CEnemyClassInfo.name_hash);
              if ((pCVar3 != (CDemonActor *)0x0) &&
                 (fStack_244 = 30.0, (CCharacter *)pCVar3[0x99].orient_matrix.m[1].y == param_1)) {
                fStack_244 = 40.0;
              }
              if ((fStack_244 < (float)_DAT_005b86ce) &&
                 (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(&pCVar4->base,"CHero"),
                 iVar2 != 0)) {
                fStack_244 = 15.0;
              }
              fStack_244 = ((float)_DAT_005b86d6 / (SQRT(fStack_248) + (float)_DAT_005b86d6)) *
                           fStack_244;
              if (pCVar4 == param_1->look_at_candidate) {
                fStack_244 = fStack_244 * (float)_DAT_005b868e;
              }
              if (((pCVar3 != (CDemonActor *)0x0) && (pCVar3[0x99].orient.vec.z == 1.4013e-45)) ||
                 (_DAT_005b86de <= fStack_244)) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->base);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCVar4->base);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,2);
                iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                  (g_CDemonSetPtr,&CStack_180,&CStack_150);
                if ((iVar2 == 0) && (pCStack_24 = pCVar4, afStack_20c + 0x11 != afStack_20c + 0xb))
                {
                  fStack_1c8 = fStack_1e0;
                  fStack_1c4 = fStack_1dc;
                  uStack_1c0 = uStack_1d8;
                }
              }
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,2.0);
      param_1->look_at_search_timer = fStack_18;
    }
    else {
      pCStack_24 = param_1->look_at_candidate;
      param_1->look_at_search_timer = param_1->look_at_search_timer - param_2;
    }
  }
  else {
    pCStack_24 = pCVar4;
    param_1->look_at_search_timer = 0.0;
  }
  param_1->look_at_candidate = pCStack_24;
  if (pCStack_24 != (CCharacter *)0x0) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
    if (iVar2 == -1) {
      afStack_c8[5] = 0.0;
      afStack_c8[6] = 5.5;
      afStack_c8[7] = 0.0;
      core_actor_cpp_FUN_00408b80(param_1,afStack_c8 + 5);
      fStack_210 = afStack_20c[2];
      afStack_20c[(uint)bVar8 * -2] = afStack_20c[(uint)bVar8 * -2 + 3];
      afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      if (&fStack_1b0 != &fStack_210) {
        fStack_1b0 = fStack_210;
        fStack_1ac = afStack_20c[0];
        fStack_1a8 = afStack_20c[1];
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                (&param_1->model,iVar2,&CStack_e4);
      pfVar10 = &fStack_48;
      fStack_48 = CStack_e4.x;
      afStack_44[(uint)bVar8 * -2] = *(float *)((int)&CStack_e4 + (uint)bVar8 * -8 + 4);
      afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_FUN_00408b80(param_1,pfVar10);
      fStack_114 = afStack_c8[8];
      afStack_140[(uint)bVar8 * -2 + 0xc] = afStack_a4[(uint)bVar8 * -2];
      afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
           afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (&fStack_1b0 != afStack_140 + 0xb) {
        fStack_1b0 = fStack_114;
        fStack_1ac = fStack_110;
        fStack_1a8 = fStack_10c;
      }
    }
    pCVar4 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c840
                       (&param_1->look_at_candidate->base,g_CCharacterClassInfo.name_hash);
    pCStack_2c = pCVar4;
    if (pCVar4 == (CCharacter *)0x0) {
      pCVar4 = param_1->look_at_candidate;
      pCVar7 = &(pCVar4->base).location;
      if ((CLocation *)(afStack_1a0 + 2) != pCVar7) {
        afStack_1a0[2] = (pCVar7->position).x;
        afStack_1a0[3] = (pCVar4->base).location.position.y;
        fStack_22c = (pCVar4->base).location.position.z;
LAB_00432bcb:
        fStack_190 = fStack_22c;
      }
    }
    else {
      EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
      if ((EVar1 == DEATH_STATE_ALIVE) || ((pCVar4->model).model_name[0] == '\0')) {
        iVar2 = 0;
        pcVar9 = "Bip01 head";
        this_ptr = &pCStack_2c->model;
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar5,pcVar9,iVar2);
        if (iVar2 == -1) {
          pCVar7 = &(pCStack_2c->base).location;
          if ((CLocation *)(afStack_1a0 + 2) != pCVar7) {
            afStack_1a0[2] = (pCVar7->position).x;
            afStack_1a0[3] = (pCStack_2c->base).location.position.y;
            fStack_190 = (pCStack_2c->base).location.position.z;
          }
          afStack_1a0[3] = afStack_1a0[3] + _DAT_005b8696;
        }
        else {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                    (this_ptr,iVar2,&CStack_18c);
          fStack_144 = CStack_18c.x;
          afStack_140[(uint)bVar8 * -2] = *(float *)((int)&CStack_18c + (uint)bVar8 * -8 + 4);
          afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&CStack_18c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_actor_cpp_FUN_00408b80(pCStack_2c,&fStack_144);
          fStack_234 = fStack_78;
          *(float *)((int)&stack0xfffffdd0 + (uint)bVar8 * -8) = afStack_a4[(uint)bVar8 * -2 + 0xc];
          afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8] =
               afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
          if (afStack_1a0 + 2 != &stack0xfffffdcc) {
            afStack_1a0[2] = fStack_234;
            afStack_1a0[3] = fStack_230;
            goto LAB_00432bcb;
          }
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&pCVar4->model,0,&CStack_54);
        pfVar10 = afStack_20c + 8;
        afStack_1ec[0] = CStack_54.x;
        afStack_20c[(uint)bVar8 * -2 + 9] = *(float *)((int)&CStack_54 + (uint)bVar8 * -8 + 4);
        afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             *(float *)((int)&CStack_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_FUN_00408b80(pCVar4,pfVar10);
        fStack_84 = fStack_fc;
        afStack_a4[(uint)bVar8 * -2 + 9] = afStack_140[(uint)bVar8 * -2 + 0x12];
        afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
        if (afStack_1a0 + 2 != afStack_a4 + 8) {
          afStack_1a0[2] = fStack_84;
          afStack_1a0[3] = fStack_80;
          fStack_22c = fStack_7c;
          goto LAB_00432bcb;
        }
      }
    }
    fStack_1a4 = afStack_1a0[2] - fStack_1b0;
    afStack_1a0[0] = afStack_1a0[3] - fStack_1ac;
    afStack_1a0[1] = fStack_190 - fStack_1a8;
    afStack_170[2] = afStack_1a0[2] - fStack_1b0;
    afStack_170[(uint)bVar8 * -2 + 3] = afStack_1a0[(uint)bVar8 * -2];
    afStack_170[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_actor_cpp_FUN_00408b40(param_1,afStack_170 + 2);
    uStack_174 = afStack_a4[2];
    afStack_170[(uint)bVar8 * -2] = afStack_a4[(uint)bVar8 * -2 + 3];
    afStack_170[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&uStack_174);
    afStack_140[2] = fStack_90;
    afStack_140[(uint)bVar8 * -2 + 3] = afStack_a4[(uint)bVar8 * -2 + 6];
    afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    if (afStack_20c + 0x11 != afStack_140 + 2) {
      fStack_1c8 = afStack_140[2];
      fStack_1c4 = afStack_140[3];
      uStack_1c0 = uStack_130;
    }
    if ((float)_DAT_005b869e < ABS(fStack_1c4)) {
      param_1->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)_DAT_005b86a6 < ABS(fStack_1c8)) {
      param_1->look_at_candidate = (CCharacter *)0x0;
      goto LAB_004323d1;
    }
  }
  if (param_1->look_at_candidate != (CCharacter *)0x0) {
    fVar6 = param_2 / _DAT_005b86ae + param_1->look_at_weight;
    param_1->look_at_weight = fVar6;
    if (1.0 < fVar6) {
      param_1->look_at_weight = 1.0;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_1c4 - param_1->look_at_yaw);
    param_1->look_at_yaw = fStack_18 * (float)_DAT_005b86b6 + param_1->look_at_yaw;
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_1c8 - param_1->look_at_pitch);
    param_1->look_at_pitch = fVar6 * (float)_DAT_005b86b6 + param_1->look_at_pitch;
    return;
  }
LAB_004323d1:
  fVar6 = param_1->look_at_weight - param_2 / _DAT_005b86ae;
  param_1->look_at_weight = fVar6;
  if (fVar6 < 0.0) {
    param_1->look_at_pitch = 0.0;
    param_1->look_at_weight = 0.0;
    param_1->look_at_yaw = 0.0;
    return;
  }
  return;
}
