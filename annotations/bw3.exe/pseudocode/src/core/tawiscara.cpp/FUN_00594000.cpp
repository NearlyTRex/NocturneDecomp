// Name: core_tawiscara.cpp_FUN_00594000
// Address: 00594000
// Address Range: [[00594000, 005956ce]]
// Convention: unknown
// Signature: void core_tawiscara_cpp_FUN_00594000(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tawiscara_cpp_FUN_00594000(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  CCharacter *pCVar4;
  double dVar5;
  CMotionController *pCVar6;
  int iVar7;
  uint uVar8;
  SMotion *pSVar9;
  CEnemy *pCVar10;
  EDeathState EVar11;
  CPathMap *path_map;
  CLocation *target_pos;
  byte bVar12;
  float10 fVar13;
  float afStackY_1390 [939];
  float fVar14;
  float *pfVar15;
  uint *puVar16;
  CGore *this_ptr_00;
  float max_value;
  EBloodType blood_type;
  CVector3f *pCVar17;
  ulonglong uVar18;
  float in_stack_fffffb3c;
  SDamageInfo SStack_498;
  SDamageInfo SStack_45c;
  SDamageInfo SStack_420;
  SDamageInfo SStack_3e4;
  float fStack_3a8;
  float afStack_3a4 [4];
  float fStack_394;
  float afStack_390 [3];
  float afStack_384 [3];
  uint uStack_378;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  uint uStack_360;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float afStack_348 [3];
  uint uStack_33c;
  uint uStack_330;
  uint uStack_324;
  uint uStack_320;
  float fStack_31c;
  uint uStack_318;
  float afStack_314 [5];
  uint uStack_300;
  uint uStack_2f4;
  uint uStack_2e8;
  float fStack_2dc;
  float afStack_2d0 [3];
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  uint uStack_2ac;
  uint uStack_2a0;
  uint uStack_294;
  uint uStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  uint uStack_264;
  float fStack_258;
  uint uStack_24c;
  float fStack_244;
  float afStack_240 [3];
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_21c;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_204;
  float fStack_1fc;
  float afStack_1f8 [3];
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint uStack_1e0;
  float afStack_1dc [5];
  float afStack_1c8 [3];
  CVector3f CStack_1bc;
  uint uStack_1b0;
  float afStack_1ac [5];
  float afStack_198 [3];
  uint uStack_18c;
  uint uStack_180;
  uint uStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  float afStack_138 [3];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [3];
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  float afStack_d8 [3];
  float afStack_cc [3];
  uint uStack_c0;
  CVector3f CStack_b4;
  uint uStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  uint uStack_90;
  float afStack_8c [5];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  int iStack_58;
  float fStack_54;
  float afStack_50 [2];
  CCharacter *pCStack_48;
  float fStack_44;
  CMotionController *pCStack_40;
  float fStack_3c;
  CMotionController *pCStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMatrix3x4f *pCStack_28;
  CMatrix3x4f *pCStack_24;
  CCharacter *pCStack_20;
  uint uStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar12 = 0;
  iVar7 = (*(((param_1->base).base.vtable._ue)->_ue).randomize)(param_1);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0((uint)param_1[1].base.base.location.position.z);
    return;
  }
  if ((*(int *)param_1[1].base.base.actor_name == 2) &&
     (0.0 <= param_1[1].base.base.orient_matrix.m[0].y)) {
    param_1[1].base.base.orient_matrix.m[0].y = param_1[1].base.base.orient_matrix.m[0].y - param_2;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  afStack_50[0] = param_2 * param_1->speed;
  pCStack_18 = &(param_1->base).model.base;
  while (pCVar6 = pCStack_18, 0.0 < afStack_50[0]) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_18,afStack_50);
    if (uVar8 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,uVar8);
    }
    else if (uVar8 < 0xb) {
      core_skeleton_cpp_FUN_0054dbd0(pCVar6);
      uStack_300 = uStack_2e8;
      afStack_314[(uint)bVar12 * -2 + 6] = afStack_314[(uint)bVar12 * -2 + 0xc];
      afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(param_1);
      max_value = 12.0;
      fVar14 = 8.0;
      CStack_1bc.x = fStack_2dc;
      *(float *)((int)&CStack_1bc + (uint)bVar12 * -8 + 4) = afStack_314[(uint)bVar12 * -2 + 0xf];
      *(float *)((int)&CStack_1bc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar14,max_value);
      fVar13 = (float10)fStack_14 * (float10)_DAT_005d9379;
      blood_type = BLOOD_TYPE_RED;
      round();
      iStack_58 = (int)ROUND(fVar13);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_1bc,(CVector3f *)0x0,iStack_58,blood_type);
    }
    else if (uVar8 == 0x29a) {
      core_mission_cpp_FUN_004f6f10(0x01D81080,param_1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,uVar8);
    }
  }
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(param_1);
  if (*(int *)param_1[1].base.base.actor_name == 2) {
    (param_1->base).turn_speed = (param_1->base).turn_speed * (float)_DAT_005d9351;
  }
  this_ptr = &(param_1->base).model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr->base);
  uVar8 = pSVar9->state_index;
  uStack_1c = uVar8;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&param_1->base,param_2);
  if (iVar7 == 0) {
    EVar11 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base);
    if ((EVar11 == DEATH_STATE_ALIVE) &&
       (param_1->victim == *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffb2c);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      pCStack_28 = (param_1->base).model.bone_transform.bone_model_matrices;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,pCStack_28 + *(int *)(param_1[1].base.base.actor_name + 0x10));
      pfVar15 = afStack_1dc + 2;
      afStack_1dc[2] = (float)uStack_33c;
      afStack_1dc[(uint)bVar12 * -2 + 3] = afStack_3a4[(uint)bVar12 * -2 + 0x1b];
      afStack_1dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
      core_actor_cpp_FUN_00408b80(param_1,pfVar15);
      pfVar15 = afStack_1dc + 5;
      afStack_1c8[0] = (float)uStack_15c;
      afStack_1dc[(uint)bVar12 * -2 + 6] = afStack_1ac[(uint)bVar12 * -2 + 0x15];
      pCVar10 = param_1;
      afStack_1dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
      core_enemy_cpp_FUN_004893f0(pCVar10,pfVar15);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,pCStack_28 + *(int *)(param_1[1].base.base.actor_name + 0xc));
      pfVar15 = afStack_314 + 2;
      afStack_314[2] = (float)uStack_2f4;
      afStack_314[(uint)bVar12 * -2 + 3] = afStack_314[(uint)bVar12 * -2 + 9];
      afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
      core_actor_cpp_FUN_00408b80(param_1,pfVar15);
      puVar16 = &uStack_1b0;
      uStack_1b0 = uStack_18c;
      afStack_1ac[(uint)bVar12 * -2] = afStack_1ac[(uint)bVar12 * -2 + 9];
      pCVar10 = param_1;
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
      core_enemy_cpp_FUN_004893f0(pCVar10,puVar16);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,pCStack_28 + *(int *)(param_1[1].base.base.actor_name + 8));
      pfVar15 = afStack_3a4 + 0x17;
      afStack_348[0] = (float)uStack_e4;
      afStack_3a4[(uint)bVar12 * -2 + 0x18] = afStack_1ac[(uint)bVar12 * -2 + 0x33];
      afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x34];
      core_actor_cpp_FUN_00408b80(param_1,pfVar15);
      pfVar15 = afStack_1ac + 5;
      afStack_198[0] = (float)uStack_144;
      afStack_1ac[(uint)bVar12 * -2 + 6] = afStack_1ac[(uint)bVar12 * -2 + 0x1b];
      pCVar10 = param_1;
      afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
      core_enemy_cpp_FUN_004893f0(pCVar10,pfVar15);
    }
    pCStack_24 = (param_1->base).model.bone_transform.bone_model_matrices;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_005947a3;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != param_1->victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_420);
            SStack_420.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0)
            ;
            SStack_420.attacker = (CDemonActor *)param_1;
            SStack_420.wielder = (CDemonActor *)param_1;
            fStack_14 = SStack_420.damage_amount;
            core_xform_cpp_FUN_00583260
                      (&DAT_02cfd900,pCStack_24 + *(int *)(param_1[1].base.base.actor_name + 8));
            pfVar15 = afStack_1ac + 0x23;
            afStack_120[0] = (float)uStack_6c;
            afStack_1ac[(uint)bVar12 * -2 + 0x24] = afStack_8c[(uint)bVar12 * -2 + 9];
            afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25] =
                 afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
            core_actor_cpp_FUN_00408b80(param_1,pfVar15);
            pfVar15 = afStack_314 + 0x11;
            afStack_2d0[0] = afStack_8c[2];
            afStack_314[(uint)bVar12 * -2 + 0x12] = afStack_8c[(uint)bVar12 * -2 + 3];
            pCVar10 = param_1;
            afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
                 afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            core_enemy_cpp_FUN_004893f0(pCVar10,pfVar15);
          }
          pCVar3 = param_1->victim;
          if ((pCVar3 != (CCharacter *)0x0) &&
             (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
             EVar11 != DEATH_STATE_ALIVE)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->base).model.base,7,1);
          }
          goto LAB_00594269;
        }
        goto LAB_00594821;
      }
