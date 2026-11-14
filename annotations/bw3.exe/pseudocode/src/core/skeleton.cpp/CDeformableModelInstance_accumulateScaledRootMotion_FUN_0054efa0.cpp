// Name: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0054efa0
// Address: 0054efa0
// Address Range: [[0054efa0, 0054f038]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0054efa0(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0054efa0(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

{
  byte bVar1;
  float afStackY_1020 [1015];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040
            (this_ptr,start_frame,end_frame,&CStack_2c);
  fStack_20 = CStack_2c.x;
  afStack_1c[(uint)bVar1 * -2] = *(float *)((int)&CStack_2c + (uint)bVar1 * -8 + 4);
  afStack_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&CStack_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  afStack_1c[2] = fStack_20 * scale_factor;
  afStack_1c[3] = afStack_1c[0] * scale_factor;
  fStack_c = afStack_1c[1] * scale_factor;
  fStack_38 = fStack_20 * scale_factor;
  *(float *)((int)&stack0xffffffcc + (uint)bVar1 * -8) = afStack_1c[(uint)bVar1 * -2 + 3];
  *(float *)((int)&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       afStack_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  (this_ptr->accumulated_root_motion).x = (this_ptr->accumulated_root_motion).x + fStack_38;
  (this_ptr->accumulated_root_motion).y = (this_ptr->accumulated_root_motion).y + fStack_34;
  (this_ptr->accumulated_root_motion).z = (this_ptr->accumulated_root_motion).z + fStack_30;
  return;
}
