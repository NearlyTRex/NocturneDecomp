// Name: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
// Address: 005a0c90
// Address Range: [[005a0c90, 005a0d02]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90(CDeformableModelInstance * this_ptr, float start_frame, float end_frame, float scale_factor)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
          (CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_00000014;
  CVector3f local_c;
  
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
                     (this_ptr,&local_c,start_frame,end_frame);
  fVar1 = pCVar3->y;
  fVar2 = pCVar3->z;
  *(float *)((int)start_frame + 0x2254) =
       *(float *)((int)start_frame + 0x2254) + pCVar3->x * in_stack_00000014;
  *(float *)((int)start_frame + 0x2258) =
       *(float *)((int)start_frame + 0x2258) + fVar1 * in_stack_00000014;
  *(float *)((int)start_frame + 0x225c) =
       *(float *)((int)start_frame + 0x225c) + in_stack_00000014 * fVar2;
  return;
}
