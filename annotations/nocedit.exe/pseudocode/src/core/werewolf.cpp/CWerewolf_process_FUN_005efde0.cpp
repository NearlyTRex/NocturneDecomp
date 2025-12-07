// Name: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
// Address: 005efde0
// Address Range: [[005efde0, 005efee6] [005eff1e, 005f02e4] [005f0456, 005f0535] [005f05a4, 005f05ff] [005f0704, 005f0721] [005f07c7, 005f1095] [005f10fe, 005f1195]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_process_FUN_005efde0(CWerewolf * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CEnemy *pCVar6;
  int iVar7;
  uint uVar8;
  CVector3f *pCVar9;
  SMotion *pSVar10;
  CWerewolf *pCVar11;
  int extraout_EAX;
  CDemonActor *pCVar12;
  int extraout_EAX_00;
  uint uVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  double dVar15;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffce0;
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
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field6_0xbed8 + 0xc));
    return;
  }
  if ((this_ptr->type == 2) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - in_stack_00000008;
  }
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
  local_3c = in_stack_00000008 * (this_ptr->base_enemy).speed;
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  while (0.0 < local_3c) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar8 < 10) {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
    else if (uVar8 < 0xb) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar1,&local_158,*(int *)(this_ptr->field4_0xbec0 + 0xc));
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_98,pCVar9);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar15 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)_DAT_00657d7c));
      local_34 = (int)ROUND(dVar15);
      core_gore_cpp_FUN_004edbb0();
    }
    else if (uVar8 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
  }
  fVar3 = (this_ptr->base_enemy).speed;
  fVar5 = (float)_DAT_00657d4c;
  iVar7 = this_ptr->type;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  if (iVar7 == 2) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) *
         (float)_DAT_00657d54;
  }
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  uVar8 = pSVar10->state_index;
  local_18 = uVar8;
  iVar7 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    iVar7 = (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)this_ptr,in_stack_fffffce0);
    if ((iVar7 == 0) &&
       (*(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) == g_HeroActors[g_LocalHeroIndex])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2a8);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_e0,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base_enemy).base_character.model.bone_transform.
                          bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 0xc)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_140,pCVar9);
      core_enemy_cpp_FUN_004a9880();
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_d4,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base_enemy).base_character.model.bone_transform.
                          bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 8)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_188,pCVar9);
      core_enemy_cpp_FUN_004a9880();
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_17c,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base_enemy).base_character.model.bone_transform.
                          bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 4)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_a4,pCVar9);
      core_enemy_cpp_FUN_004a9880();
    }
    if (local_18 < 4) {
      if (local_18 == 0) goto LAB_005f0481;
      if (1 < local_18) {
        if (2 < local_18) {
          if (g_HeroActors[g_LocalHeroIndex] !=
              *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffce0);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                               (&local_74,&g_ZeroVector,
                                (CMatrix3x4f *)
                                (this_ptr->base_enemy).base_character.model.bone_transform.
                                bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 4)].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar9);
            core_enemy_cpp_FUN_004a9880();
          }
          iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          if ((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x120))(), iVar7 != 0)
             ) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,7,1);
          }
          goto LAB_005f0010;
        }
        goto LAB_005f04ff;
      }
