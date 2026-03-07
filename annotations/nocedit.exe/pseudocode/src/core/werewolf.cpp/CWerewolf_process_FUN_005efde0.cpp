// Name: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
// Address: 005efde0
// Address Range: [[005efde0, 005efee6] [005eff1e, 005f02e4] [005f0456, 005f0535] [005f05a4, 005f05ff] [005f0704, 005f0721] [005f07c7, 005f1095] [005f10fe, 005f1195]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWerewolfType EVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  CVector3f *pCVar9;
  SMotion *pSVar10;
  CWerewolf *pCVar11;
  CDemonActor *pCVar12;
  CPathMap *path_map;
  CCharacter *pCVar13;
  CLocation *target_pos;
  int iVar14;
  float fVar15;
  SDamageInfo *pSVar16;
  ulonglong uVar17;
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
  
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
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
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar1->motion_controller,local_3c);
    if (uVar8 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
    else if (uVar8 < 0xb) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar1,&local_158,this_ptr->bone_indices[3]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_98,pCVar9);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      local_34 = (int)ROUND(ROUND(local_14 * (float)0.25));
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_98,(CVector3f *)0x0,local_34,0);
    }
    else if (uVar8 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (g_CDemonMissionPtr,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
  }
  fVar15 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  EVar3 = this_ptr->type;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar15;
  if (EVar3 == WEREWOLF_TYPE_FOREST) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  uVar8 = pSVar10->state_index;
  local_18 = uVar8;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    iVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if ((iVar7 == 0) && ((CHero *)(this_ptr->base).victim == g_HeroActors[g_LocalHeroIndex])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2a8);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      pSVar16 = &local_2a8;
      fVar15 = (this_ptr->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_e0,&g_ZeroVector.f,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [this_ptr->bone_indices[3]].m);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_140,pCVar9);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      pSVar16 = &local_2a8;
      fVar15 = (this_ptr->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_d4,&g_ZeroVector.f,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [this_ptr->bone_indices[2]].m);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_188,pCVar9);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pSVar16 = &local_2a8;
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      fVar15 = (this_ptr->base).base.size_scale;
      local_14 = local_2a8.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_17c,&g_ZeroVector.f,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [this_ptr->bone_indices[1]].m);
      pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_a4,pCVar9);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16);
    }
    if (local_18 < 4) {
      if (local_18 == 0) goto LAB_005f0481;
      if (1 < local_18) {
        if (2 < local_18) {
          if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffce0);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            pSVar16 = (SDamageInfo *)&stack0xfffffce0;
            fVar15 = 0.4;
            pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                               (&local_74,&g_ZeroVector.f,
                                (CMatrix3x4f *)
                                (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                [this_ptr->bone_indices[1]].m);
            pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               ((CDemonActor *)this_ptr,&local_14c,pCVar9);
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                      (&this_ptr->base,pCVar9,fVar15,pSVar16);
          }
          pCVar13 = (this_ptr->base).victim;
          if ((pCVar13 != (CCharacter *)0x0) &&
             (iVar7 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13), iVar7 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,7,1);
          }
          goto LAB_005f0010;
        }
        goto LAB_005f04ff;
      }
