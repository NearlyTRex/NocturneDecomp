// Name: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
// Address: 005efde0
// Address Range: [[005efde0, 005efee6] [005eff1e, 005f02e4] [005f0456, 005f0535] [005f05a4, 005f05ff] [005f0704, 005f0721] [005f07c7, 005f1095] [005f10fe, 005f1195]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  EWerewolfType EVar4;
  uint uVar5;
  CCharacter *pCVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  CVector3f *pCVar10;
  SMotion *pSVar11;
  CWerewolf *pCVar12;
  int extraout_EAX;
  CDemonActor *pCVar13;
  int extraout_EAX_00;
  CDemonActor *pCVar14;
  uint uVar15;
  int iVar16;
  double dVar17;
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
  float local_1c4;
  float local_1c0;
  float local_1bc;
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
  
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk4 + 8));
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
  while (0.0 < local_3c) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar9 < 10) {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
    else if (uVar9 < 0xb) {
      pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_158,*(int *)(this_ptr->unk3 + 8));
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_98,pCVar10);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar17 = round((double)(local_14 * (float)0.25));
      local_34 = (int)ROUND(dVar17);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
    }
    else if (uVar9 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (g_CDemonMissionPtr,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
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
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  uVar9 = pSVar11->state_index;
  local_18 = uVar9;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    iVar8 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
    if ((iVar8 == 0) && ((CHero *)(this_ptr->base).victim == g_HeroActors[g_LocalHeroIndex])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2a8);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_e0,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [*(int *)(this_ptr->unk3 + 8)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_140,pCVar10);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_d4,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [*(int *)(this_ptr->unk3 + 4)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_188,pCVar10);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_17c,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [*(int *)this_ptr->unk3].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_a4,pCVar10);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    }
    if (local_18 < 4) {
      if (local_18 == 0) goto LAB_005f0481;
      if (1 < local_18) {
        if (2 < local_18) {
          if (g_HeroActors[g_LocalHeroIndex] != (CHero *)(this_ptr->base).victim) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffce0);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (&local_74,&g_ZeroVector,
                                 (CMatrix3x4f *)
                                 (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                 [*(int *)this_ptr->unk3].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar10);
            core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
          }
          pCVar6 = (CCharacter *)(this_ptr->base).victim;
          if ((pCVar6 != (CCharacter *)0x0) &&
             (iVar8 = (*(((pCVar6->base).vtable._uc)->_uc).isDamageable)(pCVar6), iVar8 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,7,1);
          }
          goto LAB_005f0010;
        }
        goto LAB_005f04ff;
      }
