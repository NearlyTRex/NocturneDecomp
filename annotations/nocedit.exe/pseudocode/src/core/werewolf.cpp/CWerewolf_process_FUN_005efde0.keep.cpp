// Name: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
// Address: 005efde0
// MANUAL RECONSTRUCTION
// Address Range: [[005efde0, 005efee6] [005eff1e, 005f02e4] [005f0456, 005f0535] [005f05a4, 005f05ff] [005f0704, 005f0721] [005f07c7, 005f1095] [005f10fe, 005f1195]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar3;
  uint uVar5;
  CCharacter *pCVar6;
  CDemonActor *pCVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar7;
  uint uVar8;
  CVector3f *pCVar9;
  float fVar13;
  SMotion *pSVar10;
  int iVar14;
  SMotion *pSVar15;
  CWerewolf *pCVar11;
  EDeathState EVar12;
  CVector3f *pCVar18;
  CTrap *pCVar13;
  CTrap *pCVar16;
  CPathMap *path_map;
  CTrap *pCVar17;
  CWerewolf *pCVar19;
  EDeathState EVar20;
  uint uVar21;
  CCharacter *pCVar14;
  CLocation *target_pos;
  int iVar15;
  SDamageInfo *pSVar22;
  SDamageInfo local_320;
  SDamageInfo local_2e4;
  SDamageInfo local_2a8;
  SDamageInfo local_26c;
  SDamageInfo local_230;
  CVector3f local_1f4;
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
  CVector3f local_128;
  CVector3f local_11c;
  CVector3f local_f8;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_3c [2];
  float local_20;
  float local_1c;
  SDamageInfo *pSVar17;
  double dVar6;
  uint uVar4;
  float fVar16;
  float fVar5;
  EWerewolfType EVar3;
  CVector3f *pCVar2;
  CVector3f local_direction;
  
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
    return;
  }
  if ((this_ptr->type == WEREWOLF_TYPE_FOREST) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - delta_time;
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
  local_3c[0] = delta_time * (this_ptr->base).speed;
  pCVar3 = &(this_ptr->base).base.model;
  while (0.0 < local_3c[0]) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar3->motion_controller,local_3c);
    if (uVar8 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
    else if (uVar8 < 0xb) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar3,&local_158,this_ptr->bone_indices[3]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_98,pCVar9);
      fVar13 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(8.0,12.0);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_98,(CVector3f *)0x0,
                 (int)ROUND(ROUND(fVar13 * (float)0.25)),0);
    }
    else if (uVar8 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (g_CDemonMissionPtr,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
    }
  }
  fVar13 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  EVar3 = this_ptr->type;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar13;
  if (EVar3 == WEREWOLF_TYPE_FOREST) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
  }
  pCVar3 = &(this_ptr->base).base.model;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar3->motion_controller);
  uVar5 = pSVar10->state_index;
  iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar14 == 0) {
    EVar12 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr)
    ;
    if ((EVar12 == DEATH_STATE_ALIVE) &&
       ((CHero *)(this_ptr->base).victim == g_HeroActors[g_LocalHeroIndex])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2a8);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      pSVar17 = &local_2a8;
      fVar13 = (this_ptr->base).base.size_scale;
      pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_e0,&g_ZeroVector.f,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [this_ptr->bone_indices[3]].m);
      pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_140,pCVar18);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar18,fVar13,pSVar17);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      pSVar22 = &local_2a8;
      fVar13 = (this_ptr->base).base.size_scale;
      pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_d4,&g_ZeroVector.f,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [this_ptr->bone_indices[2]].m);
      pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_188,pCVar18);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar18,fVar13,pSVar22);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
      pSVar22 = &local_2a8;
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      fVar13 = (this_ptr->base).base.size_scale;
      pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_17c,&g_ZeroVector.f,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [this_ptr->bone_indices[1]].m);
      pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_a4,pCVar18);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar18,fVar13,pSVar22);
    }
    if (uVar5 < 4) {
      if (uVar5 == 0) goto LAB_005f0481;
      if (1 < uVar5) {
        if (2 < uVar5) {
          if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_320);
            core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
            pSVar22 = &local_320;
            fVar16 = 0.4;
            pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (&local_74,&g_ZeroVector.f,
                                 (CMatrix3x4f *)
                                 (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                 [this_ptr->bone_indices[1]].m);
            pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                ((CDemonActor *)this_ptr,&local_14c,pCVar18);
            core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                      (&this_ptr->base,pCVar18,fVar16,pSVar22);
          }
          pCVar6 = (this_ptr->base).victim;
          if ((pCVar6 != (CCharacter *)0x0) &&
             (EVar20 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6),
             EVar20 != DEATH_STATE_ALIVE)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,7,1);
          }
          goto LAB_005f0010;
        }
        goto LAB_005f04ff;
      }
