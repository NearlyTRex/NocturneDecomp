// Name: core_werewolf.cpp_CWerewolf_process_FUN_00555c60
// Address: 00555c60
// Address Range: [[00555c60, 00557015]]
// Convention: unknown
// Signature: void core_werewolf_cpp_CWerewolf_process_FUN_00555c60(CWerewolf *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_werewolf_cpp_CWerewolf_process_FUN_00555c60(CWerewolf *param_1,float param_2)

{
  CVector3f *pCVar1;
  EWerewolfType EVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  CVector3f *pCVar7;
  SMotion *pSVar8;
  CWerewolf *pCVar9;
  CDemonActor *pCVar10;
  CPathMap *path_map;
  CCharacter *pCVar11;
  CLocation *target_pos;
  int iVar12;
  double dVar13;
  float fVar14;
  SDamageInfo *pSVar15;
  CVector3f *in_stack_fffffce4;
  CDeformableModelInstance *pCVar16;
  ulonglong in_stack_fffffce8;
  float in_stack_fffffcf0;
  SDamageInfo local_2e4;
  SDamageInfo local_2a8;
  SDamageInfo local_26c;
  SDamageInfo local_230;
  CVector3f local_1f4;
  uint local_1e8;
  uint local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  CVector3f local_1d0;
  CVector3f local_1c4;
  CVector3f local_1b8;
  CVector3f local_1ac;
  CVector3f local_1a0;
  float local_194;
  float local_190;
  float local_18c;
  CVector3f local_188;
  CVector3f local_17c [2];
  CVector3f local_164;
  CVector3f local_158;
  CVector3f local_14c;
  CVector3f local_140;
  float local_134;
  float local_130;
  float local_12c;
  CVector3f local_128;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_3c [2];
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[1]);
    return;
  }
  if ((param_1->type == WEREWOLF_TYPE_FOREST) && (0.0 <= param_1->phase_timer)) {
    param_1->phase_timer = param_1->phase_timer - param_2;
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  local_3c[0] = param_2 * (param_1->base).speed;
  pCVar16 = &(param_1->base).base.model;
  while (0.0 < local_3c[0]) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar16->motion_controller,local_3c);
    if (uVar6 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar6);
    }
    else if (uVar6 < 0xb) {
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (pCVar16,&local_158,param_1->bone_indices[3]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_98,pCVar7);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41000000,0x41400000);
      iVar5 = 0x555d7d;
      dVar13 = round((double)(local_14 * (float)0.25));
      local_34 = (int)ROUND(dVar13);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,&local_98,(CVector3f *)0x0,local_34,iVar5);
    }
    else if (uVar6 == 0x29a) {
      core_mission_cpp_FUN_004d9110(0x01CC9450,param_1,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,uVar6);
    }
  }
  fVar14 = (param_1->base).speed;
  fVar4 = (float)3.1415926535000001;
  EVar2 = param_1->type;
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.turn_speed = param_2 * fVar4 * fVar14;
  if (EVar2 == WEREWOLF_TYPE_FOREST) {
    (param_1->base).base.turn_speed = (param_1->base).base.turn_speed * (float)4;
  }
  pCVar16 = &(param_1->base).base.model;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar16->motion_controller);
  uVar6 = pSVar8->state_index;
  local_18 = uVar6;
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    iVar5 = (*(((param_1->base).base.base.vtable._uc)->_uc).releaseFromGrab)((CCharacter *)param_1);
    if ((iVar5 == 0) && ((param_1->base).victim == *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)))
    {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2a8);
      local_2a8.damage_amount =
           (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000);
      local_2a8.attacker = (CDemonActor *)param_1;
      local_2a8.wielder = (CDemonActor *)param_1;
      pSVar15 = &local_2a8;
      fVar14 = (param_1->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_e0,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (param_1->base).base.model.bone_transform.bone_world_matrices
                          [param_1->bone_indices[3]].m);
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_140,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
      local_2a8.damage_amount =
           (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000);
      local_2a8.attacker = (CDemonActor *)param_1;
      local_2a8.wielder = (CDemonActor *)param_1;
      pSVar15 = &local_2a8;
      fVar14 = (param_1->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_d4,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (param_1->base).base.model.bone_transform.bone_world_matrices
                          [param_1->bone_indices[2]].m);
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_188,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
      local_2a8.damage_amount =
           (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000);
      pSVar15 = &local_2a8;
      local_2a8.attacker = (CDemonActor *)param_1;
      local_2a8.wielder = (CDemonActor *)param_1;
      fVar14 = (param_1->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (local_17c,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (param_1->base).base.model.bone_transform.bone_world_matrices
                          [param_1->bone_indices[1]].m);
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_a4,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
    }
    if (local_18 < 4) {
      if (local_18 == 0) goto LAB_00556301;
      if (1 < local_18) {
        if (2 < local_18) {
          if (*(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != (param_1->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffce0);
            local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000);
            pSVar15 = (SDamageInfo *)&stack0xfffffce0;
            fVar14 = 0.4;
            pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                               (&local_74,(CVector3f *)&DAT_02dd1184,
                                (CMatrix3x4f *)
                                (param_1->base).base.model.bone_transform.bone_world_matrices
                                [param_1->bone_indices[1]].m);
            pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                               ((CDemonActor *)param_1,&local_14c,pCVar7);
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                      (&param_1->base,pCVar7,fVar14,pSVar15);
          }
          pCVar11 = (param_1->base).victim;
          if ((pCVar11 != (CCharacter *)0x0) &&
             (iVar5 = (*(((pCVar11->base).vtable._uc)->_uc).releaseFromGrab)(pCVar11), iVar5 != 0))
          {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,7,1);
          }
          goto LAB_00555e90;
        }
        goto LAB_0055637f;
      }
