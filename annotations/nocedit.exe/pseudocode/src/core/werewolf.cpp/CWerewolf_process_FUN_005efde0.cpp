// Name: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
// Address: 005efde0
// Address Range: [[005efde0, 005efee6] [005eff1e, 005f02e4] [005f0456, 005f0535] [005f05a4, 005f05ff] [005f0704, 005f0721] [005f07c7, 005f1095] [005f10fe, 005f1195]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_process_FUN_005efde0(CWerewolf * this_ptr)
// Globals:
//   undefined4 DAT_00002424
//   TerminatedCString s_s_confused_while_walking_00657ca1
//   TerminatedCString s_core_werewolf_cpp_00657ccb
//   TerminatedCString s_Alpha_werewolf_requires__00657ce0
//   TerminatedCString s_Phase_d_Timer_f_00657d04
//   TerminatedCString s_s_gave_up_chase_I_m_conf_00657d1a
//   TerminatedCString s_werewolf_eat_wav_00657d3b
//   undefined4 DAT_00657d4c
//   undefined4 DAT_00657d54
//   undefined4 DAT_00657d5c
//   undefined4 DAT_00657d64
//   undefined4 DAT_00657d6c
//   undefined4 DAT_00657d74
//   undefined4 DAT_00657d84
//   undefined4 DAT_00657d88
//   undefined4 DAT_00657d8c
//   undefined4 DAT_00657d94
//   undefined4 DAT_00657d9c
//   undefined4 DAT_0066575c
//   undefined4 DAT_00665768
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 DAT_0326525c
//   undefined4 g_CTrapClassInfo.name_hash
//   undefined4 g_CWerewolfClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_gore.cpp_FUN_004ede30
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_werewolf.cpp_FUN_005f11e0
//   core_werewolf.cpp_FUN_005f1e40
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  CEnemy *pCVar7;
  int iVar8;
  uint uVar9;
  CVector3f *pCVar10;
  CWerewolf *pCVar11;
  int extraout_EAX;
  CDemonActor *pCVar12;
  int extraout_EAX_00;
  int iVar13;
  undefined4 uVar14;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar15;
  float10 fVar16;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffce0;
  SDamageInfo local_2e4;
  SDamageInfo local_2a8;
  SDamageInfo local_26c;
  SDamageInfo local_230;
  CVector3f local_1f4;
  undefined4 local_1e8;
  undefined4 local_1e4;
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
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
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
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar9 < 10) {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
    else if (uVar9 < 0xb) {
      pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_158,*(int *)(this_ptr->field4_0xbec0 + 0xc));
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_98,pCVar10);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      fVar16 = (float10)local_14 * (float10)_DAT_00657d7c;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,local_14));
      local_34 = (int)ROUND(fVar16);
      core_gore_cpp_FUN_004edbb0();
    }
    else if (uVar9 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
  }
  fVar3 = (this_ptr->base_enemy).speed;
  fVar5 = (float)_DAT_00657d4c;
  iVar8 = this_ptr->type;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  if (iVar8 == 2) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) *
         (float)_DAT_00657d54;
  }
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
  uVar9 = *(uint *)(iVar8 + 0x24);
  local_18 = uVar9;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    iVar8 = (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)this_ptr,in_stack_fffffce0);
    if ((iVar8 == 0) &&
       (*(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) == g_HeroActors[g_LocalHeroIndex])) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2a8);
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_e0,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base_enemy).base_character.model.bone_transform.
                           bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 0xc)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_140,pCVar10);
      core_enemy_cpp_FUN_004a9880();
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_d4,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base_enemy).base_character.model.bone_transform.
                           bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 8)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_188,pCVar10);
      core_enemy_cpp_FUN_004a9880();
      local_2a8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_2a8.attacker = (CDemonActor *)this_ptr;
      local_2a8.wielder = (CDemonActor *)this_ptr;
      local_14 = local_2a8.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_17c,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base_enemy).base_character.model.bone_transform.
                           bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 4)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_a4,pCVar10);
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
            pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (&local_74,&g_ZeroVector,
                                 (CMatrix3x4f *)
                                 (this_ptr->base_enemy).base_character.model.bone_transform.
                                 bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 4)].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar10);
            core_enemy_cpp_FUN_004a9880();
          }
          iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          if ((iVar8 != 0) && (iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), iVar8 != 0)
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
      iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      if (iVar8 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
        }
        goto LAB_005f0010;
      }
      if (*(int *)(this_ptr->field6_0xbed8 + 0x10) != 0) {
        local_104 = *(float *)(iVar8 + 0x20) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        local_100 = *(float *)(iVar8 + 0x24) -
                    (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        local_fc = *(float *)(iVar8 + 0x28) -
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
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (this_ptr->type == 2) {
          if ((*(int *)this_ptr->field8_0xbef0 == 0) || (*(int *)(this_ptr->field8_0xbef0 + 4) == 0)
             ) {
            g_CurrentFilename = "..\\core\\werewolf.cpp";
            g_CurrentLineNumber = 0x1ad;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4),
                                 &local_f8,(CVector3f *)(*(int *)this_ptr->field8_0xbef0 + 0x20));
            if (0.0 <= pCVar10->z) {
              pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                  (*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4),
                                   &local_128,
                                   (CVector3f *)(*(int *)(this_ptr->field8_0xbef0 + 4) + 0x20));
              if (0.0 <= pCVar10->z) {
                iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
                iVar15 = *(int *)this_ptr->field8_0xbef0;
                local_1dc = *(float *)(iVar8 + 0x20) - *(float *)(iVar15 + 0x20);
                local_1d8 = *(float *)(iVar8 + 0x24) - *(float *)(iVar15 + 0x24);
                local_1d4 = *(float *)(iVar8 + 0x28) - *(float *)(iVar15 + 0x28);
                iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
                iVar15 = *(int *)(this_ptr->field8_0xbef0 + 4);
                local_110 = *(float *)(iVar8 + 0x20) - *(float *)(iVar15 + 0x20);
                local_10c = *(float *)(iVar8 + 0x24) - *(float *)(iVar15 + 0x24);
                local_108 = *(float *)(iVar8 + 0x28) - *(float *)(iVar15 + 0x28);
                if (SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) <
                    SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8))
                goto LAB_005f0ae7;
                iVar8 = *(int *)(this_ptr->field8_0xbef0 + 4);
              }
              else {
                iVar8 = *(int *)(this_ptr->field8_0xbef0 + 4);
              }
            }
            else {
LAB_005f0ae7:
              iVar8 = *(int *)this_ptr->field8_0xbef0;
            }
          }
          iVar15 = this_ptr->phase;
          if ((iVar15 == 1) || (iVar15 == 3)) {
            local_134 = *(float *)(iVar8 + 0x20) -
                        (this_ptr->base_enemy).base_character.base_actor.location.position.x;
            local_130 = *(float *)(iVar8 + 0x24) -
                        (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_12c = *(float *)(iVar8 + 0x28) -
                        (this_ptr->base_enemy).base_character.base_actor.location.position.z;
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)_DAT_00657d64) {
              iVar15 = this_ptr->phase + 1;
              this_ptr->phase = iVar15;
              if (3 < iVar15) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = DAT_00665768;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) && (this_ptr->phase = iVar15 + 1, 3 < iVar15 + 1))
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
        (**(code **)(*(int *)(iVar8 + 0x154) + 0xbc))();
        iVar15 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (iVar15 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
        }
        else if (iVar15 < 1) {
          pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(this_ptr->field6_0xbed8 + 0x10),
                               g_CTrapClassInfo.name_hash);
          if (pCVar12 == (CDemonActor *)0x0) {
            local_194.x = *(float *)(iVar8 + 0x20) -
                          (this_ptr->base_enemy).base_character.base_actor.location.position.x;
            local_194.y = *(float *)(iVar8 + 0x24) -
                          (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_194.z = *(float *)(iVar8 + 0x28) -
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
                iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.85);
                if (iVar8 != 0) {
                  core_werewolf_cpp_FUN_005f11e0();
                }
                iVar8 = 0;
                for (iVar15 = 0; iVar15 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
                    iVar15 = iVar15 + 1) {
                  pCVar11 = (CWerewolf *)
                            core_actor_cpp_castToClassHash_FUN_0040c790
                                      (*(CDemonActor **)
                                        (g_CDemonSetPtr->field19_0x14f0a0 + iVar8 + 8000),
                                       g_CWerewolfClassInfo.name_hash);
                  if (((pCVar11 != (CWerewolf *)0x0) && (pCVar11 != this_ptr)) &&
                     (iVar13 = core_motion_cpp_CMotionController_FUN_0052dab0
                                         (&(pCVar11->base_enemy).base_character.model.
                                           motion_controller), *(int *)(iVar13 + 0x24) == 8)) {
                    iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
                    if (iVar8 == 1) {
                      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
                           (this_ptr->base_enemy).base_character.base_actor.orient.bank +
                           _DAT_00657d84;
                    }
                    if (iVar8 == 2) {
                      (this_ptr->base_enemy).base_character.base_actor.orient.bank =
                           (this_ptr->base_enemy).base_character.base_actor.orient.bank +
                           _DAT_00657d88;
                    }
                    break;
                  }
                  iVar8 = iVar8 + 4;
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
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
            if (iVar8 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,2,1);
            }
            if (iVar8 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,3,1);
            }
            if (iVar8 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,4,1);
            }
            (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[2] = -0x80;
            (this_ptr->base_enemy).field6_0xbe38[3] = '?';
            iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.6);
            if (iVar8 != 0) {
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
        pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_11c,&g_ZeroVector,
                             (CMatrix3x4f *)
                             (this_ptr->base_enemy).base_character.model.bone_transform.
                             bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 8)].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_164,pCVar10);
        core_enemy_cpp_FUN_004a9880();
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar8 != 0) && (iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), iVar8 != 0))
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
            pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                (pCVar1,&local_1ac,0);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_1b8,pCVar10);
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
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1d0,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base_enemy).base_character.model.bone_transform.
                               bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 0xc)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_8c,pCVar10);
          core_enemy_cpp_FUN_004a9880();
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_68,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base_enemy).base_character.model.bone_transform.
                               bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 8)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_5c,pCVar10);
          core_enemy_cpp_FUN_004a9880();
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1a0,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base_enemy).base_character.model.bone_transform.
                               bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 4)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_c8,pCVar10);
          core_enemy_cpp_FUN_004a9880();
        }
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar8 != 0) && (iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), iVar8 != 0))
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
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_1f4,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base_enemy).base_character.model.bone_transform.
                               bone_world_matrices[*(int *)(this_ptr->field4_0xbec0 + 0xc)].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_50,pCVar10);
          core_enemy_cpp_FUN_004a9880();
        }
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar8 != 0) && (iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), iVar8 != 0))
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
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (iVar8 == 0) goto LAB_005f0010;
        if ((iVar8 != 0) && (*(int *)(this_ptr->field6_0xbed8 + 0x10) != 0)) {
          local_b0 = *(float *)(iVar8 + 0x20) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.x;
          local_ac = *(float *)(iVar8 + 0x24) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.y;
          local_a8 = *(float *)(iVar8 + 0x28) -
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
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
        if (iVar8 != 0) {
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
              (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar8,1);
  }
  else {
    if (uVar4 < 3) {
      if ((uVar9 == 0xe) || (uVar9 == 0xf)) goto LAB_005effe5;
      if (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) <=
          ABS(*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc))) {
        iVar8 = 1;
      }
      else {
        iVar8 = 8;
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
    iVar8 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar8 == 0) {
      uVar14 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                         ((CDemonActor *)this_ptr,"werewolf-eat.wav");
      *(undefined4 *)(this_ptr->field6_0xbed8 + 0xc) = uVar14;
    }
  }
  else {
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  }
  local_20 = 1.0;
  if (this_ptr->type == 0) {
    local_20 = 0.75;
  }
  dVar6 = _DAT_00657d94;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar6 = _DAT_00657d8c;
  }
  *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x348) = local_20 * (float)dVar6;
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0
                    (&(this_ptr->base_enemy).base_character.model.motion_controller);
  iVar8 = *(int *)(iVar8 + 0x24);
  if (((((iVar8 != 0xd) && (iVar8 != 0)) && (iVar8 != 0xe)) && (iVar8 != 0x14)) ||
     ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc != 0)) {
    iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
    if ((iVar8 != 0) &&
       (pCVar11 = (CWerewolf *)(**(code **)(*(int *)(iVar8 + 0x154) + 0x108))(), pCVar11 == this_ptr
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
    pCVar10 = &(this_ptr->base_enemy).base_character.model.accumulated_root_motion;
    local_e4 = in_stack_00000008 *
               *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
    pcVar2 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
    local_80 = local_ec + pCVar10->x;
    local_7c = local_e8 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    local_78 = local_e4 + (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    local_1c4 = local_80 + *(float *)pcVar2;
    local_1c0 = local_7c + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    local_1bc = local_78 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y =
         (this_ptr->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar10->x = (this_ptr->base_enemy).base_character.model.accumulated_root_motion.y;
    pCVar7 = &this_ptr->base_enemy;
    (pCVar7->base_character).field2_0x240c[0x18] = '\0';
    (pCVar7->base_character).field2_0x240c[0x19] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
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


// Assembly code:
// 005efde0: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
// 005efde1: PUSH ESI
// 005efde2: PUSH EDI
// 005efde3: PUSH EBP
// 005efde4: MOV EBP,ESP
// 005efde6: SUB ESP,0x310
// 005efdec: SUB EBP,0x7a
// 005efdef: MOV EBX,dword ptr [EBP + 0x8e]
// 005efdf5: PUSH dword ptr [EBP + 0x92]
// 005efdfb: PUSH EBX
// 005efdfc: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005efe01: ADD ESP,0x8
// 005efe04: TEST EAX,EAX
// 005efe06: JZ 0x005efe72
//   XREF to: 005efe72 (CONDITIONAL_JUMP)
// 005efe08: CMP dword ptr [EBX + 0xbebc],0x2
// 005efe0f: JZ 0x005efe89
//   XREF to: 005efe89 (CONDITIONAL_JUMP)
// 005efe11: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_005efe11
// 005efe17: MOV dword ptr [EAX + 0x8],0x0
// 005efe1e: FLD float ptr [EBP + 0x92]
// 005efe24: MOV EDX,dword ptr [EAX + 0x8]
// 005efe27: MOV dword ptr [EAX + 0x4],EDX
// 005efe2a: MOV EDX,dword ptr [EAX + 0x4]
// 005efe2d: MOV dword ptr [EAX],EDX
// 005efe2f: FMUL float ptr [EBX + 0xbe24]
// 005efe35: LEA ESI,[EBX + 0x158]
// 005efe3b: FSTP float ptr [EBP + 0x4e]
// 005efe3e: FLD float ptr [EBP + 0x4e]
//   Label: LAB_005efe3e
// 005efe41: FLDZ
// 005efe43: FCOMPP
// 005efe45: FNSTSW AX
// 005efe47: SAHF
// 005efe48: JNC 0x005eff51
//   XREF to: 005eff51 (CONDITIONAL_JUMP)
// 005efe4e: LEA EAX,[EBP + 0x4e]
// 005efe51: PUSH EAX
// 005efe52: PUSH ESI
// 005efe53: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005efe58: ADD ESP,0x8
// 005efe5b: MOV EDI,EAX
// 005efe5d: CMP EAX,0xa
// 005efe60: JNC 0x005eff35
//   XREF to: 005eff35 (CONDITIONAL_JUMP)
// 005efe66: PUSH EDI
// 005efe67: PUSH EBX
// 005efe68: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005efe6d: ADD ESP,0x8
// 005efe70: JMP 0x005efe3e
//   XREF to: 005efe3e (UNCONDITIONAL_JUMP)
// 005efe72: MOV ECX,dword ptr [EBX + 0xbee4]
//   Label: LAB_005efe72
// 005efe78: PUSH ECX
// 005efe79: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005efe7e: ADD ESP,0x4
// 005efe81: LEA ESP,[EBP + 0x7a]
// 005efe84: POP EBP
// 005efe85: POP EDI
// 005efe86: POP ESI
// 005efe87: POP EBX
// 005efe88: RET
// 005efe89: FLD float ptr [EBX + 0xbefc]
//   Label: LAB_005efe89
// 005efe8f: FLDZ
// 005efe91: FCOMPP
// 005efe93: FNSTSW AX
// 005efe95: SAHF
// 005efe96: JA 0x005efe11
//   XREF to: 005efe11 (CONDITIONAL_JUMP)
// 005efe9c: FLD float ptr [EBX + 0xbefc]
// 005efea2: FSUB float ptr [EBP + 0x92]
// 005efea8: FSTP float ptr [EBX + 0xbefc]
// 005efeae: JMP 0x005efe11
//   XREF to: 005efe11 (UNCONDITIONAL_JUMP)
// 005efeb3: MOV EAX,dword ptr [EBX + 0xbecc]
//   Label: LAB_005efeb3
// 005efeb9: PUSH EAX
// 005efeba: LEA EAX,[EBP + 0xffffff32]
// 005efec0: PUSH EAX
// 005efec1: PUSH ESI
// 005efec2: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005efec7: ADD ESP,0xc
// 005efeca: PUSH EAX
// 005efecb: LEA EAX,[EBP + -0xe]
// 005efece: PUSH EAX
// 005efecf: PUSH EBX
// 005efed0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005efed5: ADD ESP,0xc
// 005efed8: PUSH 0x41400000
// 005efedd: PUSH 0x41000000
// 005efee2: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005eff1e: PUSH 0x1
//   Label: LAB_005eff1e
// 005eff20: PUSH EBX
// 005eff21: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005eff27: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 005eff28: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 005eff2d: ADD ESP,0xc
// 005eff30: JMP 0x005efe3e
//   XREF to: 005efe3e (UNCONDITIONAL_JUMP)
// 005eff35: JBE 0x005efeb3
//   Label: LAB_005eff35
//   XREF to: 005efeb3 (CONDITIONAL_JUMP)
// 005eff3b: CMP EAX,0x29a
// 005eff40: JZ 0x005eff1e
//   XREF to: 005eff1e (CONDITIONAL_JUMP)
// 005eff42: PUSH EDI
// 005eff43: PUSH EBX
// 005eff44: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005eff49: ADD ESP,0x8
// 005eff4c: JMP 0x005efe3e
//   XREF to: 005efe3e (UNCONDITIONAL_JUMP)
// 005eff51: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_005eff51
// 005eff57: FLD float ptr [EBP + 0x92]
// 005eff5d: FMUL double ptr [0x00657d4c]
//   XREF to: 00657d4c (READ)
// 005eff63: FMULP
// 005eff65: FLD float ptr [EBX + 0x23b4]
// 005eff6b: MOV ESI,dword ptr [EBX + 0xbebc]
// 005eff71: FSTP float ptr [EBX + 0x2434]
// 005eff77: FSTP float ptr [EBX + 0x2438]
// 005eff7d: CMP ESI,0x2
// 005eff80: JNZ 0x005eff98
//   XREF to: 005eff98 (CONDITIONAL_JUMP)
// 005eff82: FLD float ptr [EBX + 0x2438]
// 005eff88: FLD ST0
// 005eff8a: FMUL double ptr [0x00657d54]
//   XREF to: 00657d54 (READ)
// 005eff90: FSTP ST1
// 005eff92: FSTP float ptr [EBX + 0x2438]
// 005eff98: LEA ESI,[EBX + 0x158]
//   Label: LAB_005eff98
// 005eff9e: PUSH ESI
// 005eff9f: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005effa4: ADD ESP,0x4
// 005effa7: PUSH dword ptr [EBP + 0x92]
// 005effad: MOV EDI,dword ptr [EAX + 0x24]
// 005effb0: PUSH EBX
// 005effb1: MOV dword ptr [EBP + 0x72],EDI
// 005effb4: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005effb9: ADD ESP,0x8
// 005effbc: TEST EAX,EAX
// 005effbe: JZ 0x005f0296
//   XREF to: 005f0296 (CONDITIONAL_JUMP)
// 005effc4: MOV EAX,dword ptr [EBX + 0x25b0]
// 005effca: CMP EAX,0x2
// 005effcd: JNC 0x005f0286
//   XREF to: 005f0286 (CONDITIONAL_JUMP)
// 005effd3: CMP EAX,0x1
// 005effd6: JNZ 0x005f028d
//   XREF to: 005f028d (CONDITIONAL_JUMP)
// 005effdc: CMP EDI,0xe
// 005effdf: JNZ 0x005f023a
//   XREF to: 005f023a (CONDITIONAL_JUMP)
// 005effe5: PUSH 0x1
//   Label: LAB_005effe5
// 005effe7: PUSH 0xf
// 005effe9: LEA EAX,[EBX + 0x158]
//   Label: LAB_005effe9
// 005effef: PUSH EAX
// 005efff0: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005efff0
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005efff5: ADD ESP,0xc
//   Label: LAB_005efff5
// 005efff8: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_005efff8
// 005efffe: MOV dword ptr [EAX + 0x8],0x0
// 005f0005: MOV EDX,dword ptr [EAX + 0x8]
// 005f0008: MOV dword ptr [EAX + 0x4],EDX
// 005f000b: MOV EDX,dword ptr [EAX + 0x4]
// 005f000e: MOV dword ptr [EAX],EDX
// 005f0010: CMP dword ptr [EBP + 0x72],0x13
//   Label: LAB_005f0010
// 005f0014: JNZ 0x005f1159
//   XREF to: 005f1159 (CONDITIONAL_JUMP)
// 005f001a: CMP dword ptr [EBX + 0x2620],0x0
// 005f0021: JZ 0x005f1159
//   XREF to: 005f1159 (CONDITIONAL_JUMP)
// 005f0027: MOV EAX,dword ptr [EBX + 0xbee4]
// 005f002d: PUSH EAX
// 005f002e: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005f0033: ADD ESP,0x4
// 005f0036: TEST EAX,EAX
// 005f0038: JZ 0x005f113c
//   XREF to: 005f113c (CONDITIONAL_JUMP)
// 005f003e: MOV EDX,0x3f800000
//   Label: LAB_005f003e
// 005f0043: MOV ECX,dword ptr [EBX + 0xbebc]
// 005f0049: MOV dword ptr [EBP + 0x6a],EDX
// 005f004c: TEST ECX,ECX
// 005f004e: JNZ 0x005f0057
//   XREF to: 005f0057 (CONDITIONAL_JUMP)
// 005f0050: MOV dword ptr [EBP + 0x6a],0x3f400000
// 005f0057: MOV EDI,dword ptr [EBP + 0x72]
//   Label: LAB_005f0057
// 005f005a: CMP EDI,0xe
// 005f005d: JNZ 0x005f116d
//   XREF to: 005f116d (CONDITIONAL_JUMP)
// 005f0063: FLD float ptr [EBP + 0x6a]
//   Label: LAB_005f0063
// 005f0066: FMUL double ptr [0x00657d94]
//   XREF to: 00657d94 (READ)
// 005f006c: FSTP float ptr [EBX + 0x2de0]
//   Label: LAB_005f006c
// 005f0072: FLD float ptr [EBX + 0xbe38]
// 005f0078: FLDZ
// 005f007a: FCOMPP
// 005f007c: FNSTSW AX
// 005f007e: SAHF
// 005f007f: JNC 0x005f0093
//   XREF to: 005f0093 (CONDITIONAL_JUMP)
// 005f0081: FLD float ptr [EBX + 0xbe38]
// 005f0087: FSUB float ptr [EBP + 0x92]
// 005f008d: FSTP float ptr [EBX + 0xbe38]
// 005f0093: LEA EAX,[EBX + 0x158]
//   Label: LAB_005f0093
// 005f0099: PUSH EAX
// 005f009a: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f009f: MOV EAX,dword ptr [EAX + 0x24]
// 005f00a2: ADD ESP,0x4
// 005f00a5: CMP EAX,0xd
// 005f00a8: JZ 0x005f1184
//   XREF to: 005f1184 (CONDITIONAL_JUMP)
// 005f00ae: TEST EAX,EAX
// 005f00b0: JZ 0x005f1184
//   XREF to: 005f1184 (CONDITIONAL_JUMP)
// 005f00b6: CMP EAX,0xe
// 005f00b9: JZ 0x005f1184
//   XREF to: 005f1184 (CONDITIONAL_JUMP)
// 005f00bf: CMP EAX,0x14
// 005f00c2: JZ 0x005f1184
//   XREF to: 005f1184 (CONDITIONAL_JUMP)
// 005f00c8: MOV ECX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005f00c8
// 005f00ce: TEST ECX,ECX
// 005f00d0: JZ 0x005f00fc
//   XREF to: 005f00fc (CONDITIONAL_JUMP)
// 005f00d2: PUSH ECX
// 005f00d3: MOV EDX,dword ptr [ECX + 0x154]
// 005f00d9: CALL dword ptr [EDX + 0x108]
// 005f00df: ADD ESP,0x4
// 005f00e2: CMP EAX,EBX
// 005f00e4: JNZ 0x005f00fc
//   XREF to: 005f00fc (CONDITIONAL_JUMP)
// 005f00e6: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005f00ec: PUSH ESI
// 005f00ed: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005f00f3: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005f00f4: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005f00f9: ADD ESP,0x8
// 005f00fc: FLD float ptr [EBP + 0x92]
//   Label: LAB_005f00fc
// 005f0102: FLD ST0
// 005f0104: FMUL double ptr [0x00657d5c]
//   XREF to: 00657d5c (READ)
// 005f010a: FLD float ptr [EBX + 0x242c]
// 005f0110: FXCH
// 005f0112: FSUBR ST0,ST1
// 005f0114: LEA EDI,[EBX + 0x2428]
// 005f011a: FSTP ST1
// 005f011c: FSTP float ptr [EBX + 0x242c]
// 005f0122: FLD float ptr [EDI]
// 005f0124: FMUL ST1
// 005f0126: FSTP float ptr [EBP + -0x62]
// 005f0129: FLD float ptr [EDI + 0x4]
// 005f012c: FMUL ST1
// 005f012e: LEA ESI,[EBX + 0x23ac]
// 005f0134: FSTP float ptr [EBP + -0x5e]
// 005f0137: FMUL float ptr [EDI + 0x8]
// 005f013a: LEA EAX,[EBX + 0x241c]
// 005f0140: FLD float ptr [EBP + -0x62]
// 005f0143: FXCH
// 005f0145: FSTP float ptr [EBP + -0x5a]
// 005f0148: FADD float ptr [ESI]
// 005f014a: FLD float ptr [EBP + -0x5e]
// 005f014d: FXCH
// 005f014f: FSTP float ptr [EBP + 0xa]
// 005f0152: FADD float ptr [ESI + 0x4]
// 005f0155: FLD float ptr [EBP + -0x5a]
// 005f0158: FXCH
// 005f015a: FSTP float ptr [EBP + 0xe]
// 005f015d: FADD float ptr [ESI + 0x8]
// 005f0160: FLD float ptr [EBP + 0xa]
// 005f0163: FXCH
// 005f0165: FSTP float ptr [EBP + 0x12]
// 005f0168: FADD float ptr [EAX]
// 005f016a: FLD float ptr [EBP + 0xe]
// 005f016d: FXCH
// 005f016f: FSTP float ptr [EBP + 0xfffffec6]
// 005f0175: FADD float ptr [EAX + 0x4]
// 005f0178: FLD float ptr [EBP + 0x12]
// 005f017b: FXCH
// 005f017d: FSTP float ptr [EBP + 0xfffffeca]
// 005f0183: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 005f0186: FSTP float ptr [EBP + 0xfffffece]
// 005f018c: MOV dword ptr [ESI + 0x8],0x0
// 005f0193: MOV EDX,dword ptr [ESI + 0x8]
// 005f0196: MOV dword ptr [ESI + 0x4],EDX
// 005f0199: MOV EDX,dword ptr [ESI + 0x4]
// 005f019c: MOV dword ptr [ESI],EDX
// 005f019e: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 005f01a5: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 005f01a8: MOV dword ptr [EAX + 0x4],EDX
// 005f01ab: MOV EDX,dword ptr [EAX + 0x4]
// 005f01ae: MOV dword ptr [EAX],EDX
// 005f01b0: LEA EAX,[EBP + 0xfffffec6]
// 005f01b6: PUSH EAX
// 005f01b7: PUSH EBX
// 005f01b8: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005f01bd: ADD ESP,0x8
// 005f01c0: PUSH EBX
//   Label: LAB_005f01c0
// 005f01c1: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005f01c6: ADD ESP,0x4
// 005f01c9: LEA EAX,[EBX + 0x158]
// 005f01cf: PUSH EAX
// 005f01d0: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005f01d5: ADD ESP,0x4
// 005f01d8: PUSH dword ptr [EBP + 0x92]
// 005f01de: PUSH EBX
// 005f01df: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005f01e4: ADD ESP,0x8
// 005f01e7: PUSH EBX
// 005f01e8: CALL core_werewolf.cpp_FUN_005f1e40
//   XREF to: 005f1e40 (UNCONDITIONAL_CALL)
// 005f01ed: FLD float ptr [EBP + 0x92]
// 005f01f3: FMUL double ptr [0x00657d9c]
//   XREF to: 00657d9c (READ)
// 005f01f9: FLD float ptr [EBX + 0xbf00]
// 005f01ff: FXCH
// 005f0201: FADD ST0,ST1
// 005f0203: ADD ESP,0x4
// 005f0206: FSTP ST1
// 005f0208: FSTP float ptr [EBX + 0xbf00]
// 005f020e: LEA ESP,[EBP + 0x7a]
// 005f0211: POP EBP
// 005f0212: POP EDI
// 005f0213: POP ESI
// 005f0214: POP EBX
// 005f0215: RET
// 005f0216: PUSH 0x1
//   Label: LAB_005f0216
// 005f0218: PUSH 0x0
// 005f021a: PUSH ESI
// 005f021b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0220: ADD ESP,0xc
// 005f0223: PUSH EBX
// 005f0224: PUSH 0x657ca1
//   XREF to: 00657ca1 (DATA)
// 005f0229: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005f022f: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005f0230: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005f0235: JMP 0x005efff5
//   XREF to: 005efff5 (UNCONDITIONAL_JUMP)
// 005f023a: CMP EDI,0xf
//   Label: LAB_005f023a
// 005f023d: JZ 0x005effe5
//   XREF to: 005effe5 (CONDITIONAL_JUMP)
// 005f0243: PUSH EAX
// 005f0244: PUSH EAX
// 005f0245: PUSH ESI
// 005f0246: JMP 0x005efff0
//   XREF to: 005efff0 (UNCONDITIONAL_JUMP)
// 005f024b: CMP EDI,0xe
//   Label: LAB_005f024b
// 005f024e: JZ 0x005effe5
//   XREF to: 005effe5 (CONDITIONAL_JUMP)
// 005f0254: CMP EDI,0xf
// 005f0257: JZ 0x005effe5
//   XREF to: 005effe5 (CONDITIONAL_JUMP)
// 005f025d: FLD float ptr [EBX + 0x2418]
// 005f0263: FABS
// 005f0265: FLD float ptr [EBX + 0x2438]
// 005f026b: FCOMPP
// 005f026d: FNSTSW AX
// 005f026f: SAHF
// 005f0270: JBE 0x005f027c
//   XREF to: 005f027c (CONDITIONAL_JUMP)
// 005f0272: PUSH 0x1
// 005f0274: PUSH 0x8
// 005f0276: PUSH ESI
// 005f0277: JMP 0x005efff0
//   XREF to: 005efff0 (UNCONDITIONAL_JUMP)
// 005f027c: PUSH 0x1
//   Label: LAB_005f027c
// 005f027e: PUSH 0x1
// 005f0280: PUSH ESI
// 005f0281: JMP 0x005efff0
//   XREF to: 005efff0 (UNCONDITIONAL_JUMP)
// 005f0286: JBE 0x005f024b
//   Label: LAB_005f0286
//   XREF to: 005f024b (CONDITIONAL_JUMP)
// 005f0288: CMP EAX,0x3
// 005f028b: JZ 0x005f0216
//   XREF to: 005f0216 (CONDITIONAL_JUMP)
// 005f028d: PUSH 0x1
//   Label: LAB_005f028d
// 005f028f: PUSH 0x0
// 005f0291: JMP 0x005effe9
//   XREF to: 005effe9 (UNCONDITIONAL_JUMP)
// 005f0296: PUSH EBX
//   Label: LAB_005f0296
// 005f0297: MOV EAX,dword ptr [EBX + 0x154]
// 005f029d: CALL dword ptr [EAX + 0x120]
// 005f02a3: ADD ESP,0x4
// 005f02a6: TEST EAX,EAX
// 005f02a8: JNZ 0x005f0456
//   XREF to: 005f0456 (CONDITIONAL_JUMP)
// 005f02ae: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005f02b4: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005f02ba: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005f02c1: JNZ 0x005f0456
//   XREF to: 005f0456 (CONDITIONAL_JUMP)
// 005f02c7: LEA EAX,[EBP + 0xfffffde2]
// 005f02cd: PUSH EAX
// 005f02ce: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005f02d3: ADD ESP,0x4
// 005f02d6: PUSH 0x41700000
// 005f02db: PUSH 0x40e00000
// 005f02e0: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005f0456: MOV EDX,dword ptr [EBP + 0x72]
//   Label: LAB_005f0456
// 005f0459: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005f045e: LEA ESI,[EBX + 0xfd8]
// 005f0464: SHL EAX,0x2
// 005f0467: CMP EDX,0x4
// 005f046a: JNC 0x005f100c
//   XREF to: 005f100c (CONDITIONAL_JUMP)
// 005f0470: CMP EDX,0x1
// 005f0473: JNC 0x005f1057
//   XREF to: 005f1057 (CONDITIONAL_JUMP)
// 005f0479: TEST EDX,EDX
// 005f047b: JNZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f0481: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005f0481
// 005f0487: PUSH EBX
// 005f0488: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005f048d: ADD ESP,0x8
// 005f0490: TEST EAX,EAX
// 005f0492: JZ 0x005f083d
//   XREF to: 005f083d (CONDITIONAL_JUMP)
// 005f0498: MOV EDX,dword ptr [EBP + 0x72]
// 005f049b: LEA EAX,[EBX + 0x158]
// 005f04a1: CMP EDX,0xe
// 005f04a4: JNZ 0x005f082b
//   XREF to: 005f082b (CONDITIONAL_JUMP)
// 005f04aa: PUSH 0x1
// 005f04ac: PUSH 0xf
// 005f04ae: PUSH EAX
// 005f04af: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f04b4: ADD ESP,0xc
// 005f04b7: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f04bc: MOV EDI,dword ptr [EAX + 0x2db87c0]
//   Label: LAB_005f04bc
//   XREF to: 02db87c0 (DATA)
// 005f04c2: CMP EDI,dword ptr [EBX + 0xbe3c]
// 005f04c8: JNZ 0x005f05e2
//   XREF to: 005f05e2 (CONDITIONAL_JUMP)
// 005f04ce: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005f04ce
// 005f04d4: TEST EAX,EAX
// 005f04d6: JZ 0x005f04ff
//   XREF to: 005f04ff (CONDITIONAL_JUMP)
// 005f04d8: PUSH EAX
// 005f04d9: MOV EDX,dword ptr [EAX + 0x154]
// 005f04df: CALL dword ptr [EDX + 0x120]
// 005f04e5: ADD ESP,0x4
// 005f04e8: TEST EAX,EAX
// 005f04ea: JZ 0x005f04ff
//   XREF to: 005f04ff (CONDITIONAL_JUMP)
// 005f04ec: PUSH 0x1
// 005f04ee: PUSH 0x7
// 005f04f0: LEA EAX,[EBX + 0x158]
// 005f04f6: PUSH EAX
// 005f04f7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f04fc: ADD ESP,0xc
// 005f04ff: MOV EDX,dword ptr [0x02db87d0]
//   Label: LAB_005f04ff
//   XREF to: 02db87d0 (READ)
// 005f0505: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005f050b: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005f0512: JZ 0x005f05a4
//   XREF to: 005f05a4 (CONDITIONAL_JUMP)
// 005f0518: LEA EAX,[EBP + 0xfffffda6]
// 005f051e: PUSH EAX
// 005f051f: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005f0524: ADD ESP,0x4
// 005f0527: PUSH 0x41700000
// 005f052c: PUSH 0x40e00000
// 005f0531: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005f05a4: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005f05a4
// 005f05aa: TEST EAX,EAX
// 005f05ac: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f05b2: PUSH EAX
// 005f05b3: MOV EDX,dword ptr [EAX + 0x154]
// 005f05b9: CALL dword ptr [EDX + 0x120]
// 005f05bf: ADD ESP,0x4
// 005f05c2: TEST EAX,EAX
// 005f05c4: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f05ca: PUSH 0x1
// 005f05cc: PUSH 0x7
// 005f05ce: LEA EAX,[EBX + 0x158]
// 005f05d4: PUSH EAX
// 005f05d5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f05da: ADD ESP,0xc
// 005f05dd: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f05e2: LEA EAX,[EBP + 0xfffffe5a]
//   Label: LAB_005f05e2
// 005f05e8: PUSH EAX
// 005f05e9: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005f05ee: ADD ESP,0x4
// 005f05f1: PUSH 0x41700000
// 005f05f6: PUSH 0x40e00000
// 005f05fb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005f0704: LEA EAX,[EBP + 0xfffffe1e]
//   Label: LAB_005f0704
// 005f070a: PUSH EAX
// 005f070b: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005f0710: ADD ESP,0x4
// 005f0713: PUSH 0x41700000
// 005f0718: PUSH 0x40e00000
// 005f071d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005f07c7: MOV EAX,dword ptr [EBX + 0xbe28]
//   Label: LAB_005f07c7
// 005f07cd: TEST EAX,EAX
// 005f07cf: JNZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f07d5: CMP dword ptr [EBX + 0xdc],0x0
// 005f07dc: JNZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f07e2: PUSH EAX
// 005f07e3: LEA EAX,[EBP + 0xfffffede]
// 005f07e9: PUSH EAX
// 005f07ea: PUSH EDI
// 005f07eb: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005f07f0: ADD ESP,0xc
// 005f07f3: PUSH EAX
// 005f07f4: LEA EAX,[EBP + 0xfffffed2]
// 005f07fa: PUSH EAX
// 005f07fb: PUSH EBX
// 005f07fc: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f0801: ADD ESP,0xc
// 005f0804: PUSH 0x0
// 005f0806: LEA EAX,[EBP + 0xfffffed2]
// 005f080c: PUSH EAX
// 005f080d: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005f0813: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 005f0814: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 005f0819: ADD ESP,0xc
// 005f081c: MOV dword ptr [EBX + 0xbe28],0x1
// 005f0826: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f082b: PUSH 0x1
//   Label: LAB_005f082b
// 005f082d: PUSH 0x1
// 005f082f: PUSH EAX
// 005f0830: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0835: ADD ESP,0xc
// 005f0838: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f083d: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005f083d
// 005f0843: MOV EAX,dword ptr [EBX + 0x154]
// 005f0849: PUSH EBX
// 005f084a: CALL dword ptr [EAX + 0x158]
// 005f0850: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005f0856: ADD ESP,0x8
// 005f0859: TEST ECX,ECX
// 005f085b: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f0861: JZ 0x005f08c9
//   XREF to: 005f08c9 (CONDITIONAL_JUMP)
// 005f0863: CMP dword ptr [EBX + 0xbee8],0x0
// 005f086a: JZ 0x005f08c9
//   XREF to: 005f08c9 (CONDITIONAL_JUMP)
// 005f086c: MOV ESI,ECX
// 005f086e: LEA EAX,[EBX + 0x20]
// 005f0871: FLD float ptr [ESI + 0x20]
// 005f0874: FSUB float ptr [EAX]
// 005f0876: FSTP float ptr [EBP + -0x26]
// 005f0879: FLD float ptr [ESI + 0x24]
// 005f087c: FSUB float ptr [EAX + 0x4]
// 005f087f: FST float ptr [EBP + -0x22]
// 005f0882: FMUL float ptr [EBP + -0x22]
// 005f0885: FLD float ptr [EBP + -0x26]
// 005f0888: FMUL ST0
// 005f088a: FLD float ptr [ESI + 0x28]
// 005f088d: FSUB float ptr [EAX + 0x8]
// 005f0890: FXCH
// 005f0892: FADDP ST2,ST0
// 005f0894: FST float ptr [EBP + -0x1e]
// 005f0897: FMUL float ptr [EBP + -0x1e]
// 005f089a: FADDP
// 005f089c: FSQRT
// 005f089e: FST float ptr [EBP + 0x5e]
// 005f08a1: FCOMP float ptr [EBX + 0xbe34]
// 005f08a7: FNSTSW AX
// 005f08a9: SAHF
// 005f08aa: JBE 0x005f08bb
//   XREF to: 005f08bb (CONDITIONAL_JUMP)
// 005f08ac: MOV dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_005f08ac
// 005f08b6: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f08bb: FLD float ptr [EBP + 0x5e]
//   Label: LAB_005f08bb
// 005f08be: FCOMP double ptr [0x00657d5c]
//   XREF to: 00657d5c (READ)
// 005f08c4: FNSTSW AX
// 005f08c6: SAHF
// 005f08c7: JA 0x005f08ac
//   XREF to: 005f08ac (CONDITIONAL_JUMP)
// 005f08c9: MOV EAX,[0x03f87418]
//   Label: LAB_005f08c9
//   XREF to: 03f87418 (READ)
// 005f08ce: PUSH EAX
// 005f08cf: MOV EDX,dword ptr [EBX + 0xbee8]
// 005f08d5: PUSH EDX
// 005f08d6: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005f08db: ADD ESP,0x8
// 005f08de: TEST EAX,EAX
// 005f08e0: JZ 0x005f08e8
//   XREF to: 005f08e8 (CONDITIONAL_JUMP)
// 005f08e2: CMP dword ptr [EBP + 0x72],0xe
// 005f08e6: JZ 0x005f092a
//   XREF to: 005f092a (CONDITIONAL_JUMP)
// 005f08e8: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_005f08e8
// 005f08ef: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f08f5: PUSH 0x3ecccccd
// 005f08fa: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005f08ff: ADD ESP,0x4
// 005f0902: TEST EAX,EAX
// 005f0904: JNZ 0x005f0942
//   XREF to: 005f0942 (CONDITIONAL_JUMP)
// 005f0906: MOV EDI,dword ptr [EBP + 0x72]
//   Label: LAB_005f0906
// 005f0909: LEA EAX,[EBX + 0x158]
// 005f090f: CMP EDI,0xe
// 005f0912: JNZ 0x005f082b
//   XREF to: 005f082b (CONDITIONAL_JUMP)
// 005f0918: PUSH 0x1
// 005f091a: PUSH 0xf
// 005f091c: PUSH EAX
// 005f091d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0922: ADD ESP,0xc
// 005f0925: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f092a: PUSH 0x1
//   Label: LAB_005f092a
// 005f092c: PUSH 0x0
// 005f092e: LEA EAX,[EBX + 0x158]
// 005f0934: PUSH EAX
// 005f0935: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f093a: ADD ESP,0xc
// 005f093d: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f0942: PUSH EBX
//   Label: LAB_005f0942
// 005f0943: CALL core_werewolf.cpp_FUN_005f11e0
//   XREF to: 005f11e0 (UNCONDITIONAL_CALL)
// 005f0948: ADD ESP,0x4
// 005f094b: JMP 0x005f0906
//   XREF to: 005f0906 (UNCONDITIONAL_JUMP)
// 005f094d: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005f094d
// 005f0953: MOV EAX,dword ptr [EBX + 0x154]
// 005f0959: PUSH EBX
// 005f095a: CALL dword ptr [EAX + 0x158]
// 005f0960: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005f0966: ADD ESP,0x8
// 005f0969: TEST EDX,EDX
// 005f096b: JZ 0x005f09ee
//   XREF to: 005f09ee (CONDITIONAL_JUMP)
// 005f0971: CMP dword ptr [EBX + 0xbee8],0x0
// 005f0978: JZ 0x005f0a1c
//   XREF to: 005f0a1c (CONDITIONAL_JUMP)
// 005f097e: MOV ESI,EDX
// 005f0980: LEA EAX,[EBX + 0x20]
// 005f0983: FLD float ptr [ESI + 0x20]
// 005f0986: FSUB float ptr [EAX]
// 005f0988: FSTP float ptr [EBP + -0x7a]
// 005f098b: FLD float ptr [ESI + 0x24]
// 005f098e: FSUB float ptr [EAX + 0x4]
// 005f0991: FST float ptr [EBP + -0x76]
// 005f0994: FMUL float ptr [EBP + -0x76]
// 005f0997: FLD float ptr [EBP + -0x7a]
// 005f099a: FMUL ST0
// 005f099c: FLD float ptr [ESI + 0x28]
// 005f099f: FSUB float ptr [EAX + 0x8]
// 005f09a2: FXCH
// 005f09a4: FADDP ST2,ST0
// 005f09a6: FST float ptr [EBP + -0x72]
// 005f09a9: FMUL float ptr [EBP + -0x72]
// 005f09ac: FADDP
// 005f09ae: FSQRT
// 005f09b0: FST float ptr [EBP + 0x66]
// 005f09b3: FCOMP float ptr [EBX + 0xbe34]
// 005f09b9: FNSTSW AX
// 005f09bb: SAHF
// 005f09bc: JA 0x005f09cc
//   XREF to: 005f09cc (CONDITIONAL_JUMP)
// 005f09be: FLD float ptr [EBP + 0x66]
// 005f09c1: FCOMP double ptr [0x00657d5c]
//   XREF to: 00657d5c (READ)
// 005f09c7: FNSTSW AX
// 005f09c9: SAHF
// 005f09ca: JBE 0x005f0a1c
//   XREF to: 005f0a1c (CONDITIONAL_JUMP)
// 005f09cc: PUSH 0x1
//   Label: LAB_005f09cc
// 005f09ce: PUSH 0x0
// 005f09d0: LEA EAX,[EBX + 0x158]
// 005f09d6: PUSH EAX
// 005f09d7: MOV dword ptr [EBX + 0xbe3c],0x0
// 005f09e1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f09e6: ADD ESP,0xc
// 005f09e9: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f09ee: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005f09ee
// 005f09f4: PUSH EBX
// 005f09f5: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005f09fa: ADD ESP,0x8
// 005f09fd: TEST EAX,EAX
// 005f09ff: JNZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f0a05: PUSH 0x1
// 005f0a07: PUSH EAX
// 005f0a08: LEA EAX,[EBX + 0x158]
// 005f0a0e: PUSH EAX
// 005f0a0f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0a14: ADD ESP,0xc
// 005f0a17: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f0a1c: MOV ESI,dword ptr [0x03f87418]
//   Label: LAB_005f0a1c
//   XREF to: 03f87418 (READ)
// 005f0a22: PUSH ESI
// 005f0a23: MOV EDI,dword ptr [EBX + 0xbee8]
// 005f0a29: PUSH EDI
// 005f0a2a: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005f0a2f: ADD ESP,0x8
// 005f0a32: TEST EAX,EAX
// 005f0a34: JZ 0x005f0a40
//   XREF to: 005f0a40 (CONDITIONAL_JUMP)
// 005f0a36: CMP dword ptr [EBP + 0x72],0xf
// 005f0a3a: JZ 0x005f092a
//   XREF to: 005f092a (CONDITIONAL_JUMP)
// 005f0a40: MOV EDX,dword ptr [EBX + 0xbebc]
//   Label: LAB_005f0a40
// 005f0a46: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005f0a4c: CMP EDX,0x2
// 005f0a4f: JNZ 0x005f0b72
//   XREF to: 005f0b72 (CONDITIONAL_JUMP)
// 005f0a55: CMP dword ptr [EBX + 0xbef0],0x0
// 005f0a5c: JNZ 0x005f0cbf
//   XREF to: 005f0cbf (CONDITIONAL_JUMP)
// 005f0a62: MOV EAX,0x657ccb
//   Label: LAB_005f0a62
//   XREF to: 00657ccb (DATA)
// 005f0a67: MOV EDX,0x1ad
// 005f0a6c: PUSH 0x657ce0
//   XREF to: 00657ce0 (DATA)
// 005f0a71: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005f0a76: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005f0a7c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005f0a81: ADD ESP,0x4
// 005f0a84: SUB ESP,0x8
//   Label: LAB_005f0a84
// 005f0a87: FLD float ptr [EBX + 0xbefc]
// 005f0a8d: FSTP double ptr [ESP]
// 005f0a90: MOV ECX,dword ptr [EBX + 0xbef8]
// 005f0a96: PUSH ECX
// 005f0a97: PUSH 0x657d04
//   XREF to: 00657d04 (DATA)
// 005f0a9c: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005f0aa2: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005f0aa3: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005f0aa8: MOV EAX,dword ptr [EBX + 0xbef8]
// 005f0aae: ADD ESP,0x14
// 005f0ab1: CMP EAX,0x1
// 005f0ab4: JNZ 0x005f0cd1
//   XREF to: 005f0cd1 (CONDITIONAL_JUMP)
// 005f0aba: MOV EAX,dword ptr [EBX + 0xbef0]
//   Label: LAB_005f0aba
// 005f0ac0: ADD EAX,0x20
// 005f0ac3: PUSH EAX
// 005f0ac4: LEA EAX,[EBP + -0x6e]
// 005f0ac7: PUSH EAX
// 005f0ac8: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005f0ace: PUSH ECX
// 005f0acf: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005f0ad4: FLD float ptr [EAX + 0x8]
// 005f0ad7: FLDZ
// 005f0ad9: ADD ESP,0xc
// 005f0adc: FCOMPP
// 005f0ade: FNSTSW AX
// 005f0ae0: SAHF
// 005f0ae1: JBE 0x005f0cdf
//   XREF to: 005f0cdf (CONDITIONAL_JUMP)
// 005f0ae7: MOV ESI,dword ptr [EBX + 0xbef0]
//   Label: LAB_005f0ae7
// 005f0aed: MOV EDI,dword ptr [EBX + 0xbef8]
//   Label: LAB_005f0aed
// 005f0af3: CMP EDI,0x1
// 005f0af6: JNZ 0x005f0dbe
//   XREF to: 005f0dbe (CONDITIONAL_JUMP)
// 005f0afc: LEA EDI,[ESI + 0x20]
//   Label: LAB_005f0afc
// 005f0aff: LEA EAX,[EBX + 0x20]
// 005f0b02: FLD float ptr [EDI]
// 005f0b04: FSUB float ptr [EAX]
// 005f0b06: FSTP float ptr [EBP + 0xffffff56]
// 005f0b0c: FLD float ptr [EDI + 0x4]
// 005f0b0f: FSUB float ptr [EAX + 0x4]
// 005f0b12: FST float ptr [EBP + 0xffffff5a]
// 005f0b18: FMUL float ptr [EBP + 0xffffff5a]
// 005f0b1e: FLD float ptr [EBP + 0xffffff56]
// 005f0b24: FMUL ST0
// 005f0b26: FLD float ptr [EDI + 0x8]
// 005f0b29: FSUB float ptr [EAX + 0x8]
// 005f0b2c: FXCH
// 005f0b2e: FADDP ST2,ST0
// 005f0b30: FST float ptr [EBP + 0xffffff5e]
// 005f0b36: FMUL float ptr [EBP + 0xffffff5e]
// 005f0b3c: FADDP
// 005f0b3e: FSQRT
// 005f0b40: FCOMP double ptr [0x00657d64]
//   XREF to: 00657d64 (READ)
// 005f0b46: FNSTSW AX
// 005f0b48: SAHF
// 005f0b49: JNC 0x005f0b72
//   XREF to: 005f0b72 (CONDITIONAL_JUMP)
// 005f0b4b: MOV EDI,dword ptr [EBX + 0xbef8]
// 005f0b51: INC EDI
// 005f0b52: MOV dword ptr [EBX + 0xbef8],EDI
// 005f0b58: CMP EDI,0x3
// 005f0b5b: JLE 0x005f0b67
//   XREF to: 005f0b67 (CONDITIONAL_JUMP)
// 005f0b5d: MOV dword ptr [EBX + 0xbef8],0x0
// 005f0b67: MOV EAX,[0x00665768]
//   Label: LAB_005f0b67
//   XREF to: 00665768 (READ)
// 005f0b6c: MOV dword ptr [EBX + 0xbefc],EAX
// 005f0b72: MOV EAX,[0x0066575c]
//   Label: LAB_005f0b72
//   XREF to: 0066575c (READ)
// 005f0b77: MOV dword ptr [EBP + 0x5a],EAX
// 005f0b7a: LEA EAX,[EBX + 0x23ac]
// 005f0b80: MOV dword ptr [EAX + 0x8],0x0
// 005f0b87: PUSH 0x3e32b8c2
// 005f0b8c: MOV EDX,dword ptr [EAX + 0x8]
// 005f0b8f: MOV dword ptr [EAX + 0x4],EDX
// 005f0b92: MOV EDX,dword ptr [EAX + 0x4]
// 005f0b95: MOV dword ptr [EAX],EDX
// 005f0b97: MOV EAX,dword ptr [EBP + 0x5a]
// 005f0b9a: PUSH 0x3f000000
// 005f0b9f: MOV dword ptr [EBP + 0xfffffeaa],EAX
// 005f0ba5: LEA EAX,[EBP + 0xfffffea2]
// 005f0bab: XOR EDX,EDX
// 005f0bad: PUSH EAX
// 005f0bae: MOV dword ptr [EBP + 0xfffffea2],EDX
// 005f0bb4: MOV dword ptr [EBP + 0xfffffea6],EDX
// 005f0bba: PUSH ESI
// 005f0bbb: MOV EAX,dword ptr [ESI + 0x154]
// 005f0bc1: CALL dword ptr [EAX + 0xbc]
// 005f0bc7: ADD ESP,0x4
// 005f0bca: PUSH EAX
// 005f0bcb: ADD ESI,0x20
// 005f0bce: PUSH ESI
// 005f0bcf: PUSH EBX
// 005f0bd0: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 005f0bd5: ADD ESP,0x18
// 005f0bd8: TEST EAX,EAX
// 005f0bda: JL 0x005f0dfb
//   XREF to: 005f0dfb (CONDITIONAL_JUMP)
// 005f0be0: JLE 0x005f0e27
//   XREF to: 005f0e27 (CONDITIONAL_JUMP)
// 005f0be6: CMP dword ptr [EBX + 0xbebc],0x2
// 005f0bed: JNZ 0x005f0c07
//   XREF to: 005f0c07 (CONDITIONAL_JUMP)
// 005f0bef: MOV ESI,dword ptr [EBX + 0xbef8]
// 005f0bf5: CMP ESI,0x1
// 005f0bf8: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f0bfe: CMP ESI,0x3
// 005f0c01: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f0c07: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_005f0c07
// 005f0c0d: FLDZ
// 005f0c0f: FCOMPP
// 005f0c11: FNSTSW AX
// 005f0c13: SAHF
// 005f0c14: JC 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0c1a: PUSH 0x2
// 005f0c1c: PUSH 0x0
// 005f0c1e: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005f0c23: ADD ESP,0x8
// 005f0c26: MOV ESI,EAX
// 005f0c28: TEST EAX,EAX
// 005f0c2a: JNZ 0x005f0c3f
//   XREF to: 005f0c3f (CONDITIONAL_JUMP)
// 005f0c2c: PUSH 0x1
// 005f0c2e: PUSH 0x2
// 005f0c30: LEA EAX,[EBX + 0x158]
// 005f0c36: PUSH EAX
// 005f0c37: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0c3c: ADD ESP,0xc
// 005f0c3f: CMP ESI,0x1
//   Label: LAB_005f0c3f
// 005f0c42: JNZ 0x005f0c56
//   XREF to: 005f0c56 (CONDITIONAL_JUMP)
// 005f0c44: PUSH ESI
// 005f0c45: PUSH 0x3
// 005f0c47: LEA EAX,[EBX + 0x158]
// 005f0c4d: PUSH EAX
// 005f0c4e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0c53: ADD ESP,0xc
// 005f0c56: CMP ESI,0x2
//   Label: LAB_005f0c56
// 005f0c59: JNZ 0x005f0c6e
//   XREF to: 005f0c6e (CONDITIONAL_JUMP)
// 005f0c5b: PUSH 0x1
// 005f0c5d: PUSH 0x4
// 005f0c5f: LEA EAX,[EBX + 0x158]
// 005f0c65: PUSH EAX
// 005f0c66: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0c6b: ADD ESP,0xc
// 005f0c6e: PUSH 0x3f19999a
//   Label: LAB_005f0c6e
// 005f0c73: MOV dword ptr [EBX + 0xbe38],0x3f800000
// 005f0c7d: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005f0c82: ADD ESP,0x4
// 005f0c85: TEST EAX,EAX
// 005f0c87: JZ 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0c89: PUSH EBX
// 005f0c8a: CALL core_werewolf.cpp_FUN_005f11e0
//   XREF to: 005f11e0 (UNCONDITIONAL_CALL)
// 005f0c8f: ADD ESP,0x4
// 005f0c92: FLD float ptr [EBX + 0xbedc]
//   Label: LAB_005f0c92
// 005f0c98: FSUB float ptr [EBP + 0x92]
// 005f0c9e: FST float ptr [EBX + 0xbedc]
// 005f0ca4: FLDZ
// 005f0ca6: FCOMPP
// 005f0ca8: FNSTSW AX
// 005f0caa: SAHF
// 005f0cab: JBE 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f0cb1: PUSH EBX
// 005f0cb2: CALL core_werewolf.cpp_FUN_005f11e0
//   XREF to: 005f11e0 (UNCONDITIONAL_CALL)
// 005f0cb7: ADD ESP,0x4
// 005f0cba: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f0cbf: CMP dword ptr [EBX + 0xbef4],0x0
//   Label: LAB_005f0cbf
// 005f0cc6: JZ 0x005f0a62
//   XREF to: 005f0a62 (CONDITIONAL_JUMP)
// 005f0ccc: JMP 0x005f0a84
//   XREF to: 005f0a84 (UNCONDITIONAL_JUMP)
// 005f0cd1: CMP EAX,0x3
//   Label: LAB_005f0cd1
// 005f0cd4: JZ 0x005f0aba
//   XREF to: 005f0aba (CONDITIONAL_JUMP)
// 005f0cda: JMP 0x005f0aed
//   XREF to: 005f0aed (UNCONDITIONAL_JUMP)
// 005f0cdf: MOV EAX,dword ptr [EBX + 0xbef4]
//   Label: LAB_005f0cdf
// 005f0ce5: ADD EAX,0x20
// 005f0ce8: PUSH EAX
// 005f0ce9: LEA EAX,[EBP + 0xffffff62]
// 005f0cef: PUSH EAX
// 005f0cf0: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005f0cf6: PUSH ESI
// 005f0cf7: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005f0cfc: FLD float ptr [EAX + 0x8]
// 005f0cff: FLDZ
// 005f0d01: ADD ESP,0xc
// 005f0d04: FCOMPP
// 005f0d06: FNSTSW AX
// 005f0d08: SAHF
// 005f0d09: JBE 0x005f0d16
//   XREF to: 005f0d16 (CONDITIONAL_JUMP)
// 005f0d0b: MOV ESI,dword ptr [EBX + 0xbef4]
// 005f0d11: JMP 0x005f0aed
//   XREF to: 005f0aed (UNCONDITIONAL_JUMP)
// 005f0d16: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005f0d16
// 005f0d1c: MOV ESI,dword ptr [EBX + 0xbef0]
// 005f0d22: FLD float ptr [EAX + 0x20]
// 005f0d25: FSUB float ptr [ESI + 0x20]
// 005f0d28: FSTP float ptr [EBP + 0xfffffeae]
// 005f0d2e: FLD float ptr [EAX + 0x24]
// 005f0d31: FSUB float ptr [ESI + 0x24]
// 005f0d34: FST float ptr [EBP + 0xfffffeb2]
// 005f0d3a: FMUL float ptr [EBP + 0xfffffeb2]
// 005f0d40: FLD float ptr [EBP + 0xfffffeae]
// 005f0d46: FMUL ST0
// 005f0d48: FLD float ptr [EAX + 0x28]
// 005f0d4b: FSUB float ptr [ESI + 0x28]
// 005f0d4e: FXCH
// 005f0d50: FADDP ST2,ST0
// 005f0d52: FST float ptr [EBP + 0xfffffeb6]
// 005f0d58: FMUL float ptr [EBP + 0xfffffeb6]
// 005f0d5e: FADDP
// 005f0d60: FSQRT
// 005f0d62: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005f0d68: MOV EAX,dword ptr [EBX + 0xbef4]
// 005f0d6e: FLD float ptr [ESI + 0x20]
// 005f0d71: FSUB float ptr [EAX + 0x20]
// 005f0d74: FSTP float ptr [EBP + 0xffffff7a]
// 005f0d7a: FLD float ptr [ESI + 0x24]
// 005f0d7d: FSUB float ptr [EAX + 0x24]
// 005f0d80: FST float ptr [EBP + 0xffffff7e]
// 005f0d86: FMUL float ptr [EBP + 0xffffff7e]
// 005f0d8c: FLD float ptr [EBP + 0xffffff7a]
// 005f0d92: FMUL ST0
// 005f0d94: FLD float ptr [ESI + 0x28]
// 005f0d97: FSUB float ptr [EAX + 0x28]
// 005f0d9a: FXCH
// 005f0d9c: FADDP ST2,ST0
// 005f0d9e: FST float ptr [EBP + -0x7e]
// 005f0da1: FMUL float ptr [EBP + -0x7e]
// 005f0da4: FADDP
// 005f0da6: FSQRT
// 005f0da8: FCOMPP
// 005f0daa: FNSTSW AX
// 005f0dac: SAHF
// 005f0dad: JC 0x005f0ae7
//   XREF to: 005f0ae7 (CONDITIONAL_JUMP)
// 005f0db3: MOV ESI,dword ptr [EBX + 0xbef4]
// 005f0db9: JMP 0x005f0aed
//   XREF to: 005f0aed (UNCONDITIONAL_JUMP)
// 005f0dbe: CMP EDI,0x3
//   Label: LAB_005f0dbe
// 005f0dc1: JZ 0x005f0afc
//   XREF to: 005f0afc (CONDITIONAL_JUMP)
// 005f0dc7: FLD float ptr [EBX + 0xbefc]
// 005f0dcd: FLDZ
// 005f0dcf: FCOMPP
// 005f0dd1: FNSTSW AX
// 005f0dd3: SAHF
// 005f0dd4: JC 0x005f0b72
//   XREF to: 005f0b72 (CONDITIONAL_JUMP)
// 005f0dda: LEA EDX,[EDI + 0x1]
// 005f0ddd: MOV dword ptr [EBX + 0xbef8],EDX
// 005f0de3: CMP EDX,0x3
// 005f0de6: JLE 0x005f0b72
//   XREF to: 005f0b72 (CONDITIONAL_JUMP)
// 005f0dec: MOV dword ptr [EBX + 0xbef8],0x0
// 005f0df6: JMP 0x005f0b72
//   XREF to: 005f0b72 (UNCONDITIONAL_JUMP)
// 005f0dfb: PUSH EBX
//   Label: LAB_005f0dfb
// 005f0dfc: PUSH 0x657d1a
//   XREF to: 00657d1a (DATA)
// 005f0e01: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005f0e06: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005f0e07: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005f0e0c: ADD ESP,0xc
// 005f0e0f: PUSH 0x1
// 005f0e11: PUSH 0x0
// 005f0e13: LEA EAX,[EBX + 0x158]
// 005f0e19: PUSH EAX
// 005f0e1a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0e1f: ADD ESP,0xc
// 005f0e22: JMP 0x005f0c92
//   XREF to: 005f0c92 (UNCONDITIONAL_JUMP)
// 005f0e27: MOV EDI,dword ptr [0x03f87418]
//   Label: LAB_005f0e27
//   XREF to: 03f87418 (READ)
// 005f0e2d: PUSH EDI
// 005f0e2e: MOV EAX,dword ptr [EBX + 0xbee8]
// 005f0e34: PUSH EAX
// 005f0e35: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005f0e3a: ADD ESP,0x8
// 005f0e3d: TEST EAX,EAX
// 005f0e3f: JNZ 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0e45: LEA EAX,[EBX + 0x20]
// 005f0e48: FLD float ptr [ESI]
// 005f0e4a: FSUB float ptr [EAX]
// 005f0e4c: FSTP float ptr [EBP + 0xfffffef6]
// 005f0e52: FLD float ptr [ESI + 0x4]
// 005f0e55: FSUB float ptr [EAX + 0x4]
// 005f0e58: LEA EDX,[EBP + -0x32]
// 005f0e5b: FSTP float ptr [EBP + 0xfffffefa]
// 005f0e61: FLD float ptr [ESI + 0x8]
// 005f0e64: FSUB float ptr [EAX + 0x8]
// 005f0e67: LEA EAX,[EBP + 0xfffffef6]
// 005f0e6d: FSTP float ptr [EBP + 0xfffffefe]
// 005f0e73: CMP EDX,EAX
// 005f0e75: JZ 0x005f0e92
//   XREF to: 005f0e92 (CONDITIONAL_JUMP)
// 005f0e77: MOV EAX,dword ptr [EBP + 0xfffffef6]
// 005f0e7d: MOV dword ptr [EBP + -0x32],EAX
// 005f0e80: MOV EAX,dword ptr [EBP + 0xfffffefa]
// 005f0e86: MOV dword ptr [EBP + -0x2e],EAX
// 005f0e89: MOV EAX,dword ptr [EBP + 0xfffffefe]
// 005f0e8f: MOV dword ptr [EBP + -0x2a],EAX
// 005f0e92: FLD float ptr [EBP + -0x2e]
//   Label: LAB_005f0e92
// 005f0e95: FMUL ST0
// 005f0e97: FLD float ptr [EBP + -0x32]
// 005f0e9a: FMUL ST0
// 005f0e9c: FADDP
// 005f0e9e: FLD float ptr [EBP + -0x2a]
// 005f0ea1: FMUL ST0
// 005f0ea3: FADDP
// 005f0ea5: FSQRT
// 005f0ea7: MOV EDX,0x41a00000
// 005f0eac: MOV ECX,dword ptr [EBX + 0xbebc]
// 005f0eb2: MOV dword ptr [EBP + 0x6e],EDX
// 005f0eb5: FSTP float ptr [EBP + 0x62]
// 005f0eb8: CMP ECX,0x1
// 005f0ebb: JNZ 0x005f0ec4
//   XREF to: 005f0ec4 (CONDITIONAL_JUMP)
// 005f0ebd: MOV dword ptr [EBP + 0x6e],0x41200000
// 005f0ec4: CMP dword ptr [EBX + 0xbebc],0x2
//   Label: LAB_005f0ec4
// 005f0ecb: JNZ 0x005f0ed4
//   XREF to: 005f0ed4 (CONDITIONAL_JUMP)
// 005f0ecd: MOV dword ptr [EBP + 0x6e],0x41200000
// 005f0ed4: FLD float ptr [EBP + 0x62]
//   Label: LAB_005f0ed4
// 005f0ed7: LEA ESI,[EBX + 0x158]
// 005f0edd: FCOMP float ptr [EBP + 0x6e]
// 005f0ee0: FNSTSW AX
// 005f0ee2: SAHF
// 005f0ee3: JA 0x005f0f19
//   XREF to: 005f0f19 (CONDITIONAL_JUMP)
// 005f0ee5: FLD float ptr [0x0066575c]
//   XREF to: 0066575c (READ)
// 005f0eeb: FMUL float ptr [0x00657d6c]
//   XREF to: 00657d6c (READ)
// 005f0ef1: FCOMP float ptr [EBP + 0x62]
// 005f0ef4: FNSTSW AX
// 005f0ef6: SAHF
// 005f0ef7: JBE 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0efd: CMP dword ptr [EBP + 0x72],0xf
// 005f0f01: JNZ 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0f07: PUSH 0x1
// 005f0f09: PUSH 0x0
// 005f0f0b: PUSH ESI
// 005f0f0c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0f11: ADD ESP,0xc
// 005f0f14: JMP 0x005f0c92
//   XREF to: 005f0c92 (UNCONDITIONAL_JUMP)
// 005f0f19: LEA EAX,[EBP + -0x32]
//   Label: LAB_005f0f19
// 005f0f1c: PUSH EAX
// 005f0f1d: LEA EAX,[EBP + 0xffffff1a]
// 005f0f23: PUSH EAX
// 005f0f24: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005f0f29: FLD float ptr [EBP + 0xffffff1e]
// 005f0f2f: ADD ESP,0x8
// 005f0f32: FSUB float ptr [EBX + 0x34]
// 005f0f35: SUB ESP,0x4
// 005f0f38: FSTP float ptr [ESP]
// 005f0f3b: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005f0f40: MOV dword ptr [EBP + 0x76],EAX
// 005f0f43: FLD float ptr [EBP + 0x76]
// 005f0f46: FABS
// 005f0f48: ADD ESP,0x4
// 005f0f4b: FCOMP double ptr [0x00657d74]
//   XREF to: 00657d74 (READ)
// 005f0f51: FNSTSW AX
// 005f0f53: SAHF
// 005f0f54: JNC 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0f5a: PUSH 0x1
// 005f0f5c: PUSH 0x8
// 005f0f5e: PUSH ESI
// 005f0f5f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f0f64: ADD ESP,0xc
// 005f0f67: PUSH 0x3f59999a
// 005f0f6c: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005f0f71: ADD ESP,0x4
// 005f0f74: TEST EAX,EAX
// 005f0f76: JNZ 0x005f0fae
//   XREF to: 005f0fae (CONDITIONAL_JUMP)
// 005f0f78: XOR ESI,ESI
//   Label: LAB_005f0f78
// 005f0f7a: XOR EDI,EDI
// 005f0f7c: MOV EAX,[0x006810c8]
//   Label: LAB_005f0f7c
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005f0f81: CMP EDI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 005f0f87: JGE 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0f8d: MOV ECX,dword ptr [0x03f96b94]
//   XREF to: 03f96b94 (READ)
// 005f0f93: PUSH ECX
// 005f0f94: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
//   XREF to: 0326525c (READ)
// 005f0f9b: PUSH EDX
// 005f0f9c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005f0fa1: ADD ESP,0x8
// 005f0fa4: TEST EAX,EAX
// 005f0fa6: JNZ 0x005f0fb9
//   XREF to: 005f0fb9 (CONDITIONAL_JUMP)
// 005f0fa8: INC EDI
//   Label: LAB_005f0fa8
// 005f0fa9: ADD ESI,0x4
// 005f0fac: JMP 0x005f0f7c
//   XREF to: 005f0f7c (UNCONDITIONAL_JUMP)
// 005f0fae: PUSH EBX
//   Label: LAB_005f0fae
// 005f0faf: CALL core_werewolf.cpp_FUN_005f11e0
//   XREF to: 005f11e0 (UNCONDITIONAL_CALL)
// 005f0fb4: ADD ESP,0x4
// 005f0fb7: JMP 0x005f0f78
//   XREF to: 005f0f78 (UNCONDITIONAL_JUMP)
// 005f0fb9: CMP EAX,EBX
//   Label: LAB_005f0fb9
// 005f0fbb: JZ 0x005f0fa8
//   XREF to: 005f0fa8 (CONDITIONAL_JUMP)
// 005f0fbd: ADD EAX,0x158
// 005f0fc2: PUSH EAX
// 005f0fc3: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f0fc8: MOV EAX,dword ptr [EAX + 0x24]
// 005f0fcb: ADD ESP,0x4
// 005f0fce: CMP EAX,0x8
// 005f0fd1: JNZ 0x005f0fa8
//   XREF to: 005f0fa8 (CONDITIONAL_JUMP)
// 005f0fd3: PUSH 0x2
// 005f0fd5: PUSH 0x0
// 005f0fd7: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005f0fdc: ADD ESP,0x8
// 005f0fdf: MOV EDX,EAX
// 005f0fe1: CMP EAX,0x1
// 005f0fe4: JNZ 0x005f0ff2
//   XREF to: 005f0ff2 (CONDITIONAL_JUMP)
// 005f0fe6: FLD float ptr [EBX + 0x34]
// 005f0fe9: FADD float ptr [0x00657d84]
//   XREF to: 00657d84 (READ)
// 005f0fef: FSTP float ptr [EBX + 0x34]
// 005f0ff2: CMP EDX,0x2
//   Label: LAB_005f0ff2
// 005f0ff5: JNZ 0x005f0c92
//   XREF to: 005f0c92 (CONDITIONAL_JUMP)
// 005f0ffb: FLD float ptr [EBX + 0x34]
// 005f0ffe: FADD float ptr [0x00657d88]
//   XREF to: 00657d88 (READ)
// 005f1004: FSTP float ptr [EBX + 0x34]
// 005f1007: JMP 0x005f0c92
//   XREF to: 005f0c92 (UNCONDITIONAL_JUMP)
// 005f100c: LEA EDI,[EBX + 0x158]
//   Label: LAB_005f100c
// 005f1012: JBE 0x005f0704
//   XREF to: 005f0704 (CONDITIONAL_JUMP)
// 005f1018: CMP EDX,0xe
// 005f101b: JNC 0x005f103a
//   XREF to: 005f103a (CONDITIONAL_JUMP)
// 005f101d: CMP EDX,0x8
// 005f1020: JC 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f1026: JBE 0x005f04bc
//   XREF to: 005f04bc (CONDITIONAL_JUMP)
// 005f102c: CMP EDX,0xd
// 005f102f: JZ 0x005f07c7
//   XREF to: 005f07c7 (CONDITIONAL_JUMP)
// 005f1035: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f103a: JBE 0x005f0481
//   Label: LAB_005f103a
//   XREF to: 005f0481 (CONDITIONAL_JUMP)
// 005f1040: CMP EDX,0xf
// 005f1043: JBE 0x005f094d
//   XREF to: 005f094d (CONDITIONAL_JUMP)
// 005f1049: CMP EDX,0x13
// 005f104c: JZ 0x005efff8
//   XREF to: 005efff8 (CONDITIONAL_JUMP)
// 005f1052: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f1057: JBE 0x005f094d
//   Label: LAB_005f1057
//   XREF to: 005f094d (CONDITIONAL_JUMP)
// 005f105d: CMP EDX,0x2
// 005f1060: JBE 0x005f04ff
//   XREF to: 005f04ff (CONDITIONAL_JUMP)
// 005f1066: MOV ECX,dword ptr [EAX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005f106c: CMP ECX,dword ptr [EBX + 0xbe3c]
// 005f1072: JZ 0x005f10fe
//   XREF to: 005f10fe (CONDITIONAL_JUMP)
// 005f1078: LEA EAX,[EBP + 0xfffffd6a]
// 005f107e: PUSH EAX
// 005f107f: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005f1084: ADD ESP,0x4
// 005f1087: PUSH 0x41700000
// 005f108c: PUSH 0x40e00000
// 005f1091: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005f10fe: MOV ESI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005f10fe
// 005f1104: TEST ESI,ESI
// 005f1106: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f110c: PUSH ESI
// 005f110d: MOV EDX,dword ptr [ESI + 0x154]
// 005f1113: CALL dword ptr [EDX + 0x120]
// 005f1119: ADD ESP,0x4
// 005f111c: TEST EAX,EAX
// 005f111e: JZ 0x005f0010
//   XREF to: 005f0010 (CONDITIONAL_JUMP)
// 005f1124: PUSH 0x1
// 005f1126: PUSH 0x7
// 005f1128: LEA EAX,[EBX + 0x158]
// 005f112e: PUSH EAX
// 005f112f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005f1134: ADD ESP,0xc
// 005f1137: JMP 0x005f0010
//   XREF to: 005f0010 (UNCONDITIONAL_JUMP)
// 005f113c: PUSH 0x657d3b
//   Label: LAB_005f113c
//   XREF to: 00657d3b (DATA)
// 005f1141: MOV EAX,dword ptr [EBX + 0x154]
// 005f1147: PUSH EBX
// 005f1148: CALL dword ptr [EAX + 0x24]
// 005f114b: ADD ESP,0x8
// 005f114e: MOV dword ptr [EBX + 0xbee4],EAX
// 005f1154: JMP 0x005f003e
//   XREF to: 005f003e (UNCONDITIONAL_JUMP)
// 005f1159: MOV EDI,dword ptr [EBX + 0xbee4]
//   Label: LAB_005f1159
// 005f115f: PUSH EDI
// 005f1160: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005f1165: ADD ESP,0x4
// 005f1168: JMP 0x005f003e
//   XREF to: 005f003e (UNCONDITIONAL_JUMP)
// 005f116d: CMP EDI,0xf
//   Label: LAB_005f116d
// 005f1170: JZ 0x005f0063
//   XREF to: 005f0063 (CONDITIONAL_JUMP)
// 005f1176: FLD float ptr [EBP + 0x6a]
// 005f1179: FMUL double ptr [0x00657d8c]
//   XREF to: 00657d8c (READ)
// 005f117f: JMP 0x005f006c
//   XREF to: 005f006c (UNCONDITIONAL_JUMP)
// 005f1184: CMP dword ptr [EBX + 0xdc],0x0
//   Label: LAB_005f1184
// 005f118b: JNZ 0x005f00c8
//   XREF to: 005f00c8 (CONDITIONAL_JUMP)
// 005f1191: JMP 0x005f01c0
//   XREF to: 005f01c0 (UNCONDITIONAL_JUMP)
