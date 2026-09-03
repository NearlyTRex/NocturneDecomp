// Name: core_werewolf.cpp_CWerewolf_process_FUN_00555c60
// Address: 00555c60
// Address Range: [[00555c60, 00557015]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_00555c60(CWerewolf *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_00555c60(CWerewolf *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWerewolfType EVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  CVector3f *pCVar8;
  SMotion *pSVar9;
  CWerewolf *pCVar10;
  EDeathState EVar11;
  CDemonActor *pCVar12;
  CPathMap *path_map;
  CCharacter *pCVar13;
  CLocation *target_pos;
  int iVar14;
  double dVar15;
  float fVar16;
  SDamageInfo *pSVar17;
  ulonglong uVar18;
  float in_stack_fffffcec;
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
  CVector3f local_194;
  CVector3f local_188;
  CVector3f local_17c;
  CVector3f local_170;
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
  CVector3f local_bc;
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
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
    return;
  }
  if ((this_ptr->type == WEREWOLF_TYPE_FOREST) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - delta_time;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_3c[0] = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_3c[0]) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,local_3c);
    if (uVar7 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar7);
    }
    else if (uVar7 < 0xb) {
      pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (pCVar1,&local_158,this_ptr->bone_indices[3]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,&local_98,pCVar8);
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(8.0,12.0);
      iVar6 = 0x555d7d;
      dVar15 = round((double)(local_14 * (float)0.25));
      local_34 = (int)ROUND(dVar15);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (g_CGore_PTR_005b96c4,&local_98,(CVector3f *)0x0,local_34,iVar6);
    }
    else if (uVar7 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110
                (g_CDemonMission_PTR_005baf90,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar7);
    }
  }
  fVar16 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  EVar3 = this_ptr->type;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar16;
  if (EVar3 == WEREWOLF_TYPE_FOREST) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  uVar7 = pSVar9->state_index;
  local_18 = uVar7;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    EVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr)
    ;
    if ((EVar11 == DEATH_STATE_ALIVE) &&
       ((CHero *)(this_ptr->base).victim == g_HeroActors[g_LocalHeroIndex])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2a8);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      pSVar17 = &local_2a8;
      fVar16 = (this_ptr->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_e0,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [this_ptr->bone_indices[3]].m);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_140,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      pSVar17 = &local_2a8;
      fVar16 = (this_ptr->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_d4,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [this_ptr->bone_indices[2]].m);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_188,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      pSVar17 = &local_2a8;
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      fVar16 = (this_ptr->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_17c,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [this_ptr->bone_indices[1]].m);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_a4,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17);
    }
    if (local_18 < 4) {
      if (local_18 == 0) goto LAB_00556301;
      if (1 < local_18) {
        if (2 < local_18) {
          if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffce0);
            local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
            pSVar17 = (SDamageInfo *)&stack0xfffffce0;
            fVar16 = 0.4;
            pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                               (&local_74,(CVector3f *)&DAT_02dd1184,
                                (CMatrix3x4f *)
                                (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                [this_ptr->bone_indices[1]].m);
            pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                               ((CDemonActor *)this_ptr,&local_14c,pCVar8);
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                      (&this_ptr->base,pCVar8,fVar16,pSVar17);
          }
          pCVar13 = (this_ptr->base).victim;
          if ((pCVar13 != (CCharacter *)0x0) &&
             (EVar11 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13),
             EVar11 != DEATH_STATE_ALIVE)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,7,1);
          }
          goto LAB_00555e90;
        }
        goto LAB_0055637f;
      }
