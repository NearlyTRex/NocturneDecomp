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
  CSkeleton *this_ptr_01;
  int motion_index;
  int in_stack_00000004;
  
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,4);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,5);
  fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0xc);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0xd);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0xe);
  fVar1 = (1.0 - (fVar4 + fVar3)) * fVar1;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if ((float)0.0001 < fVar1) {
    this_ptr_00 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                            (this_ptr_00);
    motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                             (&this_ptr_01->motion_list);
    fVar1 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                      ((CMotionController *)this_ptr_00,motion_index,
                       *(float *)(in_stack_00000004 + 0x2a90));
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_00,motion_index,fVar1,fVar3 + fVar2,DAT_0310619c,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
      core_scat_cpp_FUN_005584a0();
      return;
    }
  }
  return;
}