LAB_005567cd:
      (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)param_1,(int)param_2,in_stack_fffffce4);
      pCVar11 = (param_1->base).victim;
      if (pCVar11 == (CCharacter *)0x0) {
        in_stack_fffffce8 = CONCAT44(param_2,param_1);
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
        if (iVar5 == 0) {
          in_stack_fffffce8 = 0x100000000;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
        }
        goto LAB_00555e90;
      }
      if (param_1->chain_anchor != (CDemonActor *)0x0) {
        local_104 = (pCVar11->base).location.position.x -
                    (param_1->base).base.base.location.position.x;
        local_100 = (pCVar11->base).location.position.y -
                    (param_1->base).base.base.location.position.y;
        local_fc = (pCVar11->base).location.position.z -
                   (param_1->base).base.base.location.position.z;
        local_24 = SQRT(local_fc * local_fc + local_104 * local_104 + local_100 * local_100);
        if (((param_1->base).guard_distance < local_24) || ((float)32 < local_24)) {
          in_stack_fffffce8 = 0x100000000;
          (param_1->base).victim = (CCharacter *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0,1);
          goto LAB_00555e90;
        }
      }
      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (param_1->chain_anchor,g_CTrapActorType_02dd100c.name_hash);
      if ((pCVar10 == (CDemonActor *)0x0) || (local_18 != 0xf)) {
        pCVar11 = (param_1->base).victim;
        if (param_1->type == WEREWOLF_TYPE_FOREST) {
          if ((param_1->alpha1 == (CDemonActor *)0x0) || (param_1->alpha2 == (CDemonActor *)0x0)) {
            PTR_01cc4800 = "..\\core\\werewolf.cpp";
            INT_01cc4804 = 0x1ad;
            core_main_c_FUN_004c8440();
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350);
          if ((param_1->phase == 1) || (param_1->phase == 3)) {
            pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               (&((param_1->base).victim)->base,&local_f8,
                                &(param_1->alpha1->location).position);
            if (0.0 <= pCVar7->z) {
              pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                 (&((param_1->base).victim)->base,&local_128,
                                  &(param_1->alpha2->location).position);
              if (0.0 <= pCVar7->z) {
                pCVar11 = (param_1->base).victim;
                pCVar10 = param_1->alpha1;
                local_1dc = (pCVar11->base).location.position.x - (pCVar10->location).position.x;
                local_1d8 = (pCVar11->base).location.position.y - (pCVar10->location).position.y;
                local_1d4 = (pCVar11->base).location.position.z - (pCVar10->location).position.z;
                pCVar11 = (param_1->base).victim;
                pCVar10 = param_1->alpha2;
                local_110 = (pCVar11->base).location.position.x - (pCVar10->location).position.x;
                local_10c = (pCVar11->base).location.position.y - (pCVar10->location).position.y;
                local_108 = (pCVar11->base).location.position.z - (pCVar10->location).position.z;
                if (SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) <
                    SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8))
                goto LAB_00556967;
                pCVar11 = (CCharacter *)param_1->alpha2;
              }
              else {
                pCVar11 = (CCharacter *)param_1->alpha2;
              }
            }
            else {
LAB_00556967:
              pCVar11 = (CCharacter *)param_1->alpha1;
            }
          }
          iVar5 = param_1->phase;
          if ((iVar5 == 1) || (iVar5 == 3)) {
            local_134 = (pCVar11->base).location.position.x -
                        (param_1->base).base.base.location.position.x;
            local_130 = (pCVar11->base).location.position.y -
                        (param_1->base).base.base.location.position.y;
            local_12c = (pCVar11->base).location.position.z -
                        (param_1->base).base.base.location.position.z;
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)5) {
              iVar5 = param_1->phase + 1;
              param_1->phase = iVar5;
              if (3 < iVar5) {
                param_1->phase = 0;
              }
              param_1->phase_timer = 10.0f;
            }
          }
          else if ((param_1->phase_timer <= 0.0) && (param_1->phase = iVar5 + 1, 3 < iVar5 + 1)) {
            param_1->phase = 0;
          }
        }
        local_1e0 = 3.0f;
        local_30 = 3.0f;
        (param_1->base).base.model.accumulated_root_motion.z = 0.0;
        (param_1->base).base.model.accumulated_root_motion.y =
             (param_1->base).base.model.accumulated_root_motion.z;
        (param_1->base).base.model.accumulated_root_motion.x =
             (param_1->base).base.model.accumulated_root_motion.y;
        in_stack_fffffce8 = 0x3e32b8c23f000000;
        local_1e8 = 0;
        local_1e4 = 0;
        path_map = (*((pCVar11->base).vtable._ub)->getPathMap)(&pCVar11->base);
        target_pos = &(pCVar11->base).location;
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)param_1,&target_pos->position,path_map,
                           (CVector3f *)in_stack_fffffce8,(float)(in_stack_fffffce8 >> 0x20),
                           in_stack_fffffcf0);
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60();
          pCVar16 = &(param_1->base).base.model;
          in_stack_fffffce8 = ZEXT48(pCVar16);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar16->motion_controller,0,1);
        }
        else if (iVar5 < 1) {
          in_stack_fffffce8 = CONCAT44(param_1->chain_anchor,0x556cba);
          pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                              (param_1->chain_anchor,g_CTrapActorType_02dd100c.name_hash);
          if (pCVar10 == (CDemonActor *)0x0) {
            local_194 = (target_pos->position).x - (param_1->base).base.base.location.position.x;
            local_190 = (pCVar11->base).location.position.y -
                        (param_1->base).base.base.location.position.y;
            local_18c = (pCVar11->base).location.position.z -
                        (param_1->base).base.base.location.position.z;
            if (&local_bc != &local_194) {
              local_bc = local_194;
              local_b8 = local_190;
              local_b4 = local_18c;
            }
            local_28 = SQRT(local_b4 * local_b4 + local_bc * local_bc + local_b8 * local_b8);
            local_1c = 20.0;
            if (param_1->type == WEREWOLF_TYPE_TRAIN_ALPHA) {
              local_1c = 10.0;
            }
            if (param_1->type == WEREWOLF_TYPE_FOREST) {
              local_1c = 10.0;
            }
            pCVar16 = &(param_1->base).base.model;
            if (local_1c < local_28) {
              fVar14 = 7.845356e-39;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
              in_stack_fffffce8 = CONCAT44(0x556dc0,fVar14);
              local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              if (ABS(local_14) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar16->motion_controller,8,1);
                in_stack_fffffce8 = CONCAT44(0x556df1,pCVar16);
                iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.85);
                if (iVar5 != 0) {
                  in_stack_fffffce8 = CONCAT44(0x556e34,(float)in_stack_fffffce8);
                  core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(param_1);
                }
                iVar5 = 0;
                for (iVar12 = 0; iVar12 < (int)0x01E57284->characters[0x6d6]; iVar12 = iVar12 + 1)
                {
                  pCVar10 = *(CDemonActor **)((int)0x01E57284->characters + iVar5 + 0x1b5c);
                  in_stack_fffffce8 = CONCAT44(pCVar10,0x556e21);
                  pCVar9 = (CWerewolf *)
                           core_actor_cpp_castToClassHash_FUN_0040d890
                                     (pCVar10,g_CWerewolfActorType_02de078c.name_hash);
                  if ((pCVar9 != (CWerewolf *)0x0) && (pCVar9 != param_1)) {
                    in_stack_fffffce8 = CONCAT44(0x556e48,(float)in_stack_fffffce8);
                    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                       (&(pCVar9->base).base.model.motion_controller);
                    if (pSVar8->state_index == 8) {
                      in_stack_fffffce8 = 0x556e5c;
                      iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
                      if (iVar5 == 1) {
                        (param_1->base).base.base.orient.vec.y =
                             (param_1->base).base.base.orient.vec.y + 0.2617994f;
                      }
                      if (iVar5 == 2) {
                        (param_1->base).base.base.orient.vec.y =
                             (param_1->base).base.base.orient.vec.y + -0.2617994f;
                      }
                      break;
                    }
                  }
                  iVar5 = iVar5 + 4;
                }
              }
            }
            else if ((local_28 < 3.0f * 2.0f) && (local_18 == 0xf)) {
              in_stack_fffffce8 = ZEXT48(pCVar16);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar16->motion_controller,0,1);
            }
          }
        }
        else {
          if ((param_1->type == WEREWOLF_TYPE_FOREST) &&
             ((param_1->phase == 1 || (param_1->phase == 3)))) goto LAB_00555e90;
          if ((param_1->base).attack_cooldown <= 0.0) {
            pCVar16 = (CDeformableModelInstance *)0x556aa3;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
            if (iVar5 == 0) {
              pCVar16 = &(param_1->base).base.model;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar16->motion_controller,2,1);
            }
            if (iVar5 == 1) {
              pCVar16 = &(param_1->base).base.model;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar16->motion_controller,3,1);
            }
            if (iVar5 == 2) {
              pCVar16 = &(param_1->base).base.model;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar16->motion_controller,4,1);
            }
            (param_1->base).attack_cooldown = 1.0;
            in_stack_fffffce8 = CONCAT44(0x556b02,pCVar16);
            iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.6);
            if (iVar5 != 0) {
              in_stack_fffffce8 = CONCAT44(0x556b0f,(float)in_stack_fffffce8);
              core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(param_1);
            }
          }
        }
        fVar14 = param_1->howl_cooldown - param_2;
        param_1->howl_cooldown = fVar14;
        if (fVar14 < 0.0) {
          in_stack_fffffce8 = CONCAT44(0x556b37,(float)in_stack_fffffce8);
          core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(param_1);
        }
        goto LAB_00555e90;
      }
