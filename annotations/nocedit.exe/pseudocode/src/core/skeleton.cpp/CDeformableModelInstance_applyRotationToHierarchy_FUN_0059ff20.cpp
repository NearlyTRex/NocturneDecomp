// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// Address: 0059ff20
// Address Range: [[0059ff20, 005a00ed]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
          (CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_185c [1497];
  CQuaternion4f *in_stack_ffffff1c;
  CMatrix3x4f CStack_e0;
  float afStack_b0 [12];
  float fStack_80;
  float afStack_7c [7];
  CQuaternion4f CStack_60;
  byte auStack_50 [44];
  float local_24;
  CSkeleton *local_20;
  CDeformableModelInstance *local_1c;
  CQuaternion4f *pCStack_18;
  
  bVar7 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  local_20 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
            (rotation_quat,&local_24,(CVector3f *)(auStack_50 + 0x20));
  if (0 < pCVar1->bone_count) {
    pCStack_18 = (this_ptr->bone_transform).bone_rotations;
    local_1c = this_ptr;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(local_20,iVar3,bone_index);
      if (-1 < hierarchy_distance) {
        fVar2 = (*blend_callback)(iVar3,bone_index,blend_weight,hierarchy_distance,this_ptr);
        in_stack_ffffff1c = (CQuaternion4f *)(fVar2 * local_24);
        if ((float)1.0000000000000001e-05 < ABS((float)in_stack_ffffff1c)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (in_stack_ffffff1c,(float)(auStack_50 + 0x20),(CVector3f *)in_stack_ffffff1c);
          CStack_60.w = (float)auStack_50._16_4_;
          *(uint *)(auStack_50 + (uint)bVar7 * -8 + -0xc) =
               *(uint *)(auStack_50 + (uint)bVar7 * -8 + 0x14);
          *(uint *)(auStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -8) =
               *(uint *)(auStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 0x18);
          *(uint *)
           ((int)(auStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -8) +
           ((uint)bVar7 * -2 + 1) * 4) =
               *(uint *)
                ((int)(auStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 0x18) +
                ((uint)bVar7 * -2 + 1) * 4);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(pCStack_18,&CStack_60,in_stack_ffffff1c);
          pfVar4 = (float *)((int)local_1c + (uint)bVar7 * -8 + 0x6b4);
          (local_1c->bone_transform).bone_rotations[0].w = fStack_80;
          pfVar5 = pfVar4 + (uint)bVar7 * -2 + 1;
          *pfVar4 = afStack_7c[(uint)bVar7 * -2];
          *pfVar5 = afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          pfVar5[(uint)bVar7 * -2 + 1] =
               (afStack_7c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        }
      }
      local_1c = (CDeformableModelInstance *)&(local_1c->motion_controller).tween_speed;
      iVar3 = iVar3 + 1;
      pCStack_18 = pCStack_18 + 1;
    } while (iVar3 < local_20->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
            ((CQuaternion4f *)(local_24 * blend_weight),(float)(auStack_50 + 0x20),
             (CVector3f *)in_stack_ffffff1c);
  auStack_50._0_4_ = afStack_7c[3];
  *(float *)(auStack_50 + (uint)bVar7 * -8 + 4) = afStack_7c[(uint)bVar7 * -2 + 4];
  *(float *)(auStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
  *(float *)((int)(auStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) +
            ((uint)bVar7 * -2 + 1) * 4) =
       (afStack_7c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CMatrix3x4f *)auStack_50,in_stack_ffffff1c);
  pfVar4 = afStack_b0;
  pCVar6 = &CStack_e0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&(this_ptr->bone_transform).root_position,&CStack_e0);
  return;
}
