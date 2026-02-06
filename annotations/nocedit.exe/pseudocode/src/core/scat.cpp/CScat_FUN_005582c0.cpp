// Name: core_scat.cpp_CScat_FUN_005582c0
// Address: 005582c0
// Address Range: [[005582c0, 00558494]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_FUN_005582c0(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_FUN_005582c0(CScat *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CSkeleton *this_ptr_00;
  int motion_index;
  float local_28;
  
  local_28 = 1.0;
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.field47_0x2a8c].from_bone_index == 0
     ) {
    local_28 = (float)(this_ptr->base).base.field48_0x2a90;
  }
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.field47_0x2a8c].to_bone_index == 0)
  {
    local_28 = (1.0 - (float)(this_ptr->base).base.field48_0x2a90) * local_28;
  }
  pCVar1 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar1->motion_controller,4);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar1->motion_controller,5);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar1->motion_controller,0xc);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar1->motion_controller,0xd);
  fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar1->motion_controller,0xe);
  local_28 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3 + fVar2)) * local_28;
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((float)0.0001 < local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    pCVar1 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
    motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                             (&this_ptr_00->motion_list);
    fVar2 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                      (&pCVar1->motion_controller,motion_index,
                       (float)(this_ptr->base).base.field48_0x2a90);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (pCVar1,motion_index,fVar2,local_28,INT_0310619c,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if ((this_ptr->base).base.field47_0x2a8c == 1) {
      core_scat_cpp_CScat_FUN_005584a0(this_ptr);
      return;
    }
  }
  return;
}
