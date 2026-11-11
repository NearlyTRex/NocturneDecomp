// Name: core_shadow.cpp_FUN_005438d0
// Address: 005438d0
// Address Range: [[005438d0, 00544fc1]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_005438d0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_005438d0(CEnemy *param_1,float param_2)

{
  char *pcVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  uint uVar4;
  float fVar5;
  CGame *pCVar6;
  SMotion *pSVar7;
  int iVar8;
  CEnemy *pCVar9;
  uintptr_t uVar10;
  EDeathState EVar11;
  CSkeleton *pCVar12;
  CPathMap *path_map;
  int iVar13;
  uint *puVar14;
  CDeformableModelInstance *pCVar15;
  CLocation *target_pos;
  uint *puVar16;
  byte bVar17;
  float10 fVar18;
  float10 fVar19;
  float afStackY_1238 [975];
  float *pfVar20;
  int iVar21;
  CBoundingBox3D *in_stack_fffffd18;
  CVector3f *direction;
  CEnemy *in_stack_fffffd20;
  float fVar22;
  EDamageType EStack_2bc;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
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
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  uint uStack_1cc;
  uint uStack_1c0;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  CVector3i CStack_190;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_154;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  CVector3f CStack_13c;
  float fStack_130;
  float afStack_12c [5];
  CVector3f CStack_118;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [5];
  float afStack_e8 [3];
  float afStack_dc [3];
  uint uStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [3];
  uint uStack_ac;
  float fStack_a8;
  float afStack_a0 [3];
  float afStack_94 [3];
  float fStack_88;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  uint uStack_70;
  float afStack_6c [5];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar17 = 0;
  pCVar15 = &(param_1->base).model;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar15->base);
  fStack_38 = (param_1->base).model.base.current_frame_number;
  iVar13 = pSVar7->state_index;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar15->base);
  fStack_2c = (float)pSVar7->frame_count;
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  iVar8 = (*(((param_1->base).base.vtable._ue)->_ue).randomize)(param_1);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0((uint)param_1[1].base.base.orient.vec.x);
    return;
  }
  if ((*(int *)param_1[1].base.base.actor_name == 2) &&
     (0.0 <= param_1[1].base.base.orient_matrix.m[1].y)) {
    param_1[1].base.base.orient_matrix.m[1].y = param_1[1].base.base.orient_matrix.m[1].y - param_2;
  }
  fStack_44 = param_2 * param_1->speed * *(float *)(param_1[1].base.base.create_event + 0x18);
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  while (0.0 < fStack_44) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&(param_1->base).model.base,afStack_6c + 10);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,iVar8);
  }
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(param_1);
  if (*(int *)param_1[1].base.base.actor_name == 2) {
    (param_1->base).turn_speed = (param_1->base).turn_speed * (float)_DAT_005d129e;
  }
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&param_1->base,param_2);
  pCVar6 = g_CGamePtr;
  if (iVar8 != 0) {
    EVar2 = (param_1->base).walk_state;
    pCVar15 = &(param_1->base).model;
    if (EVar2 < 2) {
      if (EVar2 == WALK_STATE_WALKING) {
        iVar8 = 5;
        iVar13 = 1;
      }
      else {
LAB_00543fd8:
        iVar13 = 1;
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      }
LAB_00543ab8:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(param_1->base).model.base,iVar8,iVar13);
    }
    else if (EVar2 < WALK_STATE_NO_PATH) {
      fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar15->base);
      if ((float)_DAT_005d12de < fStack_14) {
        iVar13 = 1;
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
        iVar8 = iVar8 + 0xb;
        goto LAB_00543ab8;
      }
    }
    else {
      if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00543fd8;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar15->base,0,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
    goto LAB_00543af0;
  }
  switch(iVar13) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_00544f80_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (param_1[1].base.base.validation_magic != 0) {
      fVar22 = (float)param_1[1].base.base.lifecycle_state - param_2;
      param_1[1].base.base.lifecycle_state = (EActorLifecycleState)fVar22;
      if (0.0 < fVar22) {
        core_charactr_cpp_FUN_004310e0
                  (param_1,param_1[1].base.base.validation_magic,0x3f800000,0x3f800000);
        uVar4 = param_1[1].base.base.direction_hint;
        if (uVar4 == 0) {
LAB_00544b88:
          iVar21 = 1;
          iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->base).model.base,iVar8,iVar21);
          param_1[1].base.base.validation_magic = 0;
        }
        else {
          pCVar15 = &(param_1->base).model;
          if (uVar4 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar15->base,5,1);
          }
          else {
            if (uVar4 != 2) goto LAB_00544b88;
            fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar15->base);
            if ((float)_DAT_005d12d6 < fStack_14) {
              pcVar1 = param_1[1].base.base.create_event;
              *(int *)pcVar1 = *(int *)pcVar1 + 1;
            }
            if (2 < *(int *)param_1[1].base.base.create_event) {
              pCVar15 = &(param_1->base).model;
              fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar15->base);
              if ((float)_DAT_005d12de < fStack_14) {
                iVar21 = 1;
                iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCVar15->base,iVar8 + 0xb,iVar21);
                pCVar9 = param_1 + 1;
                (pCVar9->base).base.create_event[0] = '\0';
                (pCVar9->base).base.create_event[1] = '\0';
                (pCVar9->base).base.create_event[2] = '\0';
                (pCVar9->base).base.create_event[3] = '\0';
              }
            }
          }
          if (param_1[1].base.base.validation_magic != 0) break;
        }
      }
      else {
        param_1[1].base.base.validation_magic = 0;
        param_1[1].base.base.lifecycle_state = ACTOR_NOT_CREATED;
      }
    }
    (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
    pCVar3 = param_1->victim;
    pCStack_28 = &(param_1->base).model.base;
    if (pCVar3 == (CCharacter *)0x0) {
      fVar22 = 1.4013e-45;
      iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,iVar13,(int)fVar22);
    }
    else {
      fStack_1b4 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
      fStack_1b0 = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
      fStack_1ac = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
      fStack_130 = fStack_1b4;
      afStack_12c[(uint)bVar17 * -2] =
           *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0x1b) * 4);
      afStack_12c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1c) * 4);
      fStack_20 = SQRT(afStack_12c[1] * afStack_12c[1] +
                       fStack_130 * fStack_130 + afStack_12c[0] * afStack_12c[0]);
      if (param_1->guard_distance < fStack_20) {
        fVar22 = 1.4013e-45;
        param_1->victim = (CCharacter *)0x0;
        iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (pCStack_28,iVar13,(int)fVar22);
      }
      else if (((fStack_20 <= _DAT_005e3d4c + _DAT_005d12e6) || (_DAT_005e3d4c + 1.0 <= fStack_20))
              || (iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3), iVar8 == 1)) {
        fStack_74 = 0x40400000;
        fStack_40 = 0x40400000;
        pCVar3 = param_1->victim;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        uStack_7c = 0;
        uStack_78 = 0;
        fVar22 = 0.17453292;
        direction = (CVector3f *)0x3f000000;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        target_pos = &(pCVar3->base).location;
        pCVar15 = &(param_1->base).model;
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          (&param_1->base,&target_pos->position,path_map,direction,fVar22,
                           (float)in_stack_fffffd20);
        if (iVar8 < 0) {
          engine_console_cpp_FUN_00441ff0();
          in_stack_fffffd20 = (CEnemy *)0x1;
          iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar15->base,iVar13,(int)in_stack_fffffd20);
        }
        else if (iVar8 < 1) {
          in_stack_fffffd20 = (CEnemy *)g_CTrapClassInfo.name_hash;
          iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840();
          if (iVar8 == 0) {
            fStack_220 = (target_pos->position).x - (param_1->base).base.location.position.x;
            fStack_21c = (pCVar3->base).location.position.y -
                         (param_1->base).base.location.position.y;
            fStack_218 = (pCVar3->base).location.position.z -
                         (param_1->base).base.location.position.z;
            fStack_100 = fStack_220;
            afStack_fc[(uint)bVar17 * -2] = *(float *)((int)&stack0xfffffde4 + (uint)bVar17 * -8);
            afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4)
            ;
            if (&stack0xfffffdd4 != &fStack_100) {
              fStack_22c = fStack_100;
              fStack_228 = afStack_fc[0];
              fStack_224 = afStack_fc[1];
            }
            fStack_34 = SQRT(fStack_224 * fStack_224 +
                             fStack_22c * fStack_22c + fStack_228 * fStack_228);
            fStack_24 = 20.0;
            if (*(int *)param_1[1].base.base.actor_name == 1) {
              fStack_24 = 10.0;
            }
            if (*(int *)param_1[1].base.base.actor_name == 2) {
              fStack_24 = 10.0;
            }
            pCVar15 = &(param_1->base).model;
            pCStack_1c = &pCVar15->base;
            if (fStack_24 < fStack_34) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
              uStack_ac = uStack_1c0;
              afStack_fc[(uint)bVar17 * -2 + 0x15] =
                   *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0x18) * 4);
              afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16] =
                   *(float *)((int)&stack0xfffffde4 +
                             ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19) * 4);
              in_stack_fffffd20 = (CEnemy *)(fStack_a8 - (param_1->base).base.orient.vec.y);
              fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0();
              if (ABS(fStack_14) < (float)_DAT_005d12ee) {
                fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_1c);
                if ((float)_DAT_005d12de < fStack_14) {
                  fVar22 = 1.4013e-45;
                  iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (pCStack_1c,iVar13 + 0xb,(int)fVar22);
                }
                in_stack_fffffd20 = (CEnemy *)0x3e19999a;
                iVar13 = core_actor_cpp_randomChance_FUN_0040cf40(0.15);
                if (iVar13 != 0) {
                  in_stack_fffffd20 = param_1;
                  core_shadow_cpp_FUN_00545040();
                }
                iVar13 = 0;
                while (iVar13 < g_CDemonSetPtr->enemy_count) {
                  in_stack_fffffd20 = (CEnemy *)g_CShadowClassInfo.name_hash;
                  pCVar9 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840();
                  if ((pCVar9 == (CEnemy *)0x0) || (pCVar9 == param_1)) {
                    iVar13 = iVar13 + 1;
                  }
                  else {
                    in_stack_fffffd20 = (CEnemy *)&(pCVar9->base).model;
                    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                       ((CMotionController *)in_stack_fffffd20);
                    if ((pSVar7->state_index == 0xb) ||
                       (pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                           ((CMotionController *)in_stack_fffffd20),
                       pSVar7->state_index == 0xc)) {
                      in_stack_fffffd20 = (CEnemy *)0x2;
                      iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
                      if (iVar13 == 1) {
                        (param_1->base).base.orient.vec.y =
                             (param_1->base).base.orient.vec.y + _DAT_005d12fe;
                      }
                      if (iVar13 == 2) {
                        (param_1->base).base.orient.vec.y =
                             (param_1->base).base.orient.vec.y + _DAT_005d1302;
                      }
                      break;
                    }
                    iVar13 = iVar13 + 1;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005d12c2) {
              if ((iVar13 == 5) &&
                 (in_stack_fffffd20 = (CEnemy *)pCVar15,
                 fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar15->base),
                 (float)_DAT_005d12de < fStack_14)) {
                in_stack_fffffd20 = (CEnemy *)0x1;
                iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCVar15->base,iVar8,(int)in_stack_fffffd20);
              }
              if ((iVar13 == 0xb) || (iVar13 == 0xc)) {
                in_stack_fffffd20 = (CEnemy *)0x1;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(param_1->base).model.base,5,1);
              }
            }
          }
        }
        else if (param_1->attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar15->base,6,1);
          uVar10 = core_charactr_cpp_FUN_004348b0();
          param_1[1].base.base.validation_magic = uVar10;
          if (uVar10 != 0) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(4.0,12.0);
            param_1[1].base.base.lifecycle_state = (EActorLifecycleState)fStack_14;
          }
          in_stack_fffffd20 = (CEnemy *)0x3f4ccccd;
          iVar13 = core_actor_cpp_randomChance_FUN_0040cf40(0.8);
          if (iVar13 != 0) {
            in_stack_fffffd20 = param_1;
            core_shadow_cpp_FUN_00545040();
          }
        }
        fVar22 = param_1[1].base.base.location.position.z - param_2;
        param_1[1].base.base.location.position.z = fVar22;
        if (fVar22 < 0.0) {
          in_stack_fffffd20 = param_1;
          core_shadow_cpp_FUN_00545040();
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,7,1);
        uVar10 = core_charactr_cpp_FUN_004348b0();
        param_1[1].base.base.validation_magic = uVar10;
        if (uVar10 != 0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(4.0,12.0);
          param_1[1].base.base.lifecycle_state = (EActorLifecycleState)fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffd14);
    EStack_2bc = DAMAGE_TYPE_SHADOW;
    core_xform_cpp_FUN_00583260
              (&DAT_02cfd900,
               (param_1->base).model.bone_transform.bone_model_matrices
               [*(int *)(param_1[1].base.base.actor_name + 0xc)].m,0x3f800000);
    afStack_dc[0] = (float)uStack_154;
    afStack_fc[(uint)bVar17 * -2 + 9] = afStack_174[(uint)bVar17 * -2 + 9];
    afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
         afStack_174[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    core_actor_cpp_FUN_00408b80(param_1,afStack_fc + 8);
    uStack_1cc = uStack_d0;
    *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0x15) * 4) =
         afStack_fc[(uint)bVar17 * -2 + 0xc];
    *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16) * 4) =
         afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
    core_enemy_cpp_FUN_004893f0(param_1,&stack0xfffffe34);
    core_xform_cpp_FUN_00583260
              (&DAT_02cfd900,
               (param_1->base).model.bone_transform.bone_model_matrices
               [*(int *)(param_1[1].base.base.actor_name + 8)].m,0x3f800000);
    pfVar20 = afStack_fc + 0x11;
    afStack_b8[0] = (float)uStack_70;
    afStack_fc[(uint)bVar17 * -2 + 0x12] = afStack_6c[(uint)bVar17 * -2];
    afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13] =
         afStack_6c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    core_actor_cpp_FUN_00408b80(param_1,pfVar20);
    pfVar20 = afStack_fc + 5;
    afStack_e8[0] = afStack_6c[2];
    afStack_fc[(uint)bVar17 * -2 + 6] = afStack_6c[(uint)bVar17 * -2 + 3];
    pCVar9 = param_1;
    afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         afStack_6c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_enemy_cpp_FUN_004893f0(pCVar9,pfVar20);
    core_xform_cpp_FUN_00583260
              (&DAT_02cfd900,
               (param_1->base).model.bone_transform.bone_model_matrices
               [*(int *)(param_1[1].base.base.actor_name + 0x10)].m,0x3f800000);
    pfVar20 = afStack_fc + 0x17;
    afStack_a0[0] = afStack_fc[2];
    afStack_fc[(uint)bVar17 * -2 + 0x18] = afStack_fc[(uint)bVar17 * -2 + 3];
    afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19] =
         afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_actor_cpp_FUN_00408b80(param_1,pfVar20);
    pfVar20 = afStack_fc + 0x1a;
    afStack_94[0] = (float)uStack_1d8;
    afStack_fc[(uint)bVar17 * -2 + 0x1b] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0x12) * 4);
    pCVar9 = param_1;
    afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1c] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13) * 4);
    core_enemy_cpp_FUN_004893f0(pCVar9,pfVar20);
    pCVar3 = param_1->victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (EVar11 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
       EVar11 != DEATH_STATE_ALIVE)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(param_1->base).model.base,10,1);
    }
    core_shadow_cpp_FUN_00545080();
    break;
  default:
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[4] = '\x01';
    (pCVar3->base).create_event[5] = '\0';
    (pCVar3->base).create_event[6] = '\0';
    (pCVar3->base).create_event[7] = '\0';
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[0xc] = -0x18;
    (pCVar3->base).create_event[0xd] = -3;
    (pCVar3->base).create_event[0xe] = '\0';
    (pCVar3->base).create_event[0xf] = '\0';