LAB_005567cd:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar13 = (this_ptr->base).victim;
      if (pCVar13 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        goto LAB_00555e90;
      }
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        local_104 = (pCVar13->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        local_100 = (pCVar13->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y;
        local_fc = (pCVar13->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
        local_24 = SQRT(local_fc * local_fc + local_104 * local_104 + local_100 * local_100);
        if (((this_ptr->base).guard_distance < local_24) || ((float)32 < local_24)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          goto LAB_00555e90;
        }
      }
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (this_ptr->chain_anchor,g_CTrapActorType_02dd100c.name_hash);
      if ((pCVar12 == (CDemonActor *)0x0) || (local_18 != 0xf)) {
        pCVar13 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CurrentFilename = "..\\core\\werewolf.cpp";
            g_CurrentLineNumber = 429;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               (&((this_ptr->base).victim)->base,&local_f8,
                                &(this_ptr->alpha1->location).position);
            if (0.0 <= pCVar8->z) {
              pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                 (&((this_ptr->base).victim)->base,&local_128,
                                  &(this_ptr->alpha2->location).position);
              if (0.0 <= pCVar8->z) {
                pCVar13 = (this_ptr->base).victim;
                pCVar12 = this_ptr->alpha1;
                local_1dc = (pCVar13->base).location.position.x - (pCVar12->location).position.x;
                local_1d8 = (pCVar13->base).location.position.y - (pCVar12->location).position.y;
                local_1d4 = (pCVar13->base).location.position.z - (pCVar12->location).position.z;
                pCVar13 = (this_ptr->base).victim;
                pCVar12 = this_ptr->alpha2;
                local_110 = (pCVar13->base).location.position.x - (pCVar12->location).position.x;
                local_10c = (pCVar13->base).location.position.y - (pCVar12->location).position.y;
                local_108 = (pCVar13->base).location.position.z - (pCVar12->location).position.z;
                if (SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) <
                    SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8))
                goto LAB_00556967;
                pCVar13 = (CCharacter *)this_ptr->alpha2;
              }
              else {
                pCVar13 = (CCharacter *)this_ptr->alpha2;
              }
            }
            else {
LAB_00556967:
              pCVar13 = (CCharacter *)this_ptr->alpha1;
            }
          }
          iVar6 = this_ptr->phase;
          if ((iVar6 == 1) || (iVar6 == 3)) {
            local_134 = (pCVar13->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            local_130 = (pCVar13->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            local_12c = (pCVar13->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)5) {
              iVar6 = this_ptr->phase + 1;
              this_ptr->phase = iVar6;
              if (3 < iVar6) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 10.0f;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) && (this_ptr->phase = iVar6 + 1, 3 < iVar6 + 1)) {
            this_ptr->phase = 0;
          }
        }
        local_1e0 = 3.0f;
        local_30 = 3.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uVar18._0_4_ = 0.5;
        uVar18._4_4_ = 0.17453292;
        local_1e8 = 0;
        local_1e4 = 0;
        path_map = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
        target_pos = &(pCVar13->base).location;
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,(CVector3f *)uVar18
                           ,SUB84(uVar18,4),in_stack_fffffcec);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        else if (iVar6 < 1) {
          pCVar12 = core_actor_cpp_castToClassHash_FUN_0040d890
                              (this_ptr->chain_anchor,g_CTrapActorType_02dd100c.name_hash);
          if (pCVar12 == (CDemonActor *)0x0) {
            local_194.x = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            local_194.y = (pCVar13->base).location.position.y -
                          (this_ptr->base).base.base.location.position.y;
            local_194.z = (pCVar13->base).location.position.z -
                          (this_ptr->base).base.base.location.position.z;
            if (&local_bc != &local_194) {
              local_bc.x = local_194.x;
              local_bc.y = local_194.y;
              local_bc.z = local_194.z;
            }
            local_28 = SQRT(local_bc.z * local_bc.z +
                            local_bc.x * local_bc.x + local_bc.y * local_bc.y);
            local_1c = 20.0;
            if (this_ptr->type == WEREWOLF_TYPE_TRAIN_ALPHA) {
              local_1c = 10.0;
            }
            if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
              local_1c = 10.0;
            }
            pCVar1 = &(this_ptr->base).base.model;
            if (local_1c < local_28) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_170,&local_bc)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   (local_170.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(local_14) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar1->motion_controller,8,1);
                iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0.85);
                if (iVar6 != 0) {
                  core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(this_ptr);
                }
                iVar6 = 0;
                for (iVar14 = 0; iVar14 < g_CDemonSet_PTR_005be368->enemy_count; iVar14 = iVar14 + 1
                    ) {
                  pCVar10 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040d890
                                      (*(CDemonActor **)
                                        ((int)g_CDemonSet_PTR_005be368->enemies + iVar6),
                                       g_CWerewolfActorType_02de078c.name_hash);
                  if (((pCVar10 != (CWerewolf *)0x0) && (pCVar10 != this_ptr)) &&
                     (pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                                         (&(pCVar10->base).base.model.motion_controller),
                     pSVar9->state_index == 8)) {
                    iVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
                    if (iVar6 == 1) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + 0.2617994f;
                    }
                    if (iVar6 == 2) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + -0.2617994f;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 4;
                }
              }
            }
            else if ((local_28 < 3.0f * 2.0f) && (local_18 == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_00555e90;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
            if (iVar6 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,2,1);
            }
            if (iVar6 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,3,1);
            }
            if (iVar6 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0.6);
            if (iVar6 != 0) {
              core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(this_ptr);
            }
          }
        }
        fVar16 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar16;
        if (fVar16 < 0.0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(this_ptr);
        }
        goto LAB_00555e90;
      }