LAB_00594d89:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      pCVar3 = param_1->victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(param_1,param_2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,0,1);
        }
        goto LAB_00594269;
      }
      if (param_1[1].base.base.location.area_id != 0) {
        fStack_f0 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
        fStack_ec = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
        fStack_e8 = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
        fStack_234 = fStack_f0;
        afStack_314[(uint)bVar12 * -2 + 0x39] = afStack_1ac[(uint)bVar12 * -2 + 0x30];
        afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3a] =
             afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x31];
        fStack_34 = SQRT(fStack_22c * fStack_22c + fStack_234 * fStack_234 + fStack_230 * fStack_230
                        );
        if ((param_1->guard_distance < fStack_34) || ((float)_DAT_005d9359 < fStack_34)) {
          param_1->victim = (CCharacter *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,0,1);
          goto LAB_00594269;
        }
      }
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if ((iVar7 == 0) || (uStack_1c != 0xf)) {
        pCStack_20 = param_1->victim;
        if (*(int *)param_1[1].base.base.actor_name == 2) {
          if ((param_1[1].base.base.orient.vec.y == 0.0) ||
             (param_1[1].base.base.orient.vec.z == 0.0)) {
            _DAT_01d71de0 = "..\\core\\tawiscara.cpp";
            _DAT_01d71de4 = 0x1ac;
            core_main_c_FUN_004e4330();
          }
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr);
          fVar14 = param_1[1].base.base.orient_matrix.m[0].x;
          if ((fVar14 == 1.4013e-45) || (fVar14 == 4.2039e-45)) {
            core_actor_cpp_FUN_00408bf0();
            uStack_24c = uStack_21c;
            afStack_314[(uint)bVar12 * -2 + 0x33] = afStack_314[(uint)bVar12 * -2 + 0x3f];
            afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x34] =
                 afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x40];
            if (0.0 <= fStack_244) {
              core_actor_cpp_FUN_00408bf0();
              uStack_204 = uStack_1e0;
              afStack_314[(uint)bVar12 * -2 + 0x45] = afStack_1dc[(uint)bVar12 * -2];
              afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x46] =
                   afStack_1dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              if (0.0 <= fStack_1fc) {
                pCVar3 = param_1->victim;
                pCVar4 = *(CCharacter **)((int)&param_1[1].base.base.orient + 4);
                fStack_354 = (pCVar3->base).location.position.x - (pCVar4->base).location.position.x
                ;
                fStack_350 = (pCVar3->base).location.position.y - (pCVar4->base).location.position.y
                ;
                fStack_34c = (pCVar3->base).location.position.z - (pCVar4->base).location.position.z
                ;
                afStack_3a4[2] = fStack_354;
                afStack_3a4[(uint)bVar12 * -2 + 3] = afStack_3a4[(uint)bVar12 * -2 + 0x15];
                afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                     afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
                fVar14 = afStack_3a4[2] * afStack_3a4[2];
                pCStack_48 = pCVar4;
                pCVar4 = *(CCharacter **)((int)&param_1[1].base.base.orient + 8);
                fStack_2b8 = (pCVar3->base).location.position.x - (pCVar4->base).location.position.x
                ;
                fStack_2b4 = (pCVar3->base).location.position.y - (pCVar4->base).location.position.y
                ;
                fStack_2b0 = (pCVar3->base).location.position.z - (pCVar4->base).location.position.z
                ;
                fStack_36c = fStack_2b8;
                afStack_3a4[(uint)bVar12 * -2 + 0xf] = afStack_314[(uint)bVar12 * -2 + 0x18];
                afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                     afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19];
                pCStack_20 = pCStack_48;
                if (SQRT(fStack_394 * fStack_394 + fVar14 + afStack_3a4[3] * afStack_3a4[3]) <=
                    SQRT(fStack_364 * fStack_364 + fStack_36c * fStack_36c + fStack_368 * fStack_368
                        )) {
                  pCStack_20 = pCVar4;
                  goto LAB_00594f64;
                }
              }
              else {
                pCStack_20 = *(CCharacter **)((int)&param_1[1].base.base.orient + 8);
              }
            }
            else {
              pCStack_20 = *(CCharacter **)((int)&param_1[1].base.base.orient + 4);
            }
          }
