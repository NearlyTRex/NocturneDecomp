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
  CQuaternion4f *unaff_EDI;
  float *pfVar2;
  byte bVar3;
  CDeformableModel_MotionBlendWeightFunc *in_stack_00000018;
  float afStackY_1888 [1521];
  CQuaternion4f *quat1_ptr;
  CQuaternion4f *quat2_ptr;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  float local_6c;
  float afStack_68 [7];
  float local_4c;
  float local_3c;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar3 = 0;
  if (blend_weight <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr,&local_14,bone_index);
  local_2c.x = target_position->x - pCVar1->x;
  local_2c.y = target_position->y - pCVar1->y;
  local_2c.z = target_position->z - pCVar1->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_20,&local_2c);
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)local_20.x,(float)unaff_EDI);
  quat2_ptr = &local_ac;
  local_ac.w = local_3c;
  pfVar2 = (float *)((int)&local_ac + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(float *)((int)&local_ac + (uint)bVar3 * -8 + 4) = afStack_68[(uint)bVar3 * -2 + 0xc];
  *pfVar2 = afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
  pfVar2[(uint)bVar3 * -2 + 1] =
       (afStack_68 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd)[(uint)bVar3 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_20.y,(float)quat2_ptr);
  quat1_ptr = &local_8c;
  local_8c.w = local_6c;
  pfVar2 = (float *)((int)&local_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(float *)((int)&local_8c + (uint)bVar3 * -8 + 4) = afStack_68[(uint)bVar3 * -2];
  *pfVar2 = afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  pfVar2[(uint)bVar3 * -2 + 1] =
       (afStack_68 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640
            ((CQuaternion4f *)blend_callback,quat1_ptr,quat2_ptr);
  local_7c.w = afStack_68[3];
  pfVar2 = (float *)((int)&local_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(float *)((int)&local_7c + (uint)bVar3 * -8 + 4) = afStack_68[(uint)bVar3 * -2 + 4];
  *pfVar2 = afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
  pfVar2[(uint)bVar3 * -2 + 1] =
       (afStack_68 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_7c,quat2_ptr,unaff_EDI);
  local_9c.w = local_4c;
  pfVar2 = (float *)((int)&local_9c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(float *)((int)&local_9c + (uint)bVar3 * -8 + 4) = afStack_68[(uint)bVar3 * -2 + 8];
  *pfVar2 = afStack_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
  pfVar2[(uint)bVar3 * -2 + 1] =
       (afStack_68 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (this_ptr,&local_9c,blend_weight,bone_index,in_stack_00000018);
  return;
}
