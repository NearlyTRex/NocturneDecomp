// Name: core_shadow.cpp_FUN_0053c500
// Address: 0053c500
// Address Range: [[0053c500, 0053df0f]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053c500(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_0053c500(CEnemy *param_1,float param_2)

{
  float *pfVar1;
  EWalkState EVar2;
  uint uVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  float fVar6;
  int iVar7;
  CEnemy *pCVar8;
  EDeathState EVar9;
  CSkeleton *pCVar10;
  CDemonActor *pCVar11;
  CPathMap *path_map;
  int iVar12;
  CCharacter *pCVar13;
  CLocation *target_pos;
  uint *puVar14;
  CDeformableModelInstance *pCVar15;
  uint *puVar16;
  byte bVar17;
  float10 fVar18;
  float10 fVar19;
  ulonglong uVar20;
  float afStackY_127c [974];
  CVector3f *pCVar21;
  int iVar22;
  SDamageInfo *pSVar23;
  CBoundingBox3D *out_box;
  ulonglong in_stack_fffffcd0;
  CEnemy *in_stack_fffffcd8;
  float fVar24;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  uint uStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  uint uStack_264;
  uint uStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  CVector3f CStack_234;
  uint uStack_228;
  float afStack_224 [5];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  CVector3f CStack_204;
  uint uStack_1f8;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint uStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  float afStack_1ac [2];
  CVector3i CStack_1a4;
  uint uStack_198;
  float afStack_194 [5];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  float afStack_12c [3];
  CVector3f CStack_120;
  uint uStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar17 = 0;
  pCVar15 = &(param_1->base).model;
  iVar7 = core_motion_cpp_FUN_005035c0(pCVar15);
  fStack_2c = (param_1->base).model.base.current_frame_number;
  iStack_1c = *(int *)(iVar7 + 0x24);
  iVar7 = core_motion_cpp_FUN_005035c0(pCVar15);
  fStack_20 = (float)*(int *)(iVar7 + 100);
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0(&param_1->base,param_2);
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(&param_1->base,param_2);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050((uint)param_1[1].base.base.orient.vec.x);
    return;
  }
  if ((*(int *)param_1[1].base.base.actor_name == 2) &&
     (0.0 <= param_1[1].base.base.orient_matrix.m[1].y)) {
    param_1[1].base.base.orient_matrix.m[1].y = param_1[1].base.base.orient_matrix.m[1].y - param_2;
  }
  fStack_24 = param_2 * param_1->speed;
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  while (out_box = (CBoundingBox3D *)in_stack_fffffcd0, 0.0 < fStack_24) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(param_1->base).model.base,&fStack_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(&param_1->base,iVar7);
  }
  fVar24 = param_1->speed;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * fVar24);
  if (*(int *)param_1[1].base.base.actor_name == 2) {
    (param_1->base).turn_speed = (param_1->base).turn_speed * (float)_DAT_005e6635;
  }
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0(&param_1->base,param_2);
  if (iVar7 != 0) {
    EVar2 = (param_1->base).walk_state;
    pCVar15 = &(param_1->base).model;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar22 = 5;
        iVar7 = 1;
      }
      else {
LAB_0053cbd1:
        fStack_14 = core_motion_cpp_FUN_00503e60(&(param_1->base).model.base);
        if (fStack_14 <= (float)_DAT_005e6675) goto LAB_0053c6de;
        iVar7 = 1;
        iVar22 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      }
