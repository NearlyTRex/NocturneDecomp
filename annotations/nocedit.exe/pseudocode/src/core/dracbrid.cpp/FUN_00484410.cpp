// Name: core_dracbrid.cpp_FUN_00484410
// Address: 00484410
// Address Range: [[00484410, 004858e5]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00484410()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_00484394 = 00484927
//   void* switchdataD_004843a4 = 0048553b
//   TerminatedCString s_brideexplosion_wav_006219bd
//   TerminatedCString s_s_confused_while_walking_006219d0
//   TerminatedCString s_bride_d_wav_006219fa
//   TerminatedCString s_hotbride_disappear_wav_00621a08
//   TerminatedCString s_bride_d_wav_00621a1f
//   TerminatedCString s_s_gave_up_chase_I_m_conf_00621a2d
//   TerminatedCString s_hotbride_bite_wav_00621a4e
//   TerminatedCString s_CHero_00621a61
//   TerminatedCString s_bride_d_wav_00621a67
//   TerminatedCString s_hotbride_disappear_wav_00621a75
//   TerminatedCString s_bride_d_wav_00621a8c
//   TerminatedCString s_s_gave_up_chase_I_m_conf_00621a9a
//   TerminatedCString s_hotbride_swipe_wav_00621abb
//   double DOUBLE_00621ad6 = 65535
//   double DOUBLE_00621ade = 10
//   double DOUBLE_00621ae6 = 0.392699081687500
//   float FLOAT_00621aee = -1.570796
//   double DOUBLE_00621af6 = 2
//   double DOUBLE_00621afe = 32
//   double DOUBLE_00621b06 = 5
//   undefined4 DAT_0065cd68
//   undefined4 DAT_0065cd6c
//   undefined4 DAT_0065cd78
//   undefined4 DAT_0065cd7c
//   undefined4 DAT_0065cd80
//   undefined4 DAT_0065cd84
//   undefined4 DAT_0065cd88
//   undefined4 DAT_0065cd8c
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   undefined4 g_CDraculaBrideClassInfo.name_hash
//   undefined4 DAT_02c6d0a0
//   undefined4 DAT_02c6d0a8
//   undefined4 DAT_02c6d0bc
//   CEventList g_CEventListInstance
//   CFireEffect g_CFireEffectInstance
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 DAT_0326525c
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_actor.cpp_isOfClass_FUN_0040c6d0
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
//   core_dracbrid.cpp_FUN_004858f0
//   core_dracbrid.cpp_FUN_004864c0
//   core_dracbrid.cpp_FUN_004869a0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   core_fire.cpp_CFireEffect_FUN_004c8ef0
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00484410(undefined4 param_1, undefined4
   param_2) */

