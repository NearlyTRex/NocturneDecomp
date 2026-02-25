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
  float fVar3;
  EWerewolfType EVar4;
  uint uVar5;
  CCharacter *pCVar6;
  float fVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  CVector3f *pCVar11;
  SMotion *pSVar12;
  CWerewolf *pCVar13;
  CDemonActor *pCVar14;
  CPathMap *path_map;
  CDemonActor *pCVar15;
  int iVar16;
  ulonglong in_stack_fffffce4;
  CWerewolf *actor_ptr;
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
  float local_3c;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  
  iVar9 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
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
  local_3c = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (actor_ptr = SUB84(in_stack_fffffce4,4), 0.0 < local_3c) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar10 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar10);
    }
    else if (uVar10 < 0xb) {
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_158,this_ptr->bone_indices[3]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_98,pCVar11);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      local_34 = (int)ROUND(ROUND(local_14 * (float)0.25));
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_98,(CVector3f *)0x0,local_34,0);
    }
    else if (uVar10 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (g_CDemonMissionPtr,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar10);
    }
  }
  fVar3 = (this_ptr->base).speed;
  fVar7 = (float)3.1415926535000001;
  EVar4 = this_ptr->type;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar7 * fVar3;
  if (EVar4 == WEREWOLF_TYPE_FOREST) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  uVar10 = pSVar12->state_index;
  local_18 = uVar10;
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    iVar9 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if ((iVar9 == 0) && ((CHero *)(this_ptr->base).victim == g_HeroActors[g_LocalHeroIndex])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2a8);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_e0,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [this_ptr->bone_indices[3]].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_140,pCVar11);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_d4,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [this_ptr->bone_indices[2]].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_188,pCVar11);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_17c,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [this_ptr->bone_indices[1]].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_a4,pCVar11);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    }
    if (local_18 < 4) {
      if (local_18 == 0) goto LAB_005f0481;
      if (1 < local_18) {
        if (2 < local_18) {
          if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffce0);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (&local_74,&g_ZeroVector,
                                 (CMatrix3x4f *)
                                 (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                 [this_ptr->bone_indices[1]].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar11);
            core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
          }
          pCVar6 = (CCharacter *)(this_ptr->base).victim;
          if ((pCVar6 != (CCharacter *)0x0) &&
             (iVar9 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6), iVar9 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,7,1);
          }
          goto LAB_005f0010;
        }
        goto LAB_005f04ff;
      }