LAB_005567aa:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,0,1);
    }
    else {
      pCVar1 = &(this_ptr->base).base.model;
      if (local_18 < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_26c);
        local_26c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
        local_26c.attacker = (CDemonActor *)this_ptr;
        local_26c.wielder = (CDemonActor *)this_ptr;
        pSVar17 = &local_26c;
        fVar16 = 0.4;
        local_14 = local_26c.damage_amount;
        pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                           (&local_11c,(CVector3f *)&DAT_02dd1184,
                            (CMatrix3x4f *)
                            (this_ptr->base).base.model.bone_transform.bone_world_matrices
                            [this_ptr->bone_indices[2]].m);
        pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           ((CDemonActor *)this_ptr,&local_164,pCVar8);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17);
        pCVar13 = (this_ptr->base).victim;
        if ((pCVar13 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,7,1);
        }
        goto LAB_00555e90;
      }
      if (local_18 < 0xe) {
        if (local_18 < 8) goto LAB_00555e90;
        if (8 < local_18) {
          if (((local_18 == 0xd) && ((this_ptr->base).pool_me == 0)) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                               (pCVar1,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)this_ptr,&local_1b8,pCVar8);
            core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_1b8,0);
            (this_ptr->base).pool_me = 1;
          }
          goto LAB_00555e90;
        }
        if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_230);
          local_230.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
          local_230.attacker = (CDemonActor *)this_ptr;
          local_230.wielder = (CDemonActor *)this_ptr;
          pSVar17 = &local_230;
          fVar16 = 1.0;
          local_14 = local_230.damage_amount;
          pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_1d0,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[3]].m);
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)this_ptr,&local_8c,pCVar8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17)
          ;
          pSVar17 = &local_230;
          fVar16 = 1.0;
          pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_68,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[2]].m);
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)this_ptr,&local_5c,pCVar8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17)
          ;
          pSVar17 = &local_230;
          fVar16 = 1.0;
          pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_1a0,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[1]].m);
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)this_ptr,&local_c8,pCVar8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17)
          ;
        }
        pCVar13 = (this_ptr->base).victim;
        if ((pCVar13 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,7,1);
        }
LAB_0055637f:
        if ((CHero *)(this_ptr->base).victim != g_HeroActors[g_LocalHeroIndex]) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2e4);
          local_2e4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
          local_2e4.attacker = (CDemonActor *)this_ptr;
          local_2e4.wielder = (CDemonActor *)this_ptr;
          pSVar17 = &local_2e4;
          fVar16 = 0.4;
          local_14 = local_2e4.damage_amount;
          pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                             (&local_1f4,(CVector3f *)&DAT_02dd1184,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[3]].m);
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)this_ptr,&local_50,pCVar8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar16,pSVar17)
          ;
        }
        pCVar13 = (this_ptr->base).victim;
        if ((pCVar13 != (CCharacter *)0x0) &&
           (EVar11 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13),
           EVar11 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,7,1);
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
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar13 = (this_ptr->base).victim;
        if (pCVar13 == (CCharacter *)0x0) goto LAB_00555e90;
        if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
          local_b0 = (pCVar13->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
          local_ac = (pCVar13->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
          local_a8 = (pCVar13->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
          local_2c = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
          if (((this_ptr->base).guard_distance < local_2c) || ((float)32 < local_2c)) {
            (this_ptr->base).victim = (CCharacter *)0x0;
            goto LAB_00555e90;
          }
        }
        pCVar12 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (this_ptr->chain_anchor,g_CTrapActorType_02dd100c.name_hash);
        if ((pCVar12 != (CDemonActor *)0x0) && (local_18 == 0xe)) goto LAB_005567aa;
        if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_00555e90;
        iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0.4);
        if (iVar6 != 0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(this_ptr);
        }
        if (local_18 == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
          goto LAB_00555e90;
        }
      }
      else if (local_18 == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0xf,1);
        goto LAB_00555e90;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,1,1);
    }
    goto LAB_00555e90;
  }
  uVar4 = (this_ptr->base).base.is_walking;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
      if ((uVar7 == 0xe) || (uVar7 == 0xf)) {
LAB_00555e65:
        iVar6 = 0xf;
      }
      else {
        iVar6 = 1;
      }
    }
    else {
LAB_0055610d:
      iVar6 = 0;
    }
LAB_00555e70:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar4 < 3) {
      if ((uVar7 == 0xe) || (uVar7 == 0xf)) goto LAB_00555e65;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar6 = 1;
      }
      else {
        iVar6 = 8;
      }
      goto LAB_00555e70;
    }
    if (uVar4 != 3) goto LAB_0055610d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
  }
LAB_00555e78:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00555e90:
  if ((local_18 == 0x13) && ((this_ptr->base).base.was_rendered_opaque != 0)) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]);
    if (iVar6 == 0) {
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar7;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
  }
  local_20 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    local_20 = 0.75;
  }
  dVar15 = 3;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar15 = 2;
  }
  (this_ptr->base).base.collision_cylinder_radius = local_20 * (float)dVar15;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->base).base.model.motion_controller);
  iVar6 = pSVar9->state_index;
  if (((((iVar6 != 0xd) && (iVar6 != 0)) && (iVar6 != 0xe)) && (iVar6 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar13 = (this_ptr->base).victim;
    if ((pCVar13 != (CCharacter *)0x0) &&
       (pCVar10 = (CWerewolf *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_ec = (this_ptr->base).base.velocity.x * delta_time;
    local_e8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar8 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_e4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.position_delta;
    local_80 = local_ec + pCVar8->x;
    local_7c = local_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_78 = local_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    local_1c4.x = local_80 + pCVar2->x;
    local_1c4.y = local_7c + (this_ptr->base).base.position_delta.y;
    local_1c4.z = local_78 + (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar8->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_1c4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_00557cc0(this_ptr);
  this_ptr->eye_glow_phase = delta_time * (float)0.5 + this_ptr->eye_glow_phase;
  return;
}
