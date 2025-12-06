// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
// Address: 0059fdd0
// Address Range: [[0059fdd0, 0059ff14]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0(CDeformableModelInstance * this_ptr, CVector3f * target_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
          (CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  uint *puVar2;
  byte bVar3;
  CQuaternion4f *in_stack_00000028;
  int in_stack_0000002c;
  CDeformableModel_MotionBlendWeightFunc *in_stack_00000034;
  CQuaternion4f *apCStackY_187c [1521];
  float in_stack_ffffff5c;
  byte *angle_radians;
  CQuaternion4f *quat1_ptr;
  CQuaternion4f *quat2_ptr;
  CQuaternion4f *in_stack_ffffff64;
  CQuaternion4f *in_stack_ffffff68;
  uint uStack_84;
  byte auStack_80 [12];
  uint auStack_74 [4];
  CQuaternion4f CStack_64;
  uint auStack_54 [4];
  uint uStack_44;
  uint auStack_40 [4];
  uint uStack_30;
  CQuaternion4f *local_2c [2];
  CVector3f local_24;
  CVector3f CStack_18;
  CQuaternion4f *pCStack_c;
  
  bVar3 = 0;
  if (blend_weight <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr,(CVector3f *)&CStack_18.z,(int)blend_callback);
  local_24.x = target_position->x - pCVar1->x;
  local_24.y = target_position->y - pCVar1->y;
  local_24.z = target_position->z - pCVar1->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_18,&local_24);
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)CStack_18.y,in_stack_ffffff5c);
  angle_radians = &stack0xffffff64;
  puVar2 = (uint *)((int)&local_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(CQuaternion4f **)(&stack0xffffff64 + (uint)bVar3 * -8) = local_2c[(uint)bVar3 * -2 + 1];
  *(uint *)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x18) = *puVar2;
  quat2_ptr = local_2c[0];
  *(uint *)
   ((int)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x18) + ((uint)bVar3 * -2 + 1) * 4) =
       puVar2[(uint)bVar3 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(pCStack_c,(float)angle_radians);
  quat1_ptr = (CQuaternion4f *)(auStack_80 + 8);
  auStack_80._4_4_ = CStack_64.z;
  auStack_74[(uint)bVar3 * -2 + -1] = auStack_54[(uint)bVar3 * -2];
  auStack_74[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
       auStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  (auStack_74 + (uint)bVar3 * -2 + (uint)bVar3 * -2)[(uint)bVar3 * -2 + 1] =
       (auStack_54 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(in_stack_00000028,quat1_ptr,quat2_ptr);
  auStack_74[3] = uStack_44;
  *(uint *)((int)&CStack_64 + (uint)bVar3 * -8) = auStack_40[(uint)bVar3 * -2];
  auStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -3] =
       auStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  (auStack_54 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -3)[(uint)bVar3 * -2 + 1] =
       (auStack_40 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_64,in_stack_ffffff64,in_stack_ffffff68);
  uStack_84 = uStack_30;
  *(CQuaternion4f **)(auStack_80 + (uint)bVar3 * -8) = local_2c[(uint)bVar3 * -2];
  *(CQuaternion4f **)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 4) =
       local_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  *(CQuaternion4f **)
   ((int)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 4) + ((uint)bVar3 * -2 + 1) * 4) =
       (local_2c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (this_ptr,(CQuaternion4f *)auStack_80,(float)in_stack_00000028,in_stack_0000002c,
             in_stack_00000034);
  return;
}
