// Name: core_boneguy.cpp_FUN_0041bf90
// Address: 0041bf90
// Address Range: [[0041bf90, 0041ca3c]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041bf90()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_0041bf70 = 0041c850
//   TerminatedCString s_s_confused_while_walking_006160b7
//   TerminatedCString s_s_gave_up_chase_I_m_conf_006160e1
//   TerminatedCString s_boneguy_swing_wav_00616102
//   TerminatedCString s_boneGuy_walkloop_wav_00616115
//   double DOUBLE_0061612d = 0.5
//   double DOUBLE_00616135 = 2.5
//   double DOUBLE_0061613d = 3.14159265350000
//   double DOUBLE_00616145 = 0.25
//   float FLOAT_0061614d = 0.5
//   double DOUBLE_00616155 = 32
//   double DOUBLE_0061615d = 6.28318530700000
//   undefined4 DAT_0065af58
//   undefined4 DAT_0065af5c
//   undefined4 DAT_0065af68
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_00822944
//   CConsole g_ConsolePtr
//   CEventList g_CEventListInstance
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_boneguy.cpp_CBoneGuy_FUN_0041d680
//   core_boneguy.cpp_FUN_0041cc40
//   core_boneguy.cpp_FUN_0041d8a0
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_enemy.cpp_FUN_004a9930
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dde0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_skeleton.cpp_FUN_005a0410
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a8be0
//   sound_sndmain.cpp_FUN_005aa290
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041bf90(undefined4 param_1, undefined4
   param_2) */