LAB_005f094d:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar6 = (this_ptr->base).victim;
      if (pCVar6 == (CCharacter *)0x0) {
        iVar14 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar14 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        goto LAB_005f0010;
      }
      if ((this_ptr->chain_anchor != (CDemonActor *)0x0) &&
         ((fVar13 = (pCVar6->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x,
          fVar8 = (pCVar6->base).location.position.y -
                  (this_ptr->base).base.base.location.position.y,
          fVar9 = (pCVar6->base).location.position.z -
                  (this_ptr->base).base.base.location.position.z,
          fVar13 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar8 * fVar8),
          (this_ptr->base).guard_distance < fVar13 || ((float)32 < fVar13)))) {
        (this_ptr->base).victim = (CCharacter *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        goto LAB_005f0010;
      }
      pCVar16 = (CTrap *)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if ((pCVar16 == (CTrap *)0x0) || (uVar5 != 0xf)) {
        pCVar14 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CurrentFilename = "..\\core\\werewolf.cpp";
            g_CurrentLineNumber = 0x1ad;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Phase: %d, Timer: %f\n",this_ptr->phase,(double)this_ptr->phase_timer);
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            pCVar18 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (&((this_ptr->base).victim)->base,&local_f8,
                                 &(this_ptr->alpha1->location).position);
            if (0.0 <= pCVar18->z) {
              pCVar18 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                  (&((this_ptr->base).victim)->base,&local_128,
                                   &(this_ptr->alpha2->location).position);
              if (0.0 <= pCVar18->z) {
                pCVar6 = (this_ptr->base).victim;
                pCVar7 = this_ptr->alpha1;
                fVar13 = (pCVar6->base).location.position.x - (pCVar7->location).position.x;
                fVar8 = (pCVar6->base).location.position.y - (pCVar7->location).position.y;
                fVar11 = (pCVar6->base).location.position.z - (pCVar7->location).position.z;
                pCVar6 = (this_ptr->base).victim;
                pCVar7 = this_ptr->alpha2;
                fVar12 = (pCVar6->base).location.position.x - (pCVar7->location).position.x;
                fVar9 = (pCVar6->base).location.position.y - (pCVar7->location).position.y;
                fVar10 = (pCVar6->base).location.position.z - (pCVar7->location).position.z;
                if (SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar9 * fVar9) <
                    SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar8 * fVar8)) goto LAB_005f0ae7;
                pCVar14 = (CCharacter *)this_ptr->alpha2;
              }
              else {
                pCVar14 = (CCharacter *)this_ptr->alpha2;
              }
            }
            else {
LAB_005f0ae7:
              pCVar14 = (CCharacter *)this_ptr->alpha1;
            }
          }
          iVar14 = this_ptr->phase;
          if ((iVar14 == 1) || (iVar14 == 3)) {
            fVar13 = (pCVar14->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
            fVar8 = (pCVar14->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y;
            fVar9 = (pCVar14->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z;
            if (SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar8 * fVar8) < (float)5) {
              iVar14 = this_ptr->phase + 1;
              this_ptr->phase = iVar14;
              if (3 < iVar14) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 10.0f;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) && (this_ptr->phase = iVar14 + 1, 3 < iVar14 + 1))
          {
            this_ptr->phase = 0;
          }
        }
        (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
        local_direction.x = 0.0;
        local_direction.y = 0.0;
        local_direction.z = 0.0;
        path_map = (*((pCVar14->base).vtable._ub)->getPathMap)(&pCVar14->base);
        target_pos = &(pCVar14->base).location;
        iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                           ((CCharacter *)this_ptr,&target_pos->position,path_map,
                            &local_direction,0.5f,0.17453292f);
        if (iVar14 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",(this_ptr->base).base.base.actor_name);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        else if (iVar14 < 1) {
          pCVar17 = (CTrap *)core_actor_cpp_castToClassHash_FUN_0040c790
                                       (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar17 == (CTrap *)0x0) {
            local_194.x = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            local_194.y = (pCVar14->base).location.position.y -
                          (this_ptr->base).base.base.location.position.y;
            local_194.z = (pCVar14->base).location.position.z -
                          (this_ptr->base).base.base.location.position.z;
            if (&local_bc != &local_194) {
              local_bc.x = local_194.x;
              local_bc.y = local_194.y;
              local_bc.z = local_194.z;
            }
            fVar13 = SQRT(local_bc.z * local_bc.z +
                          local_bc.x * local_bc.x + local_bc.y * local_bc.y);
            local_1c = 20.0;
            if (this_ptr->type == WEREWOLF_TYPE_TRAIN_ALPHA) {
              local_1c = 10.0;
            }
            if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
              local_1c = 10.0;
            }
            pCVar3 = &(this_ptr->base).base.model;
            if (local_1c < fVar13) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_170,&local_bc)
              ;
              fVar13 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_170.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fVar13) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar3->motion_controller,8,1);
                iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(0.85);
                if (iVar14 != 0) {
                  core_werewolf_cpp_CWerewolf_playHowl_FUN_005f11e0(this_ptr);
                }
                for (iVar15 = 0; iVar15 < g_CDemonSetPtr->enemy_count; iVar15 = iVar15 + 1) {
                  pCVar19 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040c790
                                      ((CDemonActor *)g_CDemonSetPtr->enemies[iVar15],
                                       g_CWerewolfClassInfo.name_hash);
                  if (((pCVar19 != (CWerewolf *)0x0) && (pCVar19 != this_ptr)) &&
                     (pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                          (&(pCVar19->base).base.model.motion_controller),
                     pSVar15->state_index == 8)) {
                    iVar14 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
                    if (iVar14 == 1) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + 0.2617994f;
                    }
                    if (iVar14 == 2) {
                      (this_ptr->base).base.base.orient.vec.y =
                           (this_ptr->base).base.base.orient.vec.y + -0.2617994f;
                    }
                    break;
                  }
                }
              }
            }
            else if ((fVar13 < 3.0f * 2.0f) && (uVar5 == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_005f0010;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar14 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            if (iVar14 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,2,1);
            }
            if (iVar14 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
            }
            if (iVar14 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(0.6);
            if (iVar14 != 0) {
              core_werewolf_cpp_CWerewolf_playHowl_FUN_005f11e0(this_ptr);
            }
          }
        }
        fVar13 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar13;
        if (fVar13 < 0.0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_005f11e0(this_ptr);
        }
        goto LAB_005f0010;
      }