LAB_005567aa:
      in_stack_fffffce8 = 0x100000000;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0,1);
    }
    else {
      pCVar16 = &(param_1->base).base.model;
      if (local_18 < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_26c);
        local_26c.damage_amount =
             (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000);
        local_26c.attacker = (CDemonActor *)param_1;
        local_26c.wielder = (CDemonActor *)param_1;
        pSVar15 = &local_26c;
        fVar14 = 0.4;
        local_14 = local_26c.damage_amount;
        pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                           (&local_11c,(CVector3f *)&DAT_02dd1184,
                            (CMatrix3x4f *)
                            (param_1->base).base.model.bone_transform.bone_world_matrices
                            [param_1->bone_indices[2]].m);
        pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           ((CDemonActor *)param_1,&local_164,pCVar7);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
        pCVar11 = (param_1->base).victim;
        if ((pCVar11 != (CCharacter *)0x0) &&
           (iVar5 = (*(((pCVar11->base).vtable._uc)->_uc).releaseFromGrab)(pCVar11), iVar5 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar16->motion_controller,7,1);
        }
        goto LAB_00555e90;
      }
      if (local_18 < 0xe) {
        if (local_18 < 8) goto LAB_00555e90;
        if (8 < local_18) {
          if (((local_18 == 0xd) && ((param_1->base).pool_me == 0)) &&
             ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) {
            pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                               (pCVar16,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)param_1,&local_1b8,pCVar7);
            core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_1b8,0);
            (param_1->base).pool_me = 1;
          }
          goto LAB_00555e90;
        }
        if (*(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != (param_1->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_230);
          local_230.damage_amount =
               (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000);
          local_230.attacker = (CDemonActor *)param_1;
          local_230.wielder = (CDemonActor *)param_1;
          pSVar15 = &local_230;
          fVar14 = 1.0;
          local_14 = local_230.damage_amount;
          pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_1d0,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (param_1->base).base.model.bone_transform.bone_world_matrices
                              [param_1->bone_indices[3]].m);
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)param_1,&local_8c,pCVar7);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
          pSVar15 = &local_230;
          fVar14 = 1.0;
          pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_68,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (param_1->base).base.model.bone_transform.bone_world_matrices
                              [param_1->bone_indices[2]].m);
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)param_1,&local_5c,pCVar7);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
          pSVar15 = &local_230;
          fVar14 = 1.0;
          pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_1a0,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (param_1->base).base.model.bone_transform.bone_world_matrices
                              [param_1->bone_indices[1]].m);
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)param_1,&local_c8,pCVar7);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
        }
        pCVar11 = (param_1->base).victim;
        if ((pCVar11 != (CCharacter *)0x0) &&
           (iVar5 = (*(((pCVar11->base).vtable._uc)->_uc).releaseFromGrab)(pCVar11), iVar5 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,7,1);
        }