LAB_005f094d:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar13 = (this_ptr->base).victim;
      if (pCVar13 == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        goto LAB_005f0010;
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
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          goto LAB_005f0010;
        }
      }
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if ((pCVar12 == (CDemonActor *)0x0) || (local_18 != 0xf)) {
        pCVar13 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CurrentFilename = "..\\core\\werewolf.cpp";
            g_CurrentLineNumber = 0x1ad;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (&((this_ptr->base).victim)->base,&local_f8,
                                &(this_ptr->alpha1->location).position);
            if (0.0 <= pCVar9->z) {
              pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 (&((this_ptr->base).victim)->base,&local_128,
                                  &(this_ptr->alpha2->location).position);
              if (0.0 <= pCVar9->z) {
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
                goto LAB_005f0ae7;
                pCVar13 = (CCharacter *)this_ptr->alpha2;
              }
              else {
                pCVar13 = (CCharacter *)this_ptr->alpha2;
              }
            }
            else {
LAB_005f0ae7:
              pCVar13 = (CCharacter *)this_ptr->alpha1;
            }
          }
          iVar7 = this_ptr->phase;
          if ((iVar7 == 1) || (iVar7 == 3)) {
            local_134 = (pCVar13->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            local_130 = (pCVar13->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            local_12c = (pCVar13->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)5) {
              iVar7 = this_ptr->phase + 1;
              this_ptr->phase = iVar7;
              if (3 < iVar7) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 10.0f;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) && (this_ptr->phase = iVar7 + 1, 3 < iVar7 + 1)) {
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
        uVar17._0_4_ = 0.5;
        uVar17._4_4_ = 0.17453292;
        local_1e8 = 0;
        local_1e4 = 0;
        path_map = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
        target_pos = &(pCVar13->base).location;
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,(CVector3f *)uVar17
                           ,SUB84(uVar17,4),in_stack_fffffcec);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        else if (iVar7 < 1) {
          pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
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
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_170,&local_bc)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_170.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(local_14) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,8,1);
                iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.85);
                if (iVar7 != 0) {
                  core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
                }
                iVar7 = 0;
                for (iVar14 = 0; iVar14 < g_CDemonSetPtr->enemy_count; iVar14 = iVar14 + 1) {
                  pCVar11 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                       g_CWerewolfClassInfo.name_hash);
                  if (((pCVar11 != (CWerewolf *)0x0) && (pCVar11 != this_ptr)) &&
                     (pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                          (&(pCVar11->base).base.model.motion_controller),
                     pSVar10->state_index == 8)) {
                    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
                    if (iVar7 == 1) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + 0.2617994f;
                    }
                    if (iVar7 == 2) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + -0.2617994f;
                    }
                    break;
                  }
                  iVar7 = iVar7 + 4;
                }
              }
            }
            else if ((local_28 < 3.0f * 2.0f) && (local_18 == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_005f0010;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,2,1);
            }
            if (iVar7 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
            }
            if (iVar7 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.6);
            if (iVar7 != 0) {
              core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
            }
          }
        }
        fVar15 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar15;
        if (fVar15 < 0.0) {
          core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
        }
        goto LAB_005f0010;
      }
LAB_005f092a:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
    }
    else {
      pCVar1 = &(this_ptr->base).base.model;
      if (local_18 < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_26c);
        local_26c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
        local_26c.attacker = (CDemonActor *)this_ptr;
        local_26c.wielder = (CDemonActor *)this_ptr;
        pSVar16 = &local_26c;
        fVar15 = 0.4;
        local_14 = local_26c.damage_amount;
        pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_11c,&g_ZeroVector.f,
                            (CMatrix3x4f *)
                            (this_ptr->base).base.model.bone_transform.bone_world_matrices
                            [this_ptr->bone_indices[2]].m);
        pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,&local_164,pCVar9);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16);
        pCVar13 = (this_ptr->base).victim;
        if ((pCVar13 != (CCharacter *)0x0) &&
           (iVar7 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13), iVar7 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,7,1);
        }
        goto LAB_005f0010;
      }
      if (local_18 < 0xe) {
        if (local_18 < 8) goto LAB_005f0010;
        if (8 < local_18) {
          if (((local_18 == 0xd) && ((this_ptr->base).pool_me == 0)) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                               (pCVar1,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_1b8,pCVar9);
            core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_1b8,0);
            (this_ptr->base).pool_me = 1;
          }
          goto LAB_005f0010;
        }
        if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_230);
          local_230.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_230.attacker = (CDemonActor *)this_ptr;
          local_230.wielder = (CDemonActor *)this_ptr;
          pSVar16 = &local_230;
          fVar15 = 1.0;
          local_14 = local_230.damage_amount;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_1d0,&g_ZeroVector.f,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[3]].m);
          pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr,&local_8c,pCVar9);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16)
          ;
          pSVar16 = &local_230;
          fVar15 = 1.0;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_68,&g_ZeroVector.f,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[2]].m);
          pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr,&local_5c,pCVar9);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16)
          ;
          pSVar16 = &local_230;
          fVar15 = 1.0;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_1a0,&g_ZeroVector.f,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[1]].m);
          pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr,&local_c8,pCVar9);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16)
          ;
        }
        pCVar13 = (this_ptr->base).victim;
        if ((pCVar13 != (CCharacter *)0x0) &&
           (iVar7 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13), iVar7 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,7,1);
        }
