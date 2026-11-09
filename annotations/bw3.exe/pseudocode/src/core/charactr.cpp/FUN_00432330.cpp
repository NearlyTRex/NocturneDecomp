// Name: core_charactr.cpp_FUN_00432330
// Address: 00432330
// Address Range: [[00432330, 00432ffc]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00432330(CDemonActor *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00432330(CDemonActor *param_1,float param_2,int param_3)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  CSkeleton *pCVar4;
  float fVar5;
  CDeformableModelInstance *this_ptr;
  byte bVar6;
  float afStackY_1228 [1013];
  char *pcVar7;
  float *pfVar8;
  uint *puVar9;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_1f8;
  uint uStack_1ec;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint uStack_18c;
  byte auStack_180 [8];
  float fStack_178;
  uint uStack_174;
  float afStack_170 [5];
  float fStack_15c;
  byte auStack_150 [8];
  float fStack_148;
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
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  float afStack_48 [5];
  float fStack_34;
  CSkeleton *pCStack_30;
  int iStack_2c;
  int iStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar2 != 0) {
    param_3 = 1;
  }
  pCStack_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         ((CDeformableModelInstance *)(param_1 + 1));
  iVar2 = core_skeleton_cpp_FUN_00548090(pCStack_30,"Bip01 head",0);
  if (iVar2 == -1) {
    param_3 = 1;
  }
  pCStack_24 = (CDemonActor *)0x0;
  pCVar1 = pCStack_24;
  if ((param_3 == 0) &&
     (pCVar1 = *(CDemonActor **)&param_1[0x1d].field_0x6c,
     *(CDemonActor **)&param_1[0x1d].field_0x6c == (CDemonActor *)0x0)) {
    if (*(float *)&param_1[0x1d].field_0x80 <= 0.0) {
      iVar2 = core_skeleton_cpp_FUN_00548090(pCStack_30,"Bip01 head",0);
      if (iVar2 == -1) {
        afStack_c0[1] = 5.5;
        afStack_c0[0] = 0.0;
        afStack_c0[2] = 0.0;
        core_actor_cpp_FUN_00408b80(param_1,afStack_140 + 0x20);
        fStack_1bc = fStack_12c;
        (&stack0xfffffe48)[(uint)bVar6 * 0xfffffffe] = afStack_140[(uint)bVar6 * -2 + 6];
        *(float *)((int)&stack0xfffffe4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if ((float *)auStack_180 != &stack0xfffffe44) {
          auStack_180._0_4_ = fStack_1bc;
          auStack_180._4_4_ = fStack_1b8;
          fStack_178 = fStack_1b4;
        }
      }
      else {
        core_skeleton_cpp_FUN_0054dcc0(param_1 + 1,iVar2);
        pfVar8 = afStack_140 + 8;
        afStack_120[0] = (float)uStack_d8;
        afStack_140[(uint)bVar6 * -2 + 9] = afStack_140[(uint)bVar6 * -2 + 0x1b];
        afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
        core_actor_cpp_FUN_00408b80(param_1,pfVar8);
        fStack_60 = fStack_15c;
        afStack_a4[(uint)bVar6 * -2 + 0x12] = afStack_170[(uint)bVar6 * -2 + 6];
        afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_170[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if ((float *)auStack_180 != afStack_a4 + 0x11) {
          auStack_180._0_4_ = fStack_60;
          auStack_180._4_4_ = fStack_5c;
          fStack_178 = fStack_58;
        }
      }
      iStack_28 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (0x01C6E360,"heroCanSee");
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < *(int *)&g_CDemonSetPtr->field_0x14f0a8;
          iStack_1c = iStack_1c + 1) {
        pCVar1 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_20);
        if (((pCVar1 != param_1) &&
            (((((*(int *)&pCVar1[0x1d].field_0xb0 == 0 || (iStack_28 != 0)) &&
               (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar1,g_CBugsClassInfo.name_hash), iVar2 == 0)) &&
              ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar1,g_CTVBatClassInfo.name_hash), iVar2 == 0 &&
               (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar1,g_CPryeMorphClassInfo.name_hash), iVar2 == 0)))) &&
             (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1,g_CSpiritEagleClassInfo.name_hash), iVar2 == 0)))) &&
           ((((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (pCVar1,g_CSpiritBearClassInfo.name_hash), iVar2 == 0 &&
              (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (pCVar1,g_CSpiritIndianClassInfo.name_hash), iVar2 == 0)) &&
             (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1,g_CStylerClassInfo.name_hash), iVar2 == 0)) &&
            ((((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar1,g_CStylerDemonClassInfo.name_hash), iVar2 == 0 &&
               (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (pCVar1,g_CDarkwolfClassInfo.name_hash), iVar2 == 0)) &&
              (iVar2 = (**(code **)(*(int *)&pCVar1->field_0x154 + 0x70))(pCVar1), iVar2 == 0)) &&
             (iVar2 = (**(code **)(*(int *)&pCVar1->field_0x154 + 0x10c))(pCVar1), iVar2 == 0))))))
        {
          iVar2 = -1;
          if (pCVar1[0x1b].field_0x60 != '\0') {
            iVar2 = 0;
            pcVar7 = "Bip01 head";
            pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                               ((CDeformableModelInstance *)(pCVar1 + 1));
            iVar2 = core_skeleton_cpp_FUN_00548090(pCVar4,pcVar7,iVar2);
          }
          if (iVar2 < 0) {
            if (auStack_150 != &pCVar1->field_0x20) {
              auStack_150._0_4_ = *(float *)&pCVar1->field_0x20;
              auStack_150._4_4_ = *(uint *)&pCVar1->field_0x24;
              fStack_148 = *(float *)&pCVar1->field_0x28;
            }
            auStack_150._4_4_ = (float)auStack_150._4_4_ + _DAT_005b8696;
          }
          else {
            core_skeleton_cpp_FUN_0054dcc0(pCVar1 + 1,iVar2);
            pfVar8 = afStack_140 + 0xe;
            afStack_108[0] = (float)uStack_6c;
            afStack_140[(uint)bVar6 * -2 + 0xf] = afStack_a4[(uint)bVar6 * -2 + 0xf];
            afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
            core_actor_cpp_FUN_00408b80(pCVar1,pfVar8);
            fStack_21c = fStack_cc;
            (&stack0xfffffde8)[(uint)bVar6 * 0xfffffffe] = afStack_140[(uint)bVar6 * -2 + 0x1e];
            *(float *)((int)&stack0xfffffdec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
            if ((float *)auStack_150 != &stack0xfffffde4) {
              auStack_150._0_4_ = fStack_21c;
              auStack_150._4_4_ = fStack_218;
              fStack_148 = fStack_214;
            }
          }
          pfVar8 = afStack_140 + 0x14;
          fStack_228 = (float)auStack_150._0_4_ - (float)auStack_180._0_4_;
          fStack_224 = (float)auStack_150._4_4_ - (float)auStack_180._4_4_;
          fStack_220 = fStack_148 - fStack_178;
          afStack_f0[0] = (float)auStack_150._0_4_ - (float)auStack_180._0_4_;
          afStack_140[(uint)bVar6 * -2 + 0x15] =
               *(float *)((int)&stack0xfffffddc + (uint)bVar6 * -8);
          afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
               *(float *)((int)&stack0xfffffde0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          core_actor_cpp_FUN_00408b40(param_1,pfVar8);
          fStack_1d4 = fStack_240;
          (&stack0xfffffe30)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffdc4 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffdc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if ((0.0 <= fStack_1cc) &&
             (fStack_248 = fStack_1cc * fStack_1cc +
                           fStack_1d4 * fStack_1d4 + fStack_1d0 * fStack_1d0, fStack_34 = fStack_248
             , (int)fStack_248 < 0x44610001)) {
            core_vecdir_cpp_FUN_00576250(&stack0xfffffe2c);
            fStack_1e0 = fStack_1f8;
            (&stack0xfffffe24)[(uint)bVar6 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xfffffe0c + (uint)bVar6 * -8);
            *(uint *)((int)&stack0xfffffe28 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)(&stack0xfffffe10 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if ((ABS(fStack_1dc) <= (float)_DAT_005b86be) &&
               (ABS(fStack_1e0) <= (float)_DAT_005b86c6)) {
              fStack_244 = 10.0;
              iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1,g_CEnemyClassInfo.name_hash);
              if ((iVar2 != 0) && (fStack_244 = 30.0, *(CDemonActor **)(iVar2 + 0xcde4) == param_1))
              {
                fStack_244 = 40.0;
              }
              if ((fStack_244 < (float)_DAT_005b86ce) &&
                 (iVar3 = core_actor_cpp_FUN_0040c790(pCVar1,"CHero"), iVar3 != 0)) {
                fStack_244 = 15.0;
              }
              fStack_244 = ((float)_DAT_005b86d6 / (SQRT(fStack_248) + (float)_DAT_005b86d6)) *
                           fStack_244;
              if (pCVar1 == *(CDemonActor **)&param_1[0x1d].field_0x68) {
                fStack_244 = fStack_244 * (float)_DAT_005b868e;
              }
              if (((iVar2 != 0) && (*(int *)(iVar2 + 0xcdd0) == 1)) || (_DAT_005b86de <= fStack_244)
                 ) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCVar1);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,2);
                iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                  (g_CDemonSetPtr,(CVector3f *)auStack_180,(CVector3f *)auStack_150)
                ;
                if ((iVar2 == 0) && (pCStack_24 = pCVar1, &stack0xfffffe38 != &stack0xfffffe20)) {
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
      fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0x3f800000,0x40000000);
      *(float *)&param_1[0x1d].field_0x80 = fStack_18;
    }
    else {
      pCStack_24 = *(CDemonActor **)&param_1[0x1d].field_0x68;
      *(float *)&param_1[0x1d].field_0x80 = *(float *)&param_1[0x1d].field_0x80 - param_2;
    }
  }
  else {
    pCStack_24 = pCVar1;
    *(uint *)&param_1[0x1d].field_0x80 = 0;
  }
  *(CDemonActor **)&param_1[0x1d].field_0x68 = pCStack_24;
  if (pCStack_24 != (CDemonActor *)0x0) {
    iVar2 = core_skeleton_cpp_FUN_00548090(pCStack_30,"Bip01 head",0);
    if (iVar2 == -1) {
      afStack_c0[3] = 0.0;
      afStack_c0[4] = 5.5;
      afStack_c0[5] = 0.0;
      core_actor_cpp_FUN_00408b80(param_1,afStack_140 + 0x23);
      fStack_210 = fStack_204;
      (&stack0xfffffdf4)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)(&stack0xfffffe00 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xfffffdf8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe04 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffe50 != &stack0xfffffdf0) {
        fStack_1b0 = fStack_210;
        fStack_1ac = fStack_20c;
        fStack_1a8 = fStack_208;
      }
    }
    else {
      core_skeleton_cpp_FUN_0054dcc0(param_1 + 1,iVar2);
      pfVar8 = afStack_a4 + 0x17;
      afStack_48[0] = (float)uStack_e4;
      afStack_a4[(uint)bVar6 * -2 + 0x18] = afStack_140[(uint)bVar6 * -2 + 0x18];
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
           afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      core_actor_cpp_FUN_00408b80(param_1,pfVar8);
      fStack_114 = afStack_c0[6];
      afStack_140[(uint)bVar6 * -2 + 0xc] = afStack_a4[(uint)bVar6 * -2];
      afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (&stack0xfffffe50 != afStack_140 + 0xb) {
        fStack_1b0 = fStack_114;
        fStack_1ac = fStack_110;
        fStack_1a8 = fStack_10c;
      }
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&param_1[0x1d].field_0x68,g_CCharacterClassInfo.name_hash);
    iStack_2c = iVar2;
    if (iVar2 == 0) {
      iVar2 = *(int *)&param_1[0x1d].field_0x68;
      if (&stack0xfffffe68 != (float *)(iVar2 + 0x20)) {
        fStack_198 = *(float *)(iVar2 + 0x20);
        fStack_194 = *(float *)(iVar2 + 0x24);
        fStack_22c = *(float *)(iVar2 + 0x28);
LAB_00432bcb:
        fStack_190 = fStack_22c;
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if ((iVar3 == 0) || (*(char *)(iVar2 + 0x24a8) == '\0')) {
        iVar2 = 0;
        pcVar7 = "Bip01 head";
        this_ptr = (CDeformableModelInstance *)(iStack_2c + 0x158);
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
        iVar2 = core_skeleton_cpp_FUN_00548090(pCVar4,pcVar7,iVar2);
        if (iVar2 == -1) {
          if (&stack0xfffffe68 != (float *)(iStack_2c + 0x20)) {
            fStack_198 = *(float *)(iStack_2c + 0x20);
            fStack_194 = *(float *)(iStack_2c + 0x24);
            fStack_190 = *(float *)(iStack_2c + 0x28);
          }
          fStack_194 = fStack_194 + _DAT_005b8696;
        }
        else {
          core_skeleton_cpp_FUN_0054dcc0(this_ptr,iVar2);
          uStack_144 = uStack_18c;
          afStack_140[(uint)bVar6 * -2] =
               *(float *)((int)&stack0xfffffe78 + (uint)bVar6 * 0xfffffffe * 4);
          afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_170[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5];
          core_actor_cpp_FUN_00408b80(iStack_2c,&uStack_144);
          fStack_234 = fStack_78;
          (&stack0xfffffdd0)[(uint)bVar6 * 0xfffffffe] = afStack_a4[(uint)bVar6 * -2 + 0xc];
          *(float *)((int)&stack0xfffffdd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
          if (&stack0xfffffe68 != &stack0xfffffdcc) {
            fStack_198 = fStack_234;
            fStack_194 = fStack_230;
            goto LAB_00432bcb;
          }
        }
      }
      else {
        core_skeleton_cpp_FUN_0054dcc0(iVar2 + 0x158,0);
        puVar9 = &stack0xfffffe14;
        uStack_1ec = uStack_54;
        *(float *)((int)&stack0xfffffe18 + (uint)bVar6 * 0xfffffffe * 4) =
             afStack_a4[(uint)bVar6 * -2 + 0x15];
        *(float *)(&stack0xfffffe1c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
        core_actor_cpp_FUN_00408b80(iVar2,puVar9);
        fStack_84 = fStack_fc;
        afStack_a4[(uint)bVar6 * -2 + 9] = afStack_140[(uint)bVar6 * -2 + 0x12];
        afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
        if (&stack0xfffffe68 != afStack_a4 + 8) {
          fStack_198 = fStack_84;
          fStack_194 = fStack_80;
          fStack_22c = fStack_7c;
          goto LAB_00432bcb;
        }
      }
    }
    fStack_1a4 = fStack_198 - fStack_1b0;
    fStack_1a0 = fStack_194 - fStack_1ac;
    fStack_19c = fStack_190 - fStack_1a8;
    afStack_170[2] = fStack_198 - fStack_1b0;
    afStack_170[(uint)bVar6 * -2 + 3] = (&stack0xfffffe60)[(uint)bVar6 * 0xfffffffe];
    afStack_170[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         *(float *)(auStack_180 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -0x1c);
    core_actor_cpp_FUN_00408b40(param_1,afStack_170 + 2);
    uStack_174 = afStack_a4[2];
    afStack_170[(uint)bVar6 * -2] = afStack_a4[(uint)bVar6 * -2 + 3];
    afStack_170[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_vecdir_cpp_FUN_00576250(&uStack_174);
    afStack_140[2] = fStack_90;
    afStack_140[(uint)bVar6 * -2 + 3] = afStack_a4[(uint)bVar6 * -2 + 6];
    afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    if (&stack0xfffffe38 != afStack_140 + 2) {
      fStack_1c8 = afStack_140[2];
      fStack_1c4 = afStack_140[3];
      uStack_1c0 = uStack_130;
    }
    if ((float)_DAT_005b869e < ABS(fStack_1c4)) {
      *(uint *)&param_1[0x1d].field_0x68 = 0;
    }
    if ((float)_DAT_005b86a6 < ABS(fStack_1c8)) {
      *(uint *)&param_1[0x1d].field_0x68 = 0;
      goto LAB_004323d1;
    }
  }
  if (*(int *)&param_1[0x1d].field_0x68 != 0) {
    fVar5 = param_2 / _DAT_005b86ae + *(float *)&param_1[0x1d].field_0x78;
    *(float *)&param_1[0x1d].field_0x78 = fVar5;
    if (1.0 < fVar5) {
      *(uint *)&param_1[0x1d].field_0x78 = 0x3f800000;
    }
    fStack_18 = (float)core_actor_cpp_FUN_0040cfa0(fStack_1c4 - *(float *)&param_1[0x1d].field_0x70)
    ;
    *(float *)&param_1[0x1d].field_0x70 =
         fStack_18 * (float)_DAT_005b86b6 + *(float *)&param_1[0x1d].field_0x70;
    fVar5 = (float)core_actor_cpp_FUN_0040cfa0(fStack_1c8 - *(float *)&param_1[0x1d].field_0x74);
    *(float *)&param_1[0x1d].field_0x74 =
         fVar5 * (float)_DAT_005b86b6 + *(float *)&param_1[0x1d].field_0x74;
    return;
  }
LAB_004323d1:
  fVar5 = *(float *)&param_1[0x1d].field_0x78 - param_2 / _DAT_005b86ae;
  *(float *)&param_1[0x1d].field_0x78 = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)&param_1[0x1d].field_0x74 = 0;
    *(uint *)&param_1[0x1d].field_0x78 = 0;
    *(uint *)&param_1[0x1d].field_0x70 = 0;
    return;
  }
  return;
}