LAB_0053c6d5:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(param_1->base).model.base,iVar22,iVar7);
    }
    else if (EVar2 < WALK_STATE_NO_PATH) {
      fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
      if ((float)_DAT_005e6675 < fStack_14) {
        iVar7 = 1;
        iVar22 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
        iVar22 = iVar22 + 0xb;
        goto LAB_0053c6d5;
      }
    }
    else {
      if (EVar2 != WALK_STATE_NO_PATH) goto LAB_0053cbd1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00436710
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
LAB_0053c6de:
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
    goto LAB_0053c710;
  }
  switch(iStack_1c) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_0053dec8_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (param_1[1].base.base.health != 0) {
      fVar24 = (float)param_1[1].base.base.direction_hint - param_2;
      param_1[1].base.base.direction_hint = (int)fVar24;
      if (0.0 < fVar24) {
        core_charactr_cpp_FUN_00428260
                  (param_1,param_1[1].base.base.health,0x3f800000,0x3f800000,
                   &param_1[1].base.base.validation_magic);
        uVar3 = param_1[1].base.base.validation_magic;
        if (uVar3 == 0) {
LAB_0053d90f:
          iVar22 = 1;
          iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(param_1->base).model.base,iVar7,iVar22);
          param_1[1].base.base.health = 0;
        }
        else {
          pCVar15 = &(param_1->base).model;
          if (uVar3 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,5,1);
          }
          else {
            if (uVar3 != 2) goto LAB_0053d90f;
            fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
            if ((float)_DAT_005e666d < fStack_14) {
              pfVar1 = &param_1[1].base.base.create_prob;
              *pfVar1 = (float)((int)*pfVar1 + 1);
            }
            if (2 < (int)param_1[1].base.base.create_prob) {
              pCVar15 = &(param_1->base).model;
              fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
              if ((float)_DAT_005e6675 < fStack_14) {
                iVar22 = 1;
                iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar15->base,iVar7 + 0xb,iVar22);
                param_1[1].base.base.create_prob = 0.0;
              }
            }
          }
          if (param_1[1].base.base.health != 0) break;
        }
      }
      else {
        param_1[1].base.base.health = 0;
        param_1[1].base.base.direction_hint = 0;
      }
    }
    (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
    pCVar13 = param_1->victim;
    pCVar15 = &(param_1->base).model;
    if (pCVar13 == (CCharacter *)0x0) {
      fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
      if ((float)_DAT_005e6675 < fStack_14) {
        fVar24 = 1.4013e-45;
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&pCVar15->base,iVar7,(int)fVar24);
      }
    }
    else {
      if (param_1[1].base.base.orient.vec.y != 0.0) {
        fStack_9c = (pCVar13->base).location.position.x - (param_1->base).base.location.position.x;
        fStack_98 = (pCVar13->base).location.position.y - (param_1->base).base.location.position.y;
        fStack_94 = (pCVar13->base).location.position.z - (param_1->base).base.location.position.z;
        fStack_210 = fStack_9c;
        afStack_224[(uint)bVar17 * -2 + 6] = afStack_f8[(uint)bVar17 * -2 + 0x18];
        afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
             afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19];
        if (param_1->guard_distance <
            SQRT(fStack_208 * fStack_208 + fStack_210 * fStack_210 + fStack_20c * fStack_20c)) {
          param_1->victim = (CCharacter *)0x0;
          fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            fVar24 = 1.4013e-45;
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar15->base,iVar7,(int)fVar24);
          }
          break;
        }
      }
      pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((CDemonActor *)param_1[1].base.base.orient.vec.y,
                           g_CTrapClassInfo.name_hash);
      if (pCVar11 == (CDemonActor *)0x0) {
        pCVar13 = param_1->victim;
        if (*(int *)param_1[1].base.base.actor_name == 2) {
          if ((param_1[1].base.base.orient_matrix.m[0].x == 0.0) ||
             (param_1[1].base.base.orient_matrix.m[0].y == 0.0)) {
            _DAT_01d046a0 = "..\\core\\shadow.cpp";
            _DAT_01d046a4 = 0x20a;
            core_main_c_FUN_004e4500();
          }
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          fVar24 = param_1[1].base.base.orient_matrix.m[1].x;
          if ((fVar24 == 1.4013e-45) || (fVar24 == 4.2039e-45)) {
            core_actor_cpp_FUN_00408de0();
            uStack_228 = uStack_1f8;
            afStack_224[(uint)bVar17 * -2] = afStack_224[(uint)bVar17 * -2 + 0xc];
            afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
            if (0.0 <= afStack_224[1]) {
              core_actor_cpp_FUN_00408de0();
              uStack_1d4 = uStack_288;
              afStack_224[(uint)bVar17 * -2 + 0x15] =
                   *(float *)((int)&stack0xfffffd70 + ((uint)bVar17 * -2 + 3) * 4);
              afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16] =
                   *(float *)((int)&stack0xfffffd70 +
                             ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 4) * 4);
              if (0.0 <= fStack_1cc) {
                pCVar4 = param_1->victim;
                pCVar5 = (CCharacter *)param_1[1].base.base.orient_matrix.m[0].x;
                fStack_d8 = (pCVar4->base).location.position.x - (pCVar5->base).location.position.x;
                fStack_d4 = (pCVar4->base).location.position.y - (pCVar5->base).location.position.y;
                fStack_d0 = (pCVar4->base).location.position.z - (pCVar5->base).location.position.z;
                fStack_cc = fStack_d8;
                afStack_f8[(uint)bVar17 * -2 + 0xc] = afStack_f8[(uint)bVar17 * -2 + 9];
                afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
                     afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
                fVar24 = fStack_cc * fStack_cc;
                pCVar13 = (CCharacter *)param_1[1].base.base.orient_matrix.m[0].y;
                fStack_258 = (pCVar4->base).location.position.x -
                             (pCVar13->base).location.position.x;
                fStack_254 = (pCVar4->base).location.position.y -
                             (pCVar13->base).location.position.y;
                fStack_250 = (pCVar4->base).location.position.z -
                             (pCVar13->base).location.position.z;
                fStack_240 = fStack_258;
                *(uint *)((int)&stack0xfffffdac + ((uint)bVar17 * -2 + 6) * 4) =
                     *(uint *)((int)&stack0xfffffdac + (uint)bVar17 * -8);
                *(uint *)
                 ((int)&stack0xfffffdac + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 7) * 4) =
                     *(uint *)
                      ((int)&stack0xfffffdac + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4);
                if (SQRT(fStack_238 * fStack_238 + fStack_240 * fStack_240 + fStack_23c * fStack_23c
                        ) < SQRT(fStack_c4 * fStack_c4 + fVar24 + fStack_c8 * fStack_c8)) {
                  pCVar13 = pCVar5;
                }
              }
              else {
                pCVar13 = (CCharacter *)param_1[1].base.base.orient_matrix.m[0].y;
              }
            }
            else {
              pCVar13 = (CCharacter *)param_1[1].base.base.orient_matrix.m[0].x;
            }
          }
          fVar24 = param_1[1].base.base.orient_matrix.m[1].x;
          if ((fVar24 == 1.4013e-45) || (fVar24 == 4.2039e-45)) {
            fStack_78 = (pCVar13->base).location.position.x -
                        (param_1->base).base.location.position.x;
            fStack_74 = (pCVar13->base).location.position.y -
                        (param_1->base).base.location.position.y;
            fStack_70 = (pCVar13->base).location.position.z -
                        (param_1->base).base.location.position.z;
            fStack_168 = fStack_78;
            afStack_194[(uint)bVar17 * -2 + 0xc] = afStack_f8[(uint)bVar17 * -2 + 0x21];
            afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
                 afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x22];
            if (SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168 + fStack_164 * fStack_164) <
                (float)_DAT_005e667d) {
              fVar24 = (float)((int)param_1[1].base.base.orient_matrix.m[1].x + 1);
              param_1[1].base.base.orient_matrix.m[1].x = fVar24;
              if (3 < (int)fVar24) {
                param_1[1].base.base.orient_matrix.m[1].x = 0.0;
              }
              param_1[1].base.base.orient_matrix.m[1].y = 0x41200000;
            }
          }
          else if ((param_1[1].base.base.orient_matrix.m[1].y <= 0.0) &&
                  (fVar24 = (float)((int)param_1[1].base.base.orient_matrix.m[1].x + 1),
                  param_1[1].base.base.orient_matrix.m[1].x = fVar24, 3 < (int)fVar24)) {
            param_1[1].base.base.orient_matrix.m[1].x = 0.0;
          }
        }
        fStack_25c = 0x40400000;
        fStack_18 = 0x40400000;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        fVar24 = 0.17453292;
        pCVar21 = (CVector3f *)0x3f000000;
        uStack_264 = 0;
        uStack_260 = 0;
        path_map = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
        target_pos = &(pCVar13->base).location;
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          (&param_1->base,&target_pos->position,path_map,pCVar21,fVar24,
                           (float)in_stack_fffffcd8);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          pCVar15 = &(param_1->base).model;
          in_stack_fffffcd8 = (CEnemy *)pCVar15;
          fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            in_stack_fffffcd8 = (CEnemy *)0x1;
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar15->base,iVar7,(int)in_stack_fffffcd8);
          }
        }
        else if (iVar7 < 1) {
          in_stack_fffffcd8 = (CEnemy *)g_CTrapClassInfo.name_hash;
          pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                              ((CDemonActor *)param_1[1].base.base.orient.vec.y,
                               g_CTrapClassInfo.name_hash);
          if (pCVar11 == (CDemonActor *)0x0) {
            fStack_c0 = (target_pos->position).x - (param_1->base).base.location.position.x;
            fStack_bc = (pCVar13->base).location.position.y -
                        (param_1->base).base.location.position.y;
            fStack_b8 = (pCVar13->base).location.position.z -
                        (param_1->base).base.location.position.z;
            fStack_180 = fStack_c0;
            afStack_194[(uint)bVar17 * -2 + 6] = afStack_f8[(uint)bVar17 * -2 + 0xf];
            afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
                 afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
            if (afStack_224 + 0x1a != afStack_194 + 5) {
              fStack_1bc = fStack_180;
              fStack_1b8 = fStack_17c;
              fStack_1b4 = fStack_178;
            }
            fStack_34 = SQRT(fStack_1b4 * fStack_1b4 +
                             fStack_1bc * fStack_1bc + fStack_1b8 * fStack_1b8);
            fStack_28 = 20.0;
            if (*(int *)param_1[1].base.base.actor_name == 1) {
              fStack_28 = 10.0;
            }
            if (*(int *)param_1[1].base.base.actor_name == 2) {
              fStack_28 = 10.0;
            }
            pCVar15 = &(param_1->base).model;
            if (fStack_28 < fStack_34) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              uStack_198 = afStack_194[2];
              afStack_194[(uint)bVar17 * -2] = afStack_194[(uint)bVar17 * -2 + 3];
              afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                   afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
              in_stack_fffffcd8 = (CEnemy *)(afStack_194[0] - (param_1->base).base.orient.vec.y);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)in_stack_fffffcd8);
              if (ABS(fStack_14) < (float)_DAT_005e6685) {
                fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
                if ((float)_DAT_005e6675 < fStack_14) {
                  fVar24 = 1.4013e-45;
                  iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&pCVar15->base,iVar7 + 0xb,(int)fVar24);
                }
                in_stack_fffffcd8 = (CEnemy *)0x3e19999a;
                iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.15);
                if (iVar7 != 0) {
                  in_stack_fffffcd8 = param_1;
                  core_shadow_cpp_FUN_0053df80();
                }
                iVar7 = 0;
                iVar22 = 0;
                while (iVar22 < g_CDemonSetPtr->enemy_count) {
                  in_stack_fffffcd8 = (CEnemy *)g_CShadowClassInfo.name_hash;
                  pCVar8 = (CEnemy *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                      g_CShadowClassInfo.name_hash);
                  if ((pCVar8 == (CEnemy *)0x0) || (pCVar8 == param_1)) {
                    iVar22 = iVar22 + 1;
                    iVar7 = iVar7 + 4;
                  }
                  else {
                    in_stack_fffffcd8 = (CEnemy *)&(pCVar8->base).model;
                    iVar12 = core_motion_cpp_FUN_005035c0();
                    if ((*(int *)(iVar12 + 0x24) == 0xb) ||
                       (iVar12 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar12 + 0x24) == 0xc)) {
                      in_stack_fffffcd8 = (CEnemy *)0x2;
                      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
                      if (iVar7 == 1) {
                        (param_1->base).base.orient.vec.y =
                             (param_1->base).base.orient.vec.y + _DAT_005e6695;
                      }
                      if (iVar7 == 2) {
                        (param_1->base).base.orient.vec.y =
                             (param_1->base).base.orient.vec.y + _DAT_005e6699;
                      }
                      break;
                    }
                    iVar22 = iVar22 + 1;
                    iVar7 = iVar7 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005e6659) {
              if ((iStack_1c == 5) &&
                 (in_stack_fffffcd8 = (CEnemy *)pCVar15,
                 fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base),
                 (float)_DAT_005e6675 < fStack_14)) {
                in_stack_fffffcd8 = (CEnemy *)0x1;
                iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar15->base,iVar7,(int)in_stack_fffffcd8);
              }
              if ((iStack_1c == 0xb) || (iStack_1c == 0xc)) {
                in_stack_fffffcd8 = (CEnemy *)0x1;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(param_1->base).model.base,5,1);
              }
            }
          }
        }
        else {
          if ((*(int *)param_1[1].base.base.actor_name == 2) &&
             ((fVar24 = param_1[1].base.base.orient_matrix.m[1].x, fVar24 == 1.4013e-45 ||
              (fVar24 == 4.2039e-45)))) break;
          if (param_1->attack_cooldown <= 0.0) {
            fVar24 = 1.4013e-45;
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(param_1->base).model.base,iVar7 + 6,(int)fVar24);
            iVar7 = core_charactr_cpp_FUN_0042b300();
            param_1[1].base.base.health = iVar7;
            if (iVar7 != 0) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(4.0,12.0);
              param_1[1].base.base.direction_hint = (int)fStack_14;
            }
            in_stack_fffffcd8 = (CEnemy *)0x3f4ccccd;
            iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.8);
            if (iVar7 != 0) {
              in_stack_fffffcd8 = param_1;
              core_shadow_cpp_FUN_0053df80();
            }
          }
        }
        fVar24 = param_1[1].base.base.location.position.z - param_2;
        param_1[1].base.base.location.position.z = fVar24;
        if (fVar24 < 0.0) {
          in_stack_fffffcd8 = param_1;
          core_shadow_cpp_FUN_0053df80();
        }
      }
      else {
        fVar24 = 1.4013e-45;
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(param_1->base).model.base,iVar7,(int)fVar24);
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffcd0);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar23 = (SDamageInfo *)&stack0xfffffcd0;
    fVar24 = 0.4;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (param_1->base).model.bone_transform.bone_model_matrices
               [*(int *)(param_1[1].base.base.actor_name + 0xc)].m);
    afStack_12c[0] = (float)uStack_15c;
    afStack_140[(uint)bVar17 * -2 + 6] = afStack_194[(uint)bVar17 * -2 + 0xf];
    afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
    core_actor_cpp_FUN_00408d70(param_1,afStack_140 + 5);
    CStack_120.x = fStack_b4;
    *(float *)((int)&CStack_120 + (uint)bVar17 * -8 + 4) = afStack_f8[(uint)bVar17 * -2 + 0x12];
    *(float *)((int)&CStack_120 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(param_1,&CStack_120,fVar24,pSVar23);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar23 = (SDamageInfo *)&stack0xfffffcd0;
    fVar24 = 0.4;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (param_1->base).model.bone_transform.bone_model_matrices
               [*(int *)(param_1[1].base.base.actor_name + 8)].m);
    puVar14 = &uStack_114;
    uStack_114 = uStack_1b0;
    afStack_110[(uint)bVar17 * -2] = afStack_1ac[(uint)bVar17 * -2];
    afStack_110[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_1ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    core_actor_cpp_FUN_00408d70(param_1,puVar14);
    pCVar21 = &CStack_108;
    CStack_108.x = fStack_270;
    *(uint *)((int)&CStack_108 + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&stack0xfffffd70 + ((uint)bVar17 * -2 + 9) * 4);
    pCVar8 = param_1;
    *(uint *)((int)&CStack_108 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&stack0xfffffd70 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 10) * 4);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(pCVar8,pCVar21,fVar24,pSVar23);
    pCVar13 = param_1->victim;
    if ((pCVar13 != (CCharacter *)0x0) &&
       (EVar9 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13),
       EVar9 != DEATH_STATE_ALIVE)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(param_1->base).model.base,10,1);
    }
    core_shadow_cpp_FUN_0053dfc0();
    break;
  default:
    pCVar8 = param_1 + 1;
    (pCVar8->base).base.create_event[0] = '\x01';
    (pCVar8->base).base.create_event[1] = '\0';
    (pCVar8->base).base.create_event[2] = '\0';
    (pCVar8->base).base.create_event[3] = '\0';
    pCVar13 = &param_1[1].base;
    (pCVar13->base).create_event[8] = -0x18;
    (pCVar13->base).create_event[9] = -3;
    (pCVar13->base).create_event[10] = '\0';
    (pCVar13->base).create_event[0xb] = '\0';
