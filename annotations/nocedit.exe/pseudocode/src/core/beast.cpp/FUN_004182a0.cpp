// Name: core_beast.cpp_FUN_004182a0
// Address: 004182a0
// Address Range: [[004182a0, 00418325]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_004182a0()

#include "nocturne.h"

/* Signature: byte actors_enemy_beast.cpp_FUN_004182a0(uint param_1, uint param_2)
    */

void core_beast_cpp_FUN_004182a0(void)

{
  float fVar1;
  int iVar2;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  iVar2 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar2 != 0) {
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.y;
    fVar1 = *(float *)in_stack_00000004[1].base_actor.actor_name;
    while (0.0 < in_stack_00000008 * fVar1) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                (&(in_stack_00000004->model).motion_controller);
    }
    core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&in_stack_00000004->model);
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  }
  return;
}