LAB_005f092a:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
    }
    else {
      pCVar3 = &(this_ptr->base).base.model;
      if (uVar5 < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_26c);
        local_26c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
        local_26c.attacker = (CDemonActor *)this_ptr;
        local_26c.wielder = (CDemonActor *)this_ptr;
        pSVar22 = &local_26c;
        fVar13 = 0.4;
        pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_11c,&g_ZeroVector.f,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [this_ptr->bone_indices[2]].m);
        pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((CDemonActor *)this_ptr,&local_164,pCVar18);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar18,fVar13,pSVar22);
        pCVar6 = (this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (EVar20 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6),
           EVar20 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,7,1);
        }
        goto LAB_005f0010;
      }
      if (uVar5 < 0xe) {
        if (uVar5 < 8) goto LAB_005f0010;
        if (8 < uVar5) {
          if (((uVar5 == 0xd) && ((this_ptr->base).pool_me == 0)) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            pCVar18 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                (pCVar3,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_1b8,pCVar18);
            core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_1b8,0);
            (this_ptr->base).pool_me = 1;
          }
          goto LAB_005f0010;
        }
        if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_230);
          local_230.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
          local_230.attacker = (CDemonActor *)this_ptr;
          local_230.wielder = (CDemonActor *)this_ptr;
          pSVar22 = &local_230;
          fVar13 = 1.0;
          pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1d0,&g_ZeroVector.f,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[3]].m);
          pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((CDemonActor *)this_ptr,&local_8c,pCVar18);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                    (&this_ptr->base,pCVar18,fVar13,pSVar22);
          pSVar22 = &local_230;
          fVar13 = 1.0;
          pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_68,&g_ZeroVector.f,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[2]].m);
          pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((CDemonActor *)this_ptr,&local_5c,pCVar18);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                    (&this_ptr->base,pCVar18,fVar13,pSVar22);
          pSVar22 = &local_230;
          fVar13 = 1.0;
          pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1a0,&g_ZeroVector.f,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[1]].m);
          pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((CDemonActor *)this_ptr,&local_c8,pCVar18);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                    (&this_ptr->base,pCVar18,fVar13,pSVar22);
        }
        pCVar6 = (this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (EVar20 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6),
           EVar20 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,7,1);
        }