void core_boneguy_cpp_FUN_0041bf90(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  uint uVar5;
  CDemonActor *this_ptr;
  float fVar6;
  float fVar7;
  CCharacter *pCVar8;
  CEnemy *pCVar9;
  int iVar10;
  int iVar11;
  CBoneGuy *pCVar12;
  undefined4 uVar13;
  CVector3f *pCVar14;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  float *pfVar15;
  byte bVar16;
  CBoneGuy *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_1908 [1486];
  CQuaternion4f *quat_ptr;
  float in_stack_fffffe44;
  SDamageInfo local_180;
  CBoundingBox3D local_144;
  CQuaternion4f local_12c;
  float local_11c;
  float afStack_118 [4];
  float local_108;
  float local_104;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  int local_44;
  float local_38;
  int local_34;
  float local_30;
  CVector3f *local_2c;
  CQuaternion4f *local_28;
  float *local_24;
  CQuaternion4f *local_20;
  int local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar16 = 0;
  iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                     (g_CEventListPtr,in_stack_00000004->field1_0xbeb4 + 0x1c);
  if (iVar10 != 0) {
    (in_stack_00000004->base_enemy).base_character.hit_points = 0.0;
    (in_stack_00000004->base_enemy).pool_me = 1;
    in_stack_00000004->param = 0.0;
    if (in_stack_00000004->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_FUN_0041d680(in_stack_00000004);
    }
    core_motion_cpp_CMotionController_FUN_0052dde0
              (&(in_stack_00000004->base_enemy).base_character.model.motion_controller);
  }
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)in_stack_00000004);
  if (iVar10 == 0) goto LAB_0041c220;
  if ((in_stack_00000004->blown_up == 1) &&
     (0.0 < (in_stack_00000004->base_enemy).base_character.hit_points)) {
    fVar4 = in_stack_00000004->param + in_stack_00000008;
    in_stack_00000004->param = fVar4;
    if (fVar4 <= in_stack_00000004->recombine_time) {
      return;
    }
    core_boneguy_cpp_FUN_0041d8a0();
  }
  if (in_stack_00000004->blown_up == 2) {
    fVar4 = in_stack_00000008 / _DAT_0065af68 + in_stack_00000004->param;
    in_stack_00000004->param = fVar4;
    if (fVar4 < 1.0) {
      local_1c = 0;
      if (in_stack_00000004->box_count < 1) {
        return;
      }
      local_2c = &in_stack_00000004->box_list_pos;
      local_24 = &in_stack_00000004->param;
      local_28 = &in_stack_00000004->box_list_dest_orient;
      local_20 = &in_stack_00000004->box_list_start_orient;
      local_18 = &in_stack_00000004->source_pos;
      do {
        pCVar14 = local_2c + local_1c * 6;
        local_44 = *(int *)((int)(pCVar14 + 5) + 8);
        local_70 = pCVar14->x - local_18->x;
        local_6c = pCVar14->y - local_18->y;
        local_68 = pCVar14->z - local_18->z;
        local_b8 = local_70 * *local_24;
        local_b4 = local_6c * *local_24;
        local_b0 = local_68 * *local_24;
        local_ac = local_18->x + local_b8;
        local_a8 = local_18->y + local_b4;
        local_a4 = local_18->z + local_b0;
        core_xform_cpp_slerpQuaternion_FUN_005f77e0
                  (local_28,local_20,(CQuaternion4f *)in_stack_00000004->param,in_stack_fffffe44);
        quat_ptr = &local_12c;
        pCVar14 = &local_88;
        local_12c.w = local_11c;
        pfVar15 = (float *)((int)&local_12c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        *(float *)((int)&local_12c + (uint)bVar16 * -8 + 4) = afStack_118[(uint)bVar16 * -2];
        *pfVar15 = afStack_118[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        pfVar15[(uint)bVar16 * -2 + 1] =
             (afStack_118 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(pCVar14,quat_ptr);
        local_88.x = in_stack_00000004->param * (float)DOUBLE_0061615d + local_88.x;
        *(float *)(local_44 + 0x20) = local_ac;
        *(float *)(local_44 + 0x24) = local_a8;
        *(float *)(local_44 + 0x28) = local_a4;
        if ((CVector3f *)(local_44 + 0x30) != &local_88) {
          ((CVector3f *)(local_44 + 0x30))->x = local_88.x;
          *(float *)(local_44 + 0x34) = local_88.y;
          *(float *)(local_44 + 0x38) = local_88.z;
        }
        if ((float *)(local_44 + 0xccc) != &local_ac) {
          *(float *)(local_44 + 0xccc) = local_ac;
          *(float *)(local_44 + 0xcd0) = local_a8;
          *(float *)(local_44 + 0xcd4) = local_a4;
        }
        if ((CVector3f *)(local_44 + 0xcd8) != &local_88) {
          ((CVector3f *)(local_44 + 0xcd8))->x = local_88.x;
          *(float *)(local_44 + 0xcdc) = local_88.y;
          *(float *)(local_44 + 0xce0) = local_88.z;
        }
        local_28 = (CQuaternion4f *)&local_28[4].y;
        local_20 = (CQuaternion4f *)&local_20[4].y;
        local_18 = local_18 + 6;
        local_1c = local_1c + 1;
      } while (local_1c < in_stack_00000004->box_count);
      return;
    }
    iVar10 = 0;
    core_skeleton_cpp_FUN_005a0410();
    pCVar12 = in_stack_00000004;
    if (0 < in_stack_00000004->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
        pCVar12->field9_0xbf80[0] = '\0';
        pCVar12->field9_0xbf80[1] = '\0';
        pCVar12->field9_0xbf80[2] = '\0';
        pCVar12->field9_0xbf80[3] = '\0';
        iVar10 = iVar10 + 1;
        pCVar12 = (CBoneGuy *)((pCVar12->base_enemy).base_character.base_actor.orient_matrix.m + 1);
      } while (iVar10 < in_stack_00000004->box_count);
    }
    in_stack_00000004->blown_up = 0;
    fVar4 = in_stack_00000004->recombine_time * (float)DOUBLE_0061612d;
    (in_stack_00000004->base_enemy).base_character.hit_points = 100.0;
    in_stack_00000004->recombine_time = fVar4;
    if (fVar4 <= (float)DOUBLE_00616135) {
      in_stack_00000004->recombine_time = 2.5;
    }
  }
  pCVar8 = &(in_stack_00000004->base_enemy).base_character;
  (pCVar8->model).field17_0x2254[8] = '\0';
  (pCVar8->model).field17_0x2254[9] = '\0';
  (pCVar8->model).field17_0x2254[10] = '\0';
  (pCVar8->model).field17_0x2254[0xb] = '\0';
  *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 4) =
       *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 8);
  *(undefined4 *)(in_stack_00000004->base_enemy).base_character.model.field17_0x2254 =
       *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 4);
  local_38 = in_stack_00000008 * (in_stack_00000004->base_enemy).speed;
  pCVar1 = &(in_stack_00000004->base_enemy).base_character.model;
  while (0.0 < local_38) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (iVar10 == 100) {
      if (*(int *)(in_stack_00000004->field1_0xbeb4 + 0x14) != 0) {
        in_stack_00000004->field1_0xbeb4[0x14] = '\0';
        in_stack_00000004->field1_0xbeb4[0x15] = '\0';
        in_stack_00000004->field1_0xbeb4[0x16] = '\0';
        in_stack_00000004->field1_0xbeb4[0x17] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)in_stack_00000004);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
    }
  }
  fVar4 = (in_stack_00000004->base_enemy).speed;
  fVar7 = (float)DOUBLE_0061613d;
  fVar6 = (float)DOUBLE_00616145;
  *(undefined4 *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x28) =
       *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 8);
  *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar7 * fVar4 * fVar6;
  iVar10 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
  iVar10 = *(int *)(iVar10 + 0x24);
  local_34 = iVar10;
  iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)in_stack_00000004);
  if (iVar11 == 0) {
    switch(iVar10) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&in_stack_00000004->base_enemy);
      if (extraout_EAX == 0) {
        (*(in_stack_00000004->base_enemy).base_character.base_actor.vtable[1].
          getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
        if (*(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4) != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      break;
    case 1:
      (*(in_stack_00000004->base_enemy).base_character.base_actor.vtable[1].
        getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
      if (*(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&in_stack_00000004->base_enemy);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
      else {
        iVar10 = core_boneguy_cpp_FUN_0041cc40();
        if (iVar10 == 0) {
          local_30 = DAT_0065af58;
          if ((in_stack_00000004->base_enemy).base_character.carry_hands[1].carry_actor !=
              (CDemonActor *)0x0) {
            local_30 = DAT_0065af5c;
          }
          local_d0 = 0;
          local_c8 = local_30;
          local_cc = 0;
          (**(code **)(*(int *)(*(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4) + 0x154)
                      + 0xbc))();
          iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                             ((CCharacter *)in_stack_00000004);
          pCVar1 = &(in_stack_00000004->base_enemy).base_character.model;
          if (iVar10 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          else {
            iVar10 = *(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4);
            fVar4 = (in_stack_00000004->base_enemy).base_character.base_actor.location.position.x -
                    *(float *)(iVar10 + 0x20);
            fVar6 = (in_stack_00000004->base_enemy).base_character.base_actor.location.position.z -
                    *(float *)(iVar10 + 0x28);
            if ((SQRT(fVar6 * fVar6 + fVar4 * fVar4) <= local_30 + (float)DOUBLE_0061612d) &&
               (*(float *)(in_stack_00000004->base_enemy).field6_0xbe38 <= 0.0)) {
              if ((in_stack_00000004->base_enemy).base_character.carry_hands[1].carry_actor ==
                  (CDemonActor *)0x0) {
                iVar10 = 2;
              }
              else {
                iVar10 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,iVar10,1);
              sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
              (*((in_stack_00000004->base_enemy).base_character.base_actor.vtable)->playSound)
                        ((CDemonActor *)in_stack_00000004,"boneguy-swing?.wav");
              (in_stack_00000004->base_enemy).field6_0xbe38[0] = '\0';
              (in_stack_00000004->base_enemy).field6_0xbe38[1] = '\0';
              (in_stack_00000004->base_enemy).field6_0xbe38[2] = -0x80;
              (in_stack_00000004->base_enemy).field6_0xbe38[3] = '?';
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_180);
      local_180.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_180.attacker = (CDemonActor *)in_stack_00000004;
      local_180.wielder = (CDemonActor *)in_stack_00000004;
      local_14 = local_180.damage_amount;
      pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_94,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (in_stack_00000004->base_enemy).base_character.model.bone_world_matrices
                           [DAT_00822944].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_e8,pCVar14);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 5:
      if (((in_stack_00000004->base_enemy).pool_me == 0) &&
         ((in_stack_00000004->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        (in_stack_00000004->base_enemy).pool_me = 1;
      }
      break;
    case 6:
      this_ptr = (in_stack_00000004->base_enemy).base_character.carry_hands[1].carry_actor;
      if (this_ptr != (CDemonActor *)0x0) {
        (*this_ptr->vtable->getBoundingBox)(this_ptr,&local_144);
        afStack_118[3] = local_144.min.x + local_144.max.x;
        local_c4.x = afStack_118[3] * FLOAT_0061614d;
        local_108 = local_144.min.y + local_144.max.y;
        local_104 = local_144.min.z + local_144.max.z;
        local_c4.y = local_108 * FLOAT_0061614d;
        local_c4.z = local_104 * FLOAT_0061614d;
        if (&local_f4 != &local_c4) {
          local_f4.x = local_c4.x;
          local_f4.y = local_c4.y;
        }
        if (&local_100 != &local_f4) {
          local_100.x = local_f4.x;
          local_100.y = local_f4.y;
        }
        local_100.z = local_144.min.z;
        local_f4.z = local_144.max.z;
        pCVar14 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((in_stack_00000004->base_enemy).base_character.carry_hands[1].
                             carry_actor,&local_a0,&local_100);
        if (&local_100 != pCVar14) {
          local_100.x = pCVar14->x;
          local_100.y = pCVar14->y;
          local_100.z = pCVar14->z;
        }
        pCVar14 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((in_stack_00000004->base_enemy).base_character.carry_hands[1].
                             carry_actor,&local_58,&local_f4);
        if (&local_f4 != pCVar14) {
          local_f4.x = pCVar14->x;
          local_f4.y = pCVar14->y;
          local_f4.z = pCVar14->z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe44);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
        core_enemy_cpp_FUN_004a9930();
      }
    }
  }
  else {
    uVar5 = *(uint *)((in_stack_00000004->base_enemy).base_character.field11_0x25a0 + 0x10);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
LAB_0041c3c9:
        iVar10 = 1;
      }
      else {
LAB_0041c60c:
        iVar10 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_enemy).base_character.model.motion_controller,iVar10,1);
    }
    else {
      if (uVar5 < 3) goto LAB_0041c3c9;
      if (uVar5 != 3) goto LAB_0041c60c;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
    }
    pCVar8 = &(in_stack_00000004->base_enemy).base_character;
    (pCVar8->model).field17_0x2254[8] = '\0';
    (pCVar8->model).field17_0x2254[9] = '\0';
    (pCVar8->model).field17_0x2254[10] = '\0';
    (pCVar8->model).field17_0x2254[0xb] = '\0';
    *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 4) =
         *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 8);
    *(undefined4 *)(in_stack_00000004->base_enemy).base_character.model.field17_0x2254 =
         *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 4);
  }
  if (0.0 < *(float *)(in_stack_00000004->base_enemy).field6_0xbe38) {
    *(float *)(in_stack_00000004->base_enemy).field6_0xbe38 =
         *(float *)(in_stack_00000004->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar10 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)in_stack_00000004);
  if (iVar10 != 0) {
    iVar10 = *(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4);
    if ((iVar10 != 0) &&
       (pCVar12 = (CBoneGuy *)(**(code **)(*(int *)(iVar10 + 0x154) + 0x108))(),
       pCVar12 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((in_stack_00000004->base_enemy).field6_0xbe38 + 4)
                );
    }
    *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_00616155;
    local_64 = *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_60 = *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x10;
    local_5c = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x24);
    pcVar3 = (in_stack_00000004->base_enemy).base_character.model.field17_0x2254;
    local_7c = local_64 + *(float *)pcVar2;
    local_78 = local_60 +
               *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x14);
    local_74 = local_5c +
               *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x18);
    local_dc = local_7c + *(float *)pcVar3;
    local_d8 = local_78 +
               *(float *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 4);
    local_d4 = local_74 +
               *(float *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 8);
    pCVar9 = &in_stack_00000004->base_enemy;
    (pCVar9->base_character).field2_0x240c[0x18] = '\0';
    (pCVar9->base_character).field2_0x240c[0x19] = '\0';
    (pCVar9->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar9->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x14) =
         *(undefined4 *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x18);
    *(float *)pcVar2 =
         *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x14);
    pCVar8 = &(in_stack_00000004->base_enemy).base_character;
    (pCVar8->model).field17_0x2254[8] = '\0';
    (pCVar8->model).field17_0x2254[9] = '\0';
    (pCVar8->model).field17_0x2254[10] = '\0';
    (pCVar8->model).field17_0x2254[0xb] = '\0';
    *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 4) =
         *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 8);
    *(undefined4 *)pcVar3 =
         *(undefined4 *)((in_stack_00000004->base_enemy).base_character.model.field17_0x2254 + 4);
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)in_stack_00000004);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)in_stack_00000004);
  if ((local_34 == 1) && (iVar10 = sound_sndmain_cpp_FUN_005aa290(), iVar10 != 0)) {
    iVar10 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar10 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    sound_sndmain_cpp_FUN_005a8be0();
    uVar13 = (*((in_stack_00000004->base_enemy).base_character.base_actor.vtable)->playAmbientSound)
                       ((CDemonActor *)in_stack_00000004,"boneGuy-walkloop.wav");
    *(undefined4 *)(in_stack_00000004->field1_0xbeb4 + 0x18) = uVar13;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
LAB_0041c220:
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  return;
}