void core_dracbrid_cpp_FUN_00484410
               (uint param_1,int param_2,undefined4 param_3,undefined4 param_4,CEnemy *param_5,
               float param_6)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CDeformableModelInstance *pCVar3;
  char *pcVar4;
  float fVar5;
  CDemonActor_vtable *pCVar6;
  uint uVar7;
  float fVar8;
  CCharacter *pCVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  CEnemy *pCVar13;
  CSkeleton *pCVar14;
  CVector3f *pCVar15;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  CDemonActor *pCVar16;
  int extraout_EAX_02;
  BADSPACEBASE *in_ESP;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  SCollisionInfo *in_stack_fffffb6c;
  char local_430 [100];
  char local_3cc [100];
  char local_368 [100];
  SDamageInfo local_304;
  SDamageInfo local_2c8;
  SDamageInfo local_28c;
  SDamageInfo local_250;
  SDamageInfo local_214;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  CVector3f local_1cc;
  CVector3f local_1c0;
  CVector3f local_1b4;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  CVector3f local_190;
  CVector3f local_184;
  CVector3f local_178;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_13c;
  CVector3f local_130;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  CVector3f local_4c;
  float local_38;
  undefined4 local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  CSkeleton *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (param_5[1].base_character.base_actor.previous_transform_state.position.z != 0.0) {
    fVar5 = param_5[1].base_character.base_actor.previous_transform_state.orientation.x - param_6;
    param_5[1].base_character.base_actor.previous_transform_state.orientation.x = fVar5;
    param_1 = (uint)(ushort)((ushort)(0.0 < fVar5) << 8 | (ushort)NAN(fVar5) << 10 |
                            (ushort)(fVar5 == 0.0) << 0xe);
    if (0.0 < fVar5 || (fVar5 == 0.0) != 0) {
      iVar11 = 0;
      if (0 < *(int *)(param_5[1].base_character.base_actor.create_event + 0x3c)) {
        fVar17 = (float10)_DAT_0065cd8c;
        fVar18 = (float10)DOUBLE_00621ad6;
        pCVar13 = param_5;
        do {
          iVar12 = *(int *)(pCVar13[1].base_character.base_actor.create_event + 0x40);
          *(undefined4 *)(iVar12 + 0xfc) = 1;
          *(undefined4 *)(iVar12 + 0xcb4) = 1;
          fVar19 = ((float10)param_5[1].base_character.base_actor.previous_transform_state.
                             orientation.x * fVar18) / fVar17;
          iVar11 = iVar11 + 1;
          dVar20 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,iVar12));
          param_2 = (int)((ulonglong)dVar20 >> 0x20);
          *(int *)(SUB84(dVar20,0) + 0xcc0) = (int)ROUND(fVar19);
          param_1 = *(uint *)(param_5[1].base_character.base_actor.create_event + 0x3c);
          pCVar13 = (CEnemy *)((pCVar13->base_character).base_actor.actor_name + 4);
        } while (iVar11 < (int)param_1);
      }
    }
    else {
      param_5[1].base_character.base_actor.previous_transform_state.position.z = 0.0;
      (param_5->base_character).base_actor.was_created = 2;
      iVar11 = *(int *)(param_5[1].base_character.base_actor.create_event + 0x3c);
      param_5[1].base_character.base_actor.previous_transform_state.orientation.x = 0.0;
      param_1 = 0;
      pCVar13 = param_5;
      if (0 < iVar11) {
        do {
          *(undefined4 *)(*(int *)(pCVar13[1].base_character.base_actor.create_event + 0x40) + 0x70)
               = 2;
          param_1 = param_1 + 1;
          param_2 = *(int *)(param_5[1].base_character.base_actor.create_event + 0x3c);
          pCVar13 = (CEnemy *)((pCVar13->base_character).base_actor.actor_name + 4);
        } while ((int)param_1 < param_2);
      }
    }
  }
  core_dracbrid_cpp_FUN_004869a0(param_1,param_2);
  iVar11 = core_charactr_cpp_CCharacter_FUN_00429870(&param_5->base_character);
  if (iVar11 == 0) {
    return;
  }
  if (0.0 <= *(float *)(param_5[1].base_character.base_actor.create_event + 0x28)) {
    *(float *)(param_5[1].base_character.base_actor.create_event + 0x28) =
         *(float *)(param_5[1].base_character.base_actor.create_event + 0x28) - param_6;
  }
  (param_5->base_character).model.accumulated_root_motion.z = 0.0;
  (param_5->base_character).model.accumulated_root_motion.y =
       (param_5->base_character).model.accumulated_root_motion.z;
  (param_5->base_character).model.accumulated_root_motion.x =
       (param_5->base_character).model.accumulated_root_motion.y;
  local_38 = param_6 * param_5->speed;
  pCVar3 = &(param_5->base_character).model;
  while (0.0 < local_38) {
    iVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    if (iVar11 == 0x29a) {
      (param_5->base_character).cloth_data[0x35c] = '\0';
      (param_5->base_character).cloth_data[0x35d] = '\0';
      (param_5->base_character).cloth_data[0x35e] = '\0';
      (param_5->base_character).cloth_data[0x35f] = '\0';
      local_178.x = 0.0;
      local_178.y = 20.0;
      local_178.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)param_5,&local_ac,&local_178);
      core_dracbrid_cpp_FUN_004858f0();
      fVar5 = _DAT_0065cd8c;
      pCVar6 = (param_5->base_character).base_actor.vtable;
      param_5[1].base_character.base_actor.previous_transform_state.position.z = 1.4013e-45;
      param_5[1].base_character.base_actor.previous_transform_state.orientation.x = fVar5;
      (*pCVar6->playAmbientSound)((CDemonActor *)param_5,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&param_5->base_character);
    }
  }
  iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar3->motion_controller);
  iVar11 = *(int *)(iVar11 + 0x24);
  if (iVar11 == 9) {
    fVar8 = _DAT_0065cd80 * param_6;
    fVar5 = param_5->speed;
    *(float *)((param_5->base_character).field2_0x240c + 0x2c) =
         _DAT_0065cd84 * param_6 * param_5->speed;
    *(float *)((param_5->base_character).field2_0x240c + 0x28) = fVar5 * fVar8;
  }
  else {
    fVar8 = _DAT_0065cd7c * param_6;
    fVar5 = param_5->speed;
    *(float *)((param_5->base_character).field2_0x240c + 0x28) =
         (param_5->base_character).model.accumulated_root_motion.z;
    *(float *)((param_5->base_character).field2_0x240c + 0x2c) = fVar8 * fVar5;
  }
  iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70(&param_5->base_character);
  if (iVar12 != 0) {
    uVar7 = *(uint *)((param_5->base_character).field11_0x25a0 + 0x10);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
LAB_004846a6:
        iVar11 = 0xe;
      }
      else {
LAB_004848f9:
        iVar11 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,iVar11,1);
    }
    else {
      if (uVar7 < 3) goto LAB_004846a6;
      if (uVar7 != 3) goto LAB_004848f9;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_5);
    }
    (param_5->base_character).model.accumulated_root_motion.z = 0.0;
    (param_5->base_character).model.accumulated_root_motion.y =
         (param_5->base_character).model.accumulated_root_motion.z;
    (param_5->base_character).model.accumulated_root_motion.x =
         (param_5->base_character).model.accumulated_root_motion.y;
    goto switchD_004858cd_caseD_1;
  }
  switch(iVar11) {
  case 0:
    (*(param_5->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)param_5);
    if (*(int *)(param_5->field6_0xbe38 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
      if (extraout_EAX_01 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base_character).model.motion_controller,0xe,1);
      }
      break;
    }
    iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
    if ((iVar11 != 0) &&
       (iVar11 = core_actor_cpp_isOfClass_FUN_0040c6d0
                           (*(CDemonActor **)(param_5->field6_0xbe38 + 4),"CHero"),
       iVar11 != 0)) {
      iVar12 = 0;
      iVar11 = 0;
      while ((iVar12 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) &&
             ((pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                                   (*(CDemonActor **)
                                     (g_CDemonSetPtr->field19_0x14f0a0 + iVar11 + 8000),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar16 == (CDemonActor *)0x0 || (*(int *)pCVar16[0x8e].create_event == 0))))) {
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 4;
      }
      if (iVar12 == *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_430,"bride-%d?.wav");
        core_dracbrid_cpp_FUN_004864c0();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base_character).model.motion_controller,0x17,1);
        (*((param_5->base_character).base_actor.vtable)->playSound)
                  ((CDemonActor *)param_5,"hotbride-disappear.wav");
        iVar11 = *(int *)(param_5->field6_0xbe38 + 4);
        pcVar4 = param_5[1].base_character.base_actor.create_event + 0x2c;
        pCVar9 = &param_5[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\x01';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        if (pcVar4 != (char *)(iVar11 + 0x20)) {
          *(undefined4 *)pcVar4 = *(undefined4 *)(iVar11 + 0x20);
          *(undefined4 *)(param_5[1].base_character.base_actor.create_event + 0x30) =
               *(undefined4 *)(iVar11 + 0x24);
          *(undefined4 *)(param_5[1].base_character.base_actor.create_event + 0x34) =
               *(undefined4 *)(iVar11 + 0x28);
        }
        pCVar9 = &param_5[1].base_character;
        (pCVar9->base_actor).create_event[0x20] = '\0';
        (pCVar9->base_actor).create_event[0x21] = '\0';
        (pCVar9->base_actor).create_event[0x22] = '\0';
        (pCVar9->base_actor).create_event[0x23] = '\0';
        break;
      }
    }
    if (*(float *)(param_5[1].base_character.base_actor.create_event + 0x28) < 0.0) {
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
      *(float *)(param_5[1].base_character.base_actor.create_event + 0x28) = local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,0xd,1);
      break;
    }
    goto LAB_004852f8;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_28c);
    local_28c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_28c.attacker = (CDemonActor *)param_5;
    local_28c.wielder = (CDemonActor *)param_5;
    local_14 = local_28c.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_b8,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (param_5->base_character).model.bone_transform.bone_world_matrices
                         [DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_100,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &param_5[1].base_character;
    (pCVar9->base_actor).create_event[0x38] = '\x01';
    (pCVar9->base_actor).create_event[0x39] = '\0';
    (pCVar9->base_actor).create_event[0x3a] = '\0';
    (pCVar9->base_actor).create_event[0x3b] = '\0';
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_304);
    local_304.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_304.attacker = (CDemonActor *)param_5;
    local_304.wielder = (CDemonActor *)param_5;
    local_14 = local_304.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_184,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (param_5->base_character).model.bone_transform.bone_world_matrices
                         [DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_4c,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 7:
    if (param_5[1].base_character.base_actor.previous_transform_state.position.z == 0.0) {
      pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(param_5->base_character).model,&local_d0,DAT_02c6d0bc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)param_5,&local_f4,pCVar15);
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
      local_9c = (param_5->base_character).base_actor.orient.bank;
      local_98 = (param_5->base_character).base_actor.orient.heading;
      local_a0 = (param_5->base_character).base_actor.orient.pitch + FLOAT_00621aee;
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
    }
    break;
  case 8:
    (*(param_5->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)param_5);
    if (*(int *)(param_5->field6_0xbe38 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
      if (extraout_EAX != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base_character).model.motion_controller,0xe,1);
      }
    }
    else {
      if (((param_5->base_character).hit_points < _DAT_0065cd78) ||
         (*(float *)(param_5[1].base_character.base_actor.create_event + 0x28) < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base_character).model.motion_controller,0,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(param_5[1].base_character.base_actor.create_event + 0x28) = local_14;
      }
      pCVar3 = &(param_5->base_character).model;
      if (*(int *)(param_5[1].base_character.base_actor.create_event + 0x38) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0x19,1);
        pCVar9 = &param_5[1].base_character;
        (pCVar9->base_actor).create_event[0x38] = '\0';
        (pCVar9->base_actor).create_event[0x39] = '\0';
        (pCVar9->base_actor).create_event[0x3a] = '\0';
        (pCVar9->base_actor).create_event[0x3b] = '\0';
      }
    }
    break;
  case 9:
    if (*(float *)(param_5[1].base_character.base_actor.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_3cc,"bride-%d?.wav",
                 *(undefined4 *)(param_5[1].base_character.base_actor.create_event + 0x18));
      core_dracbrid_cpp_FUN_004864c0();
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar11 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    (*(param_5->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)param_5);
    pCVar3 = &(param_5->base_character).model;
    if (*(int *)(param_5->field6_0xbe38 + 4) != 0) {
      if (0.0 <= *(float *)(param_5[1].base_character.base_actor.create_event + 0x28)) {
        local_58 = 0;
        local_50 = DAT_0065cd6c;
        local_54 = 0;
        (**(code **)(*(int *)(*(int *)(param_5->field6_0xbe38 + 4) + 0x154) + 0xbc))();
        iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&param_5->base_character);
        if (iVar11 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_5);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,8,1);
        }
        else if (iVar11 < 1) {
          iVar11 = *(int *)(param_5->field6_0xbe38 + 4);
          local_124.x = *(float *)(iVar11 + 0x20) -
                        (param_5->base_character).base_actor.location.position.x;
          local_124.y = *(float *)(iVar11 + 0x24) -
                        (param_5->base_character).base_actor.location.position.y;
          local_124.z = *(float *)(iVar11 + 0x28) -
                        (param_5->base_character).base_actor.location.position.z;
          if (&local_7c != &local_124) {
            local_7c.x = local_124.x;
            local_7c.y = local_124.y;
            local_7c.z = local_124.z;
          }
          if ((float)DOUBLE_00621ade <
              SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x + local_7c.y * local_7c.y)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_7c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y - (param_5->base_character).base_actor.orient.bank);
            if (ABS(local_14) < (float)DOUBLE_00621ae6) {
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
              (param_5->base_character).base_actor.orient.bank =
                   local_14 + (param_5->base_character).base_actor.orient.bank;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(param_5->base_character).model.motion_controller,3,1);
            }
          }
        }
        else if (*(float *)param_5->field6_0xbe38 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,2,1);
          (*((param_5->base_character).base_actor.vtable)->playSound)
                    ((CDemonActor *)param_5,"hotbride-bite?.wav");
          param_5->field6_0xbe38[0] = '\0';
          param_5->field6_0xbe38[1] = '\0';
          param_5->field6_0xbe38[2] = -0x80;
          param_5->field6_0xbe38[3] = '?';
        }
      }
      else {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(param_5[1].base_character.base_actor.create_event + 0x28) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
    if (extraout_EAX_00 == 0) break;
LAB_004852f8:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(param_5->base_character).model.motion_controller,0xe,1);
    break;
  case 0xc:
    iVar11 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                       ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffb6c);
    if ((iVar11 == 0) &&
       (iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,
                            (char *)&param_5[1].base_character.base_actor.location.area_id),
       iVar11 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)(param_5[1].base_character.base_actor.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_368,"bride-%d?.wav",
                 *(undefined4 *)(param_5[1].base_character.base_actor.create_event + 0x18));
      core_dracbrid_cpp_FUN_004864c0();
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar11 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    (*(param_5->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)param_5);
    uVar10 = DAT_0065cd68;
    pCVar3 = &(param_5->base_character).model;
    if (*(int *)(param_5->field6_0xbe38 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
      if (extraout_EAX_02 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
    }
    else {
      local_34 = DAT_0065cd68;
      (param_5->base_character).model.accumulated_root_motion.z = 0.0;
      (param_5->base_character).model.accumulated_root_motion.y =
           (param_5->base_character).model.accumulated_root_motion.z;
      (param_5->base_character).model.accumulated_root_motion.x =
           (param_5->base_character).model.accumulated_root_motion.y;
      local_1a8 = 0;
      local_1a4 = 0;
      local_1a0 = uVar10;
      (**(code **)(*(int *)(*(int *)(param_5->field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&param_5->base_character);
      if (iVar11 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_5);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      else if ((0 < iVar11) && (*(float *)param_5->field6_0xbe38 <= 0.0)) {
        iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
        if (iVar11 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0x13,1);
        }
        if (iVar11 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(param_5->base_character).model.motion_controller,0x14,1);
        }
        if (iVar11 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(param_5->base_character).model.motion_controller,0x15,1);
          (*((param_5->base_character).base_actor.vtable)->playSound)
                    ((CDemonActor *)param_5,"hotbride-swipe?.wav");
        }
        param_5->field6_0xbe38[0] = '\0';
        param_5->field6_0xbe38[1] = '\0';
        param_5->field6_0xbe38[2] = -0x80;
        param_5->field6_0xbe38[3] = '?';
      }
    }
    break;
  case 0xf:
    iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,
                        (char *)&param_5[1].base_character.base_actor.location.area_id);
    if (iVar11 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004858cd_caseD_10;
  case 0x11:
    if ((param_5->pool_me != 0) || ((param_5->base_character).base_actor.field11_0xdc != 0)) break;
    pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                        (&(param_5->base_character).model,&local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_1cc,pCVar15);
    core_gore_cpp_FUN_004ede30();
    goto switchD_004858cd_caseD_10;
  case 0x12:
    iVar11 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                       ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffb6c);
    if ((iVar11 == 0) &&
       (iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,
                            (char *)&param_5[1].base_character.base_actor.location.area_id),
       iVar11 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2c8);
    local_2c8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_2c8.attacker = (CDemonActor *)param_5;
    local_2c8.wielder = (CDemonActor *)param_5;
    local_14 = local_2c8.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_13c,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (param_5->base_character).model.bone_transform.bone_world_matrices
                         [DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_94,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &param_5[1].base_character;
    (pCVar9->base_actor).create_event[0x38] = '\x01';
    (pCVar9->base_actor).create_event[0x39] = '\0';
    (pCVar9->base_actor).create_event[0x3a] = '\0';
    (pCVar9->base_actor).create_event[0x3b] = '\0';
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_214);
    local_214.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_214.attacker = (CDemonActor *)param_5;
    local_214.wielder = (CDemonActor *)param_5;
    local_14 = local_214.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_88,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (param_5->base_character).model.bone_transform.bone_world_matrices
                         [DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_16c,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &param_5[1].base_character;
    (pCVar9->base_actor).create_event[0x38] = '\x01';
    (pCVar9->base_actor).create_event[0x39] = '\0';
    (pCVar9->base_actor).create_event[0x3a] = '\0';
    (pCVar9->base_actor).create_event[0x3b] = '\0';
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_250);
    local_250.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_250.attacker = (CDemonActor *)param_5;
    local_250.wielder = (CDemonActor *)param_5;
    local_14 = local_250.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_1c0,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (param_5->base_character).model.bone_transform.bone_world_matrices
                         [DAT_02c6d0a8].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_154,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 0x17:
    if (*(float *)(param_5[1].base_character.base_actor.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffb6c,"bride-%d?.wav",
                 *(undefined4 *)(param_5[1].base_character.base_actor.create_event + 0x18));
      core_dracbrid_cpp_FUN_004864c0();
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar11 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    switch(*(undefined4 *)(param_5[1].base_character.base_actor.create_event + 0x1c)) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,0,1);
      break;
    case 1:
      fVar5 = *(float *)(param_5[1].base_character.base_actor.create_event + 0x20) + param_6;
      *(float *)(param_5[1].base_character.base_actor.create_event + 0x20) = fVar5;
      if (DAT_0065cd88 < fVar5) {
        pCVar9 = &param_5[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\x02';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        *(float *)(param_5[1].base_character.base_actor.create_event + 0x20) = DAT_0065cd88;
      }
      local_2c = &(param_5->base_character).model;
      iVar11 = 0;
      local_148.x = 0.0;
      local_148.y = 3.0;
      local_148.z = 0.0;
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_2c);
      if (0 < pCVar14->bone_count) {
        local_24 = local_2c;
        do {
          pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (local_24,&local_64,iVar11);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)param_5,&local_118,pCVar15);
          iVar11 = iVar11 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_118,0.5,&local_148,0xffff);
        } while (iVar11 < pCVar14->bone_count);
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      pcVar4 = param_5[1].base_character.base_actor.create_event + 0x2c;
      for (local_18 = 0; fVar5 = DAT_0065cd88, local_18 < g_CDemonSetPtr->damage_listener_count;
          local_18 = local_18 + 1) {
        pCVar13 = *(CEnemy **)(g_CDemonSetPtr->field19_0x14f0a0 + local_1c + -4);
        if (((pCVar13 != (CEnemy *)0x0) && (pCVar13 != param_5)) &&
           (iVar11 = (*(pCVar13->base_character).base_actor.vtable[1].hasCollision)
                               ((CDemonActor *)pCVar13,in_stack_fffffb6c), iVar11 < 1)) {
          local_19c = (pCVar13->base_character).base_actor.location.position.x - *(float *)pcVar4;
          local_198 = (pCVar13->base_character).base_actor.location.position.y -
                      *(float *)(param_5[1].base_character.base_actor.create_event + 0x30);
          local_194 = (pCVar13->base_character).base_actor.location.position.z -
                      *(float *)(param_5[1].base_character.base_actor.create_event + 0x34);
          if (SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198) <
              (float)DOUBLE_00621b06) goto switchD_004858cd_caseD_1;
        }
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        pCVar9 = &param_5[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\x03';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        pCVar1 = &(param_5->base_character).base_actor.location;
        *(float *)(param_5[1].base_character.base_actor.create_event + 0x20) = fVar5;
        (pCVar1->position).x = *(float *)pcVar4;
        (param_5->base_character).base_actor.location.position.y =
             *(float *)(param_5[1].base_character.base_actor.create_event + 0x30);
        (param_5->base_character).base_actor.location.position.z =
             *(float *)(param_5[1].base_character.base_actor.create_event + 0x34);
        iVar11 = *(int *)(param_5->field6_0xbe38 + 4);
        if (iVar11 != 0) {
          local_dc.x = *(float *)(iVar11 + 0x20) - (pCVar1->position).x;
          local_dc.y = *(float *)(iVar11 + 0x24) -
                       (param_5->base_character).base_actor.location.position.y;
          local_dc.z = *(float *)(iVar11 + 0x28) -
                       (param_5->base_character).base_actor.location.position.z;
          pCVar2 = &(param_5->base_character).base_actor.orient;
          pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_190,&local_dc);
          if (pCVar2 != (COrientation *)pCVar15) {
            pCVar2->pitch = pCVar15->x;
            (param_5->base_character).base_actor.orient.bank = pCVar15->y;
            (param_5->base_character).base_actor.orient.heading = pCVar15->z;
          }
          (param_5->base_character).base_actor.orient.heading = 0.0;
          (param_5->base_character).base_actor.orient.pitch = 0.0;
        }
        (*((param_5->base_character).base_actor.vtable)->playSound)
                  ((CDemonActor *)param_5,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4.x = 0.0;
      local_c4.z = 0.0;
      pCVar3 = &(param_5->base_character).model;
      iVar11 = 0;
      local_c4.y = 3.0;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
      if (0 < local_20->bone_count) {
        do {
          pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCVar3,&local_10c,iVar11);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)param_5,&local_130,pCVar15);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_130,0.5,&local_c4,0xffff);
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_20->bone_count);
      }
      fVar5 = *(float *)(param_5[1].base_character.base_actor.create_event + 0x20) - param_6;
      *(float *)(param_5[1].base_character.base_actor.create_event + 0x20) = fVar5;
      if (fVar5 < 0.0) {
        pCVar9 = &param_5[1].base_character;
        (pCVar9->base_actor).create_event[0x20] = '\0';
        (pCVar9->base_actor).create_event[0x21] = '\0';
        (pCVar9->base_actor).create_event[0x22] = '\0';
        (pCVar9->base_actor).create_event[0x23] = '\0';
        pCVar9 = &param_5[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\0';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0xe,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(param_5[1].base_character.base_actor.create_event + 0x28) = local_14;
      }
    }
    break;
  case 0x1a:
    iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,
                        (char *)&param_5[1].base_character.base_actor.location.area_id);
    if (iVar11 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base_character).model.motion_controller,0,1);
    }
  }
