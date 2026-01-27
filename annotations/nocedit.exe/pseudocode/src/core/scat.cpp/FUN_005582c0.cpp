// Name: core_scat.cpp_FUN_005582c0
// Address: 005582c0
// Address Range: [[005582c0, 00558494]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005582c0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_005582c0(uint param_1) */

void core_scat_cpp_FUN_005582c0(void)

{
  CMotionController *this_ptr;
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CSkeleton *this_ptr_01;
  int motion_index;
  int in_stack_00000004;
  float local_28;
  
  local_28 = 1.0;
  if (*(int *)(in_stack_00000004 + 0x262c + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38) == 0) {
    local_28 = *(float *)(in_stack_00000004 + 0x2a90);
  }
  if (*(int *)(in_stack_00000004 + 0x2630 + *(int *)(in_stack_00000004 + 0x2a8c) * 0x38) == 0) {
    local_28 = (1.0 - *(float *)(in_stack_00000004 + 0x2a90)) * local_28;
  }
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,4);
  fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,5);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0xc);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0xd);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0xe);
  local_28 = (1.0 - (fVar5 + fVar4 + fVar3 + fVar2 + fVar1)) * local_28;
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((float)0.0001 < local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    this_ptr_00 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                            (this_ptr_00);
    motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                             (&this_ptr_01->motion_list);
    fVar1 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                      ((CMotionController *)this_ptr_00,motion_index,
                       *(float *)(in_stack_00000004 + 0x2a90));
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_00,motion_index,fVar1,local_28,INT_0310619c,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
      core_scat_cpp_FUN_005584a0();
      return;
    }
  }
  return;
}
