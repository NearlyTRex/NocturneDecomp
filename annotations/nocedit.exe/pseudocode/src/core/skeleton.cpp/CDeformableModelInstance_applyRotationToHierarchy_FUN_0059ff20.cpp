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
  CQuaternion4f *unaff_ESI;
  int unaff_EDI;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1850 [1493];
  CQuaternion4f *in_stack_ffffff18;
  float fStack_e0;
  CQuaternion4f *in_stack_ffffff2c;
  float local_74;
  uint uStack_70;
  byte local_54 [36];
  float fStack_30;
  float afStack_2c [2];
  CSkeleton *local_24;
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  float fStack_14;
  
  bVar6 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
            (rotation_quat,afStack_2c + 1,(CVector3f *)(local_54 + 0x20));
  if (0 < pCVar1->bone_count) {
    local_1c = (this_ptr->bone_transform).bone_rotations;
    local_20 = this_ptr;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(local_24,iVar3,bone_index);
      if (-1 < hierarchy_distance) {
        fVar2 = (*blend_callback)(iVar3,bone_index,blend_weight,hierarchy_distance,this_ptr);
        in_stack_ffffff18 = (CQuaternion4f *)(fVar2 * fStack_14);
        if ((float)1.0000000000000001e-05 < ABS((float)in_stack_ffffff18)) {
          fStack_e0 = 8.265272e-39;
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (in_stack_ffffff18,(float)&local_20,(CVector3f *)in_stack_ffffff2c);
          local_54._4_4_ = fStack_30;
          *(float *)(local_54 + (uint)bVar6 * -8 + 8) = afStack_2c[(uint)bVar6 * -2];
          *(float *)(local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0xc) =
               afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          *(float *)((int)(local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0xc) +
                    ((uint)bVar6 * -2 + 1) * 4) =
               (afStack_2c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          fStack_e0 = 8.265326e-39;
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    (unaff_ESI,(CQuaternion4f *)(local_54 + 4),in_stack_ffffff2c);
          puVar4 = (uint *)(unaff_EDI + 0x6b4 + (uint)bVar6 * -8);
          *(uint *)(unaff_EDI + 0x6b0) = uStack_70;
          puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
          *puVar4 = *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8);
          *puVar5 = *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          puVar5[(uint)bVar6 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      local_20 = (CDeformableModelInstance *)&(local_20->motion_controller).tween_speed;
      iVar3 = iVar3 + 1;
      local_1c = local_1c + 1;
    } while (iVar3 < local_24->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
            ((CQuaternion4f *)(afStack_2c[1] * blend_weight),(float)(local_54 + 0x20),
             (CVector3f *)in_stack_ffffff18);
  local_54._0_4_ = local_74;
  *(uint *)(local_54 + (uint)bVar6 * -8 + 4) =
       *(uint *)(local_54 + (uint)bVar6 * -8 + -0x1c);
  *(uint *)(local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  *(uint *)
   ((int)(local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) + ((uint)bVar6 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CMatrix3x4f *)local_54,in_stack_ffffff18);
  puVar4 = (uint *)&stack0xffffff4c;
  puVar5 = (uint *)&stack0xffffff1c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&(this_ptr->bone_transform).root_position,(CMatrix3x4f *)&stack0xffffff1c);
  return;
}
