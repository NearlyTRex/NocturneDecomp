// Name: core_passngr.cpp_FUN_00545ef0
// Address: 00545ef0
// Address Range: [[00545ef0, 005460b6]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_00545ef0()

#include "nocturne.h"

/* Signature: byte actors_npc_passenger.cpp_FUN_00545ef0(uint param_1, uint
   param_2) */

void core_passngr_cpp_FUN_00545ef0(void)

{
  CLocation *pCVar1;
  int iVar2;
  float fVar3;
  CDemonMission *this_ptr;
  SMotion *pSVar4;
  int iVar5;
  CVector3f *pCVar6;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_1c;
  
  if (1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5d60)) {
    return;
  }
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(in_stack_00000004->model).motion_controller);
  iVar2 = pSVar4->state_index;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if ((iVar2 == 2) &&
       ((fVar3 = in_stack_00000008 / 2.0f +
                 *(float *)(in_stack_00000004[2].cloth_data + 0x5d60),
        *(float *)(in_stack_00000004[2].cloth_data + 0x5d60) = fVar3, 1.0 <= fVar3 &&
        (*(int *)(in_stack_00000004[2].cloth_data + 0x5130) != 0)))) {
      core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
      this_ptr = g_CDemonMissionPtr;
      in_stack_00000004[2].cloth_data[0x5130] = '\0';
      in_stack_00000004[2].cloth_data[0x5131] = '\0';
      in_stack_00000004[2].cloth_data[0x5132] = '\0';
      in_stack_00000004[2].cloth_data[0x5133] = '\0';
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(this_ptr);
    }
  }
  else {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x5028);
    if (iVar5 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,1,1);
      if (in_stack_00000004[2].cloth_data[0x50cc] != '\0') {
        (*((in_stack_00000004->base).vtable._ub)->playSound)
                  (&in_stack_00000004->base,in_stack_00000004[2].cloth_data + 0x50cc);
        in_stack_00000004[2].cloth_data[0x50cc] = '\0';
      }
    }
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  while (0.0 < in_stack_00000008) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(in_stack_00000004->model).motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
  }
  if (iVar2 != 0) {
    pCVar6 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&in_stack_00000004->base,&local_1c,
                        &(in_stack_00000004->model).accumulated_root_motion);
    pCVar1 = &(in_stack_00000004->base).location;
    (pCVar1->position).x = pCVar6->x + (pCVar1->position).x;
    (in_stack_00000004->base).location.position.y =
         pCVar6->y + (in_stack_00000004->base).location.position.y;
    (in_stack_00000004->base).location.position.z =
         pCVar6->z + (in_stack_00000004->base).location.position.z;
    iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x5130);
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x20) = (pCVar1->position).x;
      *(float *)(iVar2 + 0x24) = (in_stack_00000004->base).location.position.y;
      *(float *)(iVar2 + 0x28) = (in_stack_00000004->base).location.position.z;
      *(int *)(iVar2 + 0x2c) = (in_stack_00000004->base).location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}