switchD_00544f80_caseD_0:
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[4] = '\x01';
    (pCVar3->base).create_event[5] = '\0';
    (pCVar3->base).create_event[6] = '\0';
    (pCVar3->base).create_event[7] = '\0';
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[0xc] = -0x18;
    (pCVar3->base).create_event[0xd] = -3;
    (pCVar3->base).create_event[0xe] = '\0';
    (pCVar3->base).create_event[0xf] = '\0';
    iVar13 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(param_1,param_2);
    pCVar15 = &(param_1->base).model;
    if (iVar13 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar15->base,5,1);
      break;
    }
    if (param_1[1].base.base.validation_magic != 0) {
      fVar22 = (float)param_1[1].base.base.lifecycle_state - param_2;
      param_1[1].base.base.lifecycle_state = (EActorLifecycleState)fVar22;
      if (0.0 < fVar22) {
        core_charactr_cpp_FUN_004310e0
                  (param_1,param_1[1].base.base.validation_magic,0x3f800000,0x3f800000);
        uVar4 = param_1[1].base.base.direction_hint;
        if (uVar4 == 0) {
LAB_00544758:
          param_1[1].base.base.validation_magic = 0;
        }
        else {
          if (uVar4 < 2) {
            iVar8 = 1;
            iVar13 = 5;
          }
          else {
            if (uVar4 != 2) goto LAB_00544758;
            iVar8 = 1;
            iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
            iVar13 = iVar13 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar15->base,iVar13,iVar8);
          if (param_1[1].base.base.validation_magic != 0) break;
        }
      }
      else {
        param_1[1].base.base.validation_magic = 0;
        param_1[1].base.base.lifecycle_state = ACTOR_NOT_CREATED;
      }
    }
    (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
    pCVar3 = param_1->victim;
    if (pCVar3 != (CCharacter *)0x0) {
      if (param_1[1].base.base.orient.vec.y != 0.0) {
        fStack_19c = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
        fStack_198 = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
        fStack_194 = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
        fStack_178 = fStack_19c;
        afStack_174[(uint)bVar17 * -2] =
             *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0x21) * 4);
        afStack_174[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x22) * 4);
        fStack_30 = SQRT(afStack_174[1] * afStack_174[1] +
                         fStack_178 * fStack_178 + afStack_174[0] * afStack_174[0]);
        if ((param_1->guard_distance < fStack_30) || ((float)_DAT_005d12f6 < fStack_30)) {
          param_1->victim = (CCharacter *)0x0;
          break;
        }
      }
      if (param_1->victim == (CCharacter *)0x0) {
        pCVar15 = &(param_1->base).model;
        fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar15->base);
        if ((float)_DAT_005d12de < fStack_14) {
          fVar22 = 1.4013e-45;
          iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&pCVar15->base,iVar13,(int)fVar22);
        }
      }
      else {
        iVar13 = core_actor_cpp_randomChance_FUN_0040cf40(0.4);
        if (iVar13 != 0) {
          core_shadow_cpp_FUN_00545040();
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->base).model.base,5,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar18 = (((float10)fStack_2c - (float10)fStack_38) * (float10)_DAT_005d12a6) /
             (float10)fStack_2c;
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[4] = '\0';
    (pCVar3->base).create_event[5] = '\0';
    (pCVar3->base).create_event[6] = '\0';
    (pCVar3->base).create_event[7] = '\0';
    iVar13 = round();
    *(int *)(iVar13 + 0xd0d8) = (int)ROUND(fVar18);
    fVar18 = (float10)pCVar6->delta_time_float * (float10)_DAT_005d12ae +
             (float10)*(float *)(iVar13 + 0xd098);
    *(float *)(iVar13 + 0xd098) = (float)fVar18;
    fVar19 = (float10)fsin(fVar18);
    fVar18 = (float10)fcos(fVar18);
    fStack_18 = (float)fVar19;
    fStack_3c = (float)fVar18;
    (*((param_1->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)param_1,in_stack_fffffd18);
    puVar14 = (uint *)&stack0xfffffd80;
    puVar16 = &stack0xfffffd68;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
    }
    fVar22 = (fStack_284 - fStack_290) * fStack_3c;
    fVar5 = (fStack_28c - fStack_298) * fStack_18 * (float)_DAT_005d12b6;
    afStack_174[2] = fStack_298 + fStack_28c;
    afStack_174[3] = fStack_294 + fStack_288;
    fStack_164 = fStack_290 + fStack_284;
    fStack_208 = fStack_298 + fStack_28c;
    *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 6) * 4) =
         afStack_174[(uint)bVar17 * -2 + 3];
    *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 7) * 4) =
         afStack_174[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    CStack_13c.x = fVar5;
    CStack_13c.z = fVar22 * (float)_DAT_005d12b6;
    fStack_1e4 = fStack_208 * _DAT_005d12be;
    fStack_1e0 = fStack_204 * _DAT_005d12be;
    fStack_1dc = fStack_200 * _DAT_005d12be;
    afStack_12c[2] = fStack_208 * _DAT_005d12be;
    afStack_12c[(uint)bVar17 * -2 + 3] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0xf) * 4);
    afStack_12c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10) * 4);
    CStack_13c.y = afStack_12c[3];
    fStack_1f0 = fVar5 + (param_1->base).base.location.position.x;
    fStack_1ec = afStack_12c[3] + (param_1->base).base.location.position.y;
    fStack_1e8 = CStack_13c.z + (param_1->base).base.location.position.z;
    CStack_118.x = fStack_1f0;
    afStack_12c[(uint)bVar17 * -2 + 6] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0xc) * 4);
    afStack_12c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd) * 4);
    if (&CStack_13c != (CVector3f *)(afStack_12c + 5)) {
      CStack_13c.x = CStack_118.x;
      CStack_13c.y = CStack_118.y;
      CStack_13c.z = CStack_118.z;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0((CDemonGlobe *)0x270f7d8,&CStack_13c);
    _DAT_0270f814 = 60000;
    DAT_0270f7f4 = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)0x270f7d8,6.0);
    _DAT_0270f7f8 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,(CDemonGlobe *)0x270f7d8);
    pCVar15 = &(param_1->base).model;
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[0x10] = '\x01';
    (pCVar3->base).create_event[0x11] = '\0';
    (pCVar3->base).create_event[0x12] = '\0';
    (pCVar3->base).create_event[0x13] = '\0';
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar15);
    fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar15->base);
    fVar18 = (float10)_DAT_005d12c6;
    pow();
    fVar19 = (float10)_DAT_005d12ce;
    pow();
    *(float *)(param_1[1].base.base.create_event + 8) = (float)((float10)1 + fVar18 / fVar19);
    iVar13 = 0;
    if (0 < pCVar12->bone_count) {
      do {
        iVar13 = iVar13 + 1;
        pCVar15->rest_bone_scales[0] = *(float *)(param_1[1].base.base.create_event + 8);
        pCVar15 = (CDeformableModelInstance *)&(pCVar15->base).current_motion_index;
      } while (iVar13 < pCVar12->bone_count);
    }
    break;
  case 0xf:
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[0xc] = '\0';
    (pCVar3->base).create_event[0xd] = '\0';
    (pCVar3->base).create_event[0xe] = '\0';
    (pCVar3->base).create_event[0xf] = '\0';
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[8] = '\0';
    (pCVar3->base).create_event[9] = '\0';
    (pCVar3->base).create_event[10] = -0x80;
    (pCVar3->base).create_event[0xb] = '?';
    (param_1->base).base.lifecycle_state = ACTOR_DESTROYED;
    return;
  case 0x14:
    fVar18 = ((float10)fStack_38 * (float10)_DAT_005d12a6) / (float10)fStack_2c;
    pCVar3 = &param_1[1].base;
    (pCVar3->base).create_event[4] = '\0';
    (pCVar3->base).create_event[5] = '\0';
    (pCVar3->base).create_event[6] = '\0';
    (pCVar3->base).create_event[7] = '\0';
    iVar13 = round();
    *(int *)(iVar13 + 0xd0d8) = (int)ROUND(fVar18);
  }