switchD_004858cd_caseD_1:
  if (0.0 < *(float *)param_5->field6_0xbe38) {
    *(float *)param_5->field6_0xbe38 = *(float *)param_5->field6_0xbe38 - param_6;
  }
  iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0
                     (&(param_5->base_character).model.motion_controller);
  local_28 = *(int *)(iVar11 + 0x24);
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     ((param_5->base_character).base_actor.field11_0xdc != 0)) {
    if (local_28 == 3) {
      (param_5->base_character).model.accumulated_root_motion.z =
           (param_5->base_character).model.accumulated_root_motion.z * (float)DOUBLE_00621af6;
    }
    if ((*(int *)(param_5->field6_0xbe38 + 4) != 0) &&
       (pCVar13 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(param_5->field6_0xbe38 + 4) + 0x154) + 0x108))(),
       pCVar13 == param_5)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(param_5->field6_0xbe38 + 4));
    }
    *(float *)((param_5->base_character).field2_0x240c + 0x20) =
         *(float *)((param_5->base_character).field2_0x240c + 0x20) -
         param_6 * (float)DOUBLE_00621afe;
    local_160 = *(float *)((param_5->base_character).field2_0x240c + 0x1c) * param_6;
    local_15c = *(float *)((param_5->base_character).field2_0x240c + 0x20) * param_6;
    pcVar4 = (param_5->base_character).field2_0x240c + 0x10;
    local_158 = param_6 * *(float *)((param_5->base_character).field2_0x240c + 0x24);
    pCVar15 = &(param_5->base_character).model.accumulated_root_motion;
    local_1d8 = local_160 + *(float *)pcVar4;
    local_1d4 = local_15c + *(float *)((param_5->base_character).field2_0x240c + 0x14);
    local_1d0 = local_158 + *(float *)((param_5->base_character).field2_0x240c + 0x18);
    local_e8 = local_1d8 + pCVar15->x;
    local_e4 = local_1d4 + (param_5->base_character).model.accumulated_root_motion.y;
    local_e0 = local_1d0 + (param_5->base_character).model.accumulated_root_motion.z;
    (param_5->base_character).field2_0x240c[0x18] = '\0';
    (param_5->base_character).field2_0x240c[0x19] = '\0';
    (param_5->base_character).field2_0x240c[0x1a] = '\0';
    (param_5->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((param_5->base_character).field2_0x240c + 0x14) =
         *(undefined4 *)((param_5->base_character).field2_0x240c + 0x18);
    *(float *)pcVar4 = *(float *)((param_5->base_character).field2_0x240c + 0x14);
    (param_5->base_character).model.accumulated_root_motion.z = 0.0;
    fVar5 = (param_5->base_character).model.accumulated_root_motion.z;
    (param_5->base_character).model.accumulated_root_motion.y = fVar5;
    pCVar15->x = fVar5;
    core_charactr_cpp_CCharacter_FUN_00428f40(&param_5->base_character);
  }
  if (local_28 != 0x17) {
    pCVar9 = &param_5[1].base_character;
    (pCVar9->base_actor).create_event[0x1c] = '\0';
    (pCVar9->base_actor).create_event[0x1d] = '\0';
    (pCVar9->base_actor).create_event[0x1e] = '\0';
    (pCVar9->base_actor).create_event[0x1f] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&param_5->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(param_5->base_character).model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&param_5->base_character);
  return;
switchD_004858cd_caseD_10:
  param_5->pool_me = 1;
  goto switchD_004858cd_caseD_1;
}