switchD_0053dec8_caseD_0:
    pCVar8 = param_1 + 1;
    (pCVar8->base).base.create_event[0] = '\x01';
    (pCVar8->base).base.create_event[1] = '\0';
    (pCVar8->base).base.create_event[2] = '\0';
    (pCVar8->base).base.create_event[3] = '\0';
    pCVar13 = &param_1[1].base;
    (pCVar13->base).create_event[8] = -0x18;
    (pCVar13->base).create_event[9] = -3;
    (pCVar13->base).create_event[10] = '\0';
    (pCVar13->base).create_event[0xb] = '\0';
    iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(param_1,param_2);
    pCVar15 = &(param_1->base).model;
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,5,1);
      break;
    }
    if (param_1[1].base.base.health != 0) {
      fVar24 = (float)param_1[1].base.base.direction_hint - param_2;
      param_1[1].base.base.direction_hint = (int)fVar24;
      if (0.0 < fVar24) {
        core_charactr_cpp_FUN_00428260
                  (param_1,param_1[1].base.base.health,0x3f800000,0x3f800000,
                   &param_1[1].base.base.validation_magic);
        uVar3 = param_1[1].base.base.validation_magic;
        if (uVar3 == 0) {
LAB_0053d2f5:
          param_1[1].base.base.health = 0;
        }
        else {
          if (uVar3 < 2) {
            iVar22 = 1;
            iVar7 = 5;
          }
          else {
            if (uVar3 != 2) goto LAB_0053d2f5;
            iVar22 = 1;
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
            iVar7 = iVar7 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&pCVar15->base,iVar7,iVar22);
          if (param_1[1].base.base.health != 0) break;
        }
      }
      else {
        param_1[1].base.base.health = 0;
        param_1[1].base.base.direction_hint = 0;
      }
    }
    (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
    pCVar13 = param_1->victim;
    if (pCVar13 != (CCharacter *)0x0) {
      if (param_1[1].base.base.orient.vec.y != 0.0) {
        afStack_140[2] =
             (pCVar13->base).location.position.x - (param_1->base).base.location.position.x;
        afStack_140[3] =
             (pCVar13->base).location.position.y - (param_1->base).base.location.position.y;
        fStack_130 = (pCVar13->base).location.position.z - (param_1->base).base.location.position.z;
        fStack_24c = afStack_140[2];
        *(float *)((int)&stack0xfffffdac + ((uint)bVar17 * -2 + 3) * 4) =
             afStack_140[(uint)bVar17 * -2 + 3];
        *(float *)((int)&stack0xfffffdac + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 4) * 4) =
             afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
        fStack_30 = SQRT(fStack_244 * fStack_244 + fStack_24c * fStack_24c + fStack_248 * fStack_248
                        );
        if ((param_1->guard_distance < fStack_30) || ((float)_DAT_005e668d < fStack_30)) {
          param_1->victim = (CCharacter *)0x0;
          break;
        }
      }
      pCVar15 = &(param_1->base).model;
      pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          ((CDemonActor *)param_1[1].base.base.orient.vec.y,
                           g_CTrapClassInfo.name_hash);
      if (pCVar11 == (CDemonActor *)0x0) {
        if (param_1->victim == (CCharacter *)0x0) {
          fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            fVar24 = 1.4013e-45;
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar15->base,iVar7,(int)fVar24);
          }
        }
        else {
          iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
          if (iVar7 != 0) {
            core_shadow_cpp_FUN_0053df80();
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(param_1->base).model.base,5,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,0,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar18 = (((float10)fStack_20 - (float10)fStack_2c) * (float10)_DAT_005e663d) /
             (float10)fStack_20;
    pCVar8 = param_1 + 1;
    (pCVar8->base).base.create_event[0] = '\0';
    (pCVar8->base).base.create_event[1] = '\0';
    (pCVar8->base).base.create_event[2] = '\0';
    (pCVar8->base).base.create_event[3] = '\0';
    uVar20 = round();
    iVar7 = (int)uVar20;
    *(int *)(iVar7 + 0x10b78) = (int)ROUND(fVar18);
    fVar18 = (float10)*(float *)((int)((ulonglong)uVar20 >> 0x20) + 0x284) * (float10)_DAT_005e6645
             + (float10)*(float *)(iVar7 + 0x10b3c);
    *(float *)(iVar7 + 0x10b3c) = (float)fVar18;
    fVar19 = (float10)fsin(fVar18);
    fVar18 = (float10)fcos(fVar18);
    fStack_38 = (float)fVar19;
    fStack_40 = (float)fVar18;
    (*((param_1->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)param_1,out_box);
    puVar14 = (uint *)&stack0xfffffd54;
    puVar16 = &stack0xfffffd3c;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
    }
    fVar24 = (fStack_2b0 - fStack_2bc) * fStack_40;
    fVar6 = (fStack_2b8 - fStack_2c4) * fStack_38 * (float)_DAT_005e664d;
    fStack_90 = fStack_2c4 + fStack_2b8;
    fStack_8c = fStack_2c0 + fStack_2b4;
    fStack_88 = fStack_2bc + fStack_2b0;
    afStack_f8[2] = fStack_2c4 + fStack_2b8;
    afStack_f8[(uint)bVar17 * -2 + 3] = afStack_f8[(uint)bVar17 * -2 + 0x1b];
    afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1c];
    CStack_234.x = fVar6;
    CStack_234.z = fVar24 * (float)_DAT_005e664d;
    fStack_1ec = afStack_f8[2] * _DAT_005e6655;
    fStack_1e8 = afStack_f8[3] * _DAT_005e6655;
    fStack_1e4 = fStack_e8 * _DAT_005e6655;
    afStack_224[2] = afStack_f8[2] * _DAT_005e6655;
    afStack_224[(uint)bVar17 * -2 + 3] = afStack_224[(uint)bVar17 * -2 + 0xf];
    afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
    CStack_234.y = afStack_224[3];
    fStack_174 = fVar6 + (param_1->base).base.location.position.x;
    fStack_170 = afStack_224[3] + (param_1->base).base.location.position.y;
    fStack_16c = CStack_234.z + (param_1->base).base.location.position.z;
    CStack_204.x = fStack_174;
    afStack_224[(uint)bVar17 * -2 + 9] = afStack_194[(uint)bVar17 * -2 + 9];
    afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
         afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    if (&CStack_234 != (CVector3f *)(afStack_224 + 8)) {
      CStack_234.x = CStack_204.x;
      CStack_234.y = CStack_204.y;
      CStack_234.z = CStack_204.z;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810((CDemonGlobe *)0x20b1924,&CStack_234);
    _DAT_020b1960 = 60000;
    DAT_020b1940 = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860((CDemonGlobe *)0x20b1924,6.0);
    _DAT_020b1944 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(g_CDemonSetPtr,(CDemonGlobe *)0x20b1924);
    pCVar15 = &(param_1->base).model;
    pCVar13 = &param_1[1].base;
    (pCVar13->base).create_event[0xc] = '\x01';
    (pCVar13->base).create_event[0xd] = '\0';
    (pCVar13->base).create_event[0xe] = '\0';
    (pCVar13->base).create_event[0xf] = '\0';
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar15);
    fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar15->base);
    fVar18 = (float10)_DAT_005e665d;
    pow();
    fVar19 = (float10)_DAT_005e6665;
    pow();
    *(float *)(param_1[1].base.base.create_event + 4) = (float)((float10)1 + fVar18 / fVar19);
    iVar7 = 0;
    if (0 < pCVar10->bone_count) {
      do {
        iVar7 = iVar7 + 1;
        pCVar15->rest_bone_scales[0] = *(float *)(param_1[1].base.base.create_event + 4);
        pCVar15 = (CDeformableModelInstance *)&(pCVar15->base).current_motion_index;
      } while (iVar7 < pCVar10->bone_count);
    }
    break;
  case 0xf:
    pCVar13 = &param_1[1].base;
    (pCVar13->base).create_event[8] = '\0';
    (pCVar13->base).create_event[9] = '\0';
    (pCVar13->base).create_event[10] = '\0';
    (pCVar13->base).create_event[0xb] = '\0';
    pCVar13 = &param_1[1].base;
    (pCVar13->base).create_event[4] = '\0';
    (pCVar13->base).create_event[5] = '\0';
    (pCVar13->base).create_event[6] = -0x80;
    (pCVar13->base).create_event[7] = '?';
    (param_1->base).base.lifecycle_state = ACTOR_DESTROYED;
    return;
  case 0x14:
    fVar18 = ((float10)fStack_2c * (float10)_DAT_005e663d) / (float10)fStack_20;
    pCVar8 = param_1 + 1;
    (pCVar8->base).base.create_event[0] = '\0';
    (pCVar8->base).base.create_event[1] = '\0';
    (pCVar8->base).base.create_event[2] = '\0';
    (pCVar8->base).base.create_event[3] = '\0';
    iVar7 = round();
    *(int *)(iVar7 + 0x10b78) = (int)ROUND(fVar18);
  }
