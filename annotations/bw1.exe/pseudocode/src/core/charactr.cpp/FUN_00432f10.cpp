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
  int iStack_30;
  int iStack_2c;
  CCharacter *pCStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  EVar3 = (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1);
  if (EVar3 != DEATH_STATE_ALIVE) {
    param_3 = 1;
  }
  pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         (&param_1->model);
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
  if (iVar4 == -1) {
    param_3 = 1;
  }
  pCStack_28 = (CCharacter *)0x0;
  pCVar2 = pCStack_28;
  if ((param_3 == 0) &&
     (pCVar2 = *(CCharacter **)&param_1->field_0x2764,
     *(CCharacter **)&param_1->field_0x2764 == (CCharacter *)0x0)) {
    if (*(float *)&param_1->field_0x2778 <= 0.0) {
      iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
      if (iVar4 == -1) {
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
        core_skeleton_cpp_FUN_00569130(&param_1->model,iVar4);
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
        pCVar2 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_24);
        if ((((pCVar2 != param_1) &&
             (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar2,g_CTVBatClassInfo.name_hash), iVar4 == 0)) &&
            ((*(int *)&pCVar2->field_0x27a8 == 0 || (iStack_2c != 0)))) &&
           ((iVar4 = (*((pCVar2->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar2->base),
            iVar4 == 0 &&
            (EVar3 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
            EVar3 == DEATH_STATE_ALIVE)))) {
          iVar4 = -1;
          if ((pCVar2->model).model_name[0] != '\0') {
            iVar4 = 0;
            pcVar9 = "Bip01 head";
            pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                               (&pCVar2->model);
            iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar6,pcVar9,iVar4);
          }
          if (iVar4 < 0) {
            pCVar1 = &(pCVar2->base).location;
            if ((CLocation *)&CStack_144 != pCVar1) {
              CStack_144.x = (pCVar1->position).x;
              CStack_144.y = (pCVar2->base).location.position.y;
              CStack_144.z = (pCVar2->base).location.position.z;
            }
            CStack_144.y = CStack_144.y + _DAT_005d5d4f;
          }
          else {
            core_skeleton_cpp_FUN_00569130(&pCVar2->model,iVar4);
            puVar11 = &stack0xfffffe14;
            uStack_1ec = afStack_11c[2];
            *(float *)((int)&stack0xfffffe18 + (uint)bVar8 * 0xfffffffe * 4) =
                 afStack_11c[(uint)bVar8 * -2 + 3];
            *(float *)(&stack0xfffffe1c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            core_actor_cpp_FUN_00408b40(pCVar2,puVar11);
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
              iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (pCVar2,g_CEnemyClassInfo.name_hash);
              if ((iVar4 != 0) && (fStack_248 = 30.0, *(CCharacter **)(iVar4 + 0xc1e8) == param_1))
              {
                fStack_248 = 40.0;
              }
              if ((fStack_248 < (float)_DAT_005d5d87) &&
                 (iVar5 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar2->base,"CHero"),
                 iVar5 != 0)) {
                fStack_248 = 15.0;
              }
              fStack_248 = ((float)_DAT_005d5d8f / (SQRT(fStack_244) + (float)_DAT_005d5d8f)) *
                           fStack_248;
              if (pCVar2 == *(CCharacter **)&param_1->field_0x2760) {
                fStack_248 = fStack_248 * (float)_DAT_005d5d47;
              }
              if (((iVar4 != 0) && (*(int *)(iVar4 + 0xc1d4) == 1)) || (_DAT_005d5d97 <= fStack_248)
                 ) {
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&param_1->base);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCVar2->base);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                  (g_CDemonSetPtr,&CStack_12c,&CStack_144);
                if ((iVar4 == 0) && (pCStack_28 = pCVar2, &stack0xfffffe38 != afStack_ec + 0xe)) {
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
      *(float *)&param_1->field_0x2778 = fStack_18;
    }
    else {
      pCStack_28 = *(CCharacter **)&param_1->field_0x2760;
      *(float *)&param_1->field_0x2778 = *(float *)&param_1->field_0x2778 - param_2;
    }
  }
  else {
    pCStack_28 = pCVar2;
    *(uint *)&param_1->field_0x2778 = 0;
  }
  *(CCharacter **)&param_1->field_0x2760 = pCStack_28;
  if (pCStack_28 != (CCharacter *)0x0) {
    iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
    if (iVar4 == -1) {
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
      core_skeleton_cpp_FUN_00569130(&param_1->model,iVar4);
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
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)&param_1->field_0x2760,g_CCharacterClassInfo.name_hash);
    iStack_30 = iVar4;
    if (iVar4 == 0) {
      iVar4 = *(int *)&param_1->field_0x2760;
      if (afStack_8c + 8 != (float *)(iVar4 + 0x20)) {
        fStack_6c = *(float *)(iVar4 + 0x20);
        fStack_68 = *(float *)(iVar4 + 0x24);
        fStack_154 = *(float *)(iVar4 + 0x28);
LAB_0043370e:
        fStack_64 = fStack_154;
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if ((iVar5 == 0) || (*(char *)(iVar4 + 0x24a8) == '\0')) {
        iVar4 = 0;
        pcVar9 = "Bip01 head";
        this_ptr = (CDeformableModelInstance *)(iStack_30 + 0x158);
        pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar6,pcVar9,iVar4);
        if (iVar4 == -1) {
          if (afStack_8c + 8 != (float *)(iStack_30 + 0x20)) {
            fStack_6c = *(float *)(iStack_30 + 0x20);
            fStack_68 = *(float *)(iStack_30 + 0x24);
            fStack_64 = *(float *)(iStack_30 + 0x28);
          }
          fStack_68 = fStack_68 + _DAT_005d5d4f;
        }
        else {
          core_skeleton_cpp_FUN_00569130(this_ptr,iVar4);
          uStack_204 = uStack_228;
          *(uint *)((int)&stack0xfffffe00 + (uint)bVar8 * 0xfffffffe * 4) =
               *(uint *)(&stack0xfffffddc + (uint)bVar8 * -8);
          *(uint *)(&stack0xfffffe04 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xfffffde0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          core_actor_cpp_FUN_00408b40(iStack_30,&stack0xfffffdfc);
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
        core_skeleton_cpp_FUN_00569130(iVar4 + 0x158,0);
        puVar11 = &stack0xfffffe20;
        uStack_1e0 = auStack_5c[2];
        *(uint *)((int)&stack0xfffffe24 + (uint)bVar8 * 0xfffffffe * 4) =
             auStack_5c[(uint)bVar8 * -2 + 3];
        *(uint *)(&stack0xfffffe28 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             auStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        core_actor_cpp_FUN_00408b40(iVar4,puVar11);
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
      *(uint *)&param_1->field_0x2760 = 0;
    }
    if ((float)_DAT_005d5d5f < ABS(fStack_1c8)) {
      *(uint *)&param_1->field_0x2760 = 0;
      goto LAB_00432fb1;
    }
  }
  if (*(int *)&param_1->field_0x2760 != 0) {
    fVar7 = param_2 / _DAT_005d5d67 + *(float *)&param_1->field_0x2770;
    *(float *)&param_1->field_0x2770 = fVar7;
    if (1.0 < fVar7) {
      *(uint *)&param_1->field_0x2770 = 0x3f800000;
    }
    fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                 (fStack_1c4 - *(float *)&param_1->field_0x2768);
    *(float *)&param_1->field_0x2768 =
         fStack_18 * (float)_DAT_005d5d6f + *(float *)&param_1->field_0x2768;
    fVar7 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                             (fStack_1c8 - *(float *)&param_1->field_0x276c);
    *(float *)&param_1->field_0x276c =
         fVar7 * (float)_DAT_005d5d6f + *(float *)&param_1->field_0x276c;
    return;
  }
LAB_00432fb1:
  fVar7 = *(float *)&param_1->field_0x2770 - param_2 / _DAT_005d5d67;
  *(float *)&param_1->field_0x2770 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&param_1->field_0x276c = 0;
    *(uint *)&param_1->field_0x2770 = 0;
    *(uint *)&param_1->field_0x2768 = 0;
    return;
  }
  return;
}
