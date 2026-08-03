// Name: core_biggs.cpp_CBiggs_process_FUN_004154b0
// Address: 004154b0
// Address Range: [[004154b0, 0041575d]]
// Convention: unknown
// Signature: void core_biggs_cpp_CBiggs_process_FUN_004154b0(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_biggs_cpp_CBiggs_process_FUN_004154b0(CCharacter *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  (param_1->model).accumulated_root_motion.z = 0.0;
  (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
  (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
  local_40 = param_2 * *(float *)param_1[1].base.actor_name;
  this_ptr = &param_1->model;
  while (0.0 < local_40) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr->motion_controller,&local_40);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar5);
  }
  fVar2 = *(float *)param_1[1].base.actor_name;
  fVar4 = (float)3.1415926535000001;
  param_1->walk_step_speed = (param_1->model).accumulated_root_motion.z;
  param_1->turn_speed = param_2 * fVar4 * fVar2;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&this_ptr->motion_controller);
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) goto LAB_0041558b;
  uVar3 = param_1->is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_00415560:
      iVar5 = 1;
    }
    else {
LAB_00415744:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->model).motion_controller,iVar5,1);
  }
  else {
    if (uVar3 < 3) goto LAB_00415560;
    if (uVar3 != 3) goto LAB_00415744;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,0,1)
    ;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->model).accumulated_root_motion.z = 0.0;
  (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
  (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
LAB_0041558b:
  if (0.0 < *(float *)(param_1[1].base.actor_name + 0x14)) {
    *(float *)(param_1[1].base.actor_name + 0x14) =
         *(float *)(param_1[1].base.actor_name + 0x14) - param_2;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar5 != 0) {
    (param_1->velocity).y = (param_1->velocity).y - param_2 * (float)32;
    local_3c = (param_1->velocity).x * param_2;
    local_38 = (param_1->velocity).y * param_2;
    local_34 = param_2 * (param_1->velocity).z;
    pCVar1 = &(param_1->model).accumulated_root_motion;
    local_24 = local_3c + (param_1->position_delta).x;
    local_20 = local_38 + (param_1->position_delta).y;
    local_1c = local_34 + (param_1->position_delta).z;
    local_30.x = local_24 + pCVar1->x;
    local_30.y = local_20 + (param_1->model).accumulated_root_motion.y;
    local_30.z = local_1c + (param_1->model).accumulated_root_motion.z;
    (param_1->position_delta).z = 0.0;
    (param_1->position_delta).y = (param_1->position_delta).z;
    (param_1->position_delta).x = (param_1->position_delta).y;
    (param_1->model).accumulated_root_motion.z = 0.0;
    (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
    pCVar1->x = (param_1->model).accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_30);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&param_1->model);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,(char *)(param_1[1].model.bone_transform.bone_scales + 2));
  if (iVar5 != 0) {
    param_1[1].model.transformed_vertices[9].y = 0.0;
    param_1[1].model.transformed_vertices[9].x = 1.4013e-45;
  }
  if ((param_1[1].model.transformed_vertices[9].x != 0.0) &&
     (param_2 = param_1[1].model.transformed_vertices[9].y + param_2,
     param_1[1].model.transformed_vertices[9].y = param_2, 4.0f < param_2)) {
    param_1[1].model.transformed_vertices[9].y = 4.0f;
    return;
  }
  return;
}
