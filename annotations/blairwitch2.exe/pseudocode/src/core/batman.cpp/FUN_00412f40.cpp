// Name: core_batman.cpp_FUN_00412f40
// Address: 00412f40
// Address Range: [[00412f40, 00413c61]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00412f40(CBatman *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batman_cpp_FUN_00412f40(CBatman *param_1,float param_2)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CPathMap *path_map;
  byte bVar7;
  float afStackY_1228 [997];
  CFireEffect *this_ptr;
  CVector3f *pCVar8;
  CBatman *pCVar9;
  CGore *this_ptr_00;
  float *pfVar10;
  CVector3f *wind_influence;
  float fVar11;
  float min_distance;
  uint *puVar12;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_27c [4];
  float fStack_278;
  CBatman *pCStack_248;
  CBatman *pCStack_244;
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [5];
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  CVector3f CStack_1f8;
  uint uStack_1ec;
  float afStack_1e8 [5];
  CVector3f CStack_1d4;
  float fStack_1c8;
  float afStack_1c4 [4];
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
  float afStack_18c [3];
  uint uStack_180;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [5];
  CVector3f CStack_150;
  uint uStack_144;
  uint auStack_140 [5];
  CVector3f CStack_12c;
  uint uStack_120;
  float afStack_11c [4];
  uint uStack_10c;
  CVector3f CStack_108;
  uint uStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float afStack_d4 [5];
  uint uStack_c0;
  CVector3f CStack_b4;
  byte auStack_a8 [12];
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [5];
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [5];
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  CMotionController *pCStack_44;
  byte *puStack_40;
  byte *puStack_3c;
  CSkeleton *pCStack_38;
  CSkeleton *pCStack_34;
  int iStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_54 = param_2 * *(float *)&param_1->field_0x10a60;
  while (0.0 < fStack_54) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,afStack_68 + 5);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar3);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  puVar2 = &param_1->field_0x2b4;
  iVar3 = core_motion_cpp_FUN_005035c0(puVar2);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_1c = iVar3;
  iVar4 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar3) {
    case 0:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar3 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
        if (iVar3 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar2,1,1);
        }
      }
      else {
        iVar3 = core_actor_cpp_FUN_0040d060(0.25);
        if ((iVar3 != 0) &&
           (iVar3 = core_actor_cpp_FUN_0040c840
                              (*(CDemonActor **)&param_1->field_0x10a78,"CHero"),
           iVar3 != 0)) {
          iVar4 = 0;
          iVar3 = 0;
          while ((iVar3 < *(int *)&g_CDemonSetPtr->field_0x150fec &&
                 ((iVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar4),
                                      g_CBatmanClassInfo.name_hash), iVar6 == 0 ||
                  (*(int *)(iVar6 + 0x10b94) == 0))))) {
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          }
          if (iVar3 == *(int *)&g_CDemonSetPtr->field_0x150fec) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0xd,1);
            iVar3 = *(int *)&param_1->field_0x10a78;
            *(uint *)&param_1->field_0x10b94 = 1;
            if ((uint *)&param_1->field_0x10b9c != (uint *)(iVar3 + 0x20)) {
              *(uint *)&param_1->field_0x10b9c = *(uint *)(iVar3 + 0x20);
              *(uint *)&param_1->field_0x10ba0 = *(uint *)(iVar3 + 0x24);
              *(uint *)&param_1->field_0x10ba4 = *(uint *)(iVar3 + 0x28);
            }
            iStack_1c = 0xd;
            *(uint *)&param_1->field_0x10b98 = 0;
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                      (param_1,"batman-disappear.wav");
            break;
          }
        }
        iVar3 = *(int *)&param_1->field_0x10a78;
        fStack_1b0 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_1ac = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_1a8 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_21c = fStack_1b0;
        afStack_230[(uint)bVar7 * -2 + 6] = afStack_1c4[(uint)bVar7 * -2 + 6];
        afStack_230[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_1c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        if (SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218) <
            0x40600000) {
          core_vecdir_cpp_FUN_005838f0(afStack_230 + 5);
          uStack_120 = uStack_fc;
          afStack_11c[(uint)bVar7 * -2] = afStack_f8[(uint)bVar7 * -2];
          afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                       (afStack_11c[0] - *(float *)&param_1->field_0x34);
          if (ABS(fStack_14) < (float)_DAT_005cbb4e) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,3,1);
          }
        }
        core_batman_cpp_FUN_00412ec0(param_1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      fVar11 = 0x40600000;
      pCStack_44 = (CMotionController *)&param_1->field_0x2b4;
      if (*(int *)&param_1->field_0x10a78 == 0) {
        iVar3 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_44,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_44,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_48 = 0x40600000;
        min_distance = 0.5;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        auStack_a8._0_4_ = 0;
        auStack_a8._8_4_ = fVar11;
        pCVar8 = (CVector3f *)auStack_a8;
        auStack_a8._4_4_ = 0;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                             (*(int *)&param_1->field_0x10a78);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),path_map,pCVar8,
                           min_distance,max_distance);
        if (-1 < iVar3) {
          iVar3 = *(int *)&param_1->field_0x10a78;
          afStack_f8[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
          afStack_f8[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_e8 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
          afStack_164[2] = afStack_f8[2];
          afStack_164[(uint)bVar7 * -2 + 3] = afStack_f8[(uint)bVar7 * -2 + 3];
          afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_18 = SQRT(afStack_164[4] * afStack_164[4] + afStack_164[2] * afStack_164[2]);
          afStack_164[3] = 0.0;
          fStack_50 = fStack_18;
          if ((fStack_18 <= fStack_48) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
            fStack_210 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_20c = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_208 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_168 = fStack_210;
            afStack_164[(uint)bVar7 * -2] = afStack_230[(uint)bVar7 * -2 + 9];
            afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_230[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            core_vecdir_cpp_FUN_005838f0(&fStack_168);
            afStack_1e8[2] = afStack_68[2];
            afStack_1e8[(uint)bVar7 * -2 + 3] = afStack_68[(uint)bVar7 * -2 + 3];
            afStack_1e8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (afStack_1e8[3] - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005cbb4e) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_44,3,1);
              *(uint *)&param_1->field_0x10a74 = 0x3f800000;
              iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10bac);
              if ((iVar3 == 0) &&
                 (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10bb0),
                 iVar3 == 0)) {
                uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                  (param_1,"batman-attack?.wav");
                *(uint *)&param_1->field_0x10bb0 = uVar5;
              }
            }
          }
          if (*(float *)&param_1->field_0x10a70 < fStack_50) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_27c);
      fStack_278 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
      damage_info = aSStack_27c;
      pCStack_248 = param_1;
      pCStack_244 = param_1;
      fVar11 = 0.4;
      fStack_14 = fStack_278;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + DAT_007bc7c0 * 0x30);
      pfVar10 = afStack_8c + 2;
      afStack_8c[2] = afStack_230[2];
      afStack_8c[(uint)bVar7 * -2 + 3] = afStack_230[(uint)bVar7 * -2 + 3];
      afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_230[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      core_actor_cpp_FUN_00408d70(param_1,pfVar10);
      pCVar8 = &CStack_78;
      CStack_78._0_4_ = CStack_240._0_4_;
      *(uint *)((int)&CStack_78 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_240 + (uint)bVar7 * -8 + 4);
      pCVar9 = param_1;
      *(uint *)((int)&CStack_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_240 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_enemy_cpp_FUN_00488110((CEnemy *)pCVar9,pCVar8,fVar11,damage_info);
      break;
    case 8:
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(puVar2,0);
        puVar12 = &uStack_144;
        uStack_144 = auStack_140[2];
        auStack_140[(uint)bVar7 * -2] = auStack_140[(uint)bVar7 * -2 + 3];
        auStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             auStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        core_actor_cpp_FUN_00408d70(param_1,puVar12);
        blood_type = BLOOD_TYPE_RED;
        pCVar8 = &CStack_150;
        CStack_150._0_4_ = CStack_12c._0_4_;
        *(uint *)((int)&CStack_150 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_150 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar8,blood_type);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
      break;
    case 9:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
      if ((*(int *)&param_1->field_0x10a78 != 0) ||
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                            (0x01C38BC0,&param_1->field_0x10af8), iVar3 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0xb,1);
        iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10bac);
        if ((iVar3 == 0) &&
           ((iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10bb0), iVar3 == 0 &&
            (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10ba8), iVar3 == 0)))
           ) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                            (param_1,"batman-alert.wav");
          *(uint *)&param_1->field_0x10ba8 = uVar5;
        }
      }
      break;
    case 0xb:
      if (*(float *)&param_1->field_0x24 < *(float *)&param_1->field_0x2574 + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar2,0xc,1);
      }
      break;
    case 0xd:
      switch(*(uint *)&param_1->field_0x10b94) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar2,0,1);
        break;
      case 1:
        fVar11 = *(float *)&param_1->field_0x10b98 + param_2;
        *(float *)&param_1->field_0x10b98 = fVar11;
        if (0x3F800000 < fVar11) {
          *(uint *)&param_1->field_0x10b94 = 2;
          *(float *)&param_1->field_0x10b98 = 0x3F800000;
        }
        CStack_108._0_4_ = 0;
        CStack_108._4_4_ = 0x40400000;
        CStack_108._8_4_ = 0;
        pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                               ((CDeformableModelInstance *)&param_1->field_0x2b4);
        iStack_20 = 0;
        puVar2 = &param_1->field_0x2b4;
        if (0 < *(int *)&pCStack_34->field_0x1d1f8) {
          do {
            puStack_3c = puVar2;
            core_skeleton_cpp_FUN_00546a90(puStack_3c,iStack_20);
            pfVar10 = afStack_d4 + 2;
            afStack_d4[2] = (float)uStack_c0;
            afStack_d4[(uint)bVar7 * -2 + 3] = afStack_d4[(uint)bVar7 * -2 + 6];
            afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            core_actor_cpp_FUN_00408d70(param_1,pfVar10);
            iVar4 = 0xffff;
            pCVar8 = &CStack_108;
            fVar11 = 0.5;
            CStack_1f8._0_4_ = CStack_b4._0_4_;
            *(uint *)((int)&CStack_1f8 + (uint)bVar7 * -8 + 4) =
                 *(uint *)(auStack_a8 + (uint)bVar7 * -8 + -8);
            *(uint *)((int)&CStack_1f8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 *(uint *)(auStack_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
            iVar3 = iStack_20 + 1;
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                      (0x01C3DEB4,&CStack_1f8,fVar11,pCVar8,iVar4);
            puVar2 = puStack_3c;
            iStack_20 = iVar3;
          } while (iVar3 < *(int *)&pCStack_34->field_0x1d1f8);
        }
        break;
      case 2:
        iStack_4c = 1;
        pfStack_28 = (float *)&param_1->field_0x10b9c;
        iStack_2c = 0;
        for (iStack_30 = 0; fVar11 = 0x3F800000,
            iStack_30 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_30 = iStack_30 + 1) {
          pCVar9 = *(CBatman **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_2c);
          if (((pCVar9 != (CBatman *)0x0) && (pCVar9 != param_1)) &&
             (iVar3 = (**(code **)(*(int *)&pCVar9->field_0x2b0 + 0x114))(pCVar9), iVar3 < 1)) {
            fStack_90 = *(float *)&pCVar9->field_0x20 - *pfStack_28;
            afStack_8c[0] = *(float *)&pCVar9->field_0x24 - pfStack_28[1];
            afStack_8c[1] = *(float *)&pCVar9->field_0x28 - pfStack_28[2];
            fStack_198 = fStack_90;
            afStack_1c4[(uint)bVar7 * -2 + 0xc] = afStack_8c[(uint)bVar7 * -2];
            afStack_1c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                 afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if (SQRT(fStack_190 * fStack_190 + fStack_198 * fStack_198 + fStack_194 * fStack_194) <
                (float)_DAT_005cbb56) goto switchD_004135d2_default;
          }
          iStack_2c = iStack_2c + 4;
        }
        if (iStack_4c != 0) {
          *(uint *)&param_1->field_0x10b94 = 3;
          *(float *)&param_1->field_0x10b98 = fVar11;
          *(float *)&param_1->field_0x20 = *pfStack_28;
          *(float *)&param_1->field_0x24 = pfStack_28[1];
          *(float *)&param_1->field_0x28 = pfStack_28[2];
          iVar3 = *(int *)&param_1->field_0x10a78;
          if (iVar3 != 0) {
            fStack_204 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_200 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_1fc = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_6c = fStack_204;
            afStack_68[(uint)bVar7 * -2] = afStack_230[(uint)bVar7 * -2 + 0xc];
            afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_230[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            core_vecdir_cpp_FUN_005838f0(&fStack_6c);
            afStack_11c[2] = (float)uStack_1ec;
            afStack_11c[(uint)bVar7 * -2 + 3] = afStack_1e8[(uint)bVar7 * -2];
            afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_1e8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if ((float *)&param_1->field_0x30 != afStack_11c + 2) {
              *(float *)&param_1->field_0x30 = afStack_11c[2];
              *(float *)&param_1->field_0x34 = afStack_11c[3];
              *(uint *)&param_1->field_0x38 = uStack_10c;
            }
            *(uint *)&param_1->field_0x38 = 0;
            *(uint *)&param_1->field_0x30 = 0;
          }
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                    (param_1,"batman-disappear.wav");
        }
        break;
      case 3:
        CStack_1d4._0_4_ = 0;
        CStack_1d4._4_4_ = 0x40400000;
        CStack_1d4._8_4_ = 0;
        pCStack_38 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                               ((CDeformableModelInstance *)puVar2);
        iStack_24 = 0;
        if (0 < *(int *)&pCStack_38->field_0x1d1f8) {
          do {
            puStack_40 = puVar2;
            core_skeleton_cpp_FUN_00546a90(puStack_40,iStack_24);
            pfVar10 = afStack_1c4 + 0xe;
            afStack_18c[0] = (float)uStack_180;
            afStack_1c4[(uint)bVar7 * -2 + 0xf] = afStack_1c4[(uint)bVar7 * -2 + 0x12];
            afStack_1c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                 afStack_1c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
            core_actor_cpp_FUN_00408d70(param_1,pfVar10);
            iVar3 = 0xffff;
            wind_influence = &CStack_1d4;
            fVar11 = 0.5;
            pCVar8 = &CStack_9c;
            CStack_9c._0_4_ = CStack_174._0_4_;
            *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&CStack_174 + (uint)bVar7 * -8 + 4);
            this_ptr = 0x01C3DEB4;
            *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 *(uint *)((int)&CStack_174 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                      (this_ptr,pCVar8,fVar11,wind_influence,iVar3);
            iStack_24 = iStack_24 + 1;
            puVar2 = puStack_40;
          } while (iStack_24 < *(int *)&pCStack_38->field_0x1d1f8);
        }
        fVar11 = *(float *)&param_1->field_0x10b98 - param_2;
        *(float *)&param_1->field_0x10b98 = fVar11;
        if (fVar11 < 0.0) {
          *(uint *)&param_1->field_0x10b98 = 0;
          *(uint *)&param_1->field_0x10b94 = 0;
          core_batman_cpp_FUN_00412ec0(param_1);
        }
      }
    }
    goto switchD_004135d2_default;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00413014:
      iVar3 = 1;
    }
    else {
LAB_00413214:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar3,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00413014;
    if (uVar1 != 3) goto LAB_00413214;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
switchD_004135d2_default:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
  if ((iVar3 != 0) && (iStack_1c != 9)) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_234 = *(float *)&param_1->field_0x2588 * param_2;
    afStack_230[0] = *(float *)&param_1->field_0x258c * param_2;
    afStack_230[1] = *(float *)&param_1->field_0x2590 * param_2;
    afStack_1c4[2] = fStack_234;
    afStack_1c4[(uint)bVar7 * -2 + 3] = afStack_230[(uint)bVar7 * -2];
    afStack_1c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_230[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_e4 = afStack_1c4[2] + *(float *)&param_1->field_0x257c;
    fStack_e0 = afStack_1c4[3] + *(float *)&param_1->field_0x2580;
    fStack_dc = fStack_1b4 + *(float *)&param_1->field_0x2584;
    fStack_1c8 = fStack_e4;
    afStack_1c4[(uint)bVar7 * -2] = afStack_f8[(uint)bVar7 * -2 + 6];
    afStack_1c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    fStack_1a4 = fStack_1c8 + *(float *)&param_1->field_0x2508;
    fStack_1a0 = afStack_1c4[0] + *(float *)&param_1->field_0x250c;
    fStack_19c = afStack_1c4[1] + *(float *)&param_1->field_0x2510;
    fStack_d8 = fStack_1a4;
    afStack_d4[(uint)bVar7 * -2] = afStack_1c4[(uint)bVar7 * -2 + 9];
    afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_1c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_d8);
  }
  if (iStack_1c != 0xd) {
    *(uint *)&param_1->field_0x10b94 = 0;
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