LAB_005f094d:
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      if (iVar7 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
        }
        goto LAB_005f0010;
      }
      if (*(int *)(this_ptr->field6_0xbed8 + 0x10) != 0) {
        local_104 = *(float *)(iVar7 + 0x20) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        local_100 = *(float *)(iVar7 + 0x24) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        local_fc = *(float *)(iVar7 + 0x28) -
                   (this_ptr->base_enemy).base_character.base_actor.location.position.z;
        local_24 = SQRT(local_fc * local_fc + local_104 * local_104 + local_100 * local_100);
        if (((this_ptr->base_enemy).guard_distance < local_24) || ((float)_DAT_00657d5c < local_24))
        {
          (this_ptr->base_enemy).field6_0xbe38[4] = '\0';
          (this_ptr->base_enemy).field6_0xbe38[5] = '\0';
          (this_ptr->base_enemy).field6_0xbe38[6] = '\0';
          (this_ptr->base_enemy).field6_0xbe38[7] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
          goto LAB_005f0010;
        }
      }
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (*(CDemonActor **)(this_ptr->field6_0xbed8 + 0x10),
                           g_CTrapClassInfo.name_hash);
      if ((pCVar12 == (CDemonActor *)0x0) || (local_18 != 0xf)) {
        iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (this_ptr->type == 2) {
          if ((*(int *)this_ptr->field8_0xbef0 == 0) || (*(int *)(this_ptr->field8_0xbef0 + 4) == 0)
             ) {
            g_CurrentFilename = "..\\core\\werewolf.cpp";
            g_CurrentLineNumber = 0x1ad;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4),
                                &local_f8,(CVector3f *)(*(int *)this_ptr->field8_0xbef0 + 0x20));
            if (0.0 <= pCVar9->z) {
              pCVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 (*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4),
                                  &local_128,
                                  (CVector3f *)(*(int *)(this_ptr->field8_0xbef0 + 4) + 0x20));
              if (0.0 <= pCVar9->z) {
                iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
                iVar14 = *(int *)this_ptr->field8_0xbef0;
                local_1dc = *(float *)(iVar7 + 0x20) - *(float *)(iVar14 + 0x20);
                local_1d8 = *(float *)(iVar7 + 0x24) - *(float *)(iVar14 + 0x24);
                local_1d4 = *(float *)(iVar7 + 0x28) - *(float *)(iVar14 + 0x28);
                iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
                iVar14 = *(int *)(this_ptr->field8_0xbef0 + 4);
                local_110 = *(float *)(iVar7 + 0x20) - *(float *)(iVar14 + 0x20);
                local_10c = *(float *)(iVar7 + 0x24) - *(float *)(iVar14 + 0x24);
                local_108 = *(float *)(iVar7 + 0x28) - *(float *)(iVar14 + 0x28);
                if (SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) <
                    SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8))
                goto LAB_005f0ae7;
                iVar7 = *(int *)(this_ptr->field8_0xbef0 + 4);
              }
              else {
                iVar7 = *(int *)(this_ptr->field8_0xbef0 + 4);
              }
            }
            else {
LAB_005f0ae7:
              iVar7 = *(int *)this_ptr->field8_0xbef0;
            }
          }
          iVar14 = this_ptr->phase;
          if ((iVar14 == 1) || (iVar14 == 3)) {
            local_134 = *(float *)(iVar7 + 0x20) -
                        (this_ptr->base_enemy).base_character.base_actor.location.position.x;
            local_130 = *(float *)(iVar7 + 0x24) -
                        (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_12c = *(float *)(iVar7 + 0x28) -
                        (this_ptr->base_enemy).base_character.base_actor.location.position.z;
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)_DAT_00657d64) {
              iVar14 = this_ptr->phase + 1;
              this_ptr->phase = iVar14;
              if (3 < iVar14) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = DAT_00665768;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) && (this_ptr->phase = iVar14 + 1, 3 < iVar14 + 1))
          {
            this_ptr->phase = 0;
          }
        }
        local_1e0 = DAT_0066575c;
        local_30 = DAT_0066575c;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
        (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
             (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
        local_1e8 = 0;
        local_1e4 = 0;
        (**(code **)(*(int *)(iVar7 + 0x154) + 0xbc))();
        iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (iVar14 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
        }
        else if (iVar14 < 1) {
          pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(this_ptr->field6_0xbed8 + 0x10),
                               g_CTrapClassInfo.name_hash);
          if (pCVar12 == (CDemonActor *)0x0) {
            local_194.x = *(float *)(iVar7 + 0x20) -
                          (this_ptr->base_enemy).base_character.base_actor.location.position.x;
            local_194.y = *(float *)(iVar7 + 0x24) -
                          (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_194.z = *(float *)(iVar7 + 0x28) -
                          (this_ptr->base_enemy).base_character.base_actor.location.position.z;
            if (&local_bc != &local_194) {
              local_bc.x = local_194.x;
              local_bc.y = local_194.y;
              local_bc.z = local_194.z;
            }
            local_28 = SQRT(local_bc.z * local_bc.z +
                            local_bc.x * local_bc.x + local_bc.y * local_bc.y);
            local_1c = 20.0;
            if (this_ptr->type == 1) {
              local_1c = 10.0;
            }
            if (this_ptr->type == 2) {
              local_1c = 10.0;
            }
            pCVar1 = &(this_ptr->base_enemy).base_character.model;
            if (local_1c < local_28) {
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (&local_170,&local_bc);
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_170.y -
                                    (this_ptr->base_enemy).base_character.base_actor.orient.bank);
              if (ABS(local_14) < (float)_DAT_00657d74) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,8,1);
                iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.85);
                if (iVar7 != 0) {
                  core_werewolf_cpp_FUN_005f11e0();
                }
                iVar7 = 0;
                for (iVar14 = 0; iVar14 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
                    iVar14 = iVar14 + 1) {
                  pCVar11 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)
                                        (g_CDemonSetPtr->field19_0x14f0a0 + iVar7 + 8000),
                                       g_CWerewolfClassInfo.name_hash);
                  if (((pCVar11 != (CWerewolf *)0x0) && (pCVar11 != this_ptr)) &&
                     (pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                          (&(pCVar11->base_enemy).base_character.model.
                                            motion_controller), pSVar10->state_index == 8)) {
                    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
                    if (iVar7 == 1) {
                      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
                           (this_ptr->base_enemy).base_character.base_actor.orient.bank +
                           _DAT_00657d84;
                    }
                    if (iVar7 == 2) {
                      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
                           (this_ptr->base_enemy).base_character.base_actor.orient.bank +
                           _DAT_00657d88;
                    }
                    break;
                  }
                  iVar7 = iVar7 + 4;
                }
              }
            }
            else if ((local_28 < DAT_0066575c * _DAT_00657d6c) && (local_18 == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
          }
        }
        else {
          if ((this_ptr->type == 2) && ((this_ptr->phase == 1 || (this_ptr->phase == 3))))
          goto LAB_005f0010;
          if (*(float *)(this_ptr->base_enemy).field6_0xbe38 <= 0.0) {
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            if (iVar7 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,2,1);
            }
            if (iVar7 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,3,1);
            }
            if (iVar7 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,4,1);
            }
            (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[2] = -0x80;
            (this_ptr->base_enemy).field6_0xbe38[3] = '?';
            iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.6);
            if (iVar7 != 0) {
              core_werewolf_cpp_FUN_005f11e0();
            }
          }
        }
        fVar3 = *(float *)(this_ptr->field6_0xbed8 + 4) - in_stack_00000008;
        *(float *)(this_ptr->field6_0xbed8 + 4) = fVar3;
        if (fVar3 < 0.0) {
          core_werewolf_cpp_FUN_005f11e0();
        }
        goto LAB_005f0010;
      }