LAB_00594f64:
          fVar14 = param_1[1].base.base.orient_matrix.m[0].x;
          if ((fVar14 == 1.4013e-45) || (fVar14 == 4.2039e-45)) {
            fStack_2c4 = (pCStack_20->base).location.position.x -
                         (param_1->base).base.location.position.x;
            fStack_2c0 = (pCStack_20->base).location.position.y -
                         (param_1->base).base.location.position.y;
            fStack_2bc = (pCStack_20->base).location.position.z -
                         (param_1->base).base.location.position.z;
            fStack_108 = fStack_2c4;
            afStack_1ac[(uint)bVar12 * -2 + 0x2a] = afStack_314[(uint)bVar12 * -2 + 0x15];
            afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2b] =
                 afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
            if (SQRT(fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104) <
                (float)_DAT_005d9361) {
              fVar14 = (float)((int)param_1[1].base.base.orient_matrix.m[0].x + 1);
              param_1[1].base.base.orient_matrix.m[0].x = fVar14;
              if (3 < (int)fVar14) {
                param_1[1].base.base.orient_matrix.m[0].x = 0.0;
              }
              param_1[1].base.base.orient_matrix.m[0].y = 0x41200000;
            }
          }
          else if ((param_1[1].base.base.orient_matrix.m[0].y <= 0.0) &&
                  (fVar14 = (float)((int)param_1[1].base.base.orient_matrix.m[0].x + 1),
                  param_1[1].base.base.orient_matrix.m[0].x = fVar14, 3 < (int)fVar14)) {
            param_1[1].base.base.orient_matrix.m[0].x = 0.0;
          }
        }
        pCVar3 = pCStack_20;
        fStack_31c = 0x40400000;
        fStack_54 = 0x40400000;
        uVar18._0_4_ = 0.5;
        uVar18._4_4_ = 0.17453292;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        uStack_324 = 0;
        uStack_320 = 0;
        path_map = (*((pCStack_20->base).vtable._ub)->getPathMap)(&pCStack_20->base);
        target_pos = &(pCVar3->base).location;
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          (&param_1->base,&target_pos->position,path_map,(CVector3f *)uVar18,
                           SUB84(uVar18,4),in_stack_fffffb3c);
        if (iVar7 < 0) {
          engine_console_cpp_FUN_00441ff0();
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,0,1);
        }
        else if (iVar7 < 1) {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
          if (iVar7 == 0) {
            fStack_228 = (target_pos->position).x - (param_1->base).base.location.position.x;
            fStack_224 = (pCVar3->base).location.position.y -
                         (param_1->base).base.location.position.y;
            fStack_220 = (pCVar3->base).location.position.z -
                         (param_1->base).base.location.position.z;
            fStack_78 = fStack_228;
            afStack_8c[(uint)bVar12 * -2 + 6] = afStack_314[(uint)bVar12 * -2 + 0x3c];
            afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                 afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3d];
            if (afStack_314 + 0x4a != afStack_8c + 5) {
              fStack_1ec = fStack_78;
              fStack_1e8 = fStack_74;
              fStack_1e4 = fStack_70;
            }
            fStack_3c = SQRT(fStack_1e4 * fStack_1e4 +
                             fStack_1ec * fStack_1ec + fStack_1e8 * fStack_1e8);
            fStack_2c = 20.0;
            if (*(int *)param_1[1].base.base.actor_name == 1) {
              fStack_2c = 10.0;
            }
            if (*(int *)param_1[1].base.base.actor_name == 2) {
              fStack_2c = 10.0;
            }
            pCStack_40 = &(param_1->base).model.base;
            if (fStack_2c < fStack_3c) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
              uStack_288 = afStack_1ac[2];
              afStack_314[(uint)bVar12 * -2 + 0x24] = afStack_1ac[(uint)bVar12 * -2 + 3];
              afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25] =
                   afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
              if (ABS(fStack_14) < (float)_DAT_005d9371) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_40,8,1);
                iVar7 = core_actor_cpp_randomChance_FUN_0040cf40(0.85);
                if (iVar7 != 0) {
                  core_tawiscara_cpp_FUN_00595710();
                }
                for (iVar7 = 0; iVar7 < g_CDemonSetPtr->enemy_count; iVar7 = iVar7 + 1) {
                  pCVar10 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840();
                  if (((pCVar10 != (CEnemy *)0x0) && (pCVar10 != param_1)) &&
                     (pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                         (&(pCVar10->base).model.base), pSVar9->state_index == 8)) {
                    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
                    if (iVar7 == 1) {
                      (param_1->base).base.orient.vec.y =
                           (param_1->base).base.orient.vec.y + _DAT_005d9381;
                    }
                    if (iVar7 == 2) {
                      (param_1->base).base.orient.vec.y =
                           (param_1->base).base.orient.vec.y + _DAT_005d9385;
                    }
                    break;
                  }
                }
              }
            }
            else if ((fStack_3c < 0x40400000 * _DAT_005d9369) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_40,0,1);
            }
          }
        }
        else {
          if ((*(int *)param_1[1].base.base.actor_name == 2) &&
             ((fVar14 = param_1[1].base.base.orient_matrix.m[0].x, fVar14 == 1.4013e-45 ||
              (fVar14 == 4.2039e-45)))) goto LAB_00594269;
          if (param_1->attack_cooldown <= 0.0) {
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(param_1->base).model.base,2,1);
            }
            if (iVar7 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(param_1->base).model.base,3,1);
            }
            if (iVar7 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(param_1->base).model.base,4,1);
            }
            param_1->attack_cooldown = 1.0;
            iVar7 = core_actor_cpp_randomChance_FUN_0040cf40(0.6);
            if (iVar7 != 0) {
              core_tawiscara_cpp_FUN_00595710();
            }
          }
        }
        fVar14 = param_1[1].base.base.location.position.x - param_2;
        param_1[1].base.base.location.position.x = fVar14;
        if (fVar14 < 0.0) {
          core_tawiscara_cpp_FUN_00595710();
        }
        goto LAB_00594269;
      }