LAB_005f094d:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      pCVar13 = (this_ptr->base).victim;
      if (pCVar13 == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        goto LAB_005f0010;
      }
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        local_104 = (pCVar13->location).position.x - (this_ptr->base).base.base.location.position.x;
        local_100 = (pCVar13->location).position.y - (this_ptr->base).base.base.location.position.y;
        local_fc = (pCVar13->location).position.z - (this_ptr->base).base.base.location.position.z;
        local_24 = SQRT(local_fc * local_fc + local_104 * local_104 + local_100 * local_100);
        if (((this_ptr->base).guard_distance < local_24) || ((float)32 < local_24)) {
          (this_ptr->base).victim = (CDemonActor *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          goto LAB_005f0010;
        }
      }
      pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if ((pCVar13 == (CDemonActor *)0x0) || (local_18 != 0xf)) {
        pCVar13 = (this_ptr->base).victim;
        if (this_ptr->type == WEREWOLF_TYPE_FOREST) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CurrentFilename = "..\\core\\werewolf.cpp";
            g_CurrentLineNumber = 0x1ad;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"Phase: %d, Timer: %f\n",this_ptr->phase);
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((this_ptr->base).victim,&local_f8,
                                 &(this_ptr->alpha1->location).position);
            if (0.0 <= pCVar10->z) {
              pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                  ((this_ptr->base).victim,&local_128,
                                   &(this_ptr->alpha2->location).position);
              if (0.0 <= pCVar10->z) {
                pCVar13 = (this_ptr->base).victim;
                pCVar14 = this_ptr->alpha1;
                local_1dc = (pCVar13->location).position.x - (pCVar14->location).position.x;
                local_1d8 = (pCVar13->location).position.y - (pCVar14->location).position.y;
                local_1d4 = (pCVar13->location).position.z - (pCVar14->location).position.z;
                pCVar13 = (this_ptr->base).victim;
                pCVar14 = this_ptr->alpha2;
                local_110 = (pCVar13->location).position.x - (pCVar14->location).position.x;
                local_10c = (pCVar13->location).position.y - (pCVar14->location).position.y;
                local_108 = (pCVar13->location).position.z - (pCVar14->location).position.z;
                if (SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) <
                    SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8))
                goto LAB_005f0ae7;
                pCVar13 = this_ptr->alpha2;
              }
              else {
                pCVar13 = this_ptr->alpha2;
              }
            }
            else {
LAB_005f0ae7:
              pCVar13 = this_ptr->alpha1;
            }
          }
          iVar8 = this_ptr->phase;
          if ((iVar8 == 1) || (iVar8 == 3)) {
            local_134 = (pCVar13->location).position.x -
                        (this_ptr->base).base.base.location.position.x;
            local_130 = (pCVar13->location).position.y -
                        (this_ptr->base).base.base.location.position.y;
            local_12c = (pCVar13->location).position.z -
                        (this_ptr->base).base.base.location.position.z;
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)5) {
              iVar8 = this_ptr->phase + 1;
              this_ptr->phase = iVar8;
              if (3 < iVar8) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 10.0f;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) && (this_ptr->phase = iVar8 + 1, 3 < iVar8 + 1)) {
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
        local_1e8 = 0;
        local_1e4 = 0;
        (*((pCVar13->vtable)._ub)->getPathMap)(pCVar13);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (iVar8 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
        else if (iVar8 < 1) {
          pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar14 == (CDemonActor *)0x0) {
            local_194.x = (pCVar13->location).position.x -
                          (this_ptr->base).base.base.location.position.x;
            local_194.y = (pCVar13->location).position.y -
                          (this_ptr->base).base.base.location.position.y;
            local_194.z = (pCVar13->location).position.z -
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
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (&local_170,&local_bc);
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_170.y - (this_ptr->base).base.base.orient.bank);
              if (ABS(local_14) < (float)0.39269908168750001) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,8,1);
                iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.85);
                if (iVar8 != 0) {
                  core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
                }
                iVar8 = 0;
                for (iVar16 = 0; iVar16 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c);
                    iVar16 = iVar16 + 1) {
                  pCVar12 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar8 + 8000),
                                       g_CWerewolfClassInfo.name_hash);
                  if (((pCVar12 != (CWerewolf *)0x0) && (pCVar12 != this_ptr)) &&
                     (pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                          (&(pCVar12->base).base.model.motion_controller),
                     pSVar11->state_index == 8)) {
                    iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
                    if (iVar8 == 1) {
                      (this_ptr->base).base.base.orient.bank =
                           (this_ptr->base).base.base.orient.bank + 0.2617994f;
                    }
                    if (iVar8 == 2) {
                      (this_ptr->base).base.base.orient.bank =
                           (this_ptr->base).base.base.orient.bank + -0.2617994f;
                    }
                    break;
                  }
                  iVar8 = iVar8 + 4;
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
          if (*(float *)(this_ptr->base).unk2 <= 0.0) {
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            if (iVar8 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,2,1);
            }
            if (iVar8 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
            }
            if (iVar8 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,4,1);
            }
            (this_ptr->base).unk2[0] = '\0';
            (this_ptr->base).unk2[1] = '\0';
            (this_ptr->base).unk2[2] = -0x80;
            (this_ptr->base).unk2[3] = '?';
            iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.6);
            if (iVar8 != 0) {
              core_werewolf_cpp_CWerewolf_FUN_005f11e0(this_ptr);
            }
          }
        }
        fVar3 = *(float *)this_ptr->unk4 - delta_time;
        *(float *)this_ptr->unk4 = fVar3;
        if (fVar3 < 0.0) {
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
        local_14 = local_26c.damage_amount;
        pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_11c,&g_ZeroVector,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [*(int *)(this_ptr->unk3 + 4)].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_164,pCVar10);
        core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        pCVar6 = (CCharacter *)(this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (iVar8 = (*(((pCVar6->base).vtable._uc)->_uc).isDamageable)(pCVar6), iVar8 != 0)) {
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
            pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                (pCVar1,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_1b8,pCVar10);
            core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
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
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1d0,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [*(int *)(this_ptr->unk3 + 8)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_8c,pCVar10);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_68,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [*(int *)(this_ptr->unk3 + 4)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_5c,pCVar10);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1a0,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [*(int *)this_ptr->unk3].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_c8,pCVar10);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        }
        pCVar6 = (CCharacter *)(this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (iVar8 = (*(((pCVar6->base).vtable._uc)->_uc).isDamageable)(pCVar6), iVar8 != 0)) {
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
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1f4,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [*(int *)(this_ptr->unk3 + 8)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_50,pCVar10);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        }
        pCVar6 = (CCharacter *)(this_ptr->base).victim;
        if ((pCVar6 != (CCharacter *)0x0) &&
           (iVar8 = (*(((pCVar6->base).vtable._uc)->_uc).isDamageable)(pCVar6), iVar8 != 0)) {
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
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        pCVar13 = (this_ptr->base).victim;
        if (pCVar13 == (CDemonActor *)0x0) goto LAB_005f0010;
        if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
          local_b0 = (pCVar13->location).position.x - (this_ptr->base).base.base.location.position.x
          ;
          local_ac = (pCVar13->location).position.y - (this_ptr->base).base.base.location.position.y
          ;
          local_a8 = (pCVar13->location).position.z - (this_ptr->base).base.base.location.position.z
          ;
          local_2c = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
          if (((this_ptr->base).guard_distance < local_2c) || ((float)32 < local_2c)) {
            (this_ptr->base).victim = (CDemonActor *)0x0;
            goto LAB_005f0010;
          }
        }
        pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
        if ((pCVar13 != (CDemonActor *)0x0) && (local_18 == 0xe)) goto LAB_005f092a;
        if ((this_ptr->base).victim == (CDemonActor *)0x0) goto LAB_005f0010;
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
        if (iVar8 != 0) {
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
  uVar5 = (this_ptr->base).base.field22_0x25b0;
  if (uVar5 < 2) {
    if (uVar5 == 1) {
      if ((uVar9 == 0xe) || (uVar9 == 0xf)) {
LAB_005effe5:
        iVar8 = 0xf;
      }
      else {
        iVar8 = 1;
      }
    }
    else {
LAB_005f028d:
      iVar8 = 0;
    }
LAB_005efff0:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar8,1);
  }
  else {
    if (uVar5 < 3) {
      if ((uVar9 == 0xe) || (uVar9 == 0xf)) goto LAB_005effe5;
      if ((this_ptr->base).base.turn_speed <= ABS((this_ptr->base).base.turn_angle_accumulator)) {
        iVar8 = 1;
      }
      else {
        iVar8 = 8;
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
  if ((local_18 == 0x13) && ((this_ptr->base).base.field43_0x2620 != 0)) {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk4 + 8));
    if (iVar8 == 0) {
      uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                         ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      *(uint *)(this_ptr->unk4 + 8) = uVar15;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk4 + 8));
  }
  local_20 = 1.0;
  if (this_ptr->type == WEREWOLF_TYPE_TRAIN) {
    local_20 = 0.75;
  }
  dVar17 = 3;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar17 = 2;
  }
  (this_ptr->base).base.collision_cylinder_radius = local_20 * (float)dVar17;
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  iVar8 = pSVar11->state_index;
  if (((((iVar8 != 0xd) && (iVar8 != 0)) && (iVar8 != 0xe)) && (iVar8 != 0x14)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar13 = (this_ptr->base).victim;
    if ((pCVar13 != (CDemonActor *)0x0) &&
       (pCVar12 = (CWerewolf *)(*(((pCVar13->vtable)._uc)->_uc).cfunc8)(), pCVar12 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(this_ptr->base).victim);
    }
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_ec = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_e8 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_e4 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.field6_0x241c;
    local_80 = local_ec + pCVar10->x;
    local_7c = local_e8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_78 = local_e4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    local_1c4 = local_80 + pCVar2->x;
    local_1c0 = local_7c + (this_ptr->base).base.field6_0x241c.y;
    local_1bc = local_78 + (this_ptr->base).base.field6_0x241c.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar2->x = (this_ptr->base).base.field6_0x241c.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  core_werewolf_cpp_CWerewolf_FUN_005f1e40(this_ptr);
  this_ptr->unk6 = (int)(delta_time * (float)0.5 + (float)this_ptr->unk6);
  return;
}