LAB_005f092a:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
    }
    else {
      pCVar1 = &(this_ptr->base_enemy).base_character.model;
      if (local_18 < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_26c);
        local_26c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
        local_26c.attacker = (CDemonActor *)this_ptr;
        local_26c.wielder = (CDemonActor *)this_ptr;
        local_14 = local_26c.damage_amount;
        pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_11c,&g_ZeroVector,
                            (CMatrix3x4f *)
                            (this_ptr->base_enemy).base_character.model.bone_transform.
                            bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 8)].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_164,pCVar9);
        core_enemy_cpp_FUN_004a9880();
        iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x120))(), iVar7 != 0))
        {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,7,1);
        }
        goto LAB_005f0010;
      }
      if (local_18 < 0xe) {
        if (local_18 < 8) goto LAB_005f0010;
        if (8 < local_18) {
          if (((local_18 == 0xd) && ((this_ptr->base_enemy).pool_me == 0)) &&
             ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
            pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                               (pCVar1,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_1b8,pCVar9);
            core_gore_cpp_FUN_004ede30();
            (this_ptr->base_enemy).pool_me = 1;
          }
          goto LAB_005f0010;
        }
        if (g_HeroActors[g_LocalHeroIndex] != *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4))
        {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_230);
          local_230.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_230.attacker = (CDemonActor *)this_ptr;
          local_230.wielder = (CDemonActor *)this_ptr;
          local_14 = local_230.damage_amount;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_1d0,&g_ZeroVector,
                              (CMatrix3x4f *)
                              (this_ptr->base_enemy).base_character.model.bone_transform.
                              bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 0xc)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_8c,pCVar9);
          core_enemy_cpp_FUN_004a9880();
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_68,&g_ZeroVector,
                              (CMatrix3x4f *)
                              (this_ptr->base_enemy).base_character.model.bone_transform.
                              bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 8)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_5c,pCVar9);
          core_enemy_cpp_FUN_004a9880();
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_1a0,&g_ZeroVector,
                              (CMatrix3x4f *)
                              (this_ptr->base_enemy).base_character.model.bone_transform.
                              bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 4)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_c8,pCVar9);
          core_enemy_cpp_FUN_004a9880();
        }
        iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x120))(), iVar7 != 0))
        {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,7,1);
        }