// Assembly code:
// 00484410: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00484410
// 00484411: PUSH ESI
// 00484412: PUSH EDI
// 00484413: PUSH EBP
// 00484414: MOV EBP,ESP
// 00484416: SUB ESP,0x484
// 0048441c: SUB EBP,0x7a
// 0048441f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00484425: CMP dword ptr [EBX + 0xbfe4],0x0
// 0048442c: JZ 0x004844a0
//   XREF to: 004844a0 (CONDITIONAL_JUMP)
// 0048442e: FLD float ptr [EBX + 0xbfe8]
// 00484434: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048443a: FST float ptr [EBX + 0xbfe8]
// 00484440: FLDZ
// 00484442: FCOMPP
// 00484444: FNSTSW AX
// 00484446: SAHF
// 00484447: JBE 0x004845a6
//   XREF to: 004845a6 (CONDITIONAL_JUMP)
// 0048444d: MOV dword ptr [EBX + 0xbfe4],0x0
// 00484457: MOV dword ptr [EBX + 0x70],0x2
// 0048445e: MOV ESI,dword ptr [EBX + 0xbf68]
// 00484464: MOV dword ptr [EBX + 0xbfe8],0x0
// 0048446e: XOR EAX,EAX
// 00484470: TEST ESI,ESI
// 00484472: JLE 0x004844a0
//   XREF to: 004844a0 (CONDITIONAL_JUMP)
// 00484474: MOV ESI,EBX
// 00484476: MOV EDI,dword ptr [ESI + 0xbf6c]
//   Label: LAB_00484476
// 0048447c: MOV dword ptr [EDI + 0x70],0x2
// 00484483: INC EAX
// 00484484: MOV EDX,dword ptr [EBX + 0xbf68]
// 0048448a: ADD ESI,0x4
// 0048448d: CMP EAX,EDX
// 0048448f: JL 0x00484476
//   XREF to: 00484476 (CONDITIONAL_JUMP)
// 00484491: LEA EAX,[EAX]
// 00484497: LEA EDX,[EDX]
// 0048449d: LEA EAX,[EAX]
// 004844a0: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004844a0
//   XREF to: Stack[0x8] (READ)
// 004844a6: PUSH EBX
// 004844a7: CALL core_dracbrid.cpp_FUN_004869a0
//   XREF to: 004869a0 (UNCONDITIONAL_CALL)
// 004844ac: ADD ESP,0x8
// 004844af: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004844b5: PUSH EBX
// 004844b6: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004844bb: ADD ESP,0x8
// 004844be: TEST EAX,EAX
// 004844c0: JZ 0x00484892
//   XREF to: 00484892 (CONDITIONAL_JUMP)
// 004844c6: FLD float ptr [EBX + 0xbf54]
// 004844cc: FLDZ
// 004844ce: FCOMPP
// 004844d0: FNSTSW AX
// 004844d2: SAHF
// 004844d3: JBE 0x0048460a
//   XREF to: 0048460a (CONDITIONAL_JUMP)
// 004844d9: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_004844d9
// 004844df: MOV dword ptr [EAX + 0x8],0x0
// 004844e6: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004844ec: MOV EDX,dword ptr [EAX + 0x8]
// 004844ef: MOV dword ptr [EAX + 0x4],EDX
// 004844f2: MOV EDX,dword ptr [EAX + 0x4]
// 004844f5: MOV dword ptr [EAX],EDX
// 004844f7: FMUL float ptr [EBX + 0xbe24]
// 004844fd: LEA ESI,[EBX + 0x158]
// 00484503: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 00484506: MOV EDI,0x1
// 0048450b: FLD float ptr [EBP + 0x52]
//   Label: LAB_0048450b
//   XREF to: Stack[-0x38] (READ)
// 0048450e: FLDZ
// 00484510: FCOMPP
// 00484512: FNSTSW AX
// 00484514: SAHF
// 00484515: JNC 0x00484630
//   XREF to: 00484630 (CONDITIONAL_JUMP)
// 0048451b: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x38] (DATA)
// 0048451e: PUSH EAX
// 0048451f: PUSH ESI
// 00484520: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00484525: ADD ESP,0x8
// 00484528: CMP EAX,0x29a
// 0048452d: JNZ 0x00484621
//   XREF to: 00484621 (CONDITIONAL_JUMP)
// 00484533: MOV dword ptr [EBX + 0x2df4],0x0
// 0048453d: XOR EAX,EAX
// 0048453f: MOV dword ptr [EBP + 0xffffff12],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 00484545: LEA EAX,[EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (DATA)
// 0048454b: PUSH EAX
// 0048454c: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xac] (DATA)
// 0048454f: PUSH EAX
// 00484550: MOV EDX,0x41a00000
// 00484555: PUSH EBX
// 00484556: MOV dword ptr [EBP + 0xffffff16],EDX
//   XREF to: Stack[-0x174] (WRITE)
// 0048455c: MOV dword ptr [EBP + 0xffffff1a],EDX
//   XREF to: Stack[-0x170] (WRITE)
// 00484562: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00484567: ADD ESP,0xc
// 0048456a: PUSH EDI
// 0048456b: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xac] (DATA)
// 0048456e: PUSH 0xbf800000
// 00484573: PUSH EAX
// 00484574: PUSH EBX
// 00484575: CALL core_dracbrid.cpp_FUN_004858f0
//   XREF to: 004858f0 (UNCONDITIONAL_CALL)
// 0048457a: ADD ESP,0x10
// 0048457d: FLD float ptr [0x0065cd8c]
//   XREF to: 0065cd8c (READ)
// 00484583: PUSH 0x6219bd
//   XREF to: 006219bd (DATA)
// 00484588: MOV EAX,dword ptr [EBX + 0x154]
// 0048458e: MOV dword ptr [EBX + 0xbfe4],EDI
// 00484594: PUSH EBX
// 00484595: FSTP float ptr [EBX + 0xbfe8]
// 0048459b: CALL dword ptr [EAX + 0x28]
// 0048459e: ADD ESP,0x8
// 004845a1: JMP 0x0048450b
//   XREF to: 0048450b (UNCONDITIONAL_JUMP)
// 004845a6: MOV ECX,dword ptr [EBX + 0xbf68]
//   Label: LAB_004845a6
// 004845ac: XOR EDI,EDI
// 004845ae: TEST ECX,ECX
// 004845b0: JLE 0x004844a0
//   XREF to: 004844a0 (CONDITIONAL_JUMP)
// 004845b6: FLD float ptr [0x0065cd8c]
//   XREF to: 0065cd8c (READ)
// 004845bc: FLD double ptr [0x00621ad6]
//   XREF to: 00621ad6 (READ)
// 004845c2: MOV ESI,EBX
// 004845c4: MOV EAX,dword ptr [ESI + 0xbf6c]
//   Label: LAB_004845c4
// 004845ca: MOV dword ptr [EAX + 0xfc],0x1
// 004845d4: MOV dword ptr [EAX + 0xcb4],0x1
// 004845de: FLD float ptr [EBX + 0xbfe8]
// 004845e4: FMUL ST1
// 004845e6: FDIV ST0,ST2
// 004845e8: INC EDI
// 004845e9: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004845ee: FISTP dword ptr [EAX + 0xcc0]
// 004845f4: MOV EAX,dword ptr [EBX + 0xbf68]
// 004845fa: ADD ESI,0x4
// 004845fd: CMP EDI,EAX
// 004845ff: JL 0x004845c4
//   XREF to: 004845c4 (CONDITIONAL_JUMP)
// 00484601: FSTP ST0
// 00484603: FSTP ST0
// 00484605: JMP 0x004844a0
//   XREF to: 004844a0 (UNCONDITIONAL_JUMP)
// 0048460a: FLD float ptr [EBX + 0xbf54]
//   Label: LAB_0048460a
// 00484610: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00484616: FSTP float ptr [EBX + 0xbf54]
// 0048461c: JMP 0x004844d9
//   XREF to: 004844d9 (UNCONDITIONAL_JUMP)
// 00484621: PUSH EAX
//   Label: LAB_00484621
// 00484622: PUSH EBX
// 00484623: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00484628: ADD ESP,0x8
// 0048462b: JMP 0x0048450b
//   XREF to: 0048450b (UNCONDITIONAL_JUMP)
// 00484630: PUSH ESI
//   Label: LAB_00484630
// 00484631: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00484636: MOV EAX,dword ptr [EAX + 0x24]
// 00484639: ADD ESP,0x4
// 0048463c: MOV ESI,EAX
// 0048463e: CMP EAX,0x9
// 00484641: JNZ 0x0048489a
//   XREF to: 0048489a (CONDITIONAL_JUMP)
// 00484647: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0048464d: FLD float ptr [0x0065cd84]
//   XREF to: 0065cd84 (READ)
// 00484653: FMUL ST1
// 00484655: FLD float ptr [0x0065cd80]
//   XREF to: 0065cd80 (READ)
// 0048465b: FMULP ST2
// 0048465d: FMUL float ptr [EBX + 0xbe24]
// 00484663: FLD float ptr [EBX + 0xbe24]
// 00484669: FMULP ST2
// 0048466b: FSTP float ptr [EBX + 0x2438]
// 00484671: FSTP float ptr [EBX + 0x2434]
// 00484677: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00484677
//   XREF to: Stack[0x8] (READ)
// 0048467d: PUSH EBX
// 0048467e: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 00484683: ADD ESP,0x8
// 00484686: TEST EAX,EAX
// 00484688: JZ 0x004858c4
//   XREF to: 004858c4 (CONDITIONAL_JUMP)
// 0048468e: MOV EAX,dword ptr [EBX + 0x25b0]
// 00484694: CMP EAX,0x2
// 00484697: JNC 0x004848ee
//   XREF to: 004848ee (CONDITIONAL_JUMP)
// 0048469d: CMP EAX,0x1
// 004846a0: JNZ 0x004848f9
//   XREF to: 004848f9 (CONDITIONAL_JUMP)
// 004846a6: PUSH 0x1
//   Label: LAB_004846a6
// 004846a8: PUSH 0xe
// 004846aa: LEA EAX,[EBX + 0x158]
//   Label: LAB_004846aa
// 004846b0: PUSH EAX
// 004846b1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004846b6: ADD ESP,0xc
//   Label: LAB_004846b6
// 004846b9: LEA EAX,[EBX + 0x23ac]
// 004846bf: MOV dword ptr [EAX + 0x8],0x0
// 004846c6: MOV EDX,dword ptr [EAX + 0x8]
// 004846c9: MOV dword ptr [EAX + 0x4],EDX
// 004846cc: MOV EDX,dword ptr [EAX + 0x4]
// 004846cf: MOV dword ptr [EAX],EDX
// 004846d1: LEA EAX,[EAX]
// 004846d7: LEA EDX,[EDX]
// 004846dd: LEA EAX,[EAX]
// 004846e0: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_1
// 004846e6: FLDZ
// 004846e8: FCOMPP
// 004846ea: FNSTSW AX
// 004846ec: SAHF
// 004846ed: JNC 0x00484701
//   XREF to: 00484701 (CONDITIONAL_JUMP)
// 004846ef: FLD float ptr [EBX + 0xbe38]
// 004846f5: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004846fb: FSTP float ptr [EBX + 0xbe38]
// 00484701: LEA EAX,[EBX + 0x158]
//   Label: LAB_00484701
// 00484707: PUSH EAX
// 00484708: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0048470d: MOV EAX,dword ptr [EAX + 0x24]
// 00484710: ADD ESP,0x4
// 00484713: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00484716: CMP EAX,0x11
// 00484719: JZ 0x004858d4
//   XREF to: 004858d4 (CONDITIONAL_JUMP)
// 0048471f: CMP EAX,0x10
// 00484722: JZ 0x004858d4
//   XREF to: 004858d4 (CONDITIONAL_JUMP)
// 00484728: CMP EAX,0xf
// 0048472b: JZ 0x004858d4
//   XREF to: 004858d4 (CONDITIONAL_JUMP)
// 00484731: CMP dword ptr [EBP + 0x62],0x3
//   Label: LAB_00484731
//   XREF to: Stack[-0x28] (READ)
// 00484735: JNZ 0x0048474d
//   XREF to: 0048474d (CONDITIONAL_JUMP)
// 00484737: FLD float ptr [EBX + 0x23b4]
// 0048473d: FLD ST0
// 0048473f: FMUL double ptr [0x00621af6]
//   XREF to: 00621af6 (READ)
// 00484745: FSTP ST1
// 00484747: FSTP float ptr [EBX + 0x23b4]
// 0048474d: MOV ESI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_0048474d
// 00484753: TEST ESI,ESI
// 00484755: JZ 0x00484782
//   XREF to: 00484782 (CONDITIONAL_JUMP)
// 00484757: MOV EAX,ESI
// 00484759: PUSH EAX
// 0048475a: MOV ESI,dword ptr [ESI + 0x154]
// 00484760: CALL dword ptr [ESI + 0x108]
// 00484766: ADD ESP,0x4
// 00484769: CMP EAX,EBX
// 0048476b: JNZ 0x00484782
//   XREF to: 00484782 (CONDITIONAL_JUMP)
// 0048476d: MOV EDI,dword ptr [EBX + 0xbe3c]
// 00484773: PUSH EDI
// 00484774: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00484779: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0048477a: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0048477f: ADD ESP,0x8
// 00484782: FLD float ptr [EBP + 0x92]
//   Label: LAB_00484782
//   XREF to: Stack[0x8] (READ)
// 00484788: FLD ST0
// 0048478a: FMUL double ptr [0x00621afe]
//   XREF to: 00621afe (READ)
// 00484790: FLD float ptr [EBX + 0x242c]
// 00484796: FXCH
// 00484798: FSUBR ST0,ST1
// 0048479a: LEA EDI,[EBX + 0x2428]
// 004847a0: FSTP ST1
// 004847a2: FSTP float ptr [EBX + 0x242c]
// 004847a8: FLD float ptr [EDI]
// 004847aa: FMUL ST1
// 004847ac: FSTP float ptr [EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (WRITE)
// 004847b2: FLD float ptr [EDI + 0x4]
// 004847b5: FMUL ST1
// 004847b7: LEA EAX,[EBX + 0x241c]
// 004847bd: FSTP float ptr [EBP + 0xffffff2e]
//   XREF to: Stack[-0x15c] (WRITE)
// 004847c3: FMUL float ptr [EDI + 0x8]
// 004847c6: LEA ESI,[EBX + 0x23ac]
// 004847cc: FLD float ptr [EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (READ)
// 004847d2: FXCH
// 004847d4: FSTP float ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x158] (WRITE)
// 004847da: FADD float ptr [EAX]
// 004847dc: FLD float ptr [EBP + 0xffffff2e]
//   XREF to: Stack[-0x15c] (READ)
// 004847e2: FXCH
// 004847e4: FSTP float ptr [EBP + 0xfffffeb2]
//   XREF to: Stack[-0x1d8] (WRITE)
// 004847ea: FADD float ptr [EAX + 0x4]
// 004847ed: FLD float ptr [EBP + 0xffffff32]
//   XREF to: Stack[-0x158] (READ)
// 004847f3: FXCH
// 004847f5: FSTP float ptr [EBP + 0xfffffeb6]
//   XREF to: Stack[-0x1d4] (WRITE)
// 004847fb: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 004847fe: FLD float ptr [EBP + 0xfffffeb2]
//   XREF to: Stack[-0x1d8] (READ)
// 00484804: FXCH
// 00484806: FSTP float ptr [EBP + 0xfffffeba]
//   XREF to: Stack[-0x1d0] (WRITE)
// 0048480c: FADD float ptr [ESI]
// 0048480e: FLD float ptr [EBP + 0xfffffeb6]
//   XREF to: Stack[-0x1d4] (READ)
// 00484814: FXCH
// 00484816: FSTP float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe8] (WRITE)
// 00484819: FADD float ptr [ESI + 0x4]
// 0048481c: FLD float ptr [EBP + 0xfffffeba]
//   XREF to: Stack[-0x1d0] (READ)
// 00484822: FXCH
// 00484824: FSTP float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe4] (WRITE)
// 00484827: FADD float ptr [ESI + 0x8]
// 0048482a: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (WRITE)
// 0048482d: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 00484834: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 00484837: MOV dword ptr [EAX + 0x4],EDX
// 0048483a: MOV EDX,dword ptr [EAX + 0x4]
// 0048483d: MOV dword ptr [EAX],EDX
// 0048483f: MOV dword ptr [ESI + 0x8],0x0
// 00484846: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 00484849: FLD float ptr [ESI + 0x8]
// 0048484c: PUSH EAX
// 0048484d: FST float ptr [ESI + 0x4]
// 00484850: PUSH EBX
// 00484851: FSTP float ptr [ESI]
// 00484853: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00484858: ADD ESP,0x8
// 0048485b: CMP dword ptr [EBP + 0x62],0x17
//   Label: LAB_0048485b
//   XREF to: Stack[-0x28] (READ)
// 0048485f: JZ 0x0048486b
//   XREF to: 0048486b (CONDITIONAL_JUMP)
// 00484861: MOV dword ptr [EBX + 0xbf48],0x0
// 0048486b: PUSH EBX
//   Label: LAB_0048486b
// 0048486c: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00484871: ADD ESP,0x4
// 00484874: LEA EAX,[EBX + 0x158]
// 0048487a: PUSH EAX
// 0048487b: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 00484880: ADD ESP,0x4
// 00484883: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00484889: PUSH EBX
// 0048488a: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0048488f: ADD ESP,0x8
// 00484892: LEA ESP,[EBP + 0x7a]
//   Label: LAB_00484892
//   XREF to: Stack[-0x10] (DATA)
// 00484895: POP EBP
// 00484896: POP EDI
// 00484897: POP ESI
// 00484898: POP EBX
// 00484899: RET
// 0048489a: FLD float ptr [0x0065cd7c]
//   Label: LAB_0048489a
//   XREF to: 0065cd7c (READ)
// 004848a0: FMUL float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004848a6: FMUL float ptr [EBX + 0xbe24]
// 004848ac: MOV EAX,dword ptr [EBX + 0x23b4]
// 004848b2: MOV dword ptr [EBX + 0x2434],EAX
// 004848b8: FSTP float ptr [EBX + 0x2438]
// 004848be: JMP 0x00484677
//   XREF to: 00484677 (UNCONDITIONAL_JUMP)
// 004848c3: PUSH 0x1
//   Label: LAB_004848c3
// 004848c5: PUSH 0x0
// 004848c7: LEA EAX,[EBX + 0x158]
// 004848cd: PUSH EAX
// 004848ce: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004848d3: ADD ESP,0xc
// 004848d6: PUSH EBX
// 004848d7: MOV EAX,0x6219d0
//   XREF to: 006219d0 (DATA)
// 004848dc: PUSH EAX
//   XREF to: 006219d0 (DATA)
// 004848dd: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004848e3: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 004848e4: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004848e9: JMP 0x004846b6
//   XREF to: 004846b6 (UNCONDITIONAL_JUMP)
// 004848ee: JBE 0x004846a6
//   Label: LAB_004848ee
//   XREF to: 004846a6 (CONDITIONAL_JUMP)
// 004848f4: CMP EAX,0x3
// 004848f7: JZ 0x004848c3
//   XREF to: 004848c3 (CONDITIONAL_JUMP)
// 004848f9: PUSH 0x1
//   Label: LAB_004848f9
// 004848fb: PUSH 0x0
// 004848fd: JMP 0x004846aa
//   XREF to: 004846aa (UNCONDITIONAL_JUMP)
// 00484902: FLD float ptr [EBX + 0xbf50]
//   Label: caseD_17
// 00484908: FLDZ
// 0048490a: FCOMPP
// 0048490c: FNSTSW AX
// 0048490e: SAHF
// 0048490f: JNC 0x0048493f
//   XREF to: 0048493f (CONDITIONAL_JUMP)
// 00484911: MOV EAX,dword ptr [EBX + 0xbf48]
//   Label: LAB_00484911
// 00484917: CMP EAX,0x3
// 0048491a: JA 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00484920: JMP dword ptr [EAX*0x4 + 0x484394]
//   Label: switchD
//   XREF to: 00484927 (COMPUTED_JUMP)
//   XREF to: 0048499a (COMPUTED_JUMP)
//   XREF to: 00484a68 (COMPUTED_JUMP)
//   XREF to: 00484bc2 (COMPUTED_JUMP)
//   XREF to: 00484394 (DATA)
// 00484927: PUSH 0x1
//   Label: caseD_0
// 00484929: PUSH 0x0
// 0048492b: LEA EAX,[EBX + 0x158]
// 00484931: PUSH EAX
// 00484932: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00484937: ADD ESP,0xc
// 0048493a: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 0048493f: MOV ESI,dword ptr [EBX + 0xbf44]
//   Label: LAB_0048493f
// 00484945: PUSH ESI
// 00484946: PUSH 0x6219fa
//   XREF to: 006219fa (DATA)
// 0048494b: LEA EAX,[EBP + 0xfffffbf6]
//   XREF to: Stack[-0x494] (DATA)
// 00484951: PUSH EAX
// 00484952: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00484957: ADD ESP,0xc
// 0048495a: LEA EAX,[EBP + 0xfffffbf6]
//   XREF to: Stack[-0x494] (DATA)
// 00484960: PUSH 0x3f800000
// 00484965: PUSH EAX
// 00484966: PUSH EBX
// 00484967: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 0048496c: ADD ESP,0xc
// 0048496f: PUSH 0x3e4ccccd
// 00484974: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00484979: ADD ESP,0x4
// 0048497c: TEST EAX,EAX
// 0048497e: JZ 0x00484911
//   XREF to: 00484911 (CONDITIONAL_JUMP)
// 00484980: LEA EAX,[EBP + 0xfffffbf6]
//   XREF to: Stack[-0x494] (DATA)
// 00484986: PUSH 0x3f800000
// 0048498b: PUSH EAX
// 0048498c: PUSH EBX
// 0048498d: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 00484992: ADD ESP,0xc
// 00484995: JMP 0x00484911
//   XREF to: 00484911 (UNCONDITIONAL_JUMP)
// 0048499a: FLD float ptr [EBX + 0xbf4c]
//   Label: caseD_1
// 004849a0: FADD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004849a6: FST float ptr [EBX + 0xbf4c]
// 004849ac: FCOMP float ptr [0x0065cd88]
//   XREF to: 0065cd88 (READ)
// 004849b2: FNSTSW AX
// 004849b4: SAHF
// 004849b5: JBE 0x004849cc
//   XREF to: 004849cc (CONDITIONAL_JUMP)
// 004849b7: MOV dword ptr [EBX + 0xbf48],0x2
// 004849c1: MOV EAX,[0x0065cd88]
//   XREF to: 0065cd88 (READ)
// 004849c6: MOV dword ptr [EBX + 0xbf4c],EAX
// 004849cc: MOV ECX,0x40400000
//   Label: LAB_004849cc
// 004849d1: LEA EAX,[EBX + 0x158]
// 004849d7: XOR EDX,EDX
// 004849d9: XOR ESI,ESI
// 004849db: MOV dword ptr [EBP + 0xffffff42],EDX
//   XREF to: Stack[-0x148] (WRITE)
// 004849e1: MOV dword ptr [EBP + 0xffffff46],ECX
//   XREF to: Stack[-0x144] (WRITE)
// 004849e7: PUSH EAX
// 004849e8: MOV dword ptr [EBP + 0xffffff4a],EDX
//   XREF to: Stack[-0x140] (WRITE)
// 004849ee: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004849f1: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004849f6: ADD ESP,0x4
// 004849f9: MOV EDX,dword ptr [EAX + 0x28558]
// 004849ff: MOV EDI,EAX
// 00484a01: TEST EDX,EDX
// 00484a03: JLE 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00484a09: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 00484a0c: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00484a0f: PUSH ESI
//   Label: LAB_00484a0f
// 00484a10: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x64] (DATA)
// 00484a13: PUSH EAX
// 00484a14: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00484a17: PUSH EAX
// 00484a18: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00484a1d: ADD ESP,0xc
// 00484a20: PUSH EAX
// 00484a21: LEA EAX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (DATA)
// 00484a27: PUSH EAX
// 00484a28: PUSH EBX
// 00484a29: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484a2e: ADD ESP,0xc
// 00484a31: PUSH 0xffff
// 00484a36: LEA EAX,[EBP + 0xffffff42]
//   XREF to: Stack[-0x148] (DATA)
// 00484a3c: PUSH EAX
// 00484a3d: LEA EAX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (DATA)
// 00484a43: PUSH 0x3f000000
// 00484a48: PUSH EAX
// 00484a49: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 00484a4f: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 00484a50: INC ESI
// 00484a51: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 00484a56: MOV ECX,dword ptr [EDI + 0x28558]
// 00484a5c: ADD ESP,0x14
// 00484a5f: CMP ESI,ECX
// 00484a61: JL 0x00484a0f
//   XREF to: 00484a0f (CONDITIONAL_JUMP)
// 00484a63: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484a68: MOV ESI,0x1
//   Label: caseD_2
// 00484a6d: XOR EDI,EDI
// 00484a6f: XOR EAX,EAX
// 00484a71: MOV dword ptr [EBP + 0x5a],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00484a74: MOV dword ptr [EBP + 0x72],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00484a77: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00484a7a: LEA EDI,[EBX + 0xbf58]
// 00484a80: MOV EAX,[0x006810c8]
//   Label: LAB_00484a80
//   XREF to: 006810c8 (READ)
// 00484a85: MOV ESI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00484a88: CMP ESI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 00484a8e: JGE 0x00484b1a
//   XREF to: 00484b1a (CONDITIONAL_JUMP)
// 00484a94: ADD EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00484a97: MOV ESI,dword ptr [EAX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 00484a9d: TEST ESI,ESI
// 00484a9f: JNZ 0x00484ab3
//   XREF to: 00484ab3 (CONDITIONAL_JUMP)
// 00484aa1: MOV ESI,dword ptr [EBP + 0x72]
//   Label: LAB_00484aa1
//   XREF to: Stack[-0x18] (READ)
// 00484aa4: MOV ECX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00484aa7: INC ESI
// 00484aa8: ADD ECX,0x4
// 00484aab: MOV dword ptr [EBP + 0x72],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00484aae: MOV dword ptr [EBP + 0x6e],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00484ab1: JMP 0x00484a80
//   XREF to: 00484a80 (UNCONDITIONAL_JUMP)
// 00484ab3: CMP ESI,EBX
//   Label: LAB_00484ab3
// 00484ab5: JZ 0x00484aa1
//   XREF to: 00484aa1 (CONDITIONAL_JUMP)
// 00484ab7: PUSH ESI
// 00484ab8: MOV EAX,dword ptr [ESI + 0x154]
// 00484abe: CALL dword ptr [EAX + 0x120]
// 00484ac4: ADD ESP,0x4
// 00484ac7: TEST EAX,EAX
// 00484ac9: JG 0x00484aa1
//   XREF to: 00484aa1 (CONDITIONAL_JUMP)
// 00484acb: FLD float ptr [ESI + 0x20]
// 00484ace: FSUB float ptr [EDI]
// 00484ad0: FSTP float ptr [EBP + 0xfffffeee]
//   XREF to: Stack[-0x19c] (WRITE)
// 00484ad6: FLD float ptr [ESI + 0x24]
// 00484ad9: FSUB float ptr [EDI + 0x4]
// 00484adc: FST float ptr [EBP + 0xfffffef2]
//   XREF to: Stack[-0x198] (WRITE)
// 00484ae2: FMUL float ptr [EBP + 0xfffffef2]
//   XREF to: Stack[-0x198] (READ)
// 00484ae8: FLD float ptr [EBP + 0xfffffeee]
//   XREF to: Stack[-0x19c] (READ)
// 00484aee: FMUL ST0
// 00484af0: FLD float ptr [ESI + 0x28]
// 00484af3: FSUB float ptr [EDI + 0x8]
// 00484af6: FXCH
// 00484af8: FADDP ST2,ST0
// 00484afa: FST float ptr [EBP + 0xfffffef6]
//   XREF to: Stack[-0x194] (WRITE)
// 00484b00: FMUL float ptr [EBP + 0xfffffef6]
//   XREF to: Stack[-0x194] (READ)
// 00484b06: FADDP
// 00484b08: FSQRT
// 00484b0a: FCOMP double ptr [0x00621b06]
//   XREF to: 00621b06 (READ)
// 00484b10: FNSTSW AX
// 00484b12: SAHF
// 00484b13: JNC 0x00484aa1
//   XREF to: 00484aa1 (CONDITIONAL_JUMP)
// 00484b15: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484b1a: CMP dword ptr [EBP + 0x5a],0x0
//   Label: LAB_00484b1a
//   XREF to: Stack[-0x30] (READ)
// 00484b1e: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00484b24: FLD float ptr [0x0065cd88]
//   XREF to: 0065cd88 (READ)
// 00484b2a: MOV dword ptr [EBX + 0xbf48],0x3
// 00484b34: LEA EAX,[EBX + 0x20]
// 00484b37: FSTP float ptr [EBX + 0xbf4c]
// 00484b3d: MOV EDX,dword ptr [EDI]
// 00484b3f: MOV dword ptr [EAX],EDX
// 00484b41: MOV EDX,dword ptr [EDI + 0x4]
// 00484b44: MOV dword ptr [EAX + 0x4],EDX
// 00484b47: MOV EDX,dword ptr [EDI + 0x8]
// 00484b4a: MOV dword ptr [EAX + 0x8],EDX
// 00484b4d: MOV EDI,dword ptr [EBX + 0xbe3c]
// 00484b53: TEST EDI,EDI
// 00484b55: JZ 0x00484bab
//   XREF to: 00484bab (CONDITIONAL_JUMP)
// 00484b57: MOV ESI,EDI
// 00484b59: FLD float ptr [ESI + 0x20]
// 00484b5c: FSUB float ptr [EAX]
// 00484b5e: FSTP float ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (WRITE)
// 00484b61: FLD float ptr [ESI + 0x24]
// 00484b64: FSUB float ptr [EAX + 0x4]
// 00484b67: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (WRITE)
// 00484b6a: FLD float ptr [ESI + 0x28]
// 00484b6d: FSUB float ptr [EAX + 0x8]
// 00484b70: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 00484b73: PUSH EAX
// 00484b74: LEA EAX,[EBP + 0xfffffefa]
//   XREF to: Stack[-0x190] (DATA)
// 00484b7a: LEA ESI,[EBX + 0x30]
// 00484b7d: PUSH EAX
// 00484b7e: FSTP float ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (WRITE)
// 00484b81: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00484b86: ADD ESP,0x8
// 00484b89: CMP ESI,EAX
// 00484b8b: JZ 0x00484b9d
//   XREF to: 00484b9d (CONDITIONAL_JUMP)
// 00484b8d: MOV EDX,dword ptr [EAX]
// 00484b8f: MOV dword ptr [ESI],EDX
// 00484b91: MOV EDX,dword ptr [EAX + 0x4]
// 00484b94: MOV dword ptr [ESI + 0x4],EDX
// 00484b97: MOV EDX,dword ptr [EAX + 0x8]
// 00484b9a: MOV dword ptr [ESI + 0x8],EDX
// 00484b9d: MOV dword ptr [EBX + 0x38],0x0
//   Label: LAB_00484b9d
// 00484ba4: MOV dword ptr [EBX + 0x30],0x0
// 00484bab: PUSH 0x621a08
//   Label: LAB_00484bab
//   XREF to: 00621a08 (DATA)
// 00484bb0: MOV EAX,dword ptr [EBX + 0x154]
// 00484bb6: PUSH EBX
// 00484bb7: CALL dword ptr [EAX + 0x24]
// 00484bba: ADD ESP,0x8
// 00484bbd: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484bc2: XOR EDI,EDI
//   Label: caseD_3
// 00484bc4: MOV dword ptr [EBP + -0x3a],EDI
//   XREF to: Stack[-0xc4] (WRITE)
// 00484bc7: MOV dword ptr [EBP + -0x32],EDI
//   XREF to: Stack[-0xbc] (WRITE)
// 00484bca: LEA EDI,[EBX + 0x158]
// 00484bd0: MOV EAX,0x40400000
// 00484bd5: PUSH EDI
// 00484bd6: XOR ESI,ESI
// 00484bd8: MOV dword ptr [EBP + -0x36],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 00484bdb: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00484be0: ADD ESP,0x4
// 00484be3: MOV ECX,dword ptr [EAX + 0x28558]
// 00484be9: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00484bec: TEST ECX,ECX
// 00484bee: JLE 0x00484c50
//   XREF to: 00484c50 (CONDITIONAL_JUMP)
// 00484bf0: PUSH ESI
//   Label: LAB_00484bf0
// 00484bf1: LEA EAX,[EBP + 0xffffff7e]
//   XREF to: Stack[-0x10c] (DATA)
// 00484bf7: PUSH EAX
// 00484bf8: PUSH EDI
// 00484bf9: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00484bfe: ADD ESP,0xc
// 00484c01: PUSH EAX
// 00484c02: LEA EAX,[EBP + 0xffffff5a]
//   XREF to: Stack[-0x130] (DATA)
// 00484c08: PUSH EAX
// 00484c09: PUSH EBX
// 00484c0a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484c0f: ADD ESP,0xc
// 00484c12: PUSH 0xffff
// 00484c17: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc4] (DATA)
// 00484c1a: PUSH EAX
// 00484c1b: LEA EAX,[EBP + 0xffffff5a]
//   XREF to: Stack[-0x130] (DATA)
// 00484c21: PUSH 0x3f000000
// 00484c26: PUSH EAX
// 00484c27: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 00484c2c: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 00484c2d: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 00484c32: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00484c35: INC ESI
// 00484c36: MOV EDX,dword ptr [EAX + 0x28558]
// 00484c3c: ADD ESP,0x14
// 00484c3f: CMP ESI,EDX
// 00484c41: JL 0x00484bf0
//   XREF to: 00484bf0 (CONDITIONAL_JUMP)
// 00484c43: LEA EAX,[EAX]
// 00484c49: LEA EDX,[EDX]
// 00484c4f: NOP
// 00484c50: FLD float ptr [EBX + 0xbf4c]
//   Label: LAB_00484c50
// 00484c56: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00484c5c: FST float ptr [EBX + 0xbf4c]
// 00484c62: FLDZ
// 00484c64: FCOMPP
// 00484c66: FNSTSW AX
// 00484c68: SAHF
// 00484c69: JBE 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00484c6f: PUSH 0x1
// 00484c71: PUSH 0xe
// 00484c73: MOV dword ptr [EBX + 0xbf4c],0x0
// 00484c7d: PUSH EDI
// 00484c7e: MOV dword ptr [EBX + 0xbf48],0x0
// 00484c88: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00484c8d: ADD ESP,0xc
// 00484c90: PUSH 0x41a00000
// 00484c95: PUSH 0x40000000
// 00484c9a: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00484c9f: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00484ca2: ADD ESP,0x8
// 00484ca5: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00484ca8: MOV dword ptr [EBX + 0xbf54],EAX
// 00484cae: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484cb3: CMP dword ptr [EBX + 0xbfe4],0x0
//   Label: caseD_7
// 00484cba: JNZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00484cc0: MOV ESI,dword ptr [0x02c6d0bc]
//   XREF to: 02c6d0bc (READ)
// 00484cc6: PUSH ESI
// 00484cc7: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xd0] (DATA)
// 00484cca: PUSH EAX
// 00484ccb: LEA EAX,[EBX + 0x158]
// 00484cd1: PUSH EAX
// 00484cd2: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00484cd7: ADD ESP,0xc
// 00484cda: PUSH EAX
// 00484cdb: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 00484cde: PUSH EAX
// 00484cdf: PUSH EBX
// 00484ce0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484ce5: ADD ESP,0xc
// 00484ce8: PUSH 0x0
// 00484cea: PUSH 0x1
// 00484cec: LEA EAX,[EBX + 0x30]
// 00484cef: PUSH EAX
// 00484cf0: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 00484cf3: PUSH EAX
// 00484cf4: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 00484cfa: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 00484cfb: LEA ESI,[EBX + 0x30]
// 00484cfe: CALL core_fire.cpp_CFireEffect_FUN_004c8ef0
//   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)
// 00484d03: MOV EAX,dword ptr [ESI]
// 00484d05: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 00484d08: LEA EAX,[ESI + 0x4]
// 00484d0b: MOV EAX,dword ptr [EAX]
// 00484d0d: ADD ESP,0x14
// 00484d10: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 00484d13: LEA EAX,[ESI + 0x8]
// 00484d16: PUSH 0x0
// 00484d18: MOV EAX,dword ptr [EAX]
// 00484d1a: PUSH 0x1
// 00484d1c: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00484d1f: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 00484d22: PUSH EAX
// 00484d23: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 00484d26: FLD float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (READ)
// 00484d29: PUSH EAX
// 00484d2a: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 00484d2f: FADD float ptr [0x00621aee]
//   XREF to: 00621aee (READ)
// 00484d35: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 00484d36: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 00484d39: CALL core_fire.cpp_CFireEffect_FUN_004c8ef0
//   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)
// 00484d3e: ADD ESP,0x14
// 00484d41: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484d46: LEA EAX,[EBP + 0xfffffdfe]
//   Label: caseD_2
//   XREF to: Stack[-0x28c] (DATA)
// 00484d4c: PUSH EAX
// 00484d4d: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00484d52: ADD ESP,0x4
// 00484d55: PUSH 0x41700000
// 00484d5a: PUSH 0x40e00000
// 00484d5f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00484d64: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00484d67: ADD ESP,0x8
// 00484d6a: LEA EAX,[EBP + 0xfffffdfe]
//   XREF to: Stack[-0x28c] (DATA)
// 00484d70: MOV ESI,dword ptr [0x02c6d0a0]
//   XREF to: 02c6d0a0 (READ)
// 00484d76: PUSH EAX
// 00484d77: LEA EAX,[ESI*0x4 + 0x0]
// 00484d7e: MOV dword ptr [EBP + 0xfffffe32],EBX
//   XREF to: Stack[-0x258] (WRITE)
// 00484d84: SUB EAX,ESI
// 00484d86: MOV dword ptr [EBP + 0xfffffe36],EBX
//   XREF to: Stack[-0x254] (WRITE)
// 00484d8c: SHL EAX,0x4
// 00484d8f: LEA ESI,[EBX + 0xfd8]
// 00484d95: ADD EAX,ESI
// 00484d97: PUSH 0x3ecccccd
// 00484d9c: PUSH EAX
// 00484d9d: MOV EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 00484da2: PUSH EAX
//   XREF to: 03f87558 (DATA)
// 00484da3: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 00484da6: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00484da9: PUSH EAX
// 00484daa: FSTP float ptr [EBP + 0xfffffe02]
//   XREF to: Stack[-0x288] (WRITE)
// 00484db0: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00484db5: ADD ESP,0xc
// 00484db8: PUSH EAX
// 00484db9: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 00484dbc: PUSH EAX
// 00484dbd: PUSH EBX
// 00484dbe: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484dc3: ADD ESP,0xc
// 00484dc6: PUSH EAX
// 00484dc7: PUSH EBX
// 00484dc8: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00484dcd: ADD ESP,0x10
// 00484dd0: MOV dword ptr [EBX + 0xbf64],0x1
// 00484dda: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484ddf: LEA EAX,[EBP + 0xfffffdc2]
//   Label: caseD_13
//   XREF to: Stack[-0x2c8] (DATA)
// 00484de5: PUSH EAX
// 00484de6: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00484deb: ADD ESP,0x4
// 00484dee: PUSH 0x41700000
// 00484df3: PUSH 0x40e00000
// 00484df8: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00484dfd: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00484e00: ADD ESP,0x8
// 00484e03: LEA EAX,[EBP + 0xfffffdc2]
//   XREF to: Stack[-0x2c8] (DATA)
// 00484e09: MOV ESI,dword ptr [0x02c6d0a0]
//   XREF to: 02c6d0a0 (READ)
// 00484e0f: PUSH EAX
// 00484e10: LEA EAX,[ESI*0x4 + 0x0]
// 00484e17: MOV dword ptr [EBP + 0xfffffdf6],EBX
//   XREF to: Stack[-0x294] (WRITE)
// 00484e1d: SUB EAX,ESI
// 00484e1f: MOV dword ptr [EBP + 0xfffffdfa],EBX
//   XREF to: Stack[-0x290] (WRITE)
// 00484e25: SHL EAX,0x4
// 00484e28: LEA ESI,[EBX + 0xfd8]
// 00484e2e: ADD EAX,ESI
// 00484e30: PUSH 0x3ecccccd
// 00484e35: PUSH EAX
// 00484e36: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00484e3b: LEA EAX,[EBP + 0xffffff4e]
//   XREF to: Stack[-0x13c] (DATA)
// 00484e41: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00484e44: PUSH EAX
// 00484e45: FSTP float ptr [EBP + 0xfffffdc6]
//   XREF to: Stack[-0x2c4] (WRITE)
// 00484e4b: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00484e50: ADD ESP,0xc
// 00484e53: PUSH EAX
// 00484e54: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 00484e57: PUSH EAX
// 00484e58: PUSH EBX
// 00484e59: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484e5e: ADD ESP,0xc
// 00484e61: PUSH EAX
// 00484e62: PUSH EBX
// 00484e63: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00484e68: ADD ESP,0x10
// 00484e6b: MOV dword ptr [EBX + 0xbf64],0x1
// 00484e75: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484e7a: LEA EAX,[EBP + 0xfffffe76]
//   Label: caseD_14
//   XREF to: Stack[-0x214] (DATA)
// 00484e80: PUSH EAX
// 00484e81: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00484e86: ADD ESP,0x4
// 00484e89: PUSH 0x41700000
// 00484e8e: PUSH 0x40e00000
// 00484e93: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00484e98: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00484e9b: ADD ESP,0x8
// 00484e9e: LEA EAX,[EBP + 0xfffffe76]
//   XREF to: Stack[-0x214] (DATA)
// 00484ea4: MOV ESI,dword ptr [0x02c6d0a0]
//   XREF to: 02c6d0a0 (READ)
// 00484eaa: PUSH EAX
// 00484eab: LEA EAX,[ESI*0x4 + 0x0]
// 00484eb2: SUB EAX,ESI
// 00484eb4: MOV dword ptr [EBP + 0xfffffeaa],EBX
//   XREF to: Stack[-0x1e0] (WRITE)
// 00484eba: MOV ESI,EAX
// 00484ebc: MOV dword ptr [EBP + 0xfffffeae],EBX
//   XREF to: Stack[-0x1dc] (WRITE)
// 00484ec2: SHL ESI,0x4
// 00484ec5: LEA EAX,[EBX + 0xfd8]
// 00484ecb: ADD EAX,ESI
// 00484ecd: PUSH 0x3ecccccd
// 00484ed2: PUSH EAX
// 00484ed3: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00484ed8: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 00484edb: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00484ede: PUSH EAX
// 00484edf: FSTP float ptr [EBP + 0xfffffe7a]
//   XREF to: Stack[-0x210] (WRITE)
// 00484ee5: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00484eea: ADD ESP,0xc
// 00484eed: PUSH EAX
// 00484eee: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x16c] (DATA)
// 00484ef4: PUSH EAX
// 00484ef5: PUSH EBX
// 00484ef6: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484efb: ADD ESP,0xc
// 00484efe: PUSH EAX
// 00484eff: PUSH EBX
// 00484f00: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00484f05: ADD ESP,0x10
// 00484f08: MOV dword ptr [EBX + 0xbf64],0x1
// 00484f12: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484f17: LEA EAX,[EBP + 0xfffffe3a]
//   Label: caseD_15
//   XREF to: Stack[-0x250] (DATA)
// 00484f1d: PUSH EAX
// 00484f1e: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00484f23: ADD ESP,0x4
// 00484f26: PUSH 0x41700000
// 00484f2b: PUSH 0x40e00000
// 00484f30: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00484f35: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00484f38: ADD ESP,0x8
// 00484f3b: LEA EAX,[EBP + 0xfffffe3a]
//   XREF to: Stack[-0x250] (DATA)
// 00484f41: MOV ESI,dword ptr [0x02c6d0a8]
//   XREF to: 02c6d0a8 (READ)
// 00484f47: PUSH EAX
// 00484f48: LEA EAX,[ESI*0x4 + 0x0]
// 00484f4f: SUB EAX,ESI
// 00484f51: MOV dword ptr [EBP + 0xfffffe6e],EBX
//   XREF to: Stack[-0x21c] (WRITE)
// 00484f57: MOV ESI,EAX
// 00484f59: MOV dword ptr [EBP + 0xfffffe72],EBX
//   XREF to: Stack[-0x218] (WRITE)
// 00484f5f: SHL ESI,0x4
// 00484f62: LEA EAX,[EBX + 0xfd8]
// 00484f68: ADD EAX,ESI
// 00484f6a: PUSH 0x3ecccccd
// 00484f6f: PUSH EAX
// 00484f70: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00484f75: LEA EAX,[EBP + 0xfffffeca]
//   XREF to: Stack[-0x1c0] (DATA)
// 00484f7b: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00484f7e: PUSH EAX
// 00484f7f: FSTP float ptr [EBP + 0xfffffe3e]
//   XREF to: Stack[-0x24c] (WRITE)
// 00484f85: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00484f8a: ADD ESP,0xc
// 00484f8d: PUSH EAX
// 00484f8e: LEA EAX,[EBP + 0xffffff36]
//   XREF to: Stack[-0x154] (DATA)
// 00484f94: PUSH EAX
// 00484f95: PUSH EBX
// 00484f96: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484f9b: ADD ESP,0xc
// 00484f9e: PUSH EAX
// 00484f9f: PUSH EBX
// 00484fa0: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00484fa5: ADD ESP,0x10
// 00484fa8: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00484fad: MOV ESI,dword ptr [EBX + 0xbe28]
//   Label: caseD_11
// 00484fb3: TEST ESI,ESI
// 00484fb5: JNZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00484fbb: CMP dword ptr [EBX + 0xdc],0x0
// 00484fc2: JNZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00484fc8: PUSH EAX
// 00484fc9: LEA EAX,[EBP + 0xfffffed6]
//   XREF to: Stack[-0x1b4] (DATA)
// 00484fcf: PUSH EAX
// 00484fd0: LEA EAX,[EBX + 0x158]
// 00484fd6: PUSH EAX
// 00484fd7: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00484fdc: ADD ESP,0xc
// 00484fdf: PUSH EAX
// 00484fe0: LEA EAX,[EBP + 0xfffffebe]
//   XREF to: Stack[-0x1cc] (DATA)
// 00484fe6: PUSH EAX
// 00484fe7: PUSH EBX
// 00484fe8: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00484fed: ADD ESP,0xc
// 00484ff0: PUSH ESI
// 00484ff1: LEA EAX,[EBP + 0xfffffebe]
//   XREF to: Stack[-0x1cc] (DATA)
// 00484ff7: PUSH EAX
// 00484ff8: MOV EAX,[0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 00484ffd: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 00484ffe: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00485003: ADD ESP,0xc
// 00485006: MOV dword ptr [EBX + 0xbe28],0x1
//   Label: caseD_10
// 00485010: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00485015: MOV EAX,[0x02db87d0]
//   Label: caseD_c
//   XREF to: 02db87d0 (READ)
// 0048501a: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00485021: PUSH EAX
// 00485022: MOV ESI,dword ptr [EAX + 0x154]
// 00485028: CALL dword ptr [ESI + 0x120]
// 0048502e: ADD ESP,0x4
// 00485031: TEST EAX,EAX
// 00485033: JNZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485039: LEA EAX,[EBX + 0xbee0]
// 0048503f: PUSH EAX
// 00485040: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00485046: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 00485047: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0048504c: ADD ESP,0x8
// 0048504f: TEST EAX,EAX
// 00485051: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485057: PUSH 0x1
// 00485059: PUSH 0xd
// 0048505b: LEA EAX,[EBX + 0x158]
// 00485061: PUSH EAX
// 00485062: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00485067: ADD ESP,0xc
// 0048506a: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 0048506f: MOV EAX,[0x02db87d0]
//   Label: caseD_12
//   XREF to: 02db87d0 (READ)
// 00485074: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0048507b: PUSH EAX
// 0048507c: MOV ESI,dword ptr [EAX + 0x154]
// 00485082: CALL dword ptr [ESI + 0x120]
// 00485088: ADD ESP,0x4
// 0048508b: TEST EAX,EAX
// 0048508d: JNZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485093: LEA EAX,[EBX + 0xbee0]
// 00485099: PUSH EAX
// 0048509a: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004850a0: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004850a1: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004850a6: ADD ESP,0x8
// 004850a9: TEST EAX,EAX
// 004850ab: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 004850b1: PUSH 0x1
// 004850b3: PUSH 0xd
// 004850b5: LEA EAX,[EBX + 0x158]
// 004850bb: PUSH EAX
// 004850bc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004850c1: ADD ESP,0xc
// 004850c4: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004850c9: LEA EAX,[EBX + 0xbee0]
//   Label: caseD_1a
// 004850cf: PUSH EAX
// 004850d0: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004850d6: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004850d7: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004850dc: ADD ESP,0x8
// 004850df: TEST EAX,EAX
// 004850e1: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 004850e7: PUSH 0x1
// 004850e9: PUSH 0x0
// 004850eb: LEA EAX,[EBX + 0x158]
// 004850f1: PUSH EAX
// 004850f2: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004850f7: ADD ESP,0xc
// 004850fa: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004850ff: LEA EAX,[EBX + 0xbee0]
//   Label: caseD_f
// 00485105: PUSH EAX
// 00485106: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0048510c: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 0048510d: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00485112: ADD ESP,0x8
// 00485115: TEST EAX,EAX
// 00485117: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 0048511d: PUSH 0x1
// 0048511f: PUSH 0xb
// 00485121: LEA EAX,[EBX + 0x158]
// 00485127: PUSH EAX
// 00485128: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048512d: ADD ESP,0xc
// 00485130: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00485135: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_8
//   XREF to: Stack[0x8] (READ)
// 0048513b: MOV EAX,dword ptr [EBX + 0x154]
// 00485141: PUSH EBX
// 00485142: CALL dword ptr [EAX + 0x158]
// 00485148: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0048514e: ADD ESP,0x8
// 00485151: TEST EAX,EAX
// 00485153: JZ 0x004851d6
//   XREF to: 004851d6 (CONDITIONAL_JUMP)
// 00485159: FLD float ptr [EBX + 0x243c]
// 0048515f: FCOMP float ptr [0x0065cd78]
//   XREF to: 0065cd78 (READ)
// 00485165: FNSTSW AX
// 00485167: SAHF
// 00485168: JC 0x00485179
//   XREF to: 00485179 (CONDITIONAL_JUMP)
// 0048516a: FLD float ptr [EBX + 0xbf54]
// 00485170: FLDZ
// 00485172: FCOMPP
// 00485174: FNSTSW AX
// 00485176: SAHF
// 00485177: JBE 0x004851aa
//   XREF to: 004851aa (CONDITIONAL_JUMP)
// 00485179: PUSH 0x1
//   Label: LAB_00485179
// 0048517b: PUSH 0x0
// 0048517d: LEA EAX,[EBX + 0x158]
// 00485183: PUSH EAX
// 00485184: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00485189: ADD ESP,0xc
// 0048518c: PUSH 0x41a00000
// 00485191: PUSH 0x40000000
// 00485196: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0048519b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048519e: ADD ESP,0x8
// 004851a1: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004851a4: MOV dword ptr [EBX + 0xbf54],EAX
// 004851aa: MOV EDX,dword ptr [EBX + 0xbf64]
//   Label: LAB_004851aa
// 004851b0: LEA EAX,[EBX + 0x158]
// 004851b6: TEST EDX,EDX
// 004851b8: JZ 0x00485205
//   XREF to: 00485205 (CONDITIONAL_JUMP)
// 004851ba: PUSH 0x1
// 004851bc: PUSH 0x19
// 004851be: PUSH EAX
// 004851bf: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004851c4: ADD ESP,0xc
// 004851c7: MOV dword ptr [EBX + 0xbf64],0x0
// 004851d1: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004851d6: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004851d6
//   XREF to: Stack[0x8] (READ)
// 004851dc: PUSH EBX
// 004851dd: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004851e2: ADD ESP,0x8
// 004851e5: TEST EAX,EAX
// 004851e7: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 004851ed: PUSH 0x1
// 004851ef: PUSH 0xe
// 004851f1: LEA EAX,[EBX + 0x158]
// 004851f7: PUSH EAX
// 004851f8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004851fd: ADD ESP,0xc
// 00485200: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00485205: PUSH 0x1
//   Label: LAB_00485205
// 00485207: PUSH 0x9
// 00485209: PUSH EAX
// 0048520a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048520f: ADD ESP,0xc
// 00485212: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00485217: FLD float ptr [EBX + 0xbf50]
//   Label: caseD_9
// 0048521d: FLDZ
// 0048521f: FCOMPP
// 00485221: FNSTSW AX
// 00485223: SAHF
// 00485224: JC 0x0048527c
//   XREF to: 0048527c (CONDITIONAL_JUMP)
// 00485226: MOV EDI,dword ptr [EBX + 0xbf44]
// 0048522c: PUSH EDI
// 0048522d: PUSH 0x621a1f
//   XREF to: 00621a1f (DATA)
// 00485232: LEA EAX,[EBP + 0xfffffcbe]
//   XREF to: Stack[-0x3cc] (DATA)
// 00485238: PUSH EAX
// 00485239: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0048523e: ADD ESP,0xc
// 00485241: LEA EAX,[EBP + 0xfffffcbe]
//   XREF to: Stack[-0x3cc] (DATA)
// 00485247: PUSH 0x3f800000
// 0048524c: PUSH EAX
// 0048524d: PUSH EBX
// 0048524e: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 00485253: ADD ESP,0xc
// 00485256: PUSH 0x3e4ccccd
// 0048525b: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00485260: ADD ESP,0x4
// 00485263: TEST EAX,EAX
// 00485265: JZ 0x0048527c
//   XREF to: 0048527c (CONDITIONAL_JUMP)
// 00485267: LEA EAX,[EBP + 0xfffffcbe]
//   XREF to: Stack[-0x3cc] (DATA)
// 0048526d: PUSH 0x3f800000
// 00485272: PUSH EAX
// 00485273: PUSH EBX
// 00485274: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 00485279: ADD ESP,0xc
// 0048527c: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0048527c
//   XREF to: Stack[0x8] (READ)
// 00485282: MOV EAX,dword ptr [EBX + 0x154]
// 00485288: PUSH EBX
// 00485289: CALL dword ptr [EAX + 0x158]
// 0048528f: ADD ESP,0x8
// 00485292: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00485298: LEA ESI,[EBX + 0x158]
// 0048529e: TEST EAX,EAX
// 004852a0: JZ 0x004852e1
//   XREF to: 004852e1 (CONDITIONAL_JUMP)
// 004852a2: FLD float ptr [EBX + 0xbf54]
// 004852a8: FLDZ
// 004852aa: FCOMPP
// 004852ac: FNSTSW AX
// 004852ae: SAHF
// 004852af: JBE 0x0048530a
//   XREF to: 0048530a (CONDITIONAL_JUMP)
// 004852b1: PUSH 0x41a00000
// 004852b6: PUSH 0x40000000
// 004852bb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004852c0: ADD ESP,0x8
// 004852c3: PUSH 0x1
// 004852c5: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004852c8: PUSH 0x0
// 004852ca: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004852cd: PUSH ESI
// 004852ce: FSTP float ptr [EBX + 0xbf54]
// 004852d4: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004852d9: ADD ESP,0xc
// 004852dc: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004852e1: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004852e1
//   XREF to: Stack[0x8] (READ)
// 004852e7: PUSH EBX
// 004852e8: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004852ed: ADD ESP,0x8
// 004852f0: TEST EAX,EAX
// 004852f2: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 004852f8: PUSH 0x1
//   Label: LAB_004852f8
// 004852fa: PUSH 0xe
// 004852fc: PUSH ESI
// 004852fd: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00485302: ADD ESP,0xc
// 00485305: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 0048530a: PUSH 0x3db2b8c2
//   Label: LAB_0048530a
// 0048530f: PUSH 0x3f000000
// 00485314: MOV EAX,[0x0065cd6c]
//   XREF to: 0065cd6c (READ)
// 00485319: XOR EDX,EDX
// 0048531b: MOV dword ptr [EBP + 0x32],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 0048531e: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00485321: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x58] (DATA)
// 00485324: MOV dword ptr [EBP + 0x36],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 00485327: PUSH EAX
// 00485328: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0048532e: PUSH EAX
// 0048532f: MOV EDI,dword ptr [EAX + 0x154]
// 00485335: CALL dword ptr [EDI + 0xbc]
// 0048533b: ADD ESP,0x4
// 0048533e: PUSH EAX
// 0048533f: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00485345: ADD EAX,0x20
// 00485348: PUSH EAX
// 00485349: PUSH EBX
// 0048534a: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0048534f: ADD ESP,0x18
// 00485352: TEST EAX,EAX
// 00485354: JL 0x00485399
//   XREF to: 00485399 (CONDITIONAL_JUMP)
// 00485356: JLE 0x004853c0
//   XREF to: 004853c0 (CONDITIONAL_JUMP)
// 00485358: FLD float ptr [EBX + 0xbe38]
// 0048535e: FLDZ
// 00485360: FCOMPP
// 00485362: FNSTSW AX
// 00485364: SAHF
// 00485365: JC 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 0048536b: PUSH 0x1
// 0048536d: PUSH 0x2
// 0048536f: PUSH ESI
// 00485370: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00485375: ADD ESP,0xc
// 00485378: PUSH 0x621a4e
//   XREF to: 00621a4e (DATA)
// 0048537d: MOV EAX,dword ptr [EBX + 0x154]
// 00485383: PUSH EBX
// 00485384: CALL dword ptr [EAX + 0x24]
// 00485387: ADD ESP,0x8
// 0048538a: MOV dword ptr [EBX + 0xbe38],0x3f800000
// 00485394: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00485399: PUSH EBX
//   Label: LAB_00485399
// 0048539a: PUSH 0x621a2d
//   XREF to: 00621a2d (DATA)
// 0048539f: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004853a5: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004853a6: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004853ab: ADD ESP,0xc
// 004853ae: PUSH 0x1
// 004853b0: PUSH 0x8
// 004853b2: PUSH ESI
// 004853b3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004853b8: ADD ESP,0xc
// 004853bb: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004853c0: MOV ESI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004853c0
// 004853c6: LEA EAX,[EBX + 0x20]
// 004853c9: FLD float ptr [ESI + 0x20]
// 004853cc: FSUB float ptr [EAX]
// 004853ce: FSTP float ptr [EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (WRITE)
// 004853d4: FLD float ptr [ESI + 0x24]
// 004853d7: FSUB float ptr [EAX + 0x4]
// 004853da: FSTP float ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (WRITE)
// 004853e0: FLD float ptr [ESI + 0x28]
// 004853e3: LEA ESI,[EBP + 0xe]
//   XREF to: Stack[-0x7c] (DATA)
// 004853e6: FSUB float ptr [EAX + 0x8]
// 004853e9: LEA EAX,[EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (DATA)
// 004853ef: FSTP float ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (WRITE)
// 004853f5: CMP ESI,EAX
// 004853f7: JZ 0x00485414
//   XREF to: 00485414 (CONDITIONAL_JUMP)
// 004853f9: MOV EAX,dword ptr [EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (DATA)
// 004853ff: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00485402: MOV EAX,dword ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (READ)
// 00485408: MOV dword ptr [EBP + 0x12],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0048540b: MOV EAX,dword ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (READ)
// 00485411: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00485414: FLD float ptr [EBP + 0x12]
//   Label: LAB_00485414
//   XREF to: Stack[-0x78] (READ)
// 00485417: FMUL ST0
// 00485419: FLD float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 0048541c: FMUL ST0
// 0048541e: FADDP
// 00485420: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 00485423: FMUL ST0
// 00485425: FADDP
// 00485427: FSQRT
// 00485429: FCOMP double ptr [0x00621ade]
//   XREF to: 00621ade (READ)
// 0048542f: FNSTSW AX
// 00485431: SAHF
// 00485432: JBE 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485438: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x7c] (DATA)
// 0048543b: PUSH EAX
// 0048543c: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x70] (DATA)
// 0048543f: PUSH EAX
// 00485440: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00485445: FLD float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 00485448: ADD ESP,0x8
// 0048544b: FSUB float ptr [EBX + 0x34]
// 0048544e: SUB ESP,0x4
// 00485451: FSTP float ptr [ESP]
// 00485454: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00485459: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048545c: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0048545f: FABS
// 00485461: ADD ESP,0x4
// 00485464: FCOMP double ptr [0x00621ae6]
//   XREF to: 00621ae6 (READ)
// 0048546a: FNSTSW AX
// 0048546c: SAHF
// 0048546d: JNC 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485473: PUSH 0x3f490fdb
// 00485478: PUSH 0xbf490fdb
// 0048547d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00485482: ADD ESP,0x8
// 00485485: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00485488: PUSH 0x1
// 0048548a: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0048548d: LEA EAX,[EBX + 0x158]
// 00485493: PUSH 0x3
// 00485495: FADD float ptr [EBX + 0x34]
// 00485498: PUSH EAX
// 00485499: FSTP float ptr [EBX + 0x34]
// 0048549c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004854a1: ADD ESP,0xc
// 004854a4: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004854a9: LEA EAX,[EBP + 0xfffffd86]
//   Label: caseD_3
//   XREF to: Stack[-0x304] (DATA)
// 004854af: PUSH EAX
// 004854b0: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004854b5: ADD ESP,0x4
// 004854b8: PUSH 0x41700000
// 004854bd: PUSH 0x40e00000
// 004854c2: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004854c7: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004854ca: ADD ESP,0x8
// 004854cd: LEA EAX,[EBP + 0xfffffd86]
//   XREF to: Stack[-0x304] (DATA)
// 004854d3: MOV ESI,dword ptr [0x02c6d0a0]
//   XREF to: 02c6d0a0 (READ)
// 004854d9: PUSH EAX
// 004854da: LEA EAX,[ESI*0x4 + 0x0]
// 004854e1: MOV dword ptr [EBP + 0xfffffdba],EBX
//   XREF to: Stack[-0x2d0] (WRITE)
// 004854e7: SUB EAX,ESI
// 004854e9: MOV dword ptr [EBP + 0xfffffdbe],EBX
//   XREF to: Stack[-0x2cc] (WRITE)
// 004854ef: SHL EAX,0x4
// 004854f2: LEA ESI,[EBX + 0xfd8]
// 004854f8: ADD EAX,ESI
// 004854fa: PUSH 0x3ecccccd
// 004854ff: PUSH EAX
// 00485500: MOV EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 00485505: PUSH EAX
//   XREF to: 03f87558 (DATA)
// 00485506: LEA EAX,[EBP + 0xffffff06]
//   XREF to: Stack[-0x184] (DATA)
// 0048550c: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0048550f: PUSH EAX
// 00485510: FSTP float ptr [EBP + 0xfffffd8a]
//   XREF to: Stack[-0x300] (WRITE)
// 00485516: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0048551b: ADD ESP,0xc
// 0048551e: PUSH EAX
// 0048551f: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 00485522: PUSH EAX
// 00485523: PUSH EBX
// 00485524: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00485529: ADD ESP,0xc
// 0048552c: PUSH EAX
// 0048552d: PUSH EBX
// 0048552e: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00485533: ADD ESP,0x10
// 00485536: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 0048553b: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 00485541: MOV EAX,dword ptr [EBX + 0x154]
// 00485547: PUSH EBX
// 00485548: CALL dword ptr [EAX + 0x158]
// 0048554e: MOV EDX,dword ptr [EBX + 0xbe3c]
// 00485554: ADD ESP,0x8
// 00485557: TEST EDX,EDX
// 00485559: JNZ 0x0048558a
//   XREF to: 0048558a (CONDITIONAL_JUMP)
// 0048555b: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00485561: PUSH EBX
// 00485562: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00485567: ADD ESP,0x8
// 0048556a: TEST EAX,EAX
// 0048556c: JZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485572: PUSH 0x1
// 00485574: PUSH 0xe
// 00485576: LEA EAX,[EBX + 0x158]
// 0048557c: PUSH EAX
// 0048557d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00485582: ADD ESP,0xc
// 00485585: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 0048558a: PUSH 0x3e800000
//   Label: LAB_0048558a
// 0048558f: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00485594: ADD ESP,0x4
// 00485597: TEST EAX,EAX
// 00485599: JNZ 0x004855e4
//   XREF to: 004855e4 (CONDITIONAL_JUMP)
// 0048559b: FLD float ptr [EBX + 0xbf54]
//   Label: LAB_0048559b
// 004855a1: FLDZ
// 004855a3: LEA ESI,[EBX + 0x158]
// 004855a9: FCOMPP
// 004855ab: FNSTSW AX
// 004855ad: SAHF
// 004855ae: JBE 0x004852f8
//   XREF to: 004852f8 (CONDITIONAL_JUMP)
// 004855b4: PUSH 0x41a00000
// 004855b9: PUSH 0x40000000
// 004855be: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004855c3: ADD ESP,0x8
// 004855c6: PUSH 0x1
// 004855c8: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004855cb: PUSH 0xd
// 004855cd: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004855d0: PUSH ESI
// 004855d1: FSTP float ptr [EBX + 0xbf54]
// 004855d7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004855dc: ADD ESP,0xc
// 004855df: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004855e4: MOV EAX,0x621a61
//   Label: LAB_004855e4
//   XREF to: 00621a61 (DATA)
// 004855e9: PUSH EAX
//   XREF to: 00621a61 (DATA)
// 004855ea: MOV ECX,dword ptr [EBX + 0xbe3c]
// 004855f0: PUSH ECX
// 004855f1: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004855f6: ADD ESP,0x8
// 004855f9: TEST EAX,EAX
// 004855fb: JZ 0x0048559b
//   XREF to: 0048559b (CONDITIONAL_JUMP)
// 004855fd: XOR ESI,ESI
// 004855ff: LEA EDI,[ESI*0x4 + 0x0]
// 00485606: MOV EAX,[0x006810c8]
//   Label: LAB_00485606
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0048560b: CMP ESI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 00485611: JGE 0x0048563d
//   XREF to: 0048563d (CONDITIONAL_JUMP)
// 00485613: MOV ECX,dword ptr [0x02c6d09c]
//   XREF to: 02c6d09c (READ)
// 00485619: PUSH ECX
// 0048561a: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
//   XREF to: 0326525c (READ)
// 00485621: PUSH EDX
// 00485622: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00485627: ADD ESP,0x8
// 0048562a: TEST EAX,EAX
// 0048562c: JNZ 0x00485634
//   XREF to: 00485634 (CONDITIONAL_JUMP)
// 0048562e: INC ESI
//   Label: LAB_0048562e
// 0048562f: ADD EDI,0x4
// 00485632: JMP 0x00485606
//   XREF to: 00485606 (UNCONDITIONAL_JUMP)
// 00485634: CMP dword ptr [EAX + 0xbf48],0x0
//   Label: LAB_00485634
// 0048563b: JZ 0x0048562e
//   XREF to: 0048562e (CONDITIONAL_JUMP)
// 0048563d: MOV EAX,[0x006810c8]
//   Label: LAB_0048563d
//   XREF to: 006810c8 (READ)
// 00485642: CMP ESI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 00485648: JNZ 0x0048559b
//   XREF to: 0048559b (CONDITIONAL_JUMP)
// 0048564e: MOV EAX,dword ptr [EBX + 0xbf44]
// 00485654: PUSH EAX
// 00485655: PUSH 0x621a67
//   XREF to: 00621a67 (DATA)
// 0048565a: LEA EAX,[EBP + 0xfffffc5a]
//   XREF to: Stack[-0x430] (DATA)
// 00485660: PUSH EAX
// 00485661: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00485666: ADD ESP,0xc
// 00485669: LEA EAX,[EBP + 0xfffffc5a]
//   XREF to: Stack[-0x430] (DATA)
// 0048566f: PUSH 0x3f800000
// 00485674: PUSH EAX
// 00485675: PUSH EBX
// 00485676: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 0048567b: ADD ESP,0xc
// 0048567e: PUSH 0x1
// 00485680: PUSH 0x17
// 00485682: LEA EAX,[EBX + 0x158]
// 00485688: PUSH EAX
// 00485689: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048568e: ADD ESP,0xc
// 00485691: PUSH 0x621a75
//   XREF to: 00621a75 (DATA)
// 00485696: MOV EAX,dword ptr [EBX + 0x154]
// 0048569c: PUSH EBX
// 0048569d: CALL dword ptr [EAX + 0x24]
// 004856a0: ADD ESP,0x8
// 004856a3: MOV ESI,dword ptr [EBX + 0xbe3c]
// 004856a9: LEA EAX,[EBX + 0xbf58]
// 004856af: ADD ESI,0x20
// 004856b2: MOV dword ptr [EBX + 0xbf48],0x1
// 004856bc: CMP EAX,ESI
// 004856be: JZ 0x004856d0
//   XREF to: 004856d0 (CONDITIONAL_JUMP)
// 004856c0: MOV EDX,dword ptr [ESI]
// 004856c2: MOV dword ptr [EAX],EDX
// 004856c4: MOV EDX,dword ptr [ESI + 0x4]
// 004856c7: MOV dword ptr [EAX + 0x4],EDX
// 004856ca: MOV EDX,dword ptr [ESI + 0x8]
// 004856cd: MOV dword ptr [EAX + 0x8],EDX
// 004856d0: MOV dword ptr [EBX + 0xbf4c],0x0
//   Label: LAB_004856d0
// 004856da: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004856df: FLD float ptr [EBX + 0xbf50]
//   Label: caseD_e
// 004856e5: FLDZ
// 004856e7: FCOMPP
// 004856e9: FNSTSW AX
// 004856eb: SAHF
// 004856ec: JC 0x00485744
//   XREF to: 00485744 (CONDITIONAL_JUMP)
// 004856ee: MOV ECX,dword ptr [EBX + 0xbf44]
// 004856f4: PUSH ECX
// 004856f5: PUSH 0x621a8c
//   XREF to: 00621a8c (DATA)
// 004856fa: LEA EAX,[EBP + 0xfffffd22]
//   XREF to: Stack[-0x368] (DATA)
// 00485700: PUSH EAX
// 00485701: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00485706: ADD ESP,0xc
// 00485709: LEA EAX,[EBP + 0xfffffd22]
//   XREF to: Stack[-0x368] (DATA)
// 0048570f: PUSH 0x3f800000
// 00485714: PUSH EAX
// 00485715: PUSH EBX
// 00485716: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 0048571b: ADD ESP,0xc
// 0048571e: PUSH 0x3e4ccccd
// 00485723: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00485728: ADD ESP,0x4
// 0048572b: TEST EAX,EAX
// 0048572d: JZ 0x00485744
//   XREF to: 00485744 (CONDITIONAL_JUMP)
// 0048572f: LEA EAX,[EBP + 0xfffffd22]
//   XREF to: Stack[-0x368] (DATA)
// 00485735: PUSH 0x3f800000
// 0048573a: PUSH EAX
// 0048573b: PUSH EBX
// 0048573c: CALL core_dracbrid.cpp_FUN_004864c0
//   XREF to: 004864c0 (UNCONDITIONAL_CALL)
// 00485741: ADD ESP,0xc
// 00485744: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00485744
//   XREF to: Stack[0x8] (READ)
// 0048574a: MOV EAX,dword ptr [EBX + 0x154]
// 00485750: PUSH EBX
// 00485751: CALL dword ptr [EAX + 0x158]
// 00485757: ADD ESP,0x8
// 0048575a: MOV EDI,dword ptr [EBX + 0xbe3c]
// 00485760: LEA ESI,[EBX + 0x158]
// 00485766: TEST EDI,EDI
// 00485768: JNZ 0x00485792
//   XREF to: 00485792 (CONDITIONAL_JUMP)
// 0048576a: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00485770: PUSH EBX
// 00485771: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00485776: ADD ESP,0x8
// 00485779: TEST EAX,EAX
// 0048577b: JNZ 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485781: PUSH 0x1
// 00485783: PUSH EDI
// 00485784: PUSH ESI
// 00485785: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048578a: ADD ESP,0xc
// 0048578d: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 00485792: MOV EAX,[0x0065cd68]
//   Label: LAB_00485792
//   XREF to: 0065cd68 (READ)
// 00485797: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0048579a: LEA EAX,[EBX + 0x23ac]
// 004857a0: MOV dword ptr [EAX + 0x8],0x0
// 004857a7: MOV EDX,dword ptr [EAX + 0x8]
// 004857aa: MOV dword ptr [EAX + 0x4],EDX
// 004857ad: MOV EDX,dword ptr [EAX + 0x4]
// 004857b0: MOV dword ptr [EAX],EDX
// 004857b2: XOR EAX,EAX
// 004857b4: MOV dword ptr [EBP + 0xfffffee2],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 004857ba: MOV dword ptr [EBP + 0xfffffee6],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 004857c0: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 004857c3: PUSH 0x3db2b8c2
// 004857c8: MOV dword ptr [EBP + 0xfffffeea],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004857ce: LEA EAX,[EBP + 0xfffffee2]
//   XREF to: Stack[-0x1a8] (DATA)
// 004857d4: PUSH 0x3f000000
// 004857d9: PUSH EAX
// 004857da: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004857e0: PUSH EAX
// 004857e1: MOV EDI,dword ptr [EAX + 0x154]
// 004857e7: CALL dword ptr [EDI + 0xbc]
// 004857ed: ADD ESP,0x4
// 004857f0: PUSH EAX
// 004857f1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004857f7: ADD EAX,0x20
// 004857fa: PUSH EAX
// 004857fb: PUSH EBX
// 004857fc: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00485801: ADD ESP,0x18
// 00485804: TEST EAX,EAX
// 00485806: JL 0x0048588b
//   XREF to: 0048588b (CONDITIONAL_JUMP)
// 0048580c: JLE 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485812: FLD float ptr [EBX + 0xbe38]
// 00485818: FLDZ
// 0048581a: FCOMPP
// 0048581c: FNSTSW AX
// 0048581e: SAHF
// 0048581f: JC 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 00485825: PUSH 0x2
// 00485827: PUSH 0x0
// 00485829: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 0048582e: ADD ESP,0x8
// 00485831: MOV EDI,EAX
// 00485833: TEST EAX,EAX
// 00485835: JZ 0x004858b2
//   XREF to: 004858b2 (CONDITIONAL_JUMP)
// 0048583b: CMP EDI,0x1
//   Label: LAB_0048583b
// 0048583e: JNZ 0x00485852
//   XREF to: 00485852 (CONDITIONAL_JUMP)
// 00485840: PUSH EDI
// 00485841: PUSH 0x14
// 00485843: LEA EAX,[EBX + 0x158]
// 00485849: PUSH EAX
// 0048584a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0048584f: ADD ESP,0xc
// 00485852: CMP EDI,0x2
//   Label: LAB_00485852
// 00485855: JNZ 0x0048587c
//   XREF to: 0048587c (CONDITIONAL_JUMP)
// 00485857: PUSH 0x1
// 00485859: PUSH 0x15
// 0048585b: LEA EAX,[EBX + 0x158]
// 00485861: PUSH EAX
// 00485862: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00485867: ADD ESP,0xc
// 0048586a: PUSH 0x621abb
//   XREF to: 00621abb (DATA)
// 0048586f: MOV EAX,dword ptr [EBX + 0x154]
// 00485875: PUSH EBX
// 00485876: CALL dword ptr [EAX + 0x24]
// 00485879: ADD ESP,0x8
// 0048587c: MOV dword ptr [EBX + 0xbe38],0x3f800000
//   Label: LAB_0048587c
// 00485886: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 0048588b: PUSH EBX
//   Label: LAB_0048588b
// 0048588c: PUSH 0x621a9a
//   XREF to: 00621a9a (DATA)
// 00485891: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00485897: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00485898: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0048589d: ADD ESP,0xc
// 004858a0: PUSH 0x1
// 004858a2: PUSH 0x0
// 004858a4: PUSH ESI
// 004858a5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004858aa: ADD ESP,0xc
// 004858ad: JMP 0x004846e0
//   XREF to: 004846e0 (UNCONDITIONAL_JUMP)
// 004858b2: PUSH 0x1
//   Label: LAB_004858b2
// 004858b4: PUSH 0x13
// 004858b6: PUSH ESI
// 004858b7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004858bc: ADD ESP,0xc
// 004858bf: JMP 0x0048583b
//   XREF to: 0048583b (UNCONDITIONAL_JUMP)
// 004858c4: CMP ESI,0x1a
//   Label: LAB_004858c4
// 004858c7: JA 0x004846e0
//   XREF to: 004846e0 (CONDITIONAL_JUMP)
// 004858cd: JMP dword ptr [ESI*0x4 + 0x4843a4]
//   Label: switchD
//   XREF to: 0048553b (COMPUTED_JUMP)
//   XREF to: 004846e0 (COMPUTED_JUMP)
//   XREF to: 00484d46 (COMPUTED_JUMP)
//   XREF to: 004854a9 (COMPUTED_JUMP)
//   XREF to: 00484cb3 (COMPUTED_JUMP)
//   XREF to: 00485135 (COMPUTED_JUMP)
//   XREF to: 00485217 (COMPUTED_JUMP)
//   XREF to: 00485015 (COMPUTED_JUMP)
//   XREF to: 004856df (COMPUTED_JUMP)
//   XREF to: 004850ff (COMPUTED_JUMP)
//   XREF to: 00485006 (COMPUTED_JUMP)
//   XREF to: 00484fad (COMPUTED_JUMP)
//   XREF to: 0048506f (COMPUTED_JUMP)
//   XREF to: 00484ddf (COMPUTED_JUMP)
//   XREF to: 00484e7a (COMPUTED_JUMP)
//   XREF to: 00484f17 (COMPUTED_JUMP)
//   XREF to: 00484902 (COMPUTED_JUMP)
//   XREF to: 004850c9 (COMPUTED_JUMP)
//   XREF to: 004843a4 (DATA)
// 004858d4: CMP dword ptr [EBX + 0xdc],0x0
//   Label: LAB_004858d4
// 004858db: JNZ 0x00484731
//   XREF to: 00484731 (CONDITIONAL_JUMP)
// 004858e1: JMP 0x0048485b
//   XREF to: 0048485b (UNCONDITIONAL_JUMP)
