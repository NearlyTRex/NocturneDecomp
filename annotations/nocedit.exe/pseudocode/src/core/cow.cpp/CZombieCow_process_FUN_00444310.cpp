// Name: core_cow.cpp_CZombieCow_process_FUN_00444310
// Address: 00444310
// Address Range: [[00444310, 00444833]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_process_FUN_00444310(CZombieCow *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_process_FUN_00444310(CZombieCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  float fVar2;
  CCharacter *this_ptr_01;
  CDemonActor *this_ptr_02;
  int iVar3;
  SMotion *pSVar4;
  int iVar5;
  CZombieCow *pCVar6;
  uint uVar7;
  CVector3f *pCVar8;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar9;
  int extraout_EAX_01;
  CPathMap *path_map;
  float fVar10;
  float fVar11;
  CDemonActor *in_stack_ffffff40;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_1c = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < local_1c) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&this_ptr_00->motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
  }
  fVar2 = (this_ptr->base).speed;
  fVar10 = (float)3.1415926535000001;
  fVar11 = (float)0.25;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10 * fVar2 * fVar11;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar3 = pSVar4->state_index;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(iVar3) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        if ((this_ptr->base).victim != (CDemonActor *)0x0) {
          core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                    (g_CSoundPtr,*(uint *)(this_ptr->unk + 8));
          if (extraout_EAX_00 == 0) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"cow?.wav");
            *(uint *)(this_ptr->unk + 8) = uVar9;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,1,1);
      }
      break;
    case 1:
      fVar11 = delta_time;
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      fVar2 = 4.5f;
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_01 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
      }
      else {
        local_18 = 4.5f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_54 = 0;
        local_50 = 0;
        fVar10 = 0.17453292;
        local_4c = fVar2;
        pCVar8 = (CVector3f *)0x3f000000;
        this_ptr_02 = (this_ptr->base).victim;
        path_map = (*((this_ptr_02->vtable)._ub)->getPathMap)(this_ptr_02);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                           path_map,pCVar8,fVar10,fVar11);
        if (iVar3 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
        else if ((0 < iVar3) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,2,1);
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = ' ';
          (this_ptr->base).unk2[3] = '@';
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff40);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_3c,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices
                          [*(int *)(this_ptr->unk + 4)].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_30,pCVar8);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_78,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_84,pCVar8);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_0044482d_caseD_3;
  }
  uVar7 = (this_ptr->base).base.is_walking;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_004443e0:
      iVar3 = 1;
    }
    else {
LAB_004445a0:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar3,1);
  }
  else {
    if (uVar7 < 3) goto LAB_004443e0;
    if (uVar7 != 3) goto LAB_004445a0;
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
switchD_0044482d_caseD_3:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    this_ptr_01 = (CCharacter *)(this_ptr->base).victim;
    if ((this_ptr_01 != (CCharacter *)0x0) &&
       (pCVar6 = (CZombieCow *)(*(((this_ptr_01->base).vtable._uc)->_uc).getGrabber)(this_ptr_01),
       pCVar6 == this_ptr)) {
      in_stack_ffffff40 = (this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_ffffff40);
    }
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_48 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_44 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar8 = &(this_ptr->base).base.field6_0x241c;
    local_40 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_60 = local_48 + pCVar8->x;
    local_5c = local_44 + (this_ptr->base).base.field6_0x241c.y;
    local_58 = local_40 + (this_ptr->base).base.field6_0x241c.z;
    local_6c.x = local_60 + pCVar1->x;
    local_6c.y = local_5c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_6c.z = local_58 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar8->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar2 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar2;
    pCVar1->x = fVar2;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_6c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_ffffff40);
  return;
}
