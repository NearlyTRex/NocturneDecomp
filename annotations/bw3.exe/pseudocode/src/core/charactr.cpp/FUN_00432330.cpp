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
  CLocation *pCVar1;
  CCharacter *pCVar2;
  EDeathState EVar3;
  int iVar4;
  int iVar5;
  CSkeleton *pCVar6;
  float fVar7;
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
  uint uStack_18c;
  float afStack_188 [2];
  CVector3f CStack_180;
  uint uStack_174;
  float afStack_170 [5];
  float fStack_15c;
  CVector3f CStack_150;
  uint uStack_144;
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
  uint uStack_e4;
  uint uStack_d8;
  float fStack_cc;
  float afStack_c0 [7];
  float afStack_a4 [5];
  float fStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_6c;
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_48 [5];
  float fStack_34;
  CSkeleton *pCStack_30;
  int iStack_2c;
  int iStack_28;
  CCharacter *pCStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  EVar3 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1);
  if (EVar3 != DEATH_STATE_ALIVE) {
    param_3 = 1;
  }
  pCStack_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         (&param_1->model);
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
  if (iVar4 == -1) {
    param_3 = 1;
  }
  pCStack_24 = (CCharacter *)0x0;
  pCVar2 = pCStack_24;
  if ((param_3 == 0) &&
     (pCVar2 = *(CCharacter **)&param_1->field_0x2764,
     *(CCharacter **)&param_1->field_0x2764 == (CCharacter *)0x0)) {
    if (*(float *)&param_1->field_0x2778 <= 0.0) {
      iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
      if (iVar4 == -1) {
        afStack_c0[1] = 5.5;
        afStack_c0[0] = 0.0;
        afStack_c0[2] = 0.0;
        core_actor_cpp_FUN_00408b80(param_1,afStack_140 + 0x20);
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
        core_skeleton_cpp_FUN_0054dcc0(&param_1->model,iVar4);
        pfVar10 = afStack_140 + 8;
        afStack_120[0] = (float)uStack_d8;
        afStack_140[(uint)bVar8 * -2 + 9] = afStack_140[(uint)bVar8 * -2 + 0x1b];
        afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
        core_actor_cpp_FUN_00408b80(param_1,pfVar10);
        CStack_60.x = fStack_15c;
        afStack_a4[(uint)bVar8 * -2 + 0x12] = afStack_170[(uint)bVar8 * -2 + 6];
        afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
             afStack_170[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        if (&CStack_180 != (CVector3f *)(afStack_a4 + 0x11)) {
          CStack_180.x = CStack_60.x;
          CStack_180.y = CStack_60.y;
          CStack_180.z = CStack_60.z;
        }
      }
      iStack_28 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (0x01C6E360,"heroCanSee");
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1) {
        pCVar2 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_20);
        if (((pCVar2 != param_1) &&
            (((((*(int *)&pCVar2->field_0x27a8 == 0 || (iStack_28 != 0)) &&
               (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar2,g_CBugsClassInfo.name_hash), iVar4 == 0)) &&
              ((iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar2,g_CTVBatClassInfo.name_hash), iVar4 == 0 &&
               (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar2,g_CPryeMorphClassInfo.name_hash), iVar4 == 0)))) &&
             (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar2,g_CSpiritEagleClassInfo.name_hash), iVar4 == 0)))) &&
           ((((iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (pCVar2,g_CSpiritBearClassInfo.name_hash), iVar4 == 0 &&
              (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (pCVar2,g_CSpiritIndianClassInfo.name_hash), iVar4 == 0)) &&
             (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar2,g_CStylerClassInfo.name_hash), iVar4 == 0)) &&
            ((((iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar2,g_CStylerDemonClassInfo.name_hash), iVar4 == 0 &&
               (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar2,g_CDarkwolfClassInfo.name_hash), iVar4 == 0)) &&
              (iVar4 = (*((pCVar2->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar2->base),
              iVar4 == 0)) &&
             (EVar3 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
             EVar3 == DEATH_STATE_ALIVE)))))) {
          iVar4 = -1;
          if ((pCVar2->model).model_name[0] != '\0') {
            iVar4 = 0;
            pcVar9 = "Bip01 head";
            pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                               (&pCVar2->model);
            iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar6,pcVar9,iVar4);
          }
          if (iVar4 < 0) {
            pCVar1 = &(pCVar2->base).location;
            if ((CLocation *)&CStack_150 != pCVar1) {
              CStack_150.x = (pCVar1->position).x;
              CStack_150.y = (pCVar2->base).location.position.y;
              CStack_150.z = (pCVar2->base).location.position.z;
            }
            CStack_150.y = CStack_150.y + _DAT_005b8696;
          }
          else {
            core_skeleton_cpp_FUN_0054dcc0(&pCVar2->model,iVar4);
            pfVar10 = afStack_140 + 0xe;
            afStack_108[0] = (float)uStack_6c;
            afStack_140[(uint)bVar8 * -2 + 0xf] = afStack_a4[(uint)bVar8 * -2 + 0xf];
            afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
                 afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
            core_actor_cpp_FUN_00408b80(pCVar2,pfVar10);
            CStack_21c.x = fStack_cc;
            *(float *)((int)&CStack_21c + (uint)bVar8 * -8 + 4) =
                 afStack_140[(uint)bVar8 * -2 + 0x1e];
            *(float *)((int)&CStack_21c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
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
              iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar2,g_CEnemyClassInfo.name_hash);
              if ((iVar4 != 0) && (fStack_244 = 30.0, *(CCharacter **)(iVar4 + 0xcde4) == param_1))
              {
                fStack_244 = 40.0;
              }
              if ((fStack_244 < (float)_DAT_005b86ce) &&
                 (iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(&pCVar2->base,"CHero"),
                 iVar5 != 0)) {
                fStack_244 = 15.0;
              }
              fStack_244 = ((float)_DAT_005b86d6 / (SQRT(fStack_248) + (float)_DAT_005b86d6)) *
                           fStack_244;
              if (pCVar2 == *(CCharacter **)&param_1->field_0x2760) {
                fStack_244 = fStack_244 * (float)_DAT_005b868e;
              }
              if (((iVar4 != 0) && (*(int *)(iVar4 + 0xcdd0) == 1)) || (_DAT_005b86de <= fStack_244)
                 ) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->base);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCVar2->base);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,2);
                iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                  (g_CDemonSetPtr,&CStack_180,&CStack_150);
                if ((iVar4 == 0) && (pCStack_24 = pCVar2, afStack_20c + 0x11 != afStack_20c + 0xb))
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
      *(float *)&param_1->field_0x2778 = fStack_18;
    }
    else {
      pCStack_24 = *(CCharacter **)&param_1->field_0x2760;
      *(float *)&param_1->field_0x2778 = *(float *)&param_1->field_0x2778 - param_2;
    }
  }
  else {
    pCStack_24 = pCVar2;
    *(uint *)&param_1->field_0x2778 = 0;
  }
  *(CCharacter **)&param_1->field_0x2760 = pCStack_24;
  if (pCStack_24 != (CCharacter *)0x0) {
    iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
    if (iVar4 == -1) {
      afStack_c0[3] = 0.0;
      afStack_c0[4] = 5.5;
      afStack_c0[5] = 0.0;
      core_actor_cpp_FUN_00408b80(param_1,afStack_140 + 0x23);
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
      core_skeleton_cpp_FUN_0054dcc0(&param_1->model,iVar4);
      pfVar10 = afStack_a4 + 0x17;
      afStack_48[0] = (float)uStack_e4;
      afStack_a4[(uint)bVar8 * -2 + 0x18] = afStack_140[(uint)bVar8 * -2 + 0x18];
      afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
           afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
      core_actor_cpp_FUN_00408b80(param_1,pfVar10);
      fStack_114 = afStack_c0[6];
      afStack_140[(uint)bVar8 * -2 + 0xc] = afStack_a4[(uint)bVar8 * -2];
      afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
           afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (&fStack_1b0 != afStack_140 + 0xb) {
        fStack_1b0 = fStack_114;
        fStack_1ac = fStack_110;
        fStack_1a8 = fStack_10c;
      }
    }
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&param_1->field_0x2760,g_CCharacterClassInfo.name_hash);
    iStack_2c = iVar4;
    if (iVar4 == 0) {
      iVar4 = *(int *)&param_1->field_0x2760;
      if (afStack_1a0 + 2 != (float *)(iVar4 + 0x20)) {
        afStack_1a0[2] = *(float *)(iVar4 + 0x20);
        afStack_1a0[3] = *(float *)(iVar4 + 0x24);
        fStack_22c = *(float *)(iVar4 + 0x28);
LAB_00432bcb:
        fStack_190 = fStack_22c;
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if ((iVar5 == 0) || (*(char *)(iVar4 + 0x24a8) == '\0')) {
        iVar4 = 0;
        pcVar9 = "Bip01 head";
        this_ptr = (CDeformableModelInstance *)(iStack_2c + 0x158);
        pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar6,pcVar9,iVar4);
        if (iVar4 == -1) {
          if (afStack_1a0 + 2 != (float *)(iStack_2c + 0x20)) {
            afStack_1a0[2] = *(float *)(iStack_2c + 0x20);
            afStack_1a0[3] = *(float *)(iStack_2c + 0x24);
            fStack_190 = *(float *)(iStack_2c + 0x28);
          }
          afStack_1a0[3] = afStack_1a0[3] + _DAT_005b8696;
        }
        else {
          core_skeleton_cpp_FUN_0054dcc0(this_ptr,iVar4);
          uStack_144 = uStack_18c;
          afStack_140[(uint)bVar8 * -2] = afStack_188[(uint)bVar8 * -2];
          afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_188[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_actor_cpp_FUN_00408b80(iStack_2c,&uStack_144);
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
        core_skeleton_cpp_FUN_0054dcc0(iVar4 + 0x158,0);
        pfVar10 = afStack_20c + 8;
        afStack_1ec[0] = (float)uStack_54;
        afStack_20c[(uint)bVar8 * -2 + 9] = afStack_a4[(uint)bVar8 * -2 + 0x15];
        afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
        core_actor_cpp_FUN_00408b80(iVar4,pfVar10);
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
      *(uint *)&param_1->field_0x2760 = 0;
    }
    if ((float)_DAT_005b86a6 < ABS(fStack_1c8)) {
      *(uint *)&param_1->field_0x2760 = 0;
      goto LAB_004323d1;
    }
  }
  if (*(int *)&param_1->field_0x2760 != 0) {
    fVar7 = param_2 / _DAT_005b86ae + *(float *)&param_1->field_0x2770;
    *(float *)&param_1->field_0x2770 = fVar7;
    if (1.0 < fVar7) {
      *(uint *)&param_1->field_0x2770 = 0x3f800000;
    }
    fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                 (fStack_1c4 - *(float *)&param_1->field_0x2768);
    *(float *)&param_1->field_0x2768 =
         fStack_18 * (float)_DAT_005b86b6 + *(float *)&param_1->field_0x2768;
    fVar7 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                             (fStack_1c8 - *(float *)&param_1->field_0x276c);
    *(float *)&param_1->field_0x276c =
         fVar7 * (float)_DAT_005b86b6 + *(float *)&param_1->field_0x276c;
    return;
  }
LAB_004323d1:
  fVar7 = *(float *)&param_1->field_0x2770 - param_2 / _DAT_005b86ae;
  *(float *)&param_1->field_0x2770 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&param_1->field_0x276c = 0;
    *(uint *)&param_1->field_0x2770 = 0;
    *(uint *)&param_1->field_0x2768 = 0;
    return;
  }
  return;
}
