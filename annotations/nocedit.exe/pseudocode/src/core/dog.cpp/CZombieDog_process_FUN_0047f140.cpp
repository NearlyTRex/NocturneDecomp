// Name: core_dog.cpp_CZombieDog_process_FUN_0047f140
// Address: 0047f140
// Address Range: [[0047f140, 0047f7a9]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *this_ptr_00;
  CDemonActor *pCVar3;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CZombieDog *pCVar8;
  uint uVar9;
  int extraout_EAX;
  uint uVar10;
  CVector3f *pCVar11;
  int extraout_EAX_00;
  int extraout_EAX_01;
  CPathMap *path_map;
  int extraout_EAX_02;
  float fVar12;
  float in_stack_ffffff28;
  CDemonActor *in_stack_ffffff2c;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_20 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_20) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar9);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  fVar12 = (this_ptr->base).speed;
  fVar4 = (float)3.1415926535000001;
  iVar5 = pSVar6->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar4 * fVar12;
  if (iVar5 == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)2;
  }
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      pCVar1 = &(this_ptr->base).base.model;
      if (extraout_EAX_00 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CDemonActor *)0x0) {
          local_74 = (pCVar3->location).position.x - (this_ptr->base).base.base.location.position.x;
          local_70 = (pCVar3->location).position.y - (this_ptr->base).base.base.location.position.y;
          local_6c = (pCVar3->location).position.z - (this_ptr->base).base.base.location.position.z;
          local_24 = local_6c * local_6c + local_74 * local_74 + local_70 * local_70;
          local_18 = (float)(((int)local_24 >> 1) + INT_02d7a7b8);
          if (local_18 < 8.0f) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,iVar5,1);
          core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                    (g_CSoundPtr,*(uint *)(this_ptr->field1_0xbebc + 8));
          if (extraout_EAX_01 == 0) {
            uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"dog5.wav");
            *(uint *)(this_ptr->field1_0xbebc + 8) = uVar10;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar3 == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_02 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        local_5c = (this_ptr->base).base.base.location.position.x - (pCVar3->location).position.x;
        local_58 = (this_ptr->base).base.base.location.position.y - (pCVar3->location).position.y;
        local_54 = (this_ptr->base).base.base.location.position.z - (pCVar3->location).position.z;
        if ((8.0f < SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58))
           && (iVar5 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,2,1);
        }
        fVar12 = 0.17453292;
        local_1c = 3.0f;
        pCVar11 = (CVector3f *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        pCVar3 = (this_ptr->base).victim;
        path_map = (*((pCVar3->vtable)._ub)->getPathMap)(pCVar3);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                           path_map,pCVar11,fVar12,in_stack_ffffff28);
        pCVar1 = &(this_ptr->base).base.model;
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else if ((0 < iVar5) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
          if ((float)0.5 < local_14) {
            fVar12 = 4.2039e-45;
          }
          else {
            fVar12 = 5.60519e-45;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,(int)fVar12,1);
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = ' ';
          (this_ptr->base).unk2[3] = '@';
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff20);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar11 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_98,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [*(int *)(this_ptr->field1_0xbebc + 4)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_8c,pCVar11);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                (g_CSoundPtr,*(uint *)(this_ptr->field1_0xbebc + 8));
      if (extraout_EAX == 0) {
        uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"dog5.wav");
        *(uint *)(this_ptr->field1_0xbebc + 8) = uVar10;
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (&(this_ptr->base).base.model,&local_50,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_44,pCVar11);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_0047f7a3_caseD_5;
  }
  uVar9 = (this_ptr->base).base.is_walking;
  if (uVar9 < 2) {
    if (uVar9 == 1) {
LAB_0047f227:
      iVar5 = 1;
    }
    else {
LAB_0047f3ed:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar9 < 3) goto LAB_0047f227;
    if (uVar9 != 3) goto LAB_0047f3ed;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0047f7a3_caseD_5:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    this_ptr_00 = (CCharacter *)(this_ptr->base).victim;
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (pCVar8 = (CZombieDog *)(*(((this_ptr_00->base).vtable._uc)->_uc).getGrabber)(this_ptr_00),
       pCVar8 == this_ptr)) {
      in_stack_ffffff2c = (this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_ffffff2c);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_68 = (this_ptr->base).base.velocity.x * delta_time;
    local_64 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar11 = &(this_ptr->base).base.position_delta;
    local_60 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_38 = local_68 + pCVar11->x;
    local_34 = local_64 + (this_ptr->base).base.position_delta.y;
    local_30 = local_60 + (this_ptr->base).base.position_delta.z;
    local_80.x = local_38 + pCVar2->x;
    local_80.y = local_34 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_80.z = local_30 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar11->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar12 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar12;
    pCVar2->x = fVar12;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_80);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_ffffff2c);
  return;
}