LAB_00594d66:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(param_1->base).model.base,0,1);
    }
    else {
      pCStack_38 = &(param_1->base).model.base;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_3e4);
        SStack_3e4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
        SStack_3e4.attacker = (CDemonActor *)param_1;
        SStack_3e4.wielder = (CDemonActor *)param_1;
        fStack_14 = SStack_3e4.damage_amount;
        core_xform_cpp_FUN_00583260
                  (&DAT_02cfd900,pCStack_24 + *(int *)(param_1[1].base.base.actor_name + 0xc));
        pfVar15 = afStack_1ac + 0x1d;
        afStack_138[0] = (float)uStack_174;
        afStack_1ac[(uint)bVar12 * -2 + 0x1e] = afStack_1ac[(uint)bVar12 * -2 + 0xf];
        afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f] =
             afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
        core_actor_cpp_FUN_00408b80(param_1,pfVar15);
        puVar16 = &uStack_a8;
        uStack_a8 = uStack_90;
        afStack_a4[(uint)bVar12 * -2] = afStack_8c[(uint)bVar12 * -2];
        pCVar10 = param_1;
        afStack_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        core_enemy_cpp_FUN_004893f0(pCVar10,puVar16);
        pCVar3 = param_1->victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_38,7,1);
        }
        goto LAB_00594269;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_00594269;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && (param_1->pool_me == 0)) &&
             ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_FUN_0054dbd0();
            uStack_270 = uStack_c0;
            afStack_314[(uint)bVar12 * -2 + 0x2a] = afStack_1ac[(uint)bVar12 * -2 + 0x3c];
            afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2b] =
                 afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3d];
            core_actor_cpp_FUN_00408b80();
            fVar14 = 0.0;
            pCVar17 = &CStack_b4;
            CStack_b4.x = fStack_258;
            *(float *)((int)&CStack_b4 + (uint)bVar12 * -8 + 4) =
                 afStack_314[(uint)bVar12 * -2 + 0x30];
            this_ptr_00 = g_CGorePtr;
            *(float *)((int)&CStack_b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x31];
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar17,(EBloodType)fVar14)
            ;
            param_1->pool_me = 1;
          }
          goto LAB_00594269;
        }
        if (*(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != param_1->victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_498);
          SStack_498.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
          SStack_498.attacker = (CDemonActor *)param_1;
          SStack_498.wielder = (CDemonActor *)param_1;
          fStack_14 = SStack_498.damage_amount;
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,pCStack_24 + *(int *)(param_1[1].base.base.actor_name + 0x10));
          pfVar15 = afStack_314 + 0x35;
          afStack_240[0] = (float)uStack_2ac;
          afStack_314[(uint)bVar12 * -2 + 0x36] = afStack_314[(uint)bVar12 * -2 + 0x1b];
          afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x37] =
               afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
          core_actor_cpp_FUN_00408b80(param_1,pfVar15);
          pfVar15 = afStack_3a4 + 8;
          afStack_384[0] = (float)uStack_378;
          afStack_3a4[(uint)bVar12 * -2 + 9] = afStack_3a4[(uint)bVar12 * -2 + 0xc];
          pCVar10 = param_1;
          afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
               afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
          core_enemy_cpp_FUN_004893f0(pCVar10,pfVar15);
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,pCStack_24 + *(int *)(param_1[1].base.base.actor_name + 0xc));
          pfVar15 = afStack_1ac + 0x35;
          afStack_d8[0] = (float)uStack_360;
          afStack_1ac[(uint)bVar12 * -2 + 0x36] = afStack_3a4[(uint)bVar12 * -2 + 0x12];
          afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x37] =
               afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
          core_actor_cpp_FUN_00408b80(param_1,pfVar15);
          pfVar15 = afStack_1ac + 0x38;
          afStack_cc[0] = (float)uStack_264;
          afStack_1ac[(uint)bVar12 * -2 + 0x39] = afStack_314[(uint)bVar12 * -2 + 0x2d];
          pCVar10 = param_1;
          afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3a] =
               afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2e];
          core_enemy_cpp_FUN_004893f0(pCVar10,pfVar15);
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,pCStack_24 + *(int *)(param_1[1].base.base.actor_name + 8));
          pfVar15 = afStack_314 + 0x47;
          afStack_1f8[0] = (float)uStack_330;
          afStack_314[(uint)bVar12 * -2 + 0x48] = afStack_3a4[(uint)bVar12 * -2 + 0x1e];
          afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x49] =
               afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f];
          core_actor_cpp_FUN_00408b80(param_1,pfVar15);
          pfVar15 = afStack_3a4 + 5;
          afStack_390[0] = (float)uStack_318;
          afStack_3a4[(uint)bVar12 * -2 + 6] = afStack_314[(uint)bVar12 * -2];
          pCVar10 = param_1;
          afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
               afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_enemy_cpp_FUN_004893f0(pCVar10,pfVar15);
        }
        pCVar3 = param_1->victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,7,1);
        }