LAB_005f04ff:
        if (*(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) != g_HeroActors[g_LocalHeroIndex])
        {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2e4);
          local_2e4.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_2e4.attacker = (CDemonActor *)this_ptr;
          local_2e4.wielder = (CDemonActor *)this_ptr;
          local_14 = local_2e4.damage_amount;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_1f4,&g_ZeroVector,
                              (CMatrix3x4f *)
                              (this_ptr->base_enemy).base_character.model.bone_transform.
                              bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 0xc)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_50,pCVar9);
          core_enemy_cpp_FUN_004a9880();
        }
        iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x120))(), iVar7 != 0))
        {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,7,1);
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
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
      if (extraout_EAX == 0) {
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)this_ptr);
        iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (iVar7 == 0) goto LAB_005f0010;
        if ((iVar7 != 0) && (*(int *)(this_ptr->field6_0xbed8 + 0x10) != 0)) {
          local_b0 = *(float *)(iVar7 + 0x20) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_ac = *(float *)(iVar7 + 0x24) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_a8 = *(float *)(iVar7 + 0x28) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.z;
          local_2c = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
          if (((this_ptr->base_enemy).guard_distance < local_2c) ||
             ((float)_DAT_00657d5c < local_2c)) {
            (this_ptr->base_enemy).field6_0xbe38[4] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[5] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[6] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[7] = '\0';
            goto LAB_005f0010;
          }
        }
        pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(this_ptr->field6_0xbed8 + 0x10),
                             g_CTrapClassInfo.name_hash);
        if ((pCVar12 != (CDemonActor *)0x0) && (local_18 == 0xe)) goto LAB_005f092a;
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) goto LAB_005f0010;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
        if (iVar7 != 0) {
          core_werewolf_cpp_FUN_005f11e0();
        }
        if (local_18 == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0xf,1);
          goto LAB_005f0010;
        }
      }
      else if (local_18 == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,0xf,1);
        goto LAB_005f0010;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base_enemy).base_character.model.motion_controller,1,1);
    }
    goto LAB_005f0010;
  }
  uVar4 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
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
              (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar4 < 3) {
      if ((uVar8 == 0xe) || (uVar8 == 0xf)) goto LAB_005effe5;
      if (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) <=
          ABS(*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc))) {
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
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_enemy).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
LAB_005f0010:
  if ((local_18 == 0x13) && (*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 != 0)) {
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->field6_0xbed8 + 0xc));
    if (iVar7 == 0) {
      uVar13 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                         ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      *(uint *)(this_ptr->field6_0xbed8 + 0xc) = uVar13;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field6_0xbed8 + 0xc));
  }
  local_20 = 1.0;
  if (this_ptr->type == 0) {
    local_20 = 0.75;
  }
  dVar15 = _DAT_00657d94;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar15 = _DAT_00657d8c;
  }
  *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x348) = local_20 * (float)dVar15;
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base_enemy).base_character.model.motion_controller);
  iVar7 = pSVar10->state_index;
  if (((((iVar7 != 0xd) && (iVar7 != 0)) && (iVar7 != 0xe)) && (iVar7 != 0x14)) ||
     ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc != 0)) {
    iVar7 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
    if ((iVar7 != 0) &&
       (pCVar11 = (CWerewolf *)(**(code **)(*(int *)(iVar7 + 0x154) + 0x108))(), pCVar11 == this_ptr
       )) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4));
    }
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)_DAT_00657d5c;
    local_ec = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_e8 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) *
               in_stack_00000008;
    pCVar9 = &(this_ptr->base_enemy).base_character.model.accumulated_root_motion;
    local_e4 = in_stack_00000008 *
               *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
    pcVar2 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
    local_80 = local_ec + pCVar9->x;
    local_7c = local_e8 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    local_78 = local_e4 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    local_1c4 = local_80 + *(float *)pcVar2;
    local_1c0 = local_7c + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    local_1bc = local_78 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar9->x = (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    pCVar6 = &this_ptr->base_enemy;
    (pCVar6->base_character).field2_0x240c[0x18] = '\0';
    (pCVar6->base_character).field2_0x240c[0x19] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar6->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(uint *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  core_werewolf_cpp_FUN_005f1e40();
  this_ptr->field11_0xbf00 =
       (int)(in_stack_00000008 * (float)_DAT_00657d9c + (float)this_ptr->field11_0xbf00);
  return;
}