LAB_005f04ff:
        if ((CHero *)(this_ptr->base).victim != g_HeroActors[g_LocalHeroIndex]) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2e4);
          local_2e4.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_2e4.attacker = (CDemonActor *)this_ptr;
          local_2e4.wielder = (CDemonActor *)this_ptr;
          pSVar16 = &local_2e4;
          fVar15 = 0.4;
          local_14 = local_2e4.damage_amount;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_1f4,&g_ZeroVector.f,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [this_ptr->bone_indices[3]].m);
          pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr,&local_50,pCVar9);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar9,fVar15,pSVar16)
          ;
        }
        pCVar13 = (this_ptr->base).victim;
        if ((pCVar13 != (CCharacter *)0x0) &&
           (iVar7 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13), iVar7 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,7,1);
        }
        goto LAB_005f0010;
      }
      if (0xe < local_18) {
        if (0xf < local_18) {
          if (local_18 != 0x13) goto LAB_005f0010;
          goto LAB_005efff8;
        }
        goto LAB_005f094d;
      }
LAB_005f0481:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar13 = (this_ptr->base).victim;
        if (pCVar13 == (CCharacter *)0x0) goto LAB_005f0010;
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
            goto LAB_005f0010;
          }
        }
        pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
        if ((pCVar12 != (CDemonActor *)0x0) && (local_18 == 0xe)) goto LAB_005f092a;
        if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_005f0010;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
        if (iVar7 != 0) {
          core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
        }
        if (local_18 == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
          goto LAB_005f0010;
        }
      }
      else if (local_18 == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xf,1);
        goto LAB_005f0010;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,1,1);
    }
    goto LAB_005f0010;
  }
  uVar4 = (this_ptr->base).base.is_walking;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) {
LAB_005effe5:
        iVar7 = 0xf;
      }
      else {
        iVar7 = 1;
      }
    }
    else {
LAB_005f028d:
      iVar7 = 0;
    }
LAB_005efff0:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar4 < 3) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) goto LAB_005effe5;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar7 = 1;
      }
      else {
        iVar7 = 8;
      }
      goto LAB_005efff0;
    }
    if (uVar4 != 3) goto LAB_005f028d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
LAB_005efff8:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005f0010:
  if ((local_18 == 0x13) && ((this_ptr->base).base.was_rendered_opaque != 0)) {
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar7 == 0) {
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar8;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  }
  local_20 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    local_20 = 0.75;
  }
  dVar6 = 3;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar6 = 2;
  }
  (this_ptr->base).base.collision_cylinder_radius = local_20 * (float)dVar6;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  iVar7 = pSVar10->state_index;
  if (((((iVar7 != 0xd) && (iVar7 != 0)) && (iVar7 != 0xe)) && (iVar7 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar13 = (this_ptr->base).victim;
    if ((pCVar13 != (CCharacter *)0x0) &&
       (pCVar11 = (CWerewolf *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
       pCVar11 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_ec = (this_ptr->base).base.velocity.x * delta_time;
    local_e8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar9 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_e4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.position_delta;
    local_80 = local_ec + pCVar9->x;
    local_7c = local_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_78 = local_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    local_1c4.x = local_80 + pCVar2->x;
    local_1c4.y = local_7c + (this_ptr->base).base.position_delta.y;
    local_1c4.z = local_78 + (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar9->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_1c4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  core_werewolf_cpp_CWerewolf_FUN_005f1e40(this_ptr);
  this_ptr->eye_glow_phase = delta_time * (float)0.5 + this_ptr->eye_glow_phase;
  return;
}