LAB_005f094d:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar14 = (this_ptr->base).victim;
      if (pCVar14 == (CDemonActor *)0x0) {
        actor_ptr = (CWerewolf *)delta_time;
        iVar9 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar9 == 0) {
          actor_ptr = (CWerewolf *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        goto LAB_005f0010;
      }
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        local_104 = (pCVar14->location).position.x - (this_ptr->base).base.base.location.position.x;
        local_100 = (pCVar14->location).position.y - (this_ptr->base).base.base.location.position.y;
        local_fc = (pCVar14->location).position.z - (this_ptr->base).base.base.location.position.z;
        local_24 = SQRT(local_fc * local_fc + local_104 * local_104 + local_100 * local_100);
        if (((this_ptr->base).guard_distance < local_24) || ((float)32 < local_24)) {
          actor_ptr = (CWerewolf *)0x1;
          (this_ptr->base).victim = (CDemonActor *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          goto LAB_005f0010;
        }
      }
      pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if ((pCVar14 == (CDemonActor *)0x0) || (local_18 != 0xf)) {
        pCVar14 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CurrentFilename = "..\\core\\werewolf.cpp";
            g_CurrentLineNumber = 0x1ad;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((this_ptr->base).victim,&local_f8,
                                 &(this_ptr->alpha1->location).position);
            if (0.0 <= pCVar11->z) {
              pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                  ((this_ptr->base).victim,&local_128,
                                   &(this_ptr->alpha2->location).position);
              if (0.0 <= pCVar11->z) {
                pCVar14 = (this_ptr->base).victim;
                pCVar15 = this_ptr->alpha1;
                local_1dc = (pCVar14->location).position.x - (pCVar15->location).position.x;
                local_1d8 = (pCVar14->location).position.y - (pCVar15->location).position.y;
                local_1d4 = (pCVar14->location).position.z - (pCVar15->location).position.z;
                pCVar14 = (this_ptr->base).victim;
                pCVar15 = this_ptr->alpha2;
                local_110 = (pCVar14->location).position.x - (pCVar15->location).position.x;
                local_10c = (pCVar14->location).position.y - (pCVar15->location).position.y;
                local_108 = (pCVar14->location).position.z - (pCVar15->location).position.z;
                if (SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) <
                    SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8))
                goto LAB_005f0ae7;
                pCVar14 = this_ptr->alpha2;
              }
              else {
                pCVar14 = this_ptr->alpha2;
              }
            }
            else {
LAB_005f0ae7:
              pCVar14 = this_ptr->alpha1;
            }
          }
          iVar9 = this_ptr->phase;
          if ((iVar9 == 1) || (iVar9 == 3)) {
            local_134 = (pCVar14->location).position.x -
                        (this_ptr->base).base.base.location.position.x;
            local_130 = (pCVar14->location).position.y -
                        (this_ptr->base).base.base.location.position.y;
            local_12c = (pCVar14->location).position.z -
                        (this_ptr->base).base.base.location.position.z;
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)5) {
              iVar9 = this_ptr->phase + 1;
              this_ptr->phase = iVar9;
              if (3 < iVar9) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 10.0f;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) && (this_ptr->phase = iVar9 + 1, 3 < iVar9 + 1)) {
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
        pCVar11 = (CVector3f *)0x3f000000;
        actor_ptr = (CWerewolf *)0x3e32b8c2;
        local_1e8 = 0;
        local_1e4 = 0;
        path_map = (*((pCVar14->vtable)._ub)->getPathMap)(pCVar14);
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(pCVar14->location).position,path_map,pCVar11,
                           (float)actor_ptr,in_stack_fffffcec);
        if (iVar9 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          actor_ptr = (CWerewolf *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        else if (iVar9 < 1) {
          actor_ptr = (CWerewolf *)this_ptr->chain_anchor;
          pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                              ((CDemonActor *)actor_ptr,g_CTrapClassInfo.name_hash);
          if (pCVar15 == (CDemonActor *)0x0) {
            local_194.x = (pCVar14->location).position.x -
                          (this_ptr->base).base.base.location.position.x;
            local_194.y = (pCVar14->location).position.y -
                          (this_ptr->base).base.base.location.position.y;
            local_194.z = (pCVar14->location).position.z -
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
              actor_ptr = (CWerewolf *)0x5f0f40;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_170.y - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(local_14) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,8,1);
                actor_ptr = (CWerewolf *)0x5f0f71;
                iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.85);
                if (iVar9 != 0) {
                  actor_ptr = (CWerewolf *)0x5f0fb4;
                  core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
                }
                iVar9 = 0;
                for (iVar16 = 0; iVar16 < g_CDemonSetPtr->enemy_count; iVar16 = iVar16 + 1) {
                  actor_ptr = *(CWerewolf **)((int)g_CDemonSetPtr->enemies + iVar9);
                  pCVar13 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040c790
                                      ((CDemonActor *)actor_ptr,g_CWerewolfClassInfo.name_hash);
                  if ((pCVar13 != (CWerewolf *)0x0) && (pCVar13 != this_ptr)) {
                    actor_ptr = (CWerewolf *)0x5f0fc8;
                    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                        (&(pCVar13->base).base.model.motion_controller);
                    if (pSVar12->state_index == 8) {
                      actor_ptr = (CWerewolf *)0x0;
                      iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
                      if (iVar9 == 1) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + 0.2617994f;
                      }
                      if (iVar9 == 2) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + -0.2617994f;
                      }
                      break;
                    }
                  }
                  iVar9 = iVar9 + 4;
                }
              }
            }
            else if ((local_28 < 3.0f * 2.0f) && (local_18 == 0xf)) {
              actor_ptr = (CWerewolf *)0x0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == WEREWOLF_TYPE_FOREST) &&
             ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) goto LAB_005f0010;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            if (iVar9 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,2,1);
            }
            if (iVar9 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
            }
            if (iVar9 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,4,1);
            }
            (this_ptr->base).attack_cooldown = 1.0;
            actor_ptr = (CWerewolf *)0x5f0c82;
            iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.6);
            if (iVar9 != 0) {
              actor_ptr = (CWerewolf *)0x5f0c8f;
              core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
            }
          }
        }
        fVar3 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar3;
        if (fVar3 < 0.0) {
          actor_ptr = (CWerewolf *)0x5f0cb7;
          core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
        }
        goto LAB_005f0010;
      }