LAB_005f04ff:
        if ((CHero *)(this_ptr->base).victim != g_HeroActors[g_LocalHeroIndex]) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2e4);
          local_2e4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
          local_2e4.attacker = (CDemonActor *)this_ptr;
          local_2e4.wielder = (CDemonActor *)this_ptr;
          pSVar22 = &local_2e4;
          fVar13 = 0.4;
          pCVar18 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1f4,&g_ZeroVector.f,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[3]].m);
          pCVar18 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((CDemonActor *)this_ptr,&local_50,pCVar18);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                    (&this_ptr->base,pCVar18,fVar13,pSVar22);
        }
        pCVar6 = (this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (EVar20 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6),
           EVar20 != DEATH_STATE_ALIVE)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,7,1);
        }
        goto LAB_005f0010;
      }
      if (0xe < uVar5) {
        if (0xf < uVar5) {
          if (uVar5 != 0x13) goto LAB_005f0010;
          goto LAB_005efff8;
        }
        goto LAB_005f094d;
      }
LAB_005f0481:
      iVar14 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar14 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar6 = (this_ptr->base).victim;
        if (pCVar6 == (CCharacter *)0x0) goto LAB_005f0010;
        if ((this_ptr->chain_anchor != (CDemonActor *)0x0) &&
           ((fVar13 = (pCVar6->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x,
            fVar8 = (pCVar6->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y,
            fVar9 = (pCVar6->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z,
            fVar13 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar8 * fVar8),
            (this_ptr->base).guard_distance < fVar13 || ((float)32 < fVar13)))) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          goto LAB_005f0010;
        }
        pCVar13 = (CTrap *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
        if ((pCVar13 != (CTrap *)0x0) && (uVar5 == 0xe)) goto LAB_005f092a;
        if ((this_ptr->base).victim == (CCharacter *)0x0) goto LAB_005f0010;
        iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
        if (iVar14 != 0) {
          core_werewolf_cpp_CWerewolf_playHowl_FUN_005f11e0(this_ptr);
        }
        if (uVar5 == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
          goto LAB_005f0010;
        }
      }
      else if (uVar5 == 0xe) {
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
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_005effe5:
        iVar14 = 0xf;
      }
      else {
        iVar14 = 1;
      }
    }
    else {
LAB_005f028d:
      iVar14 = 0;
    }
LAB_005efff0:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar14,1);
  }
  else {
    if (uVar4 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_005effe5;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar14 = 1;
      }
      else {
        iVar14 = 8;
      }
      goto LAB_005efff0;
    }
    if (uVar4 != 3) goto LAB_005f028d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar3->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",(this_ptr->base).base.base.actor_name);
  }
LAB_005efff8:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005f0010:
  if ((uVar5 == 0x13) && ((this_ptr->base).base.was_rendered_opaque != 0)) {
    iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar14 == 0) {
      uVar21 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                         ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar21;
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
  if ((uVar5 != 0xe) && (uVar5 != 0xf)) {
    dVar6 = 2;
  }
  (this_ptr->base).base.collision_cylinder_radius = local_20 * (float)dVar6;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  iVar14 = pSVar15->state_index;
  if (((((iVar14 != 0xd) && (iVar14 != 0)) && (iVar14 != 0xe)) && (iVar14 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar6 = (this_ptr->base).victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar11 = (CWerewolf *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar11 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar18 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar2 = &(this_ptr->base).base.position_delta;
    local_1c4.x = (this_ptr->base).base.velocity.x * delta_time + pCVar18->x + pCVar2->x;
    local_1c4.y = (this_ptr->base).base.velocity.y * delta_time +
                  (this_ptr->base).base.model.accumulated_root_motion.y +
                  (this_ptr->base).base.position_delta.y;
    local_1c4.z = delta_time * (this_ptr->base).base.velocity.z +
                  (this_ptr->base).base.model.accumulated_root_motion.z +
                  (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    (this_ptr->base).base.position_delta.x = 0.0f;
    (this_ptr->base).base.position_delta.y = 0.0f;
    (this_ptr->base).base.position_delta.z = 0.0f;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_1c4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_005f1e40(this_ptr);
  this_ptr->eye_glow_phase = delta_time * (float)0.5 + this_ptr->eye_glow_phase;
  return;
}
