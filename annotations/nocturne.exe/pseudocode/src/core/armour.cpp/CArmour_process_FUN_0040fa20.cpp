// Name: core_armour.cpp_CArmour_process_FUN_0040fa20
// Address: 0040fa20
// Address Range: [[0040fa20, 0040fb5e]]
// Convention: unknown
// Signature: void core_armour_cpp_CArmour_process_FUN_0040fa20(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_armour_cpp_CArmour_process_FUN_0040fa20(CCharacter *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_20;
  CVector3f CStack_1c;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 != 0) {
    (param_1->model).accumulated_root_motion.z = 0.0;
    (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
    (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
    local_20 = param_2 * *(float *)param_1[1].base.actor_name;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0
                (&(param_1->model).motion_controller,&local_20);
    }
    fVar1 = *(float *)param_1[1].base.actor_name;
    fVar2 = (float)3.1415926535000001;
    param_1->walk_step_speed = (param_1->model).accumulated_root_motion.z;
    param_1->turn_speed = param_2 * fVar2 * fVar1;
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
              (&(param_1->model).motion_controller);
    iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
    if (iVar3 != 0) {
      (param_1->model).accumulated_root_motion.z = 0.0;
      (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
      (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&param_1->model);
    core_charactr_cpp_FUN_0042a150(param_1,param_2);
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1[1].base.create_event + 0x20);
    if (iVar3 != 0) {
      (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"armour.wav");
      CStack_1c.x = 0.0;
      CStack_1c.y = 0.0;
      CStack_1c.z = 5.0;
      core_charactr_cpp_CCharacter_dismember_FUN_00427b60(param_1,&CStack_1c,-1.0,1);
      return;
    }
  }
  return;
}
