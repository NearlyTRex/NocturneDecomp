// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004f6f20
// Address: 004f6f20
// Address Range: [[004f6f20, 004f765a]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  float fVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CVector3f *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar11;
  SDamageInfo local_10c;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  uint local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_2c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar3 = (this_ptr->base).speed;
  fVar6 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar6 * fVar3;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar7 = pSVar8->state_index;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    uVar4 = (this_ptr->base).base.field22_0x25b0;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
LAB_004f6fec:
        iVar7 = 1;
      }
      else {
LAB_004f7178:
        iVar7 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar7,1);
    }
    else {
      if (uVar4 < 3) goto LAB_004f6fec;
      if (uVar4 != 3) goto LAB_004f7178;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto switchD_004f7654_caseD_e;
  }
  switch(iVar7) {
  case 0:
  case 6:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
    pCVar5 = (this_ptr->base).victim;
    if (pCVar5 != (CDemonActor *)0x0) {
      local_c4.x = (pCVar5->location).position.x - (this_ptr->base).base.base.location.position.x;
      local_c4.y = (pCVar5->location).position.y - (this_ptr->base).base.base.location.position.y;
      local_c4.z = (pCVar5->location).position.z - (this_ptr->base).base.base.location.position.z;
      local_28 = SQRT(local_c4.z * local_c4.z + local_c4.x * local_c4.x + local_c4.y * local_c4.y);
      local_24 = local_28;
      if (local_28 < 2.0f) {
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_40,&local_c4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_40.y - (this_ptr->base).base.base.orient.bank);
        if (ABS(local_14) < (float)0.52359877558333301) {
          if (iVar7 == 0) {
            iVar7 = 2;
          }
          else {
            iVar7 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,iVar7,1);
          iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->field1_0xbebc);
          if (iVar7 == 0) {
            uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
            *(uint *)this_ptr->field1_0xbebc = uVar11;
          }
        }
      }
      if (local_24 < (this_ptr->base).guard_distance) {
        pCVar1 = &(this_ptr->base).base.model;
        if (10.0f <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,7,1);
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = '\0';
          (this_ptr->base).unk2[3] = '\0';
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = '\0';
          (this_ptr->base).unk2[3] = '\0';
        }
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
    if (extraout_EAX == 0) break;
    goto LAB_004f73d5;
  case 1:
  case 7:
  case 0xf:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
    fVar3 = 2.0f;
    pCVar1 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CDemonActor *)0x0) {
      local_1c = 2.0f;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      local_64 = 0;
      local_5c = fVar3;
      local_60 = 0;
      pCVar5 = (this_ptr->base).victim;
      (*((pCVar5->vtable)._ub)->getPathMap)(pCVar5);
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if (-1 < iVar9) {
        pCVar5 = (this_ptr->base).victim;
        local_94 = (this_ptr->base).base.base.location.position.x - (pCVar5->location).position.x;
        local_8c = (this_ptr->base).base.base.location.position.z - (pCVar5->location).position.z;
        local_90 = 0;
        local_20 = SQRT(local_8c * local_8c + local_94 * local_94);
        local_18 = local_20;
        if ((10.0f < local_20) && (iVar7 != 7)) {
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = '\0';
          (this_ptr->base).unk2[3] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,7,1);
        }
        if ((local_20 <= local_1c) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
          pCVar5 = (this_ptr->base).victim;
          local_70.x = (pCVar5->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_70.y = (pCVar5->location).position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_70.z = (pCVar5->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_88,&local_70);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_88.y - (this_ptr->base).base.base.orient.bank);
          if (ABS(local_14) < (float)0.52359877558333301) {
            if (iVar7 == 7) {
              iVar9 = 8;
            }
            else {
              iVar9 = 2;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,iVar9,1);
            iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->field1_0xbebc);
            if (iVar9 == 0) {
              uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
              *(uint *)this_ptr->field1_0xbebc = uVar11;
            }
            (this_ptr->base).unk2[0] = '\0';
            (this_ptr->base).unk2[1] = '\0';
            (this_ptr->base).unk2[2] = '\0';
            (this_ptr->base).unk2[3] = '@';
          }
        }
        if ((this_ptr->base).guard_distance < local_20) {
          pCVar1 = &(this_ptr->base).base.model;
          if (iVar7 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,6,1);
            (this_ptr->base).unk2[0] = '\0';
            (this_ptr->base).unk2[1] = '\0';
            (this_ptr->base).unk2[2] = '\0';
            (this_ptr->base).unk2[3] = '\0';
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
            (this_ptr->base).unk2[0] = '\0';
            (this_ptr->base).unk2[1] = '\0';
            (this_ptr->base).unk2[2] = '\0';
            (this_ptr->base).unk2[3] = '\0';
          }
        }
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
    if (extraout_EAX_00 == 0) {
      if (iVar7 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,6,1);
      }
      break;
    }
LAB_004f73d5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,1,1);
    break;
  case 2:
  case 8:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_10c);
    local_10c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_10c.attacker = (CDemonActor *)this_ptr;
    local_10c.wielder = (CDemonActor *)this_ptr;
    local_14 = local_10c.damage_amount;
    pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_4c,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices
                         [INT_02db88d0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_d0,pCVar10);
    core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    break;
  case 5:
  case 0xb:
    if (((this_ptr->base).pool_me == 0) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (&(this_ptr->base).base.model,&local_ac,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_b8,pCVar10);
      core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
      (this_ptr->base).pool_me = 1;
    }
  }
switchD_004f7654_caseD_e:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_58 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_54 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar10 = &(this_ptr->base).base.field6_0x241c;
    local_50 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_7c = local_58 + pCVar10->x;
    local_78 = local_54 + (this_ptr->base).base.field6_0x241c.y;
    local_74 = local_50 + (this_ptr->base).base.field6_0x241c.z;
    local_a0 = local_7c + pCVar2->x;
    local_9c = local_78 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_98 = local_74 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar10->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar3;
    pCVar2->x = fVar3;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