// Assembly code:
// 0041bf90: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041bf90
// 0041bf91: PUSH ESI
// 0041bf92: PUSH EDI
// 0041bf93: PUSH EBP
// 0041bf94: MOV EBP,ESP
// 0041bf96: SUB ESP,0x1ac
// 0041bf9c: SUB EBP,0x7a
// 0041bf9f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0041bfa5: LEA EAX,[EBX + 0xbed0]
// 0041bfab: PUSH EAX
// 0041bfac: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0041bfb2: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 0041bfb3: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0041bfb8: ADD ESP,0x8
// 0041bfbb: TEST EAX,EAX
// 0041bfbd: JZ 0x0041c003
//   XREF to: 0041c003 (CONDITIONAL_JUMP)
// 0041bfbf: MOV dword ptr [EBX + 0x243c],0x0
// 0041bfc9: MOV dword ptr [EBX + 0xbe28],0x1
// 0041bfd3: MOV ECX,dword ptr [EBX + 0xc4dc]
// 0041bfd9: MOV dword ptr [EBX + 0xc4e0],0x0
// 0041bfe3: TEST ECX,ECX
// 0041bfe5: JNZ 0x0041bff0
//   XREF to: 0041bff0 (CONDITIONAL_JUMP)
// 0041bfe7: PUSH EBX
// 0041bfe8: CALL core_boneguy.cpp_CBoneGuy_FUN_0041d680
//   XREF to: 0041d680 (UNCONDITIONAL_CALL)
// 0041bfed: ADD ESP,0x4
// 0041bff0: PUSH 0x0
//   Label: LAB_0041bff0
// 0041bff2: PUSH 0x5
// 0041bff4: LEA EAX,[EBX + 0x158]
// 0041bffa: PUSH EAX
// 0041bffb: CALL core_motion.cpp_CMotionController_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 0041c000: ADD ESP,0xc
// 0041c003: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0041c003
//   XREF to: Stack[0x8] (READ)
// 0041c009: PUSH EBX
// 0041c00a: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 0041c00f: ADD ESP,0x8
// 0041c012: TEST EAX,EAX
// 0041c014: JZ 0x0041c220
//   XREF to: 0041c220 (CONDITIONAL_JUMP)
// 0041c01a: CMP dword ptr [EBX + 0xc4dc],0x1
// 0041c021: JNZ 0x0041c05c
//   XREF to: 0041c05c (CONDITIONAL_JUMP)
// 0041c023: FLD float ptr [EBX + 0x243c]
// 0041c029: FLDZ
// 0041c02b: FCOMPP
// 0041c02d: FNSTSW AX
// 0041c02f: SAHF
// 0041c030: JNC 0x0041c05c
//   XREF to: 0041c05c (CONDITIONAL_JUMP)
// 0041c032: FLD float ptr [EBX + 0xc4e0]
// 0041c038: FADD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c03e: FST float ptr [EBX + 0xc4e0]
// 0041c044: FCOMP float ptr [EBX + 0xbf34]
// 0041c04a: FNSTSW AX
// 0041c04c: SAHF
// 0041c04d: JBE 0x0041c218
//   XREF to: 0041c218 (CONDITIONAL_JUMP)
// 0041c053: PUSH EBX
// 0041c054: CALL core_boneguy.cpp_FUN_0041d8a0
//   XREF to: 0041d8a0 (UNCONDITIONAL_CALL)
// 0041c059: ADD ESP,0x4
// 0041c05c: CMP dword ptr [EBX + 0xc4dc],0x2
//   Label: LAB_0041c05c
// 0041c063: JNZ 0x0041c2d5
//   XREF to: 0041c2d5 (CONDITIONAL_JUMP)
// 0041c069: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c06f: FDIV float ptr [0x0065af68]
//   XREF to: 0065af68 (READ)
// 0041c075: FADD float ptr [EBX + 0xc4e0]
// 0041c07b: FST float ptr [EBX + 0xc4e0]
// 0041c081: FLD1
// 0041c083: FCOMPP
// 0041c085: FNSTSW AX
// 0041c087: SAHF
// 0041c088: JBE 0x0041c24d
//   XREF to: 0041c24d (CONDITIONAL_JUMP)
// 0041c08e: XOR EDX,EDX
// 0041c090: MOV ECX,dword ptr [EBX + 0xbf38]
// 0041c096: MOV dword ptr [EBP + 0x6e],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041c099: TEST ECX,ECX
// 0041c09b: JLE 0x0041c218
//   XREF to: 0041c218 (CONDITIONAL_JUMP)
// 0041c0a1: LEA EAX,[EBX + 0xbf3c]
// 0041c0a7: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0041c0aa: LEA EAX,[EBX + 0xc4e0]
// 0041c0b0: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0041c0b3: LEA EAX,[EBX + 0xbf54]
// 0041c0b9: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0041c0bc: LEA EAX,[EBX + 0xbf64]
// 0041c0c2: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0041c0c5: LEA EAX,[EBX + 0xbf74]
// 0041c0cb: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041c0ce: IMUL EAX,dword ptr [EBP + 0x6e],0x48
//   Label: LAB_0041c0ce
//   XREF to: Stack[-0x1c] (READ)
// 0041c0d2: ADD EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 0041c0d5: MOV EDX,dword ptr [EAX + 0x44]
// 0041c0d8: MOV dword ptr [EBP + 0x46],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0041c0db: MOV EDX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 0041c0de: FLD float ptr [EAX]
// 0041c0e0: FSUB float ptr [EDX]
// 0041c0e2: FSTP float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 0041c0e5: FLD float ptr [EAX + 0x4]
// 0041c0e8: FSUB float ptr [EDX + 0x4]
// 0041c0eb: FLD float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 0041c0ee: FXCH
// 0041c0f0: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 0041c0f3: FLD float ptr [EAX + 0x8]
// 0041c0f6: FSUB float ptr [EDX + 0x8]
// 0041c0f9: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 0041c0fc: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 0041c0ff: FMUL float ptr [EAX]
// 0041c101: FLD float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 0041c104: FXCH
// 0041c106: FSTP float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (WRITE)
// 0041c109: FMUL float ptr [EAX]
// 0041c10b: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 0041c10e: FXCH
// 0041c110: FSTP float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (WRITE)
// 0041c113: FMUL float ptr [EAX]
// 0041c115: FSTP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (WRITE)
// 0041c118: FLD float ptr [EDX]
// 0041c11a: FADD float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (READ)
// 0041c11d: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 0041c120: FLD float ptr [EDX + 0x4]
// 0041c123: FADD float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 0041c126: FSTP float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (WRITE)
// 0041c129: FLD float ptr [EDX + 0x8]
// 0041c12c: FADD float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (READ)
// 0041c12f: MOV EDI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 0041c132: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 0041c135: PUSH dword ptr [EBX + 0xc4e0]
// 0041c13b: PUSH EDI
// 0041c13c: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 0041c13f: PUSH EAX
// 0041c140: LEA ESI,[EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (DATA)
// 0041c146: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0041c14b: ADD ESP,0xc
// 0041c14e: LEA EAX,[EBP + 0xffffff5e]
//   XREF to: Stack[-0x12c] (DATA)
// 0041c154: LEA EDI,[EBP + 0xffffff5e]
//   XREF to: Stack[-0x12c] (DATA)
// 0041c15a: PUSH EAX
// 0041c15b: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 0041c15e: LEA ESI,[EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (DATA)
// 0041c164: PUSH EAX
// 0041c165: MOVSD ES:EDI,ESI
// 0041c166: MOVSD ES:EDI,ESI
// 0041c167: MOVSD ES:EDI,ESI
// 0041c168: MOVSD ES:EDI,ESI
// 0041c169: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0041c16e: FLD float ptr [EBX + 0xc4e0]
// 0041c174: FMUL double ptr [0x0061615d]
//   XREF to: 0061615d (READ)
// 0041c17a: MOV ESI,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 0041c17d: FLD float ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (READ)
// 0041c180: FXCH
// 0041c182: FADD ST0,ST1
// 0041c184: MOV EAX,dword ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (READ)
// 0041c187: FSTP ST1
// 0041c189: FSTP float ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (WRITE)
// 0041c18c: MOV dword ptr [ESI + 0x20],EAX
// 0041c18f: MOV EAX,dword ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (READ)
// 0041c192: MOV dword ptr [ESI + 0x24],EAX
// 0041c195: MOV EAX,dword ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 0041c198: LEA EDX,[ESI + 0x30]
// 0041c19b: MOV dword ptr [ESI + 0x28],EAX
// 0041c19e: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 0041c1a1: ADD ESP,0x8
// 0041c1a4: CMP EDX,EAX
// 0041c1a6: JNZ 0x0041c237
//   XREF to: 0041c237 (CONDITIONAL_JUMP)
// 0041c1ac: LEA EAX,[EBP + -0x22]
//   Label: LAB_0041c1ac
//   XREF to: Stack[-0xac] (DATA)
// 0041c1af: LEA EDX,[ESI + 0xccc]
// 0041c1b5: CMP EDX,EAX
// 0041c1b7: JZ 0x0041c1ca
//   XREF to: 0041c1ca (CONDITIONAL_JUMP)
// 0041c1b9: MOV EAX,dword ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (DATA)
// 0041c1bc: MOV dword ptr [EDX],EAX
// 0041c1be: MOV EAX,dword ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (READ)
// 0041c1c1: MOV dword ptr [EDX + 0x4],EAX
// 0041c1c4: MOV EAX,dword ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 0041c1c7: MOV dword ptr [EDX + 0x8],EAX
// 0041c1ca: LEA EAX,[EBP + 0x2]
//   Label: LAB_0041c1ca
//   XREF to: Stack[-0x88] (DATA)
// 0041c1cd: LEA EDX,[ESI + 0xcd8]
// 0041c1d3: CMP EDX,EAX
// 0041c1d5: JZ 0x0041c1e8
//   XREF to: 0041c1e8 (CONDITIONAL_JUMP)
// 0041c1d7: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 0041c1da: MOV dword ptr [EDX],EAX
// 0041c1dc: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 0041c1df: MOV dword ptr [EDX + 0x4],EAX
// 0041c1e2: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (READ)
// 0041c1e5: MOV dword ptr [EDX + 0x8],EAX
// 0041c1e8: MOV EDX,dword ptr [EBP + 0x62]
//   Label: LAB_0041c1e8
//   XREF to: Stack[-0x28] (READ)
// 0041c1eb: MOV ECX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 0041c1ee: MOV ESI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 0041c1f1: MOV EDI,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 0041c1f4: ADD EDX,0x48
// 0041c1f7: ADD ECX,0x48
// 0041c1fa: ADD ESI,0x48
// 0041c1fd: INC EDI
// 0041c1fe: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0041c201: MOV dword ptr [EBP + 0x6a],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0041c204: MOV dword ptr [EBP + 0x72],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0041c207: MOV EDX,dword ptr [EBX + 0xbf38]
// 0041c20d: MOV dword ptr [EBP + 0x6e],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0041c210: CMP EDI,EDX
// 0041c212: JL 0x0041c0ce
//   XREF to: 0041c0ce (CONDITIONAL_JUMP)
// 0041c218: LEA ESP,[EBP + 0x7a]
//   Label: LAB_0041c218
//   XREF to: Stack[-0x10] (DATA)
// 0041c21b: POP EBP
// 0041c21c: POP EDI
// 0041c21d: POP ESI
// 0041c21e: POP EBX
// 0041c21f: RET
// 0041c220: MOV ESI,dword ptr [EBX + 0xbecc]
//   Label: LAB_0041c220
// 0041c226: PUSH ESI
// 0041c227: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0041c22c: ADD ESP,0x4
// 0041c22f: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0041c232: POP EBP
// 0041c233: POP EDI
// 0041c234: POP ESI
// 0041c235: POP EBX
// 0041c236: RET
// 0041c237: MOV EAX,dword ptr [EBP + 0x2]
//   Label: LAB_0041c237
//   XREF to: Stack[-0x88] (DATA)
// 0041c23a: MOV dword ptr [EDX],EAX
// 0041c23c: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 0041c23f: MOV dword ptr [EDX + 0x4],EAX
// 0041c242: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (READ)
// 0041c245: MOV dword ptr [EDX + 0x8],EAX
// 0041c248: JMP 0x0041c1ac
//   XREF to: 0041c1ac (UNCONDITIONAL_JUMP)
// 0041c24d: LEA EAX,[EBX + 0x158]
//   Label: LAB_0041c24d
// 0041c253: PUSH EAX
// 0041c254: XOR EDI,EDI
// 0041c256: CALL core_skeleton.cpp_FUN_005a0410
//   XREF to: 005a0410 (UNCONDITIONAL_CALL)
// 0041c25b: MOV EAX,dword ptr [EBX + 0xbf38]
// 0041c261: ADD ESP,0x4
// 0041c264: TEST EAX,EAX
// 0041c266: JLE 0x0041c2a0
//   XREF to: 0041c2a0 (CONDITIONAL_JUMP)
// 0041c268: MOV ESI,EBX
// 0041c26a: PUSH 0x1
//   Label: LAB_0041c26a
// 0041c26c: MOV EAX,dword ptr [ESI + 0xbf80]
// 0041c272: PUSH EAX
// 0041c273: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
//   XREF to: 02f33740 (PARAM)
// 0041c279: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 0041c27a: ADD ESI,0x48
// 0041c27d: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 0041c282: MOV dword ptr [ESI + 0xbf38],0x0
// 0041c28c: INC EDI
// 0041c28d: MOV ECX,dword ptr [EBX + 0xbf38]
// 0041c293: ADD ESP,0xc
// 0041c296: CMP EDI,ECX
// 0041c298: JL 0x0041c26a
//   XREF to: 0041c26a (CONDITIONAL_JUMP)
// 0041c29a: LEA EAX,[EAX]
// 0041c2a0: FLD float ptr [EBX + 0xbf34]
//   Label: LAB_0041c2a0
// 0041c2a6: MOV dword ptr [EBX + 0xc4dc],0x0
// 0041c2b0: FLD ST0
// 0041c2b2: FMUL double ptr [0x0061612d]
//   XREF to: 0061612d (READ)
// 0041c2b8: MOV dword ptr [EBX + 0x243c],0x42c80000
// 0041c2c2: FSTP ST1
// 0041c2c4: FST float ptr [EBX + 0xbf34]
// 0041c2ca: FCOMP double ptr [0x00616135]
//   XREF to: 00616135 (READ)
// 0041c2d0: FNSTSW AX
// 0041c2d2: SAHF
// 0041c2d3: JBE 0x0041c32c
//   XREF to: 0041c32c (CONDITIONAL_JUMP)
// 0041c2d5: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_0041c2d5
// 0041c2db: MOV dword ptr [EAX + 0x8],0x0
// 0041c2e2: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c2e8: MOV EDX,dword ptr [EAX + 0x8]
// 0041c2eb: MOV dword ptr [EAX + 0x4],EDX
// 0041c2ee: MOV EDX,dword ptr [EAX + 0x4]
// 0041c2f1: MOV dword ptr [EAX],EDX
// 0041c2f3: FMUL float ptr [EBX + 0xbe24]
// 0041c2f9: LEA ESI,[EBX + 0x158]
// 0041c2ff: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 0041c302: FLD float ptr [EBP + 0x52]
//   Label: LAB_0041c302
//   XREF to: Stack[-0x38] (READ)
// 0041c305: FLDZ
// 0041c307: FCOMPP
// 0041c309: FNSTSW AX
// 0041c30b: SAHF
// 0041c30c: JNC 0x0041c35f
//   XREF to: 0041c35f (CONDITIONAL_JUMP)
// 0041c30e: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x38] (DATA)
// 0041c311: PUSH EAX
// 0041c312: PUSH ESI
// 0041c313: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 0041c318: ADD ESP,0x8
// 0041c31b: CMP EAX,0x64
// 0041c31e: JZ 0x0041c338
//   XREF to: 0041c338 (CONDITIONAL_JUMP)
// 0041c320: PUSH EAX
// 0041c321: PUSH EBX
// 0041c322: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 0041c327: ADD ESP,0x8
// 0041c32a: JMP 0x0041c302
//   XREF to: 0041c302 (UNCONDITIONAL_JUMP)
// 0041c32c: MOV dword ptr [EBX + 0xbf34],0x40200000
//   Label: LAB_0041c32c
// 0041c336: JMP 0x0041c2d5
//   XREF to: 0041c2d5 (UNCONDITIONAL_JUMP)
// 0041c338: MOV EAX,dword ptr [EBX + 0xbec8]
//   Label: LAB_0041c338
// 0041c33e: TEST EAX,EAX
// 0041c340: JZ 0x0041c302
//   XREF to: 0041c302 (CONDITIONAL_JUMP)
// 0041c342: PUSH 0x3e4ccccd
// 0041c347: PUSH EAX
// 0041c348: PUSH 0x1
// 0041c34a: PUSH EBX
// 0041c34b: MOV dword ptr [EBX + 0xbec8],0x0
// 0041c355: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 0041c35a: ADD ESP,0x10
// 0041c35d: JMP 0x0041c302
//   XREF to: 0041c302 (UNCONDITIONAL_JUMP)
// 0041c35f: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_0041c35f
// 0041c365: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c36b: FMUL double ptr [0x0061613d]
//   XREF to: 0061613d (READ)
// 0041c371: FMULP
// 0041c373: FMUL double ptr [0x00616145]
//   XREF to: 00616145 (READ)
// 0041c379: FLD float ptr [EBX + 0x23b4]
// 0041c37f: PUSH ESI
// 0041c380: FSTP float ptr [EBX + 0x2434]
// 0041c386: FSTP float ptr [EBX + 0x2438]
// 0041c38c: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0041c391: ADD ESP,0x4
// 0041c394: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c39a: MOV EDI,dword ptr [EAX + 0x24]
// 0041c39d: PUSH EBX
// 0041c39e: MOV dword ptr [EBP + 0x56],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 0041c3a1: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 0041c3a6: ADD ESP,0x8
// 0041c3a9: TEST EAX,EAX
// 0041c3ab: JZ 0x0041ca2d
//   XREF to: 0041ca2d (CONDITIONAL_JUMP)
// 0041c3b1: MOV EAX,dword ptr [EBX + 0x25b0]
// 0041c3b7: CMP EAX,0x2
// 0041c3ba: JNC 0x0041c601
//   XREF to: 0041c601 (CONDITIONAL_JUMP)
// 0041c3c0: CMP EAX,0x1
// 0041c3c3: JNZ 0x0041c60c
//   XREF to: 0041c60c (CONDITIONAL_JUMP)
// 0041c3c9: PUSH 0x1
//   Label: LAB_0041c3c9
// 0041c3cb: PUSH 0x1
// 0041c3cd: LEA EAX,[EBX + 0x158]
//   Label: LAB_0041c3cd
// 0041c3d3: PUSH EAX
// 0041c3d4: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041c3d9: ADD ESP,0xc
//   Label: LAB_0041c3d9
// 0041c3dc: LEA EAX,[EBX + 0x23ac]
// 0041c3e2: MOV dword ptr [EAX + 0x8],0x0
// 0041c3e9: MOV EDX,dword ptr [EAX + 0x8]
// 0041c3ec: MOV dword ptr [EAX + 0x4],EDX
// 0041c3ef: MOV EDX,dword ptr [EAX + 0x4]
// 0041c3f2: MOV dword ptr [EAX],EDX
// 0041c3f4: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_3
// 0041c3fa: FLDZ
// 0041c3fc: FCOMPP
// 0041c3fe: FNSTSW AX
// 0041c400: SAHF
// 0041c401: JNC 0x0041c415
//   XREF to: 0041c415 (CONDITIONAL_JUMP)
// 0041c403: FLD float ptr [EBX + 0xbe38]
// 0041c409: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c40f: FSTP float ptr [EBX + 0xbe38]
// 0041c415: PUSH EBX
//   Label: LAB_0041c415
// 0041c416: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 0041c41b: ADD ESP,0x4
// 0041c41e: TEST EAX,EAX
// 0041c420: JZ 0x0041c512
//   XREF to: 0041c512 (CONDITIONAL_JUMP)
// 0041c426: MOV EDI,dword ptr [EBX + 0xbe3c]
// 0041c42c: TEST EDI,EDI
// 0041c42e: JZ 0x0041c45a
//   XREF to: 0041c45a (CONDITIONAL_JUMP)
// 0041c430: PUSH EDI
// 0041c431: MOV EDX,dword ptr [EDI + 0x154]
// 0041c437: CALL dword ptr [EDX + 0x108]
// 0041c43d: ADD ESP,0x4
// 0041c440: CMP EAX,EBX
// 0041c442: JNZ 0x0041c45a
//   XREF to: 0041c45a (CONDITIONAL_JUMP)
// 0041c444: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0041c44a: PUSH EAX
// 0041c44b: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0041c451: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0041c452: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0041c457: ADD ESP,0x8
// 0041c45a: FLD float ptr [EBP + 0x92]
//   Label: LAB_0041c45a
//   XREF to: Stack[0x8] (READ)
// 0041c460: FLD ST0
// 0041c462: FMUL double ptr [0x00616155]
//   XREF to: 00616155 (READ)
// 0041c468: FLD float ptr [EBX + 0x242c]
// 0041c46e: FXCH
// 0041c470: FSUBR ST0,ST1
// 0041c472: LEA ESI,[EBX + 0x2428]
// 0041c478: FSTP ST1
// 0041c47a: FSTP float ptr [EBX + 0x242c]
// 0041c480: FLD float ptr [ESI]
// 0041c482: FMUL ST1
// 0041c484: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 0041c487: FLD float ptr [ESI + 0x4]
// 0041c48a: FMUL ST1
// 0041c48c: LEA EDX,[EBX + 0x241c]
// 0041c492: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (WRITE)
// 0041c495: FMUL float ptr [ESI + 0x8]
// 0041c498: LEA EAX,[EBX + 0x23ac]
// 0041c49e: FLD float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 0041c4a1: FXCH
// 0041c4a3: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 0041c4a6: FADD float ptr [EDX]
// 0041c4a8: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 0041c4ab: FXCH
// 0041c4ad: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 0041c4b0: FADD float ptr [EDX + 0x4]
// 0041c4b3: FLD float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 0041c4b6: FXCH
// 0041c4b8: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 0041c4bb: FADD float ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 0041c4be: FLD float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 0041c4c1: FXCH
// 0041c4c3: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 0041c4c6: FADD float ptr [EAX]
// 0041c4c8: FLD float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 0041c4cb: FXCH
// 0041c4cd: FSTP float ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (WRITE)
// 0041c4d0: FADD float ptr [EAX + 0x4]
// 0041c4d3: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 0041c4d6: FXCH
// 0041c4d8: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (WRITE)
// 0041c4db: FADD float ptr [EAX + 0x8]
// 0041c4de: FSTP float ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (WRITE)
// 0041c4e1: MOV dword ptr [EDX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 0041c4e8: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 0041c4eb: MOV dword ptr [EDX + 0x4],ECX
// 0041c4ee: MOV ECX,dword ptr [EDX + 0x4]
// 0041c4f1: MOV dword ptr [EDX],ECX
// 0041c4f3: MOV dword ptr [EAX + 0x8],0x0
// 0041c4fa: MOV EDX,dword ptr [EAX + 0x8]
// 0041c4fd: MOV dword ptr [EAX + 0x4],EDX
// 0041c500: MOV EDX,dword ptr [EAX + 0x4]
// 0041c503: MOV dword ptr [EAX],EDX
// 0041c505: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 0041c508: PUSH EAX
// 0041c509: PUSH EBX
// 0041c50a: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0041c50f: ADD ESP,0x8
// 0041c512: PUSH EBX
//   Label: LAB_0041c512
// 0041c513: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 0041c518: ADD ESP,0x4
// 0041c51b: LEA EAX,[EBX + 0x158]
// 0041c521: PUSH EAX
// 0041c522: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0041c527: ADD ESP,0x4
// 0041c52a: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c530: PUSH EBX
// 0041c531: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0041c536: MOV ECX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 0041c539: ADD ESP,0x8
// 0041c53c: CMP ECX,0x1
// 0041c53f: JNZ 0x0041c220
//   XREF to: 0041c220 (CONDITIONAL_JUMP)
// 0041c545: PUSH 0x40590000
// 0041c54a: PUSH 0x0
// 0041c54c: SUB ESP,0x8
// 0041c54f: FLD float ptr [EBX + 0x28]
// 0041c552: FSTP double ptr [ESP]
// 0041c555: SUB ESP,0x8
// 0041c558: FLD float ptr [EBX + 0x24]
// 0041c55b: FSTP double ptr [ESP]
// 0041c55e: SUB ESP,0x8
// 0041c561: FLD float ptr [EBX + 0x20]
// 0041c564: FSTP double ptr [ESP]
// 0041c567: CALL sound_sndmain.cpp_FUN_005aa290
//   XREF to: 005aa290 (UNCONDITIONAL_CALL)
// 0041c56c: ADD ESP,0x20
// 0041c56f: TEST EAX,EAX
// 0041c571: JZ 0x0041c220
//   XREF to: 0041c220 (CONDITIONAL_JUMP)
// 0041c577: MOV EDI,dword ptr [EBX + 0xbecc]
// 0041c57d: PUSH EDI
// 0041c57e: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0041c583: ADD ESP,0x4
// 0041c586: TEST EAX,EAX
// 0041c588: JNZ 0x0041c218
//   XREF to: 0041c218 (CONDITIONAL_JUMP)
// 0041c58e: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 0041c593: PUSH 0x2
// 0041c595: PUSH 0x3f800000
// 0041c59a: PUSH 0x0
// 0041c59c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041c5a1: ADD ESP,0x8
// 0041c5a4: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041c5a7: SUB ESP,0x8
// 0041c5aa: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0041c5ad: FSTP double ptr [ESP]
// 0041c5b0: CALL sound_sndmain.cpp_FUN_005a8be0
//   XREF to: 005a8be0 (UNCONDITIONAL_CALL)
// 0041c5b5: ADD ESP,0xc
// 0041c5b8: PUSH 0x616115
//   XREF to: 00616115 (DATA)
// 0041c5bd: MOV EAX,dword ptr [EBX + 0x154]
// 0041c5c3: PUSH EBX
// 0041c5c4: CALL dword ptr [EAX + 0x28]
// 0041c5c7: ADD ESP,0x8
// 0041c5ca: MOV dword ptr [EBX + 0xbecc],EAX
// 0041c5d0: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0041c5d5: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0041c5d8: POP EBP
// 0041c5d9: POP EDI
// 0041c5da: POP ESI
// 0041c5db: POP EBX
// 0041c5dc: RET
// 0041c5dd: PUSH 0x1
//   Label: LAB_0041c5dd
// 0041c5df: PUSH 0x0
// 0041c5e1: PUSH ESI
// 0041c5e2: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041c5e7: ADD ESP,0xc
// 0041c5ea: PUSH EBX
// 0041c5eb: PUSH 0x6160b7
//   XREF to: 006160b7 (DATA)
// 0041c5f0: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0041c5f6: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 0041c5f7: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0041c5fc: JMP 0x0041c3d9
//   XREF to: 0041c3d9 (UNCONDITIONAL_JUMP)
// 0041c601: JBE 0x0041c3c9
//   Label: LAB_0041c601
//   XREF to: 0041c3c9 (CONDITIONAL_JUMP)
// 0041c607: CMP EAX,0x3
// 0041c60a: JZ 0x0041c5dd
//   XREF to: 0041c5dd (CONDITIONAL_JUMP)
// 0041c60c: PUSH 0x1
//   Label: LAB_0041c60c
// 0041c60e: PUSH 0x0
// 0041c610: JMP 0x0041c3cd
//   XREF to: 0041c3cd (UNCONDITIONAL_JUMP)
// 0041c615: LEA EAX,[EBP + 0xffffff0a]
//   Label: caseD_2
//   XREF to: Stack[-0x180] (DATA)
// 0041c61b: PUSH EAX
// 0041c61c: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0041c621: ADD ESP,0x4
// 0041c624: PUSH 0x41700000
// 0041c629: PUSH 0x40e00000
// 0041c62e: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041c633: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041c636: ADD ESP,0x8
// 0041c639: LEA EAX,[EBP + 0xffffff0a]
//   XREF to: Stack[-0x180] (DATA)
// 0041c63f: MOV EDX,dword ptr [0x00822944]
//   XREF to: 00822944 (READ)
// 0041c645: PUSH EAX
// 0041c646: LEA EAX,[EDX*0x4 + 0x0]
// 0041c64d: MOV dword ptr [EBP + 0xffffff3e],EBX
//   XREF to: Stack[-0x14c] (WRITE)
// 0041c653: SUB EAX,EDX
// 0041c655: MOV dword ptr [EBP + 0xffffff42],EBX
//   XREF to: Stack[-0x148] (WRITE)
// 0041c65b: SHL EAX,0x4
// 0041c65e: LEA EDX,[EBX + 0xfd8]
// 0041c664: ADD EAX,EDX
// 0041c666: PUSH 0x3ecccccd
// 0041c66b: PUSH EAX
// 0041c66c: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041c671: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 0041c674: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0041c677: PUSH EAX
// 0041c678: FSTP float ptr [EBP + 0xffffff0e]
//   XREF to: Stack[-0x17c] (WRITE)
// 0041c67e: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0041c683: ADD ESP,0xc
// 0041c686: PUSH EAX
// 0041c687: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 0041c68a: PUSH EAX
// 0041c68b: PUSH EBX
// 0041c68c: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041c691: ADD ESP,0xc
// 0041c694: PUSH EAX
// 0041c695: PUSH EBX
// 0041c696: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 0041c69b: ADD ESP,0x10
// 0041c69e: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041c6a3: MOV ESI,dword ptr [EBX + 0x24f8]
//   Label: caseD_6
// 0041c6a9: TEST ESI,ESI
// 0041c6ab: JZ 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c6b1: MOV EAX,ESI
// 0041c6b3: MOV EDX,dword ptr [ESI + 0x154]
// 0041c6b9: LEA ESI,[EBP + 0xffffff46]
//   XREF to: Stack[-0x144] (DATA)
// 0041c6bf: PUSH ESI
// 0041c6c0: PUSH EAX
// 0041c6c1: CALL dword ptr [EDX + 0x14]
// 0041c6c4: FLD float ptr [EBP + 0xffffff46]
//   XREF to: Stack[-0x144] (READ)
// 0041c6ca: FADD float ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x138] (READ)
// 0041c6d0: FST float ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x10c] (WRITE)
// 0041c6d6: FLD float ptr [0x0061614d]
//   XREF to: 0061614d (READ)
// 0041c6dc: FXCH
// 0041c6de: FMUL ST1
// 0041c6e0: FLD float ptr [EBP + 0xffffff4e]
//   XREF to: Stack[-0x13c] (READ)
// 0041c6e6: FLD float ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x140] (READ)
// 0041c6ec: FADD float ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x134] (READ)
// 0041c6f2: FXCH
// 0041c6f4: FADD float ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x130] (READ)
// 0041c6fa: FXCH
// 0041c6fc: FST float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x108] (WRITE)
// 0041c6ff: FMUL ST3
// 0041c701: FXCH
// 0041c703: FST float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x104] (WRITE)
// 0041c706: FMULP ST3
// 0041c708: LEA EDX,[EBP + -0x3a]
//   XREF to: Stack[-0xc4] (DATA)
// 0041c70b: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 0041c70e: ADD ESP,0x8
// 0041c711: FXCH
// 0041c713: FSTP float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (WRITE)
// 0041c716: FSTP float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (WRITE)
// 0041c719: FSTP float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (WRITE)
// 0041c71c: CMP EAX,EDX
// 0041c71e: JNZ 0x0041c810
//   XREF to: 0041c810 (CONDITIONAL_JUMP)
// 0041c724: LEA EAX,[EBP + -0x76]
//   Label: LAB_0041c724
//   XREF to: Stack[-0x100] (DATA)
// 0041c727: LEA EDX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 0041c72a: CMP EAX,EDX
// 0041c72c: JZ 0x0041c740
//   XREF to: 0041c740 (CONDITIONAL_JUMP)
// 0041c72e: MOV EAX,dword ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf4] (READ)
// 0041c731: MOV dword ptr [EBP + -0x76],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 0041c734: MOV EAX,dword ptr [EBP + -0x66]
//   XREF to: Stack[-0xf0] (READ)
// 0041c737: MOV dword ptr [EBP + -0x72],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0041c73a: MOV EAX,dword ptr [EBP + -0x62]
//   XREF to: Stack[-0xec] (READ)
// 0041c73d: MOV dword ptr [EBP + -0x6e],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 0041c740: MOV EAX,dword ptr [EBP + 0xffffff4e]
//   Label: LAB_0041c740
//   XREF to: Stack[-0x13c] (READ)
// 0041c746: MOV dword ptr [EBP + -0x6e],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 0041c749: MOV EAX,dword ptr [EBP + 0xffffff5a]
//   XREF to: Stack[-0x130] (READ)
// 0041c74f: MOV dword ptr [EBP + -0x62],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 0041c752: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 0041c755: PUSH EAX
// 0041c756: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 0041c759: PUSH EAX
// 0041c75a: MOV EDI,dword ptr [EBX + 0x24f8]
// 0041c760: PUSH EDI
// 0041c761: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041c766: MOV EDX,EAX
// 0041c768: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 0041c76b: ADD ESP,0xc
// 0041c76e: CMP EAX,EDX
// 0041c770: JZ 0x0041c783
//   XREF to: 0041c783 (CONDITIONAL_JUMP)
// 0041c772: MOV EAX,dword ptr [EDX]
// 0041c774: MOV dword ptr [EBP + -0x76],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 0041c777: MOV EAX,dword ptr [EDX + 0x4]
// 0041c77a: MOV dword ptr [EBP + -0x72],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0041c77d: MOV EAX,dword ptr [EDX + 0x8]
// 0041c780: MOV dword ptr [EBP + -0x6e],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 0041c783: LEA EAX,[EBP + -0x6a]
//   Label: LAB_0041c783
//   XREF to: Stack[-0xf4] (DATA)
// 0041c786: PUSH EAX
// 0041c787: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x58] (DATA)
// 0041c78a: PUSH EAX
// 0041c78b: MOV EAX,dword ptr [EBX + 0x24f8]
// 0041c791: PUSH EAX
// 0041c792: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041c797: MOV EDX,EAX
// 0041c799: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 0041c79c: ADD ESP,0xc
// 0041c79f: CMP EAX,EDX
// 0041c7a1: JZ 0x0041c7b4
//   XREF to: 0041c7b4 (CONDITIONAL_JUMP)
// 0041c7a3: MOV EAX,dword ptr [EDX]
// 0041c7a5: MOV dword ptr [EBP + -0x6a],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 0041c7a8: MOV EAX,dword ptr [EDX + 0x4]
// 0041c7ab: MOV dword ptr [EBP + -0x66],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 0041c7ae: MOV EAX,dword ptr [EDX + 0x8]
// 0041c7b1: MOV dword ptr [EBP + -0x62],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 0041c7b4: LEA EAX,[EBP + 0xfffffece]
//   Label: LAB_0041c7b4
//   XREF to: Stack[-0x1bc] (DATA)
// 0041c7ba: PUSH EAX
// 0041c7bb: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 0041c7c0: ADD ESP,0x4
// 0041c7c3: PUSH 0x41c80000
// 0041c7c8: PUSH 0x41700000
// 0041c7cd: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041c7d2: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041c7d5: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0041c7d8: MOV dword ptr [EBP + 0xfffffed2],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 0041c7de: MOV EAX,dword ptr [EBX + 0x24f8]
// 0041c7e4: ADD ESP,0x8
// 0041c7e7: MOV dword ptr [EBP + 0xffffff02],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 0041c7ed: LEA EAX,[EBP + 0xfffffece]
//   XREF to: Stack[-0x1bc] (DATA)
// 0041c7f3: PUSH EAX
// 0041c7f4: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 0041c7f7: PUSH EAX
// 0041c7f8: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 0041c7fb: PUSH EAX
// 0041c7fc: PUSH EBX
// 0041c7fd: MOV dword ptr [EBP + 0xffffff06],EBX
//   XREF to: Stack[-0x184] (WRITE)
// 0041c803: CALL core_enemy.cpp_FUN_004a9930
//   XREF to: 004a9930 (UNCONDITIONAL_CALL)
// 0041c808: ADD ESP,0x10
// 0041c80b: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041c810: MOV EAX,dword ptr [EBP + -0x3a]
//   Label: LAB_0041c810
//   XREF to: Stack[-0xc4] (READ)
// 0041c813: MOV dword ptr [EBP + -0x6a],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 0041c816: MOV EAX,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 0041c819: MOV dword ptr [EBP + -0x66],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 0041c81c: MOV EAX,dword ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (READ)
// 0041c81f: MOV dword ptr [EBP + -0x62],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 0041c822: JMP 0x0041c724
//   XREF to: 0041c724 (UNCONDITIONAL_JUMP)
// 0041c827: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: caseD_5
// 0041c82e: JNZ 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c834: CMP dword ptr [EBX + 0xdc],0x0
// 0041c83b: JNZ 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c841: MOV dword ptr [EBX + 0xbe28],0x1
// 0041c84b: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041c850: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 0041c856: PUSH EBX
// 0041c857: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 0041c85c: ADD ESP,0x8
// 0041c85f: TEST EAX,EAX
// 0041c861: JZ 0x0041c875
//   XREF to: 0041c875 (CONDITIONAL_JUMP)
// 0041c863: PUSH 0x1
// 0041c865: PUSH 0x1
// 0041c867: PUSH ESI
// 0041c868: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041c86d: ADD ESP,0xc
// 0041c870: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041c875: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0041c875
//   XREF to: Stack[0x8] (READ)
// 0041c87b: MOV EAX,dword ptr [EBX + 0x154]
// 0041c881: PUSH EBX
// 0041c882: CALL dword ptr [EAX + 0x158]
// 0041c888: MOV ECX,dword ptr [EBX + 0xbe3c]
// 0041c88e: ADD ESP,0x8
// 0041c891: TEST ECX,ECX
// 0041c893: JZ 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c899: PUSH 0x1
// 0041c89b: PUSH 0x1
// 0041c89d: PUSH ESI
// 0041c89e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041c8a3: ADD ESP,0xc
// 0041c8a6: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041c8ab: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 0041c8b1: MOV EAX,dword ptr [EBX + 0x154]
// 0041c8b7: PUSH EBX
// 0041c8b8: CALL dword ptr [EAX + 0x158]
// 0041c8be: MOV EDI,dword ptr [EBX + 0xbe3c]
// 0041c8c4: ADD ESP,0x8
// 0041c8c7: TEST EDI,EDI
// 0041c8c9: JNZ 0x0041c8f3
//   XREF to: 0041c8f3 (CONDITIONAL_JUMP)
// 0041c8cb: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041c8d1: PUSH EBX
// 0041c8d2: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 0041c8d7: ADD ESP,0x8
// 0041c8da: TEST EAX,EAX
// 0041c8dc: JNZ 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c8e2: PUSH 0x1
// 0041c8e4: PUSH EDI
// 0041c8e5: PUSH ESI
// 0041c8e6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041c8eb: ADD ESP,0xc
// 0041c8ee: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041c8f3: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0041c8f3
//   XREF to: Stack[0x8] (READ)
// 0041c8f9: PUSH EBX
// 0041c8fa: CALL core_boneguy.cpp_FUN_0041cc40
//   XREF to: 0041cc40 (UNCONDITIONAL_CALL)
// 0041c8ff: ADD ESP,0x8
// 0041c902: TEST EAX,EAX
// 0041c904: JNZ 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c90a: MOV EAX,[0x0065af58]
//   XREF to: 0065af58 (READ)
// 0041c90f: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0041c912: CMP dword ptr [EBX + 0x24f8],0x0
// 0041c919: JZ 0x0041c923
//   XREF to: 0041c923 (CONDITIONAL_JUMP)
// 0041c91b: MOV EAX,[0x0065af5c]
//   XREF to: 0065af5c (READ)
// 0041c920: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0041c923: PUSH 0x3e32b8c2
//   Label: LAB_0041c923
// 0041c928: PUSH 0x3f000000
// 0041c92d: XOR EDX,EDX
// 0041c92f: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 0041c932: MOV dword ptr [EBP + -0x46],EDX
//   XREF to: Stack[-0xd0] (WRITE)
// 0041c935: MOV dword ptr [EBP + -0x3e],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 0041c938: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xd0] (DATA)
// 0041c93b: MOV dword ptr [EBP + -0x42],EDX
//   XREF to: Stack[-0xcc] (WRITE)
// 0041c93e: PUSH EAX
// 0041c93f: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0041c945: PUSH EAX
// 0041c946: MOV EDX,dword ptr [EAX + 0x154]
// 0041c94c: CALL dword ptr [EDX + 0xbc]
// 0041c952: ADD ESP,0x4
// 0041c955: PUSH EAX
// 0041c956: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0041c95c: ADD EAX,0x20
// 0041c95f: PUSH EAX
// 0041c960: PUSH EBX
// 0041c961: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0041c966: ADD ESP,0x18
// 0041c969: LEA ESI,[EBX + 0x158]
// 0041c96f: TEST EAX,EAX
// 0041c971: JL 0x0041ca00
//   XREF to: 0041ca00 (CONDITIONAL_JUMP)
// 0041c977: LEA EDX,[EBX + 0x20]
// 0041c97a: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0041c980: FLD float ptr [EDX]
// 0041c982: FSUB float ptr [EAX + 0x20]
// 0041c985: FMUL ST0
// 0041c987: FLD float ptr [EDX + 0x8]
// 0041c98a: FSUB float ptr [EAX + 0x28]
// 0041c98d: FMUL ST0
// 0041c98f: FADDP
// 0041c991: FSQRT
// 0041c993: FLD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 0041c996: FADD double ptr [0x0061612d]
//   XREF to: 0061612d (READ)
// 0041c99c: FCOMPP
// 0041c99e: FNSTSW AX
// 0041c9a0: SAHF
// 0041c9a1: JC 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c9a7: FLD float ptr [EBX + 0xbe38]
// 0041c9ad: FLDZ
// 0041c9af: FCOMPP
// 0041c9b1: FNSTSW AX
// 0041c9b3: SAHF
// 0041c9b4: JC 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041c9ba: CMP dword ptr [EBX + 0x24f8],0x0
// 0041c9c1: JNZ 0x0041ca27
//   XREF to: 0041ca27 (CONDITIONAL_JUMP)
// 0041c9c3: PUSH 0x1
// 0041c9c5: PUSH 0x2
// 0041c9c7: PUSH ESI
//   Label: LAB_0041c9c7
// 0041c9c8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041c9cd: ADD ESP,0xc
// 0041c9d0: MOV EAX,dword ptr [EBX + 0xbecc]
// 0041c9d6: PUSH EAX
// 0041c9d7: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0041c9dc: ADD ESP,0x4
// 0041c9df: PUSH 0x616102
//   XREF to: 00616102 (DATA)
// 0041c9e4: MOV EAX,dword ptr [EBX + 0x154]
// 0041c9ea: PUSH EBX
// 0041c9eb: CALL dword ptr [EAX + 0x24]
// 0041c9ee: ADD ESP,0x8
// 0041c9f1: MOV dword ptr [EBX + 0xbe38],0x3f800000
// 0041c9fb: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041ca00: PUSH EBX
//   Label: LAB_0041ca00
// 0041ca01: PUSH 0x6160e1
//   XREF to: 006160e1 (DATA)
// 0041ca06: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0041ca0c: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 0041ca0d: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0041ca12: ADD ESP,0xc
// 0041ca15: PUSH 0x1
// 0041ca17: PUSH 0x0
// 0041ca19: PUSH ESI
// 0041ca1a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041ca1f: ADD ESP,0xc
// 0041ca22: JMP 0x0041c3f4
//   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
// 0041ca27: PUSH 0x1
//   Label: LAB_0041ca27
// 0041ca29: PUSH 0x6
// 0041ca2b: JMP 0x0041c9c7
//   XREF to: 0041c9c7 (UNCONDITIONAL_JUMP)
// 0041ca2d: CMP EDI,0x6
//   Label: LAB_0041ca2d
// 0041ca30: JA 0x0041c3f4
//   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
// 0041ca36: JMP dword ptr [EDI*0x4 + 0x41bf70]
//   Label: switchD
//   XREF to: 0041c850 (COMPUTED_JUMP)
//   XREF to: 0041c8ab (COMPUTED_JUMP)
//   XREF to: 0041c615 (COMPUTED_JUMP)
//   XREF to: 0041c3f4 (COMPUTED_JUMP)
//   XREF to: 0041c827 (COMPUTED_JUMP)
//   XREF to: 0041c6a3 (COMPUTED_JUMP)
//   XREF to: 0041bf70 (DATA)
