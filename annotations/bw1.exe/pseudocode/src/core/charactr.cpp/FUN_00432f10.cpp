// Name: core_charactr.cpp_FUN_00432f10
// Address: 00432f10
// Address Range: [[00432f10, 00433b27]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00432f10(CDemonActor *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00432f10(CDemonActor *param_1,float param_2,int param_3)

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
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint uStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  byte auStack_144 [8];
  float fStack_13c;
  float fStack_138;
  float afStack_134 [2];
  byte auStack_12c [8];
  float fStack_124;
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
  int iStack_30;
  int iStack_2c;
  CDemonActor *pCStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar2 != 0) {
    param_3 = 1;
  }
  pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         ((CDeformableModelInstance *)(param_1 + 1));
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
  if (iVar2 == -1) {
    param_3 = 1;
  }
  pCStack_28 = (CDemonActor *)0x0;
  pCVar1 = pCStack_28;
  if ((param_3 == 0) &&
     (pCVar1 = *(CDemonActor **)&param_1[0x1d].field_0x6c,
     *(CDemonActor **)&param_1[0x1d].field_0x6c == (CDemonActor *)0x0)) {
    if (*(float *)&param_1[0x1d].field_0x80 <= 0.0) {
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
      if (iVar2 == -1) {
        afStack_fc[1] = 5.5;
        afStack_fc[0] = 0.0;
        afStack_fc[2] = 0.0;
        core_actor_cpp_FUN_00408b40(param_1,afStack_11c + 8);
        fStack_18c = fStack_78;
        (&stack0xfffffe78)[(uint)bVar6 * 0xfffffffe] = afStack_8c[(uint)bVar6 * -2 + 6];
        *(float *)((int)&stack0xfffffe7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if ((float *)auStack_12c != &stack0xfffffe74) {
          auStack_12c._0_4_ = fStack_18c;
          auStack_12c._4_4_ = fStack_188;
          fStack_124 = fStack_184;
        }
      }
      else {
        core_skeleton_cpp_FUN_00569130(param_1 + 1,iVar2);
        puVar9 = &stack0xfffffe5c;
        uStack_1a4 = uStack_d8;
        *(float *)((int)&stack0xfffffe60 + (uint)bVar6 * 0xfffffffe * 4) =
             afStack_ec[(uint)bVar6 * -2 + 6];
        *(float *)(&stack0xfffffe64 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        core_actor_cpp_FUN_00408b40(param_1,puVar9);
        fStack_198 = fStack_cc;
        (&stack0xfffffe6c)[(uint)bVar6 * 0xfffffffe] = afStack_ec[(uint)bVar6 * -2 + 9];
        *(float *)((int)&stack0xfffffe70 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        if ((float *)auStack_12c != &stack0xfffffe68) {
          auStack_12c._0_4_ = fStack_198;
          auStack_12c._4_4_ = fStack_194;
          fStack_124 = fStack_190;
        }
      }
      iStack_2c = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                            (0x01C51D80,"heroCanSee");
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < *(int *)&g_CDemonSetPtr->field_0x14f0a8;
          iStack_20 = iStack_20 + 1) {
        pCVar1 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_24);
        if ((((pCVar1 != param_1) &&
             (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar1,g_CTVBatClassInfo.name_hash), iVar2 == 0)) &&
            ((*(int *)&pCVar1[0x1d].field_0xb0 == 0 || (iStack_2c != 0)))) &&
           ((iVar2 = (**(code **)(*(int *)&pCVar1->field_0x154 + 0x70))(pCVar1), iVar2 == 0 &&
            (iVar2 = (**(code **)(*(int *)&pCVar1->field_0x154 + 0x10c))(pCVar1), iVar2 == 0)))) {
          iVar2 = -1;
          if (pCVar1[0x1b].field_0x60 != '\0') {
            iVar2 = 0;
            pcVar7 = "Bip01 head";
            pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                               ((CDeformableModelInstance *)(pCVar1 + 1));
            iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar4,pcVar7,iVar2);
          }
          if (iVar2 < 0) {
            if (auStack_144 != &pCVar1->field_0x20) {
              auStack_144._0_4_ = *(float *)&pCVar1->field_0x20;
              auStack_144._4_4_ = *(uint *)&pCVar1->field_0x24;
              fStack_13c = *(float *)&pCVar1->field_0x28;
            }
            auStack_144._4_4_ = (float)auStack_144._4_4_ + _DAT_005d5d4f;
          }
          else {
            core_skeleton_cpp_FUN_00569130(pCVar1 + 1,iVar2);
            puVar9 = &stack0xfffffe14;
            uStack_1ec = afStack_11c[2];
            *(float *)((int)&stack0xfffffe18 + (uint)bVar6 * 0xfffffffe * 4) =
                 afStack_11c[(uint)bVar6 * -2 + 3];
            *(float *)(&stack0xfffffe1c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            core_actor_cpp_FUN_00408b40(pCVar1,puVar9);
            fStack_138 = fStack_108;
            afStack_134[(uint)bVar6 * -2] = afStack_11c[(uint)bVar6 * -2 + 6];
            afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
            if ((float *)auStack_144 != &fStack_138) {
              auStack_144._0_4_ = fStack_138;
              auStack_144._4_4_ = afStack_134[0];
              fStack_13c = afStack_134[1];
            }
          }
          pfVar8 = afStack_11c + 0xb;
          fStack_21c = (float)auStack_144._0_4_ - (float)auStack_12c._0_4_;
          fStack_218 = (float)auStack_144._4_4_ - (float)auStack_12c._4_4_;
          fStack_214 = fStack_13c - fStack_124;
          afStack_fc[3] = (float)auStack_144._0_4_ - (float)auStack_12c._0_4_;
          afStack_ec[(uint)bVar6 * -2] = *(float *)((int)&stack0xfffffde8 + (uint)bVar6 * -8);
          afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               *(float *)((int)&stack0xfffffdec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          core_actor_cpp_FUN_00408b00(param_1,pfVar8);
          fStack_234 = fStack_180;
          (&stack0xfffffdd0)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffe84 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xfffffdd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffe88 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if ((0.0 <= fStack_22c) &&
             (fStack_244 = fStack_22c * fStack_22c +
                           fStack_234 * fStack_234 + fStack_230 * fStack_230, fStack_1c = fStack_244
             , (int)fStack_244 < 0x44610001)) {
            core_vecdir_cpp_FUN_005a7520(&stack0xfffffdcc);
            fStack_b4 = fStack_1bc;
            afStack_ec[(uint)bVar6 * -2 + 0xf] =
                 *(float *)((int)&stack0xfffffe48 + (uint)bVar6 * 0xfffffffe * 4);
            afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                 *(float *)(&stack0xfffffe4c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            if ((ABS(fStack_b0) <= (float)_DAT_005d5d77) && (ABS(fStack_b4) <= (float)_DAT_005d5d7f)
               ) {
              fStack_248 = 10.0;
              iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar1,g_CEnemyClassInfo.name_hash);
              if ((iVar2 != 0) && (fStack_248 = 30.0, *(CDemonActor **)(iVar2 + 0xc1e8) == param_1))
              {
                fStack_248 = 40.0;
              }
              if ((fStack_248 < (float)_DAT_005d5d87) &&
                 (iVar3 = core_actor_cpp_FUN_0040c550(pCVar1,"CHero"), iVar3 != 0)) {
                fStack_248 = 15.0;
              }
              fStack_248 = ((float)_DAT_005d5d8f / (SQRT(fStack_244) + (float)_DAT_005d5d8f)) *
                           fStack_248;
              if (pCVar1 == *(CDemonActor **)&param_1[0x1d].field_0x68) {
                fStack_248 = fStack_248 * (float)_DAT_005d5d47;
              }
              if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc1d4) == 1)) || (_DAT_005d5d97 <= fStack_248)
                 ) {
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,param_1);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar1);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                  (g_CDemonSetPtr,(CVector3f *)auStack_12c,(CVector3f *)auStack_144)
                ;
                if ((iVar2 == 0) && (pCStack_28 = pCVar1, &stack0xfffffe38 != afStack_ec + 0xe)) {
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
      fStack_18 = (float)core_actor_cpp_FUN_0040cc00(0x3f800000,0x40000000);
      *(float *)&param_1[0x1d].field_0x80 = fStack_18;
    }
    else {
      pCStack_28 = *(CDemonActor **)&param_1[0x1d].field_0x68;
      *(float *)&param_1[0x1d].field_0x80 = *(float *)&param_1[0x1d].field_0x80 - param_2;
    }
  }
  else {
    pCStack_28 = pCVar1;
    *(uint *)&param_1[0x1d].field_0x80 = 0;
  }
  *(CDemonActor **)&param_1[0x1d].field_0x68 = pCStack_28;
  if (pCStack_28 != (CDemonActor *)0x0) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
    if (iVar2 == -1) {
      uStack_48 = 0;
      uStack_44 = 0x40b00000;
      uStack_40 = 0;
      core_actor_cpp_FUN_00408b40(param_1,auStack_5c + 5);
      afStack_ec[2] = fStack_240;
      afStack_ec[(uint)bVar6 * -2 + 3] = *(float *)(&stack0xfffffdc4 + (uint)bVar6 * -8);
      afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)(&stack0xfffffdc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (afStack_ec + 0x14 != afStack_ec + 2) {
        fStack_9c = afStack_ec[2];
        fStack_98 = afStack_ec[3];
        fStack_94 = fStack_dc;
      }
    }
    else {
      core_skeleton_cpp_FUN_00569130(param_1 + 1,iVar2);
      puVar9 = &stack0xfffffe8c;
      uStack_174 = uStack_90;
      *(float *)((int)&stack0xfffffe90 + (uint)bVar6 * 0xfffffffe * 4) =
           afStack_8c[(uint)bVar6 * -2];
      *(float *)(&stack0xfffffe94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,puVar9);
      fStack_168 = afStack_8c[2];
      *(float *)(auStack_144 + (uint)bVar6 * -8 + 0xffffffe0) = afStack_8c[(uint)bVar6 * -2 + 3];
      *(float *)(auStack_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -0x1c) =
           afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      if (afStack_ec + 0x14 != &stack0xfffffe98) {
        fStack_9c = fStack_168;
        fStack_98 = fStack_164;
        fStack_94 = fStack_160;
      }
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)&param_1[0x1d].field_0x68,g_CCharacterClassInfo.name_hash);
    iStack_30 = iVar2;
    if (iVar2 == 0) {
      iVar2 = *(int *)&param_1[0x1d].field_0x68;
      if (afStack_8c + 8 != (float *)(iVar2 + 0x20)) {
        fStack_6c = *(float *)(iVar2 + 0x20);
        fStack_68 = *(float *)(iVar2 + 0x24);
        fStack_154 = *(float *)(iVar2 + 0x28);
LAB_0043370e:
        fStack_64 = fStack_154;
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if ((iVar3 == 0) || (*(char *)(iVar2 + 0x24a8) == '\0')) {
        iVar2 = 0;
        pcVar7 = "Bip01 head";
        this_ptr = (CDeformableModelInstance *)(iStack_30 + 0x158);
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar4,pcVar7,iVar2);
        if (iVar2 == -1) {
          if (afStack_8c + 8 != (float *)(iStack_30 + 0x20)) {
            fStack_6c = *(float *)(iStack_30 + 0x20);
            fStack_68 = *(float *)(iStack_30 + 0x24);
            fStack_64 = *(float *)(iStack_30 + 0x28);
          }
          fStack_68 = fStack_68 + _DAT_005d5d4f;
        }
        else {
          core_skeleton_cpp_FUN_00569130(this_ptr,iVar2);
          uStack_204 = uStack_228;
          *(uint *)((int)&stack0xfffffe00 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)(&stack0xfffffddc + (uint)bVar6 * -8);
          *(uint *)(&stack0xfffffe04 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xfffffde0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          core_actor_cpp_FUN_00408b40(iStack_30,&stack0xfffffdfc);
          fStack_15c = fStack_120;
          (&stack0xfffffea8)[(uint)bVar6 * 0xfffffffe] = afStack_11c[(uint)bVar6 * -2];
          afStack_134[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
               afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (afStack_8c + 8 != &stack0xfffffea4) {
            fStack_6c = fStack_15c;
            fStack_68 = fStack_158;
            goto LAB_0043370e;
          }
        }
      }
      else {
        core_skeleton_cpp_FUN_00569130(iVar2 + 0x158,0);
        puVar9 = &stack0xfffffe20;
        uStack_1e0 = auStack_5c[2];
        *(uint *)((int)&stack0xfffffe24 + (uint)bVar6 * 0xfffffffe * 4) =
             auStack_5c[(uint)bVar6 * -2 + 3];
        *(uint *)(&stack0xfffffe28 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             auStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_actor_cpp_FUN_00408b40(iVar2,puVar9);
        fStack_210 = fStack_60;
        (&stack0xfffffdf4)[(uint)bVar6 * 0xfffffffe] = (float)auStack_5c[(uint)bVar6 * -2];
        *(uint *)((int)&stack0xfffffdf8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             auStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
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
    *(uint *)((int)&stack0xfffffe54 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xfffffe0c + (uint)bVar6 * -8);
    *(uint *)(&stack0xfffffe58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xfffffe10 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    core_actor_cpp_FUN_00408b00(param_1,&stack0xfffffe50);
    afStack_a8[0] = (float)uStack_c0;
    afStack_ec[(uint)bVar6 * -2 + 0x12] = afStack_ec[(uint)bVar6 * -2 + 0xc];
    afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
         afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    core_vecdir_cpp_FUN_005a7520(afStack_ec + 0x11);
    fStack_1d4 = fStack_150;
    (&stack0xfffffe30)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(auStack_12c + (uint)bVar6 * -8 + -0x20);
    *(uint *)((int)&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(auStack_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -0x1c);
    if (&stack0xfffffe38 != &stack0xfffffe2c) {
      fStack_1c8 = fStack_1d4;
      fStack_1c4 = fStack_1d0;
      uStack_1c0 = uStack_1cc;
    }
    if ((float)_DAT_005d5d57 < ABS(fStack_1c4)) {
      *(uint *)&param_1[0x1d].field_0x68 = 0;
    }
    if ((float)_DAT_005d5d5f < ABS(fStack_1c8)) {
      *(uint *)&param_1[0x1d].field_0x68 = 0;
      goto LAB_00432fb1;
    }
  }
  if (*(int *)&param_1[0x1d].field_0x68 != 0) {
    fVar5 = param_2 / _DAT_005d5d67 + *(float *)&param_1[0x1d].field_0x78;
    *(float *)&param_1[0x1d].field_0x78 = fVar5;
    if (1.0 < fVar5) {
      *(uint *)&param_1[0x1d].field_0x78 = 0x3f800000;
    }
    fStack_18 = (float)core_actor_cpp_FUN_0040cd60(fStack_1c4 - *(float *)&param_1[0x1d].field_0x70)
    ;
    *(float *)&param_1[0x1d].field_0x70 =
         fStack_18 * (float)_DAT_005d5d6f + *(float *)&param_1[0x1d].field_0x70;
    fVar5 = (float)core_actor_cpp_FUN_0040cd60(fStack_1c8 - *(float *)&param_1[0x1d].field_0x74);
    *(float *)&param_1[0x1d].field_0x74 =
         fVar5 * (float)_DAT_005d5d6f + *(float *)&param_1[0x1d].field_0x74;
    return;
  }
LAB_00432fb1:
  fVar5 = *(float *)&param_1[0x1d].field_0x78 - param_2 / _DAT_005d5d67;
  *(float *)&param_1[0x1d].field_0x78 = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)&param_1[0x1d].field_0x74 = 0;
    *(uint *)&param_1[0x1d].field_0x78 = 0;
    *(uint *)&param_1[0x1d].field_0x70 = 0;
    return;
  }
  return;
}