LAB_0055637f:
        if ((param_1->base).victim != *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2e4);
          local_2e4.damage_amount = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          local_2e4.attacker = (CDemonActor *)param_1;
          local_2e4.wielder = (CDemonActor *)param_1;
          pSVar15 = &local_2e4;
          fVar14 = 0.4;
          local_14 = local_2e4.damage_amount;
          pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_1f4,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (param_1->base).base.model.bone_transform.bone_world_matrices
                              [param_1->bone_indices[3]].m);
          pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)param_1,&local_50,pCVar7);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar14,pSVar15);
        }
        pCVar11 = (param_1->base).victim;
        if ((pCVar11 != (CCharacter *)0x0) &&
           (iVar5 = (*(((pCVar11->base).vtable._uc)->_uc).releaseFromGrab)(pCVar11), iVar5 != 0)) {
          in_stack_fffffce8 = CONCAT44((float)(in_stack_fffffce8 >> 0x20),1);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,7,1);
        }
        goto LAB_00555e90;
      }
      if (0xe < local_18) {
        if (0xf < local_18) {
          if (local_18 != 0x13) goto LAB_00555e90;
          goto LAB_00555e78;
        }
        goto LAB_005567cd;
      }
LAB_00556301:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
      if (iVar5 == 0) {
        (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)param_1,(int)param_2,in_stack_fffffce4);
        pCVar11 = (param_1->base).victim;
        if (pCVar11 == (CCharacter *)0x0) goto LAB_00555e90;
        if (param_1->chain_anchor != (CDemonActor *)0x0) {
          local_b0 = (pCVar11->base).location.position.x -
                     (param_1->base).base.base.location.position.x;
          local_ac = (pCVar11->base).location.position.y -
                     (param_1->base).base.base.location.position.y;
          local_a8 = (pCVar11->base).location.position.z -
                     (param_1->base).base.base.location.position.z;
          local_2c = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
          if (((param_1->base).guard_distance < local_2c) || ((float)32 < local_2c)) {
            (param_1->base).victim = (CCharacter *)0x0;
            goto LAB_00555e90;
          }
        }
        in_stack_fffffce8 = CONCAT44(g_CTrapActorType_02dd100c.name_hash,param_1->chain_anchor);
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (param_1->chain_anchor,g_CTrapActorType_02dd100c.name_hash);
        if ((pCVar10 != (CDemonActor *)0x0) && (local_18 == 0xe)) goto LAB_005567aa;
        if ((param_1->base).victim == (CCharacter *)0x0) goto LAB_00555e90;
        in_stack_fffffce8 = 0x3ecccccd0055677f;
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.4);
        if (iVar5 != 0) {
          in_stack_fffffce8 = CONCAT44(param_1,0x5567c8);
          core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(param_1);
        }
        if (local_18 == 0xe) {
          in_stack_fffffce8 = 0x10000000f;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0xf,1);
          goto LAB_00555e90;
        }
      }
      else if (local_18 == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0xf,1);
        goto LAB_00555e90;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,1,1);
    }
    goto LAB_00555e90;
  }
  uVar3 = (param_1->base).base.is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
      if ((uVar6 == 0xe) || (uVar6 == 0xf)) {
LAB_00555e65:
        iVar5 = 0xf;
      }
      else {
        iVar5 = 1;
      }
    }
    else {
LAB_0055610d:
      iVar5 = 0;
    }