LAB_00543af0:
  fVar22 = param_1->attack_cooldown;
  (param_1->base).collision_cylinder_radius = 2.0;
  if (0.0 < fVar22) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(param_1->base).model.base);
  iVar13 = pSVar7->state_index;
  if ((((((iVar13 != 0xf) && (iVar13 != 0)) && (iVar13 != 1)) && ((iVar13 != 2 && (iVar13 != 3))))
      && (iVar13 != 4)) || ((param_1->base).base.standing_platform != (CPlatform *)0x0)) {
    pCVar3 = param_1->victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar9 = (CEnemy *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar9 == param_1)) {
      in_stack_fffffd20 = (CEnemy *)param_1->victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffd20);
    }
    core_charactr_cpp_FUN_0042c1e0();
    fStack_214 = (param_1->base).velocity.x * param_2;
    fStack_210 = (param_1->base).velocity.y * param_2;
    fStack_20c = (param_1->base).velocity.z * param_2;
    fStack_c4 = fStack_214;
    afStack_fc[(uint)bVar17 * -2 + 0xf] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 3) * 4);
    afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10] =
         *(float *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 4) * 4);
    fStack_1a8 = fStack_c4 + (param_1->base).model.accumulated_root_motion.x;
    fStack_1a4 = fStack_c0 + (param_1->base).model.accumulated_root_motion.y;
    fStack_1a0 = fStack_bc + (param_1->base).model.accumulated_root_motion.z;
    fStack_238 = fStack_1a8;
    *(uint *)(&stack0xfffffdb4 + ((uint)bVar17 * -2 + 6) * 4) =
         *(uint *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 0x1e) * 4);
    *(uint *)(&stack0xfffffdb4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 7) * 4) =
         *(uint *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1f) * 4)
    ;
    fStack_1fc = fStack_238 + (param_1->base).position_delta.x;
    fStack_1f8 = fStack_234 + (param_1->base).position_delta.y;
    fStack_1f4 = fStack_230 + (param_1->base).position_delta.z;
    CStack_10c.x = fStack_1fc;
    *(uint *)((int)&CStack_10c + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + 9) * 4);
    *(uint *)((int)&CStack_10c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&stack0xfffffde4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 10) * 4);
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    (param_1->base).position_delta.x = (param_1->base).position_delta.y;
    core_charactr_cpp_FUN_0042c230(&param_1->base,&CStack_10c);
  }
  core_charactr_cpp_FUN_0042cd30(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(param_1->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&param_1->base,param_2);
  core_shadow_cpp_FUN_00545c80();
  if ((0.0 <= param_1[1].base.base.create_prob) &&
     (param_2 = param_1[1].base.base.create_prob - param_2,
     param_1[1].base.base.create_prob = param_2, param_2 <= 0.0)) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,2.0);
    param_1[1].base.base.create_prob = fStack_14;
    (*((param_1->base).base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)param_1,(CBoundingBox3D *)in_stack_fffffd20);
    puVar14 = (uint *)&stack0xfffffd50;
    puVar16 = &stack0xfffffd98;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
    }
    fStack_148 = fStack_268 + fStack_25c;
    fStack_144 = fStack_264 + fStack_258;
    fStack_140 = fStack_260 + fStack_254;
    fStack_160 = fStack_268 + fStack_25c;
    afStack_174[(uint)bVar17 * -2 + 6] = afStack_174[(uint)bVar17 * -2 + 0xc];
    afStack_174[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         afStack_174[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
    fStack_244 = fStack_160 * _DAT_005d12be;
    fStack_240 = fStack_15c * _DAT_005d12be;
    fStack_23c = fStack_158 * _DAT_005d12be;
    fStack_88 = fStack_160 * _DAT_005d12be;
    afStack_fc[(uint)bVar17 * -2 + 0x1e] =
         *(float *)(&stack0xfffffdb4 + ((uint)bVar17 * -2 + 3) * 4);
    afStack_fc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1f] =
         *(float *)(&stack0xfffffdb4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 4) * 4);
    core_actor_cpp_FUN_00408b80();
    fStack_58 = fStack_250;
    afStack_6c[(uint)bVar17 * -2 + 6] = *(float *)(&stack0xfffffdb4 + (uint)bVar17 * -8);
    afStack_6c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         *(float *)(&stack0xfffffdb4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4);
    if (&fStack_184 != afStack_6c + 5) {
      fStack_184 = fStack_58;
      fStack_180 = fStack_54;
      fStack_17c = fStack_50;
    }
    CStack_190.x = (int)ROUND(fStack_184 * _DAT_005e3d30);
    CStack_190.y = (int)ROUND(fStack_180 * _DAT_005e3d30);
    CStack_190.z = (int)ROUND(fStack_17c * _DAT_005e3d30);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
                                 (g_CDemonSetPtr,&CStack_190,(CVector3i *)0x0);
    if ((*(int *)(param_1[1].base.base.create_event + 0x14) != 0) &&
       (_DAT_005e3d60 * (float)_DAT_005d1306 <= (float)(int)fStack_14)) {
      fVar22 = 1.4013e-45;
      iVar13 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(param_1->base).model.base,iVar13,(int)fVar22);
      uVar10 = core_charactr_cpp_FUN_004348b0();
      param_1[1].base.base.validation_magic = uVar10;
      if (uVar10 != 0) {
        fVar22 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(3.0,6.0);
        param_1[1].base.base.lifecycle_state = (EActorLifecycleState)fVar22;
      }
      param_1[1].base.base.create_prob = param_1[1].base.base.create_prob + _DAT_005d130e;
      return;
    }
  }
  return;
}