LAB_0053c710:
  fVar24 = param_1->attack_cooldown;
  (param_1->base).collision_cylinder_radius = 2.0;
  if (0.0 < fVar24) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar7 = core_motion_cpp_FUN_005035c0();
  iVar7 = *(int *)(iVar7 + 0x24);
  if ((((((iVar7 != 0xf) && (iVar7 != 0)) && (iVar7 != 1)) && ((iVar7 != 2 && (iVar7 != 3)))) &&
      (iVar7 != 4)) || ((param_1->base).base.standing_platform != (CPlatform *)0x0)) {
    pCVar13 = param_1->victim;
    if ((pCVar13 != (CCharacter *)0x0) &&
       (pCVar8 = (CEnemy *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
       pCVar8 == param_1)) {
      in_stack_fffffcd8 = (CEnemy *)param_1->victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffcd8);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_27c = (param_1->base).velocity.x * param_2;
    fStack_278 = (param_1->base).velocity.y * param_2;
    fStack_274 = (param_1->base).velocity.z * param_2;
    fStack_1c8 = fStack_27c;
    afStack_224[(uint)bVar17 * -2 + 0x18] =
         *(float *)((int)&stack0xfffffd70 + ((uint)bVar17 * -2 + 6) * 4);
    afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19] =
         *(float *)((int)&stack0xfffffd70 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 7) * 4);
    fStack_1e0 = fStack_1c8 + (param_1->base).model.accumulated_root_motion.x;
    fStack_1dc = fStack_1c4 + (param_1->base).model.accumulated_root_motion.y;
    fStack_1d8 = fStack_1c0 + (param_1->base).model.accumulated_root_motion.z;
    fStack_144 = fStack_1e0;
    afStack_140[(uint)bVar17 * -2] = afStack_224[(uint)bVar17 * -2 + 0x12];
    afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13];
    fStack_e4 = fStack_144 + (param_1->base).position_delta.x;
    fStack_e0 = afStack_140[0] + (param_1->base).position_delta.y;
    fStack_dc = afStack_140[1] + (param_1->base).position_delta.z;
    CStack_60.x = fStack_e4;
    *(float *)((int)&CStack_60 + (uint)bVar17 * -8 + 4) = afStack_f8[(uint)bVar17 * -2 + 6];
    *(float *)((int)&CStack_60 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    (param_1->base).position_delta.x = (param_1->base).position_delta.y;
    core_charactr_cpp_FUN_00423a60(&param_1->base,&CStack_60);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(&(param_1->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(&param_1->base,param_2);
  core_shadow_cpp_FUN_0053ece0();
  if ((0.0 <= (float)param_1[1].base.base.lifecycle_state) &&
     (param_2 = (float)param_1[1].base.base.lifecycle_state - param_2,
     param_1[1].base.base.lifecycle_state = (EActorLifecycleState)param_2, param_2 <= 0.0)) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
    param_1[1].base.base.lifecycle_state = (EActorLifecycleState)fStack_14;
    (*((param_1->base).base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)param_1,(CBoundingBox3D *)in_stack_fffffcd8);
    puVar14 = (uint *)&stack0xfffffd0c;
    puVar16 = &stack0xfffffd24;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
    }
    fStack_6c = fStack_2dc + fStack_2d0;
    fStack_68 = fStack_2d8 + fStack_2cc;
    fStack_64 = fStack_2d4 + fStack_2c8;
    fStack_84 = fStack_2dc + fStack_2d0;
    afStack_f8[(uint)bVar17 * -2 + 0x1e] = afStack_f8[(uint)bVar17 * -2 + 0x24];
    afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1f] =
         afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x25];
    fStack_294 = fStack_84 * _DAT_005e6655;
    fStack_290 = fStack_80 * _DAT_005e6655;
    fStack_28c = fStack_7c * _DAT_005e6655;
    fStack_54 = fStack_84 * _DAT_005e6655;
    afStack_50[(uint)bVar17 * -2] = *(float *)((int)&stack0xfffffd70 + (uint)bVar17 * -8);
    afStack_50[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         *(float *)((int)&stack0xfffffd70 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4);
    core_actor_cpp_FUN_00408d70();
    fStack_fc = fStack_a8;
    afStack_f8[(uint)bVar17 * -2] = afStack_f8[(uint)bVar17 * -2 + 0x15];
    afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16];
    if (afStack_194 + 0x11 != &fStack_fc) {
      fStack_150 = fStack_fc;
      fStack_14c = afStack_f8[0];
      fStack_148 = afStack_f8[1];
    }
    CStack_1a4.x = (int)ROUND(fStack_150 * _DAT_005fb3e0);
    CStack_1a4.y = (int)ROUND(fStack_14c * _DAT_005fb3e0);
    CStack_1a4.z = (int)ROUND(fStack_148 * _DAT_005fb3e0);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                                 (g_CDemonSetPtr,&CStack_1a4,(CVector3i *)0x0);
    if (_DAT_005fb40c * (float)_DAT_005e669d <= (float)(int)fStack_14) {
      fVar24 = 1.4013e-45;
      iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(param_1->base).model.base,iVar7,(int)fVar24);
      iVar7 = core_charactr_cpp_FUN_0042b300();
      param_1[1].base.base.health = iVar7;
      if (iVar7 != 0) {
        fVar24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,6.0);
        param_1[1].base.base.direction_hint = (int)fVar24;
      }
      param_1[1].base.base.lifecycle_state =
           (EActorLifecycleState)((float)param_1[1].base.base.lifecycle_state + _DAT_005e66a5);
      return;
    }
  }
  return;
}