LAB_00594821:
        if (param_1->victim != *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_45c);
          SStack_45c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
          SStack_45c.attacker = (CDemonActor *)param_1;
          SStack_45c.wielder = (CDemonActor *)param_1;
          fStack_14 = SStack_45c.damage_amount;
          core_xform_cpp_FUN_00583260(&DAT_02cfd900);
          uStack_2a0 = uStack_180;
          afStack_314[(uint)bVar12 * -2 + 0x1e] = afStack_1ac[(uint)bVar12 * -2 + 0xc];
          afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f] =
               afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
          core_actor_cpp_FUN_00408b80(param_1);
          uStack_294 = uStack_114;
          afStack_314[(uint)bVar12 * -2 + 0x21] = afStack_1ac[(uint)bVar12 * -2 + 0x27];
          pCVar10 = param_1;
          afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22] =
               afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x28];
          core_enemy_cpp_FUN_004893f0(pCVar10);
        }
        pCVar3 = param_1->victim;
        if ((pCVar3 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,7,1);
        }
        goto LAB_00594269;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_00594269;
          goto LAB_00594251;
        }
        goto LAB_00594d89;
      }
LAB_005947a3:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(param_1,param_2);
      if (iVar7 == 0) {
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        pCVar3 = param_1->victim;
        if (pCVar3 == (CCharacter *)0x0) goto LAB_00594269;
        if (param_1[1].base.base.location.area_id != 0) {
          fStack_210 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x
          ;
          fStack_20c = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y
          ;
          fStack_208 = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z
          ;
          fStack_3a8 = fStack_210;
          afStack_3a4[(uint)bVar12 * -2] = afStack_314[(uint)bVar12 * -2 + 0x42];
          afStack_3a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x43];
          fStack_44 = SQRT(afStack_3a4[1] * afStack_3a4[1] +
                           fStack_3a8 * fStack_3a8 + afStack_3a4[0] * afStack_3a4[0]);
          if ((param_1->guard_distance < fStack_44) || ((float)_DAT_005d9359 < fStack_44)) {
            param_1->victim = (CCharacter *)0x0;
            goto LAB_00594269;
          }
        }
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840();
        if ((iVar7 != 0) && (uStack_1c == 0xe)) goto LAB_00594d66;
        if (param_1->victim == (CCharacter *)0x0) goto LAB_00594269;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cf40(0.4);
        if (iVar7 != 0) {
          core_tawiscara_cpp_FUN_00595710();
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,0xf,1);
          goto LAB_00594269;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->base).model.base,0xf,1);
        goto LAB_00594269;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(param_1->base).model.base,1,1);
    }
    goto LAB_00594269;
  }
  EVar2 = (param_1->base).walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) {
LAB_0059423e:
        iVar7 = 0xf;
      }
      else {
        iVar7 = 1;
      }
    }
    else {
LAB_00594529:
      iVar7 = 0;
    }
