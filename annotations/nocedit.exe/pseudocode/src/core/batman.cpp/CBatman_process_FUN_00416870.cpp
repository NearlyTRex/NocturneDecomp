// Name: core_batman.cpp_CBatman_process_FUN_00416870
// Address: 00416870
// Address Range: [[00416870, 004173ab]]
// Convention: __cdecl
// Signature: void core_batman.cpp_CBatman_process_FUN_00416870(CBatman * this_ptr)
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_00416828 = 00416dd1
//   void* switchdataD_00416838 = 00416fc3
//   TerminatedCString s_s_confused_while_walking_00615849
//   TerminatedCString s_batman_disappear_wav_00615873
//   TerminatedCString s_batman_alert_wav_00615888
//   TerminatedCString s_CHero_00615899
//   TerminatedCString s_batman_disappear_wav_0061589f
//   TerminatedCString s_batman_attack_wav_006158b4
//   undefined4 DAT_006158cd
//   undefined4 DAT_006158d5
//   undefined4 DAT_006158dd
//   undefined4 DAT_006158e5
//   undefined4 DAT_0065a76c
//   undefined4 DAT_0065a778
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_008227c0
//   undefined4 g_CBatmanClassInfo.name_hash
//   CConsole g_ConsolePtr
//   CEventList g_CEventListInstance
//   CFireEffect g_CFireEffectInstance
//   CGore g_CGoreInstance
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
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_batman.cpp_FUN_004167f0
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CDeformableModelInstance *pCVar3;
  char *pcVar4;
  char *pcVar5;
  float fVar6;
  uint uVar7;
  CBatman *this_ptr_00;
  CDemonActor_vtable *pCVar8;
  float fVar9;
  CCharacter *pCVar10;
  CEnemy *pCVar11;
  int iVar12;
  int iVar13;
  CVector3f *pCVar14;
  undefined4 uVar15;
  int extraout_EAX;
  CDemonActor *pCVar16;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffe7c;
  CVector3f local_14c;
  float local_140;
  float local_13c;
  float local_138;
  CVector3f local_134;
  CVector3f local_128;
  CVector3f local_11c;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  float local_8c;
  undefined4 local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  CSkeleton *local_24;
  CSkeleton *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  iVar12 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar12 == 0) {
    return;
  }
  pCVar10 = &(this_ptr->base_enemy).base_character;
  (pCVar10->model).field17_0x2254[8] = '\0';
  (pCVar10->model).field17_0x2254[9] = '\0';
  (pCVar10->model).field17_0x2254[10] = '\0';
  (pCVar10->model).field17_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
  *(undefined4 *)(this_ptr->base_enemy).base_character.model.field17_0x2254 =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
  local_3c = in_stack_00000008 * (this_ptr->base_enemy).speed;
  while (0.0 < local_3c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base_enemy).base_character.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar6 = (this_ptr->base_enemy).speed;
  fVar9 = (float)_DAT_006158cd;
  pCVar3 = &(this_ptr->base_enemy).base_character.model;
  *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar9 * fVar6;
  iVar12 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar3->motion_controller);
  iVar12 = *(int *)(iVar12 + 0x24);
  local_28 = iVar12;
  iVar13 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar13 == 0) {
    switch(iVar12) {
    case 0:
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,1,1);
        }
      }
      else {
        iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if ((iVar12 != 0) &&
           (iVar12 = core_actor_cpp_isOfClass_FUN_0040c6d0
                               (*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4),
                                "CHero"), iVar12 != 0)) {
          iVar13 = 0;
          iVar12 = 0;
          while ((iVar12 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) &&
                 ((pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                                       (*(CDemonActor **)
                                         (g_CDemonSetPtr->field19_0x14f0a0 + iVar13 + 8000),
                                        g_CBatmanClassInfo.name_hash), pCVar16 == (CDemonActor *)0x0
                  || (*(int *)(pCVar16[0x8e].create_event + 0x10) == 0))))) {
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + 4;
          }
          if (iVar12 == *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,0xd,1);
            iVar12 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            this_ptr->mist_state = 1;
            if (&this_ptr->new_pos != (CVector3f *)(iVar12 + 0x20)) {
              (this_ptr->new_pos).x = *(float *)(iVar12 + 0x20);
              (this_ptr->new_pos).y = *(float *)(iVar12 + 0x24);
              (this_ptr->new_pos).z = *(float *)(iVar12 + 0x28);
            }
            pCVar8 = (this_ptr->base_enemy).base_character.base_actor.vtable;
            this_ptr->vanish_timer = 0.0;
            local_28 = 0xd;
            (*pCVar8->playSound)((CDemonActor *)this_ptr,"batman-disappear.wav");
            break;
          }
        }
        iVar12 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        local_c8.x = *(float *)(iVar12 + 0x20) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.x;
        local_c8.y = *(float *)(iVar12 + 0x24) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.y;
        local_c8.z = *(float *)(iVar12 + 0x28) -
                     (this_ptr->base_enemy).base_character.base_actor.location.position.z;
        if (SQRT(local_c8.z * local_c8.z + local_c8.x * local_c8.x + local_c8.y * local_c8.y) <
            DAT_0065a76c) {
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_c8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_80.y -
                                (this_ptr->base_enemy).base_character.base_actor.orient.bank);
          if (ABS(local_14) < (float)_DAT_006158d5) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,3,1);
          }
        }
        core_batman_cpp_FUN_004167f0();
      }
      break;
    case 1:
    case 2:
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      fVar6 = DAT_0065a76c;
      pCVar3 = &(this_ptr->base_enemy).base_character.model;
      if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,1,1);
        }
      }
      else {
        local_2c = DAT_0065a76c;
        pCVar10 = &(this_ptr->base_enemy).base_character;
        (pCVar10->model).field17_0x2254[8] = '\0';
        (pCVar10->model).field17_0x2254[9] = '\0';
        (pCVar10->model).field17_0x2254[10] = '\0';
        (pCVar10->model).field17_0x2254[0xb] = '\0';
        *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) =
             *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
        *(undefined4 *)(this_ptr->base_enemy).base_character.model.field17_0x2254 =
             *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
        local_110 = 0;
        local_108 = fVar6;
        local_10c = 0;
        (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc))()
        ;
        iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (-1 < iVar12) {
          pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
          iVar12 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          local_8c = (pCVar1->position).x - *(float *)(iVar12 + 0x20);
          local_84 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                     *(float *)(iVar12 + 0x28);
          local_88 = 0;
          local_38 = SQRT(local_84 * local_84 + local_8c * local_8c);
          local_34 = local_38;
          if ((local_38 <= local_2c) && (*(float *)(this_ptr->base_enemy).field6_0xbe38 <= 0.0)) {
            iVar12 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            local_5c.x = *(float *)(iVar12 + 0x20) - (pCVar1->position).x;
            local_5c.y = *(float *)(iVar12 + 0x24) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_5c.z = *(float *)(iVar12 + 0x28) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.z;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_98,&local_5c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_98.y -
                                  (this_ptr->base_enemy).base_character.base_actor.orient.bank);
            if (ABS(local_14) < (float)_DAT_006158d5) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,3,1);
              (this_ptr->base_enemy).field6_0xbe38[0] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[1] = '\0';
              (this_ptr->base_enemy).field6_0xbe38[2] = -0x80;
              (this_ptr->base_enemy).field6_0xbe38[3] = '?';
              iVar12 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
              if ((iVar12 == 0) &&
                 (iVar12 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar12 == 0)) {
                uVar15 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                *(undefined4 *)(this_ptr->field5_0xbf6c + 8) = uVar15;
              }
            }
          }
          if ((this_ptr->base_enemy).guard_distance < local_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe78);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_104,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base_enemy).base_character.model.bone_world_matrices
                           [DAT_008227c0].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_f8,pCVar14);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 8:
      if (((this_ptr->base_enemy).pool_me == 0) &&
         ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar3,&local_ec,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_74,pCVar14);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base_enemy).pool_me = 1;
      }
      break;
    case 9:
      (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)this_ptr);
      if ((*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) ||
         (iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                             (g_CEventListPtr,this_ptr->field1_0xbeb4 + 8), iVar12 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,0xb,1);
        iVar12 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
        if ((iVar12 == 0) &&
           ((iVar12 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar12 == 0 &&
            (iVar12 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar12 == 0)))) {
          uVar15 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          *(undefined4 *)this_ptr->field5_0xbf6c = uVar15;
        }
      }
      break;
    case 0xb:
      if ((this_ptr->base_enemy).base_character.base_actor.location.position.y <
          *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 8) + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0xc,1);
      }
      break;
    case 0xd:
      switch(this_ptr->mist_state) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
        break;
      case 1:
        fVar6 = this_ptr->vanish_timer + in_stack_00000008;
        this_ptr->vanish_timer = fVar6;
        if (DAT_0065a778 < fVar6) {
          this_ptr->mist_state = 2;
          this_ptr->vanish_timer = DAT_0065a778;
        }
        pCVar3 = &(this_ptr->base_enemy).base_character.model;
        iVar12 = 0;
        local_bc.x = 0.0;
        local_bc.y = 3.0;
        local_bc.z = 0.0;
        local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
        if (0 < local_20->bone_count) {
          do {
            pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar3,&local_11c,iVar12);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar14);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_14c,0.5,&local_bc,0xffff);
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_20->bone_count);
        }
        break;
      case 2:
        local_30 = 1;
        local_1c = 0;
        for (local_18 = 0; fVar6 = DAT_0065a778, local_18 < g_CDemonSetPtr->damage_listener_count;
            local_18 = local_18 + 1) {
          this_ptr_00 = *(CBatman **)(g_CDemonSetPtr->field19_0x14f0a0 + local_1c + -4);
          if (((this_ptr_00 != (CBatman *)0x0) && (this_ptr_00 != this_ptr)) &&
             (iVar12 = (*(this_ptr_00->base_enemy).base_character.base_actor.vtable[1].hasCollision)
                                 ((CDemonActor *)this_ptr_00,in_stack_fffffe7c), iVar12 < 1)) {
            local_50 = (this_ptr_00->base_enemy).base_character.base_actor.location.position.x -
                       (this_ptr->new_pos).x;
            local_4c = (this_ptr_00->base_enemy).base_character.base_actor.location.position.y -
                       (this_ptr->new_pos).y;
            local_48 = (this_ptr_00->base_enemy).base_character.base_actor.location.position.z -
                       (this_ptr->new_pos).z;
            if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
                (float)_DAT_006158e5) goto switchD_004173a5_caseD_4;
          }
          local_1c = local_1c + 4;
        }
        if (local_30 != 0) {
          this_ptr->mist_state = 3;
          pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
          this_ptr->vanish_timer = fVar6;
          (pCVar1->position).x = (this_ptr->new_pos).x;
          (this_ptr->base_enemy).base_character.base_actor.location.position.y =
               (this_ptr->new_pos).y;
          (this_ptr->base_enemy).base_character.base_actor.location.position.z =
               (this_ptr->new_pos).z;
          iVar12 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          if (iVar12 != 0) {
            local_a4.x = *(float *)(iVar12 + 0x20) - (pCVar1->position).x;
            local_a4.y = *(float *)(iVar12 + 0x24) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.y;
            local_a4.z = *(float *)(iVar12 + 0x28) -
                         (this_ptr->base_enemy).base_character.base_actor.location.position.z;
            pCVar2 = &(this_ptr->base_enemy).base_character.base_actor.orient;
            pCVar14 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_b0,&local_a4);
            if (pCVar2 != (COrientation *)pCVar14) {
              pCVar2->pitch = pCVar14->x;
              (this_ptr->base_enemy).base_character.base_actor.orient.bank = pCVar14->y;
              (this_ptr->base_enemy).base_character.base_actor.orient.heading = pCVar14->z;
            }
            (this_ptr->base_enemy).base_character.base_actor.orient.heading = 0.0;
            (this_ptr->base_enemy).base_character.base_actor.orient.pitch = 0.0;
          }
          (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                    ((CDemonActor *)this_ptr,"batman-disappear.wav");
        }
        break;
      case 3:
        iVar12 = 0;
        local_68.x = 0.0;
        local_68.y = 3.0;
        local_68.z = 0.0;
        local_24 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
        if (0 < local_24->bone_count) {
          do {
            pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar3,&local_128,iVar12);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_134,pCVar14);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_134,0.5,&local_68,0xffff);
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_24->bone_count);
        }
        fVar6 = this_ptr->vanish_timer - in_stack_00000008;
        this_ptr->vanish_timer = fVar6;
        if (fVar6 < 0.0) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->mist_state = 0;
          core_batman_cpp_FUN_004167f0();
        }
      }
    }
    goto switchD_004173a5_caseD_4;
  }
  uVar7 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_00416943:
      iVar12 = 1;
    }
    else {
LAB_00416b03:
      iVar12 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar12,1);
  }
  else {
    if (uVar7 < 3) goto LAB_00416943;
    if (uVar7 != 3) goto LAB_00416b03;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  pCVar10 = &(this_ptr->base_enemy).base_character;
  (pCVar10->model).field17_0x2254[8] = '\0';
  (pCVar10->model).field17_0x2254[9] = '\0';
  (pCVar10->model).field17_0x2254[10] = '\0';
  (pCVar10->model).field17_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
  *(undefined4 *)(this_ptr->base_enemy).base_character.model.field17_0x2254 =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
switchD_004173a5_caseD_4:
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar12 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar12 != 0) && (local_28 != 9)) {
    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)_DAT_006158dd;
    local_e0 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_dc = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar4 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
    local_d8 = in_stack_00000008 *
               *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
    pcVar5 = (this_ptr->base_enemy).base_character.model.field17_0x2254;
    local_140 = local_e0 + *(float *)pcVar4;
    local_13c = local_dc + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    local_138 = local_d8 + *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    local_d4 = local_140 + *(float *)pcVar5;
    local_d0 = local_13c +
               *(float *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
    local_cc = local_138 +
               *(float *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
    pCVar11 = &this_ptr->base_enemy;
    (pCVar11->base_character).field2_0x240c[0x18] = '\0';
    (pCVar11->base_character).field2_0x240c[0x19] = '\0';
    (pCVar11->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar11->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
    *(float *)pcVar4 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
    pCVar10 = &(this_ptr->base_enemy).base_character;
    (pCVar10->model).field17_0x2254[8] = '\0';
    (pCVar10->model).field17_0x2254[9] = '\0';
    (pCVar10->model).field17_0x2254[10] = '\0';
    (pCVar10->model).field17_0x2254[0xb] = '\0';
    uVar15 = *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
    *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) = uVar15;
    *(undefined4 *)pcVar5 = uVar15;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  if (local_28 != 0xd) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 00416870: PUSH EBX
//   Label: core_batman.cpp_CBatman_process_FUN_00416870
// 00416871: PUSH ESI
// 00416872: PUSH EDI
// 00416873: PUSH EBP
// 00416874: MOV EBP,ESP
// 00416876: SUB ESP,0x178
// 0041687c: SUB EBP,0x7a
// 0041687f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00416885: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041688b: PUSH EBX
// 0041688c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00416891: ADD ESP,0x8
// 00416894: TEST EAX,EAX
// 00416896: JZ 0x00416aaa
//   XREF to: 00416aaa (CONDITIONAL_JUMP)
// 0041689c: LEA EAX,[EBX + 0x23ac]
// 004168a2: MOV dword ptr [EAX + 0x8],0x0
// 004168a9: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004168af: MOV EDX,dword ptr [EAX + 0x8]
// 004168b2: MOV dword ptr [EAX + 0x4],EDX
// 004168b5: MOV EDX,dword ptr [EAX + 0x4]
// 004168b8: MOV dword ptr [EAX],EDX
// 004168ba: FMUL float ptr [EBX + 0xbe24]
// 004168c0: LEA ESI,[EBX + 0x158]
// 004168c6: FSTP float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (WRITE)
// 004168c9: FLD float ptr [EBP + 0x4e]
//   Label: LAB_004168c9
//   XREF to: Stack[-0x3c] (READ)
// 004168cc: FLDZ
// 004168ce: FCOMPP
// 004168d0: FNSTSW AX
// 004168d2: SAHF
// 004168d3: JC 0x00416ab2
//   XREF to: 00416ab2 (CONDITIONAL_JUMP)
// 004168d9: FLD float ptr [EBX + 0xbe24]
// 004168df: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004168e5: FMUL double ptr [0x006158cd]
//   XREF to: 006158cd (READ)
// 004168eb: FMULP
// 004168ed: FLD float ptr [EBX + 0x23b4]
// 004168f3: LEA EDI,[EBX + 0x158]
// 004168f9: FSTP float ptr [EBX + 0x2434]
// 004168ff: PUSH EDI
// 00416900: FSTP float ptr [EBX + 0x2438]
// 00416906: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0041690b: ADD ESP,0x4
// 0041690e: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00416914: MOV ESI,dword ptr [EAX + 0x24]
// 00416917: PUSH EBX
// 00416918: MOV dword ptr [EBP + 0x62],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0041691b: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 00416920: ADD ESP,0x8
// 00416923: TEST EAX,EAX
// 00416925: JZ 0x0041739c
//   XREF to: 0041739c (CONDITIONAL_JUMP)
// 0041692b: MOV EAX,dword ptr [EBX + 0x25b0]
// 00416931: CMP EAX,0x2
// 00416934: JNC 0x00416af8
//   XREF to: 00416af8 (CONDITIONAL_JUMP)
// 0041693a: CMP EAX,0x1
// 0041693d: JNZ 0x00416b03
//   XREF to: 00416b03 (CONDITIONAL_JUMP)
// 00416943: PUSH 0x1
//   Label: LAB_00416943
// 00416945: PUSH 0x1
// 00416947: LEA EAX,[EBX + 0x158]
//   Label: LAB_00416947
// 0041694d: PUSH EAX
// 0041694e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416953: ADD ESP,0xc
//   Label: LAB_00416953
// 00416956: LEA EAX,[EBX + 0x23ac]
// 0041695c: MOV dword ptr [EAX + 0x8],0x0
// 00416963: MOV EDX,dword ptr [EAX + 0x8]
// 00416966: MOV dword ptr [EAX + 0x4],EDX
// 00416969: MOV EDX,dword ptr [EAX + 0x4]
// 0041696c: MOV dword ptr [EAX],EDX
// 0041696e: MOV EAX,EAX
// 00416970: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_4
// 00416976: FLDZ
// 00416978: FCOMPP
// 0041697a: FNSTSW AX
// 0041697c: SAHF
// 0041697d: JNC 0x00416991
//   XREF to: 00416991 (CONDITIONAL_JUMP)
// 0041697f: FLD float ptr [EBX + 0xbe38]
// 00416985: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0041698b: FSTP float ptr [EBX + 0xbe38]
// 00416991: PUSH EBX
//   Label: LAB_00416991
// 00416992: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 00416997: ADD ESP,0x4
// 0041699a: TEST EAX,EAX
// 0041699c: JZ 0x00416a73
//   XREF to: 00416a73 (CONDITIONAL_JUMP)
// 004169a2: CMP dword ptr [EBP + 0x62],0x9
//   XREF to: Stack[-0x28] (READ)
// 004169a6: JZ 0x00416a73
//   XREF to: 00416a73 (CONDITIONAL_JUMP)
// 004169ac: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004169b2: FLD ST0
// 004169b4: FMUL double ptr [0x006158dd]
//   XREF to: 006158dd (READ)
// 004169ba: FLD float ptr [EBX + 0x242c]
// 004169c0: FXCH
// 004169c2: FSUBR ST0,ST1
// 004169c4: LEA EDI,[EBX + 0x2428]
// 004169ca: FSTP ST1
// 004169cc: FSTP float ptr [EBX + 0x242c]
// 004169d2: FLD float ptr [EDI]
// 004169d4: FMUL ST1
// 004169d6: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (WRITE)
// 004169d9: FLD float ptr [EDI + 0x4]
// 004169dc: FMUL ST1
// 004169de: LEA EAX,[EBX + 0x241c]
// 004169e4: FSTP float ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (WRITE)
// 004169e7: FMUL float ptr [EDI + 0x8]
// 004169ea: LEA ESI,[EBX + 0x23ac]
// 004169f0: FLD float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 004169f3: FXCH
// 004169f5: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (WRITE)
// 004169f8: FADD float ptr [EAX]
// 004169fa: FLD float ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (READ)
// 004169fd: FXCH
// 004169ff: FSTP float ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x140] (WRITE)
// 00416a05: FADD float ptr [EAX + 0x4]
// 00416a08: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 00416a0b: FXCH
// 00416a0d: FSTP float ptr [EBP + 0xffffff4e]
//   XREF to: Stack[-0x13c] (WRITE)
// 00416a13: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 00416a16: FLD float ptr [EBP + 0xffffff4a]
//   XREF to: Stack[-0x140] (READ)
// 00416a1c: FXCH
// 00416a1e: FSTP float ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x138] (WRITE)
// 00416a24: FADD float ptr [ESI]
// 00416a26: FLD float ptr [EBP + 0xffffff4e]
//   XREF to: Stack[-0x13c] (READ)
// 00416a2c: FXCH
// 00416a2e: FSTP float ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (WRITE)
// 00416a31: FADD float ptr [ESI + 0x4]
// 00416a34: FLD float ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x138] (READ)
// 00416a3a: FXCH
// 00416a3c: FSTP float ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (WRITE)
// 00416a3f: FADD float ptr [ESI + 0x8]
// 00416a42: FSTP float ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (WRITE)
// 00416a45: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 00416a4c: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 00416a4f: MOV dword ptr [EAX + 0x4],EDX
// 00416a52: MOV EDX,dword ptr [EAX + 0x4]
// 00416a55: MOV dword ptr [EAX],EDX
// 00416a57: MOV dword ptr [ESI + 0x8],0x0
// 00416a5e: LEA EAX,[EBP + -0x4a]
//   XREF to: Stack[-0xd4] (DATA)
// 00416a61: FLD float ptr [ESI + 0x8]
// 00416a64: PUSH EAX
// 00416a65: FST float ptr [ESI + 0x4]
// 00416a68: PUSH EBX
// 00416a69: FSTP float ptr [ESI]
// 00416a6b: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00416a70: ADD ESP,0x8
// 00416a73: CMP dword ptr [EBP + 0x62],0xd
//   Label: LAB_00416a73
//   XREF to: Stack[-0x28] (READ)
// 00416a77: JZ 0x00416a83
//   XREF to: 00416a83 (CONDITIONAL_JUMP)
// 00416a79: MOV dword ptr [EBX + 0xbf58],0x0
// 00416a83: PUSH EBX
//   Label: LAB_00416a83
// 00416a84: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00416a89: ADD ESP,0x4
// 00416a8c: LEA EAX,[EBX + 0x158]
// 00416a92: PUSH EAX
// 00416a93: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 00416a98: ADD ESP,0x4
// 00416a9b: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00416aa1: PUSH EBX
// 00416aa2: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 00416aa7: ADD ESP,0x8
// 00416aaa: LEA ESP,[EBP + 0x7a]
//   Label: LAB_00416aaa
//   XREF to: Stack[-0x10] (DATA)
// 00416aad: POP EBP
// 00416aae: POP EDI
// 00416aaf: POP ESI
// 00416ab0: POP EBX
// 00416ab1: RET
// 00416ab2: LEA EAX,[EBP + 0x4e]
//   Label: LAB_00416ab2
//   XREF to: Stack[-0x3c] (DATA)
// 00416ab5: PUSH EAX
// 00416ab6: PUSH ESI
// 00416ab7: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00416abc: ADD ESP,0x8
// 00416abf: PUSH EAX
// 00416ac0: PUSH EBX
// 00416ac1: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00416ac6: ADD ESP,0x8
// 00416ac9: JMP 0x004168c9
//   XREF to: 004168c9 (UNCONDITIONAL_JUMP)
// 00416ace: PUSH 0x1
//   Label: LAB_00416ace
// 00416ad0: PUSH 0x0
// 00416ad2: LEA EAX,[EBX + 0x158]
// 00416ad8: PUSH EAX
// 00416ad9: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416ade: ADD ESP,0xc
// 00416ae1: PUSH EBX
// 00416ae2: MOV EAX,0x615849
//   XREF to: 00615849 (DATA)
// 00416ae7: PUSH EAX
//   XREF to: 00615849 (DATA)
// 00416ae8: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00416aed: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 00416aee: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00416af3: JMP 0x00416953
//   XREF to: 00416953 (UNCONDITIONAL_JUMP)
// 00416af8: JBE 0x00416943
//   Label: LAB_00416af8
//   XREF to: 00416943 (CONDITIONAL_JUMP)
// 00416afe: CMP EAX,0x3
// 00416b01: JZ 0x00416ace
//   XREF to: 00416ace (CONDITIONAL_JUMP)
// 00416b03: PUSH 0x1
//   Label: LAB_00416b03
// 00416b05: PUSH 0x0
// 00416b07: JMP 0x00416947
//   XREF to: 00416947 (UNCONDITIONAL_JUMP)
// 00416b0c: FLD float ptr [EBX + 0xbf5c]
//   Label: caseD_1
// 00416b12: FADD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00416b18: FST float ptr [EBX + 0xbf5c]
// 00416b1e: FCOMP float ptr [0x0065a778]
//   XREF to: 0065a778 (READ)
// 00416b24: FNSTSW AX
// 00416b26: SAHF
// 00416b27: JBE 0x00416b3e
//   XREF to: 00416b3e (CONDITIONAL_JUMP)
// 00416b29: MOV dword ptr [EBX + 0xbf58],0x2
// 00416b33: MOV EAX,[0x0065a778]
//   XREF to: 0065a778 (READ)
// 00416b38: MOV dword ptr [EBX + 0xbf5c],EAX
// 00416b3e: MOV ECX,0x40400000
//   Label: LAB_00416b3e
// 00416b43: LEA EDI,[EBX + 0x158]
// 00416b49: XOR EDX,EDX
// 00416b4b: XOR ESI,ESI
// 00416b4d: MOV dword ptr [EBP + -0x32],EDX
//   XREF to: Stack[-0xbc] (WRITE)
// 00416b50: PUSH EDI
// 00416b51: MOV dword ptr [EBP + -0x2e],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 00416b54: MOV dword ptr [EBP + -0x2a],EDX
//   XREF to: Stack[-0xb4] (WRITE)
// 00416b57: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00416b5c: ADD ESP,0x4
// 00416b5f: MOV EDX,dword ptr [EAX + 0x28558]
// 00416b65: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00416b68: TEST EDX,EDX
// 00416b6a: JLE 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416b70: PUSH ESI
//   Label: LAB_00416b70
// 00416b71: LEA EAX,[EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (DATA)
// 00416b77: PUSH EAX
// 00416b78: PUSH EDI
// 00416b79: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00416b7e: ADD ESP,0xc
// 00416b81: PUSH EAX
// 00416b82: LEA EAX,[EBP + 0xffffff3e]
//   XREF to: Stack[-0x14c] (DATA)
// 00416b88: PUSH EAX
// 00416b89: PUSH EBX
// 00416b8a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00416b8f: ADD ESP,0xc
// 00416b92: PUSH 0xffff
// 00416b97: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xbc] (DATA)
// 00416b9a: PUSH EAX
// 00416b9b: LEA EAX,[EBP + 0xffffff3e]
//   XREF to: Stack[-0x14c] (DATA)
// 00416ba1: PUSH 0x3f000000
// 00416ba6: PUSH EAX
// 00416ba7: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 00416bac: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 00416bad: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 00416bb2: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00416bb5: INC ESI
// 00416bb6: MOV EDX,dword ptr [EAX + 0x28558]
// 00416bbc: ADD ESP,0x14
// 00416bbf: CMP ESI,EDX
// 00416bc1: JL 0x00416b70
//   XREF to: 00416b70 (CONDITIONAL_JUMP)
// 00416bc3: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416bc8: MOV ECX,0x1
//   Label: caseD_2
// 00416bcd: LEA EDI,[EBX + 0xbf60]
// 00416bd3: XOR ESI,ESI
// 00416bd5: MOV dword ptr [EBP + 0x5a],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00416bd8: MOV dword ptr [EBP + 0x72],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00416bdb: MOV dword ptr [EBP + 0x6e],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00416bde: MOV EAX,[0x006810c8]
//   Label: LAB_00416bde
//   XREF to: 006810c8 (READ)
// 00416be3: MOV ESI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 00416be6: CMP ESI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 00416bec: JGE 0x00416c66
//   XREF to: 00416c66 (CONDITIONAL_JUMP)
// 00416bf2: ADD EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00416bf5: MOV ESI,dword ptr [EAX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 00416bfb: TEST ESI,ESI
// 00416bfd: JNZ 0x00416c11
//   XREF to: 00416c11 (CONDITIONAL_JUMP)
// 00416bff: MOV ESI,dword ptr [EBP + 0x72]
//   Label: LAB_00416bff
//   XREF to: Stack[-0x18] (READ)
// 00416c02: MOV ECX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00416c05: INC ESI
// 00416c06: ADD ECX,0x4
// 00416c09: MOV dword ptr [EBP + 0x72],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00416c0c: MOV dword ptr [EBP + 0x6e],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00416c0f: JMP 0x00416bde
//   XREF to: 00416bde (UNCONDITIONAL_JUMP)
// 00416c11: CMP ESI,EBX
//   Label: LAB_00416c11
// 00416c13: JZ 0x00416bff
//   XREF to: 00416bff (CONDITIONAL_JUMP)
// 00416c15: PUSH ESI
// 00416c16: MOV EAX,dword ptr [ESI + 0x154]
// 00416c1c: CALL dword ptr [EAX + 0x120]
// 00416c22: ADD ESP,0x4
// 00416c25: TEST EAX,EAX
// 00416c27: JG 0x00416bff
//   XREF to: 00416bff (CONDITIONAL_JUMP)
// 00416c29: FLD float ptr [ESI + 0x20]
// 00416c2c: FSUB float ptr [EDI]
// 00416c2e: FSTP float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (WRITE)
// 00416c31: FLD float ptr [ESI + 0x24]
// 00416c34: FSUB float ptr [EDI + 0x4]
// 00416c37: FST float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (WRITE)
// 00416c3a: FMUL float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (READ)
// 00416c3d: FLD float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 00416c40: FMUL ST0
// 00416c42: FLD float ptr [ESI + 0x28]
// 00416c45: FSUB float ptr [EDI + 0x8]
// 00416c48: FXCH
// 00416c4a: FADDP ST2,ST0
// 00416c4c: FST float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (WRITE)
// 00416c4f: FMUL float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 00416c52: FADDP
// 00416c54: FSQRT
// 00416c56: FCOMP double ptr [0x006158e5]
//   XREF to: 006158e5 (READ)
// 00416c5c: FNSTSW AX
// 00416c5e: SAHF
// 00416c5f: JNC 0x00416bff
//   XREF to: 00416bff (CONDITIONAL_JUMP)
// 00416c61: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416c66: CMP dword ptr [EBP + 0x5a],0x0
//   Label: LAB_00416c66
//   XREF to: Stack[-0x30] (READ)
// 00416c6a: JZ 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416c70: FLD float ptr [0x0065a778]
//   XREF to: 0065a778 (READ)
// 00416c76: MOV dword ptr [EBX + 0xbf58],0x3
// 00416c80: LEA EAX,[EBX + 0x20]
// 00416c83: FSTP float ptr [EBX + 0xbf5c]
// 00416c89: MOV EDX,dword ptr [EDI]
// 00416c8b: MOV dword ptr [EAX],EDX
// 00416c8d: MOV EDX,dword ptr [EDI + 0x4]
// 00416c90: MOV dword ptr [EAX + 0x4],EDX
// 00416c93: MOV EDX,dword ptr [EDI + 0x8]
// 00416c96: MOV dword ptr [EAX + 0x8],EDX
// 00416c99: MOV ESI,dword ptr [EBX + 0xbe3c]
// 00416c9f: TEST ESI,ESI
// 00416ca1: JZ 0x00416cf2
//   XREF to: 00416cf2 (CONDITIONAL_JUMP)
// 00416ca3: FLD float ptr [ESI + 0x20]
// 00416ca6: FSUB float ptr [EAX]
// 00416ca8: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 00416cab: FLD float ptr [ESI + 0x24]
// 00416cae: FSUB float ptr [EAX + 0x4]
// 00416cb1: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 00416cb4: FLD float ptr [ESI + 0x28]
// 00416cb7: FSUB float ptr [EAX + 0x8]
// 00416cba: LEA EAX,[EBP + -0x1a]
//   XREF to: Stack[-0xa4] (DATA)
// 00416cbd: PUSH EAX
// 00416cbe: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb0] (DATA)
// 00416cc1: LEA ESI,[EBX + 0x30]
// 00416cc4: PUSH EAX
// 00416cc5: FSTP float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 00416cc8: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00416ccd: ADD ESP,0x8
// 00416cd0: CMP ESI,EAX
// 00416cd2: JZ 0x00416ce4
//   XREF to: 00416ce4 (CONDITIONAL_JUMP)
// 00416cd4: MOV EDX,dword ptr [EAX]
// 00416cd6: MOV dword ptr [ESI],EDX
// 00416cd8: MOV EDX,dword ptr [EAX + 0x4]
// 00416cdb: MOV dword ptr [ESI + 0x4],EDX
// 00416cde: MOV EDX,dword ptr [EAX + 0x8]
// 00416ce1: MOV dword ptr [ESI + 0x8],EDX
// 00416ce4: MOV dword ptr [EBX + 0x38],0x0
//   Label: LAB_00416ce4
// 00416ceb: MOV dword ptr [EBX + 0x30],0x0
// 00416cf2: PUSH 0x615873
//   Label: LAB_00416cf2
//   XREF to: 00615873 (DATA)
// 00416cf7: MOV EAX,dword ptr [EBX + 0x154]
// 00416cfd: PUSH EBX
// 00416cfe: CALL dword ptr [EAX + 0x24]
// 00416d01: ADD ESP,0x8
// 00416d04: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416d09: MOV ECX,0x40400000
//   Label: caseD_3
// 00416d0e: PUSH EDI
// 00416d0f: XOR EDX,EDX
// 00416d11: XOR ESI,ESI
// 00416d13: MOV dword ptr [EBP + 0x22],EDX
//   XREF to: Stack[-0x68] (WRITE)
// 00416d16: MOV dword ptr [EBP + 0x26],ECX
//   XREF to: Stack[-0x64] (WRITE)
// 00416d19: MOV dword ptr [EBP + 0x2a],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 00416d1c: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00416d21: ADD ESP,0x4
// 00416d24: MOV EDX,dword ptr [EAX + 0x28558]
// 00416d2a: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00416d2d: TEST EDX,EDX
// 00416d2f: JLE 0x00416d90
//   XREF to: 00416d90 (CONDITIONAL_JUMP)
// 00416d31: PUSH ESI
//   Label: LAB_00416d31
// 00416d32: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 00416d38: PUSH EAX
// 00416d39: PUSH EDI
// 00416d3a: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00416d3f: ADD ESP,0xc
// 00416d42: PUSH EAX
// 00416d43: LEA EAX,[EBP + 0xffffff56]
//   XREF to: Stack[-0x134] (DATA)
// 00416d49: PUSH EAX
// 00416d4a: PUSH EBX
// 00416d4b: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00416d50: ADD ESP,0xc
// 00416d53: PUSH 0xffff
// 00416d58: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 00416d5b: PUSH EAX
// 00416d5c: LEA EAX,[EBP + 0xffffff56]
//   XREF to: Stack[-0x134] (DATA)
// 00416d62: PUSH 0x3f000000
// 00416d67: PUSH EAX
// 00416d68: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 00416d6e: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 00416d6f: CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 00416d74: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00416d77: INC ESI
// 00416d78: MOV ECX,dword ptr [EAX + 0x28558]
// 00416d7e: ADD ESP,0x14
// 00416d81: CMP ESI,ECX
// 00416d83: JL 0x00416d31
//   XREF to: 00416d31 (CONDITIONAL_JUMP)
// 00416d85: LEA EAX,[EAX]
// 00416d8b: LEA EDX,[EDX]
//   XREF to: 02d12db0 (DATA)
// 00416d8e: MOV EBX,EBX
// 00416d90: FLD float ptr [EBX + 0xbf5c]
//   Label: LAB_00416d90
// 00416d96: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00416d9c: FST float ptr [EBX + 0xbf5c]
// 00416da2: FLDZ
// 00416da4: FCOMPP
// 00416da6: FNSTSW AX
// 00416da8: SAHF
// 00416da9: JBE 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416daf: MOV dword ptr [EBX + 0xbf5c],0x0
// 00416db9: PUSH EBX
// 00416dba: MOV dword ptr [EBX + 0xbf58],0x0
// 00416dc4: CALL core_batman.cpp_FUN_004167f0
//   XREF to: 004167f0 (UNCONDITIONAL_CALL)
// 00416dc9: ADD ESP,0x4
// 00416dcc: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416dd1: PUSH 0x1
//   Label: caseD_0
// 00416dd3: PUSH 0x0
// 00416dd5: PUSH EDI
// 00416dd6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416ddb: ADD ESP,0xc
// 00416dde: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416de3: MOV EAX,dword ptr [EBX + 0xbf58]
//   Label: caseD_d
// 00416de9: CMP EAX,0x3
// 00416dec: JA 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416df2: JMP dword ptr [EAX*0x4 + 0x416828]
//   Label: switchD
//   XREF to: 00416dd1 (COMPUTED_JUMP)
//   XREF to: 00416b0c (COMPUTED_JUMP)
//   XREF to: 00416bc8 (COMPUTED_JUMP)
//   XREF to: 00416d09 (COMPUTED_JUMP)
//   XREF to: 00416828 (DATA)
// 00416df9: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: caseD_8
// 00416e00: JNZ 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416e06: MOV ESI,dword ptr [EBX + 0xdc]
// 00416e0c: TEST ESI,ESI
// 00416e0e: JNZ 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416e14: PUSH EAX
// 00416e15: LEA EAX,[EBP + -0x62]
//   XREF to: Stack[-0xec] (DATA)
// 00416e18: PUSH EAX
// 00416e19: PUSH EDI
// 00416e1a: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00416e1f: ADD ESP,0xc
// 00416e22: PUSH EAX
// 00416e23: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x74] (DATA)
// 00416e26: PUSH EAX
// 00416e27: PUSH EBX
// 00416e28: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00416e2d: ADD ESP,0xc
// 00416e30: PUSH ESI
// 00416e31: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x74] (DATA)
// 00416e34: PUSH EAX
// 00416e35: MOV EDI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 00416e3b: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 00416e3c: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00416e41: ADD ESP,0xc
// 00416e44: MOV dword ptr [EBX + 0xbe28],0x1
// 00416e4e: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416e53: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_9
//   XREF to: Stack[0x8] (READ)
// 00416e59: MOV EAX,dword ptr [EBX + 0x154]
// 00416e5f: PUSH EBX
// 00416e60: CALL dword ptr [EAX + 0x158]
// 00416e66: MOV ECX,dword ptr [EBX + 0xbe3c]
// 00416e6c: ADD ESP,0x8
// 00416e6f: TEST ECX,ECX
// 00416e71: JZ 0x00416ee8
//   XREF to: 00416ee8 (CONDITIONAL_JUMP)
// 00416e73: PUSH 0x1
//   Label: LAB_00416e73
// 00416e75: PUSH 0xb
// 00416e77: LEA EAX,[EBX + 0x158]
// 00416e7d: PUSH EAX
// 00416e7e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416e83: ADD ESP,0xc
// 00416e86: MOV EDI,dword ptr [EBX + 0xbf70]
// 00416e8c: PUSH EDI
// 00416e8d: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00416e92: ADD ESP,0x4
// 00416e95: TEST EAX,EAX
// 00416e97: JNZ 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416e9d: MOV EAX,dword ptr [EBX + 0xbf74]
// 00416ea3: PUSH EAX
// 00416ea4: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00416ea9: ADD ESP,0x4
// 00416eac: TEST EAX,EAX
// 00416eae: JNZ 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416eb4: MOV EDX,dword ptr [EBX + 0xbf6c]
// 00416eba: PUSH EDX
// 00416ebb: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00416ec0: ADD ESP,0x4
// 00416ec3: TEST EAX,EAX
// 00416ec5: JNZ 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416ecb: PUSH 0x615888
//   XREF to: 00615888 (DATA)
// 00416ed0: MOV EAX,dword ptr [EBX + 0x154]
// 00416ed6: PUSH EBX
// 00416ed7: CALL dword ptr [EAX + 0x24]
// 00416eda: ADD ESP,0x8
// 00416edd: MOV dword ptr [EBX + 0xbf6c],EAX
// 00416ee3: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416ee8: LEA EAX,[EBX + 0xbebc]
//   Label: LAB_00416ee8
// 00416eee: PUSH EAX
// 00416eef: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00416ef5: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 00416ef6: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00416efb: ADD ESP,0x8
// 00416efe: TEST EAX,EAX
// 00416f00: JNZ 0x00416e73
//   XREF to: 00416e73 (CONDITIONAL_JUMP)
// 00416f06: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416f0b: FLD float ptr [EBX + 0x2414]
//   Label: caseD_b
// 00416f11: FLD1
// 00416f13: FADDP
// 00416f15: FLD float ptr [EBX + 0x24]
// 00416f18: FCOMPP
// 00416f1a: FNSTSW AX
// 00416f1c: SAHF
// 00416f1d: JNC 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416f23: PUSH 0x1
// 00416f25: PUSH 0xc
// 00416f27: PUSH EDI
// 00416f28: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00416f2d: ADD ESP,0xc
// 00416f30: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416f35: LEA EAX,[EBP + 0xffffff02]
//   Label: caseD_3
//   XREF to: Stack[-0x188] (DATA)
// 00416f3b: PUSH EAX
// 00416f3c: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00416f41: ADD ESP,0x4
// 00416f44: PUSH 0x41700000
// 00416f49: PUSH 0x40e00000
// 00416f4e: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00416f53: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00416f56: ADD ESP,0x8
// 00416f59: LEA EAX,[EBP + 0xffffff02]
//   XREF to: Stack[-0x188] (DATA)
// 00416f5f: MOV ESI,dword ptr [0x008227c0]
//   XREF to: 008227c0 (READ)
// 00416f65: PUSH EAX
// 00416f66: LEA EAX,[ESI*0x4 + 0x0]
// 00416f6d: MOV dword ptr [EBP + 0xffffff36],EBX
//   XREF to: Stack[-0x154] (WRITE)
// 00416f73: SUB EAX,ESI
// 00416f75: MOV dword ptr [EBP + 0xffffff3a],EBX
//   XREF to: Stack[-0x150] (WRITE)
// 00416f7b: SHL EAX,0x4
// 00416f7e: LEA ESI,[EBX + 0xfd8]
// 00416f84: ADD EAX,ESI
// 00416f86: PUSH 0x3ecccccd
// 00416f8b: PUSH EAX
// 00416f8c: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00416f91: LEA EAX,[EBP + -0x7a]
//   XREF to: Stack[-0x104] (DATA)
// 00416f94: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00416f97: PUSH EAX
// 00416f98: FSTP float ptr [EBP + 0xffffff06]
//   XREF to: Stack[-0x184] (WRITE)
// 00416f9e: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00416fa3: ADD ESP,0xc
// 00416fa6: PUSH EAX
// 00416fa7: LEA EAX,[EBP + -0x6e]
//   XREF to: Stack[-0xf8] (DATA)
// 00416faa: PUSH EAX
// 00416fab: PUSH EBX
// 00416fac: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00416fb1: ADD ESP,0xc
// 00416fb4: PUSH EAX
// 00416fb5: PUSH EBX
// 00416fb6: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00416fbb: ADD ESP,0x10
// 00416fbe: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 00416fc3: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 00416fc9: MOV EAX,dword ptr [EBX + 0x154]
// 00416fcf: PUSH EBX
// 00416fd0: CALL dword ptr [EAX + 0x158]
// 00416fd6: MOV ESI,dword ptr [EBX + 0xbe3c]
// 00416fdc: ADD ESP,0x8
// 00416fdf: TEST ESI,ESI
// 00416fe1: JNZ 0x0041700c
//   XREF to: 0041700c (CONDITIONAL_JUMP)
// 00416fe3: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00416fe9: PUSH EBX
// 00416fea: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00416fef: ADD ESP,0x8
// 00416ff2: TEST EAX,EAX
// 00416ff4: JZ 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00416ffa: PUSH 0x1
// 00416ffc: PUSH 0x1
// 00416ffe: PUSH EDI
// 00416fff: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417004: ADD ESP,0xc
// 00417007: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 0041700c: PUSH 0x3e800000
//   Label: LAB_0041700c
// 00417011: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00417016: ADD ESP,0x4
// 00417019: TEST EAX,EAX
// 0041701b: JNZ 0x004170ba
//   XREF to: 004170ba (CONDITIONAL_JUMP)
// 00417021: MOV ESI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_00417021
// 00417027: LEA EAX,[EBX + 0x20]
// 0041702a: FLD float ptr [ESI + 0x20]
// 0041702d: FSUB float ptr [EAX]
// 0041702f: FSTP float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (WRITE)
// 00417032: FLD float ptr [ESI + 0x24]
// 00417035: FSUB float ptr [EAX + 0x4]
// 00417038: FST float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (WRITE)
// 0041703b: FMUL float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 0041703e: FLD float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (READ)
// 00417041: FMUL ST0
// 00417043: FLD float ptr [ESI + 0x28]
// 00417046: FSUB float ptr [EAX + 0x8]
// 00417049: FXCH
// 0041704b: FADDP ST2,ST0
// 0041704d: FST float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (WRITE)
// 00417050: FMUL float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 00417053: FADDP
// 00417055: FSQRT
// 00417057: FCOMP float ptr [0x0065a76c]
//   XREF to: 0065a76c (READ)
// 0041705d: FNSTSW AX
// 0041705f: SAHF
// 00417060: JNC 0x004170ac
//   XREF to: 004170ac (CONDITIONAL_JUMP)
// 00417062: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 00417065: PUSH EAX
// 00417066: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x80] (DATA)
// 00417069: PUSH EAX
// 0041706a: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0041706f: FLD float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 00417072: ADD ESP,0x8
// 00417075: FSUB float ptr [EBX + 0x34]
// 00417078: SUB ESP,0x4
// 0041707b: FSTP float ptr [ESP]
// 0041707e: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00417083: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00417086: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00417089: FABS
// 0041708b: ADD ESP,0x4
// 0041708e: FCOMP double ptr [0x006158d5]
//   XREF to: 006158d5 (READ)
// 00417094: FNSTSW AX
// 00417096: SAHF
// 00417097: JNC 0x004170ac
//   XREF to: 004170ac (CONDITIONAL_JUMP)
// 00417099: PUSH 0x1
// 0041709b: PUSH 0x3
// 0041709d: LEA EAX,[EBX + 0x158]
// 004170a3: PUSH EAX
// 004170a4: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004170a9: ADD ESP,0xc
// 004170ac: PUSH EBX
//   Label: LAB_004170ac
// 004170ad: CALL core_batman.cpp_FUN_004167f0
//   XREF to: 004167f0 (UNCONDITIONAL_CALL)
// 004170b2: ADD ESP,0x4
// 004170b5: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 004170ba: PUSH 0x615899
//   Label: LAB_004170ba
//   XREF to: 00615899 (DATA)
// 004170bf: MOV EDI,dword ptr [EBX + 0xbe3c]
// 004170c5: PUSH EDI
// 004170c6: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004170cb: ADD ESP,0x8
// 004170ce: TEST EAX,EAX
// 004170d0: JZ 0x00417021
//   XREF to: 00417021 (CONDITIONAL_JUMP)
// 004170d6: XOR EDI,EDI
// 004170d8: XOR ESI,ESI
// 004170da: MOV EAX,[0x006810c8]
//   Label: LAB_004170da
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004170df: CMP ESI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 004170e5: JGE 0x00417111
//   XREF to: 00417111 (CONDITIONAL_JUMP)
// 004170e7: MOV EDX,dword ptr [0x00822820]
//   XREF to: 00822820 (READ)
// 004170ed: PUSH EDX
// 004170ee: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
//   XREF to: 0326525c (READ)
// 004170f5: PUSH ECX
// 004170f6: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004170fb: ADD ESP,0x8
// 004170fe: TEST EAX,EAX
// 00417100: JNZ 0x00417108
//   XREF to: 00417108 (CONDITIONAL_JUMP)
// 00417102: INC ESI
//   Label: LAB_00417102
// 00417103: ADD EDI,0x4
// 00417106: JMP 0x004170da
//   XREF to: 004170da (UNCONDITIONAL_JUMP)
// 00417108: CMP dword ptr [EAX + 0xbf58],0x0
//   Label: LAB_00417108
// 0041710f: JZ 0x00417102
//   XREF to: 00417102 (CONDITIONAL_JUMP)
// 00417111: MOV EAX,[0x006810c8]
//   Label: LAB_00417111
//   XREF to: 006810c8 (READ)
// 00417116: CMP ESI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 0041711c: JNZ 0x00417021
//   XREF to: 00417021 (CONDITIONAL_JUMP)
// 00417122: PUSH 0x1
// 00417124: PUSH 0xd
// 00417126: LEA EAX,[EBX + 0x158]
// 0041712c: PUSH EAX
// 0041712d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417132: ADD ESP,0xc
// 00417135: MOV ESI,dword ptr [EBX + 0xbe3c]
// 0041713b: LEA EAX,[EBX + 0xbf60]
// 00417141: ADD ESI,0x20
// 00417144: MOV dword ptr [EBX + 0xbf58],0x1
// 0041714e: CMP EAX,ESI
// 00417150: JZ 0x00417162
//   XREF to: 00417162 (CONDITIONAL_JUMP)
// 00417152: MOV EDX,dword ptr [ESI]
// 00417154: MOV dword ptr [EAX],EDX
// 00417156: MOV EDX,dword ptr [ESI + 0x4]
// 00417159: MOV dword ptr [EAX + 0x4],EDX
// 0041715c: MOV EDX,dword ptr [ESI + 0x8]
// 0041715f: MOV dword ptr [EAX + 0x8],EDX
// 00417162: PUSH 0x61589f
//   Label: LAB_00417162
//   XREF to: 0061589f (DATA)
// 00417167: MOV ESI,0xd
// 0041716c: MOV EAX,dword ptr [EBX + 0x154]
// 00417172: PUSH EBX
// 00417173: MOV dword ptr [EBX + 0xbf5c],0x0
// 0041717d: MOV dword ptr [EBP + 0x62],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00417180: CALL dword ptr [EAX + 0x24]
// 00417183: ADD ESP,0x8
// 00417186: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 0041718b: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 00417191: MOV EAX,dword ptr [EBX + 0x154]
// 00417197: PUSH EBX
// 00417198: CALL dword ptr [EAX + 0x158]
// 0041719e: ADD ESP,0x8
// 004171a1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004171a7: LEA EDI,[EBX + 0x158]
// 004171ad: TEST EAX,EAX
// 004171af: JNZ 0x004171e7
//   XREF to: 004171e7 (CONDITIONAL_JUMP)
// 004171b1: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004171b7: PUSH EBX
// 004171b8: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004171bd: ADD ESP,0x8
// 004171c0: TEST EAX,EAX
// 004171c2: JZ 0x004171d6
//   XREF to: 004171d6 (CONDITIONAL_JUMP)
// 004171c4: PUSH 0x1
// 004171c6: PUSH 0x1
// 004171c8: PUSH EDI
// 004171c9: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004171ce: ADD ESP,0xc
// 004171d1: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 004171d6: PUSH 0x1
//   Label: LAB_004171d6
// 004171d8: PUSH EAX
// 004171d9: PUSH EDI
// 004171da: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004171df: ADD ESP,0xc
// 004171e2: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 004171e7: MOV EAX,[0x0065a76c]
//   Label: LAB_004171e7
//   XREF to: 0065a76c (READ)
// 004171ec: PUSH 0x3e32b8c2
// 004171f1: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004171f4: LEA EAX,[EBX + 0x23ac]
// 004171fa: PUSH 0x3f000000
// 004171ff: MOV dword ptr [EAX + 0x8],0x0
// 00417206: XOR EDX,EDX
// 00417208: MOV ECX,dword ptr [EAX + 0x8]
// 0041720b: MOV dword ptr [EAX + 0x4],ECX
// 0041720e: MOV ECX,dword ptr [EAX + 0x4]
// 00417211: MOV dword ptr [EAX],ECX
// 00417213: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 00417216: MOV dword ptr [EBP + 0xffffff7a],EDX
//   XREF to: Stack[-0x110] (WRITE)
// 0041721c: MOV dword ptr [EBP + -0x7e],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 0041721f: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x110] (DATA)
// 00417225: MOV dword ptr [EBP + 0xffffff7e],EDX
//   XREF to: Stack[-0x10c] (WRITE)
// 0041722b: PUSH EAX
// 0041722c: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00417232: PUSH EAX
// 00417233: MOV ESI,dword ptr [EAX + 0x154]
// 00417239: CALL dword ptr [ESI + 0xbc]
// 0041723f: ADD ESP,0x4
// 00417242: PUSH EAX
// 00417243: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00417249: ADD EAX,0x20
// 0041724c: PUSH EAX
// 0041724d: PUSH EBX
// 0041724e: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00417253: ADD ESP,0x18
// 00417256: TEST EAX,EAX
// 00417258: JL 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 0041725e: LEA ESI,[EBX + 0x20]
// 00417261: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00417267: FLD float ptr [ESI]
// 00417269: FSUB float ptr [EAX + 0x20]
// 0041726c: FSTP float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (WRITE)
// 0041726f: FLD float ptr [ESI + 0x4]
// 00417272: FSUB float ptr [EAX + 0x24]
// 00417275: FLD float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (READ)
// 00417278: FXCH
// 0041727a: FSTP float ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (WRITE)
// 0041727d: FLD float ptr [ESI + 0x8]
// 00417280: FSUB float ptr [EAX + 0x28]
// 00417283: FXCH
// 00417285: FMUL float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (READ)
// 00417288: FXCH
// 0041728a: FST float ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (WRITE)
// 0041728d: FMUL float ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 00417290: XOR EAX,EAX
// 00417292: FADDP
// 00417294: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00417297: FSQRT
// 00417299: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 0041729c: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 0041729f: FLD float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 004172a2: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004172a5: FCOMP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 004172a8: FNSTSW AX
// 004172aa: SAHF
// 004172ab: JA 0x00417345
//   XREF to: 00417345 (CONDITIONAL_JUMP)
// 004172b1: FLD float ptr [EBX + 0xbe38]
// 004172b7: FLDZ
// 004172b9: FCOMPP
// 004172bb: FNSTSW AX
// 004172bd: SAHF
// 004172be: JC 0x00417345
//   XREF to: 00417345 (CONDITIONAL_JUMP)
// 004172c4: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004172ca: FLD float ptr [EAX + 0x20]
// 004172cd: FSUB float ptr [ESI]
// 004172cf: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 004172d2: FLD float ptr [EAX + 0x24]
// 004172d5: FSUB float ptr [ESI + 0x4]
// 004172d8: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 004172db: FLD float ptr [EAX + 0x28]
// 004172de: LEA EAX,[EBP + 0x2e]
//   XREF to: Stack[-0x5c] (DATA)
// 004172e1: PUSH EAX
// 004172e2: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x98] (DATA)
// 004172e5: FSUB float ptr [ESI + 0x8]
// 004172e8: PUSH EAX
// 004172e9: FSTP float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 004172ec: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004172f1: FLD float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (READ)
// 004172f4: ADD ESP,0x8
// 004172f7: FSUB float ptr [EBX + 0x34]
// 004172fa: SUB ESP,0x4
// 004172fd: FSTP float ptr [ESP]
// 00417300: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00417305: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00417308: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0041730b: FABS
// 0041730d: ADD ESP,0x4
// 00417310: FCOMP double ptr [0x006158d5]
//   XREF to: 006158d5 (READ)
// 00417316: FNSTSW AX
// 00417318: SAHF
// 00417319: JNC 0x00417345
//   XREF to: 00417345 (CONDITIONAL_JUMP)
// 0041731b: PUSH 0x1
// 0041731d: PUSH 0x3
// 0041731f: PUSH EDI
// 00417320: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417325: ADD ESP,0xc
// 00417328: MOV EDX,dword ptr [EBX + 0xbf70]
// 0041732e: PUSH EDX
// 0041732f: MOV dword ptr [EBX + 0xbe38],0x3f800000
// 00417339: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0041733e: ADD ESP,0x4
// 00417341: TEST EAX,EAX
// 00417343: JZ 0x0041736f
//   XREF to: 0041736f (CONDITIONAL_JUMP)
// 00417345: FLD float ptr [EBP + 0x56]
//   Label: LAB_00417345
//   XREF to: Stack[-0x34] (READ)
// 00417348: FCOMP float ptr [EBX + 0xbe34]
// 0041734e: FNSTSW AX
// 00417350: SAHF
// 00417351: JBE 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 00417357: PUSH 0x1
// 00417359: PUSH 0x0
// 0041735b: LEA EAX,[EBX + 0x158]
// 00417361: PUSH EAX
// 00417362: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00417367: ADD ESP,0xc
// 0041736a: JMP 0x00416970
//   XREF to: 00416970 (UNCONDITIONAL_JUMP)
// 0041736f: MOV ECX,dword ptr [EBX + 0xbf74]
//   Label: LAB_0041736f
// 00417375: PUSH ECX
// 00417376: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0041737b: ADD ESP,0x4
// 0041737e: TEST EAX,EAX
// 00417380: JNZ 0x00417345
//   XREF to: 00417345 (CONDITIONAL_JUMP)
// 00417382: PUSH 0x6158b4
//   XREF to: 006158b4 (DATA)
// 00417387: MOV EAX,dword ptr [EBX + 0x154]
// 0041738d: PUSH EBX
// 0041738e: CALL dword ptr [EAX + 0x24]
// 00417391: ADD ESP,0x8
// 00417394: MOV dword ptr [EBX + 0xbf74],EAX
// 0041739a: JMP 0x00417345
//   XREF to: 00417345 (UNCONDITIONAL_JUMP)
// 0041739c: CMP ESI,0xd
//   Label: LAB_0041739c
// 0041739f: JA 0x00416970
//   XREF to: 00416970 (CONDITIONAL_JUMP)
// 004173a5: JMP dword ptr [ESI*0x4 + 0x416838]
//   Label: switchD
//   XREF to: 00416fc3 (COMPUTED_JUMP)
//   XREF to: 0041718b (COMPUTED_JUMP)
//   XREF to: 00416f35 (COMPUTED_JUMP)
//   XREF to: 00416970 (COMPUTED_JUMP)
//   XREF to: 00416df9 (COMPUTED_JUMP)
//   XREF to: 00416e53 (COMPUTED_JUMP)
//   XREF to: 00416f0b (COMPUTED_JUMP)
//   XREF to: 00416de3 (COMPUTED_JUMP)
//   XREF to: 00416838 (DATA)
