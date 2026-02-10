// Name: core_drone.cpp_CDrone_process_FUN_0048ec70
// Address: 0048ec70
// Address Range: [[0048ec70, 0048f2ea]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_process_FUN_0048ec70(CDrone *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_drone_cpp_CDrone_process_FUN_0048ec70(CDrone *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  float fVar2;
  CCharacter *this_ptr_01;
  CDemonActor *this_ptr_02;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CDrone *pCVar7;
  uint uVar8;
  CVector3f *pCVar9;
  int extraout_EAX;
  int extraout_EAX_00;
  CPathMap *path_map;
  uint uVar10;
  float fVar11;
  float fVar12;
  CDemonActor *in_stack_ffffff24;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x10));
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_20 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < local_20) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar8);
  }
  fVar2 = (this_ptr->base).speed;
  fVar3 = (float)3.1415926535000001;
  fVar11 = (float)0.5;
  fVar12 = (float)2;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).base.model.accumulated_root_motion.z * fVar12;
  (this_ptr->base).base.turn_speed = delta_time * fVar3 * fVar2 * fVar11 * fVar12;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar4 = pSVar5->state_index;
  local_1c = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        if ((this_ptr->base).victim != (CDemonActor *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,1,1);
      }
      break;
    case 1:
      fVar12 = delta_time;
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar2 = 3.0f;
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
      }
      else {
        fVar11 = 0.17453292;
        local_18 = 3.0f;
        pCVar9 = (CVector3f *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_64 = 0;
        local_5c = fVar2;
        local_60 = 0;
        this_ptr_02 = (this_ptr->base).victim;
        path_map = (*((this_ptr_02->vtable)._ub)->getPathMap)(this_ptr_02);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                           path_map,pCVar9,fVar11,fVar12);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
        else if ((0 < iVar4) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,2,1);
          uVar8 = *(uint *)(this_ptr->unk + 0x14);
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = -0x80;
          (this_ptr->base).unk2[3] = '?';
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar8);
          if (iVar4 == 0) {
            uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"drone-attack?.wav");
            *(uint *)(this_ptr->unk + 0x14) = uVar10;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff24);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_88,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [*(int *)(this_ptr->unk + 4)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_58,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_4c,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [*(int *)(this_ptr->unk + 8)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_34,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_94,pCVar9);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if ((this_ptr->base).base.field3_0x2410 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,10,1);
      }
    }
    goto switchD_0048f284_caseD_3;
  }
  uVar8 = (this_ptr->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_0048ed51:
      iVar4 = 1;
    }
    else {
LAB_0048ef7a:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
  else {
    if (uVar8 < 3) goto LAB_0048ed51;
    if (uVar8 != 3) goto LAB_0048ef7a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0048f284_caseD_3:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  if ((local_1c == 1) &&
     (iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,50.0), iVar4 != 0))
  {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x10));
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      iVar4 = 2;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar4);
      uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,"slime.wav");
      *(uint *)(this_ptr->unk + 0x10) = uVar10;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x10));
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    this_ptr_01 = (CCharacter *)(this_ptr->base).victim;
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (pCVar7 = (CDrone *)(*(((this_ptr_01->base).vtable._uc)->_uc).getGrabber)(this_ptr_01),
       pCVar7 == this_ptr)) {
      in_stack_ffffff24 = (this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_ffffff24);
    }
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_7c = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_78 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar9 = &(this_ptr->base).base.field6_0x241c;
    local_74 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_70 = local_7c + pCVar9->x;
    local_6c = local_78 + (this_ptr->base).base.field6_0x241c.y;
    local_68 = local_74 + (this_ptr->base).base.field6_0x241c.z;
    local_40.x = local_70 + pCVar1->x;
    local_40.y = local_6c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_40.z = local_68 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar9->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar2 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar2;
    pCVar1->x = fVar2;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_40);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_ffffff24);
  return;
}