LAB_005f092a:
      actor_ptr = (CWerewolf *)0x1;
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
        local_14 = local_26c.damage_amount;
        pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_11c,&g_ZeroVector,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [this_ptr->bone_indices[2]].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_164,pCVar11);
        core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        pCVar6 = (CCharacter *)(this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (iVar9 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6), iVar9 != 0)) {
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
            pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                (pCVar1,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_1b8,pCVar11);
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
          local_14 = local_230.damage_amount;
          pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1d0,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[3]].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_8c,pCVar11);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
          pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_68,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[2]].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_5c,pCVar11);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
          pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1a0,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[1]].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_c8,pCVar11);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        }
        pCVar6 = (CCharacter *)(this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (iVar9 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6), iVar9 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,7,1);
        }
LAB_005f04ff:
        if ((CHero *)(this_ptr->base).victim != g_HeroActors[g_LocalHeroIndex]) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2e4);
          local_2e4.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_2e4.attacker = (CDemonActor *)this_ptr;
          local_2e4.wielder = (CDemonActor *)this_ptr;
          local_14 = local_2e4.damage_amount;
          pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1f4,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [this_ptr->bone_indices[3]].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_50,pCVar11);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        }
        pCVar6 = (CCharacter *)(this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (iVar9 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6), iVar9 != 0)) {
          actor_ptr = (CWerewolf *)0x1;
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
      iVar9 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar9 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar14 = (this_ptr->base).victim;
        if (pCVar14 == (CDemonActor *)0x0) goto LAB_005f0010;
        if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
          local_b0 = (pCVar14->location).position.x - (this_ptr->base).base.base.location.position.x
          ;
          local_ac = (pCVar14->location).position.y - (this_ptr->base).base.base.location.position.y
          ;
          local_a8 = (pCVar14->location).position.z - (this_ptr->base).base.base.location.position.z
          ;
          local_2c = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
          if (((this_ptr->base).guard_distance < local_2c) || ((float)32 < local_2c)) {
            (this_ptr->base).victim = (CDemonActor *)0x0;
            goto LAB_005f0010;
          }
        }
        actor_ptr = (CWerewolf *)g_CTrapClassInfo.name_hash;
        pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
        if ((pCVar14 != (CDemonActor *)0x0) && (local_18 == 0xe)) goto LAB_005f092a;
        if ((this_ptr->base).victim == (CDemonActor *)0x0) goto LAB_005f0010;
        actor_ptr = (CWerewolf *)0x3ecccccd;
        iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
        if (iVar9 != 0) {
          actor_ptr = this_ptr;
          core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
        }
        if (local_18 == 0xe) {
          actor_ptr = (CWerewolf *)0x1;
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
  uVar5 = (this_ptr->base).base.is_walking;
  if (uVar5 < 2) {
    if (uVar5 == 1) {
      if ((uVar10 == 0xe) || (uVar10 == 0xf)) {
LAB_005effe5:
        iVar9 = 0xf;
      }
      else {
        iVar9 = 1;
      }
    }
    else {
LAB_005f028d:
      iVar9 = 0;
    }
LAB_005efff0:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar9,1);
  }
  else {
    if (uVar5 < 3) {
      if ((uVar10 == 0xe) || (uVar10 == 0xf)) goto LAB_005effe5;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar9 = 1;
      }
      else {
        iVar9 = 8;
      }
      goto LAB_005efff0;
    }
    if (uVar5 != 3) goto LAB_005f028d;
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
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar9 == 0) {
      uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                         ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      this_ptr->sfx_handles[1] = uVar10;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  }
  local_20 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    local_20 = 0.75;
  }
  dVar8 = 3;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar8 = 2;
  }
  (this_ptr->base).base.collision_cylinder_radius = local_20 * (float)dVar8;
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  iVar9 = pSVar12->state_index;
  if (((((iVar9 != 0xd) && (iVar9 != 0)) && (iVar9 != 0xe)) && (iVar9 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar6 = (CCharacter *)(this_ptr->base).victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar13 = (CWerewolf *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar13 == this_ptr)) {
      actor_ptr = (CWerewolf *)(this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)actor_ptr);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_ec = (this_ptr->base).base.velocity.x * delta_time;
    local_e8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_e4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.position_delta;
    local_80 = local_ec + pCVar11->x;
    local_7c = local_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_78 = local_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    local_1c4.x = local_80 + pCVar2->x;
    local_1c4.y = local_7c + (this_ptr->base).base.position_delta.y;
    local_1c4.z = local_78 + (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_1c4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)actor_ptr);
  core_werewolf_cpp_CWerewolf_FUN_005f1e40(this_ptr);
  this_ptr->eye_glow_phase = delta_time * (float)0.5 + this_ptr->eye_glow_phase;
  return;
}