LAB_00594249:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(param_1->base).model.base,iVar7,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) goto LAB_0059423e;
      if ((param_1->base).turn_speed <= ABS((param_1->base).turn_angle_accumulator)) {
        iVar7 = 1;
      }
      else {
        iVar7 = 8;
      }
      goto LAB_00594249;
    }
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00594529;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr->base,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_00594251:
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
LAB_00594269:
  if ((uStack_1c == 0x13) && ((param_1->base).was_rendered_opaque != 0)) {
    iVar7 = sound_sndmain_cpp_FUN_00556700((uint)param_1[1].base.base.location.position.z);
    if (iVar7 == 0) {
      fVar14 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"werewolf-eat.wav");
      param_1[1].base.base.location.position.z = fVar14;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00556be0((uint)param_1[1].base.base.location.position.z);
  }
  fStack_30 = 1.0;
  if (*(int *)param_1[1].base.base.actor_name == 0) {
    fStack_30 = 0.75;
  }
  dVar5 = _DAT_005d9391;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar5 = _DAT_005d9389;
  }
  (param_1->base).collision_cylinder_radius = fStack_30 * (float)dVar5;
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(param_1->base).model.base);
  iVar7 = pSVar9->state_index;
  if (((((iVar7 != 0xd) && (iVar7 != 0)) && (iVar7 != 0xe)) && (iVar7 != 0x14)) ||
     ((param_1->base).base.standing_platform != (CPlatform *)0x0)) {
    pCVar3 = param_1->victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar10 = (CEnemy *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar10 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->victim->base);
    }
    core_charactr_cpp_FUN_0042c1e0();
    fStack_12c = (param_1->base).velocity.x * param_2;
    fStack_128 = (param_1->base).velocity.y * param_2;
    fStack_124 = (param_1->base).velocity.z * param_2;
    fStack_fc = fStack_12c;
    afStack_1ac[(uint)bVar12 * -2 + 0x2d] = afStack_1ac[(uint)bVar12 * -2 + 0x21];
    afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2e] =
         afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22];
    pCVar17 = &(param_1->base).model.accumulated_root_motion;
    fStack_150 = fStack_fc + pCVar17->x;
    fStack_14c = fStack_f8 + (param_1->base).model.accumulated_root_motion.y;
    fStack_148 = fStack_f4 + (param_1->base).model.accumulated_root_motion.z;
    fStack_27c = fStack_150;
    afStack_314[(uint)bVar12 * -2 + 0x27] = afStack_1ac[(uint)bVar12 * -2 + 0x18];
    afStack_314[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x28] =
         afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19];
    pCVar1 = &(param_1->base).position_delta;
    fStack_168 = fStack_27c + pCVar1->x;
    fStack_164 = fStack_278 + (param_1->base).position_delta.y;
    fStack_160 = fStack_274 + (param_1->base).position_delta.z;
    CStack_9c.x = fStack_168;
    *(float *)((int)&CStack_9c + (uint)bVar12 * -8 + 4) = afStack_1ac[(uint)bVar12 * -2 + 0x12];
    *(float *)((int)&CStack_9c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_1ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar17->x = (param_1->base).model.accumulated_root_motion.y;
    (param_1->base).position_delta.z = 0.0;
    fVar14 = (param_1->base).position_delta.z;
    (param_1->base).position_delta.y = fVar14;
    pCVar1->x = fVar14;
    core_charactr_cpp_FUN_0042c230(&param_1->base,&CStack_9c);
  }
  core_charactr_cpp_FUN_0042cd30(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(param_1->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&param_1->base,param_2);
  core_tawiscara_cpp_FUN_00596380();
  param_1[1].base.base.orient_matrix.m[0].z =
       param_2 * (float)_DAT_005d9399 + param_1[1].base.base.orient_matrix.m[0].z;
  return;
}