LAB_00555e70:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar3 < 3) {
      if ((uVar6 == 0xe) || (uVar6 == 0xf)) goto LAB_00555e65;
      if ((param_1->base).base.turn_speed <= ABS((param_1->base).base.turn_angle_accumulator)) {
        iVar5 = 1;
      }
      else {
        iVar5 = 8;
      }
      goto LAB_00555e70;
    }
    if (uVar3 != 3) goto LAB_0055610d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar16->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_00555e78:
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
LAB_00555e90:
  if ((local_18 == 0x13) && ((param_1->base).base.was_rendered_opaque != 0)) {
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
    if (iVar5 == 0) {
      uVar6 = (*((param_1->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"werewolf-eat.wav");
      param_1->sfx_handles[1] = uVar6;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handles[1]);
  }
  local_20 = 1.0;
  if (param_1->type == WEREWOLF_TYPE_TRAIN) {
    local_20 = 0.75;
  }
  dVar13 = 3;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar13 = 2;
  }
  (param_1->base).base.collision_cylinder_radius = local_20 * (float)dVar13;
  if (0.0 < (param_1->base).attack_cooldown) {
    (param_1->base).attack_cooldown = (param_1->base).attack_cooldown - param_2;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->base).base.model.motion_controller);
  iVar5 = pSVar8->state_index;
  if (((((iVar5 != 0xd) && (iVar5 != 0)) && (iVar5 != 0xe)) && (iVar5 != 0x14)) ||
     ((param_1->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar11 = (param_1->base).victim;
    if ((pCVar11 != (CCharacter *)0x0) &&
       (pCVar9 = (CWerewolf *)
                 (*(((pCVar11->base).vtable._uc)->_uc).applyDamage)
                           (pCVar11,(int)(float)in_stack_fffffce8,(float)(in_stack_fffffce8 >> 0x20)
                           ), pCVar9 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&((param_1->base).victim)->base);
    }
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_ec = (param_1->base).base.velocity.x * param_2;
    local_e8 = (param_1->base).base.velocity.y * param_2;
    pCVar7 = &(param_1->base).base.model.accumulated_root_motion;
    local_e4 = param_2 * (param_1->base).base.velocity.z;
    pCVar1 = &(param_1->base).base.position_delta;
    local_80 = local_ec + pCVar7->x;
    local_7c = local_e8 + (param_1->base).base.model.accumulated_root_motion.y;
    local_78 = local_e4 + (param_1->base).base.model.accumulated_root_motion.z;
    local_1c4.x = local_80 + pCVar1->x;
    local_1c4.y = local_7c + (param_1->base).base.position_delta.y;
    local_1c4.z = local_78 + (param_1->base).base.position_delta.z;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar7->x = (param_1->base).base.model.accumulated_root_motion.y;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar1->x = (param_1->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_1c4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(param_1->base).base.model);
  core_charactr_cpp_FUN_0042a150();
  core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_00557cc0(param_1);
  param_1->eye_glow_phase = param_2 * (float)0.5 + param_1->eye_glow_phase;
  return;
}
