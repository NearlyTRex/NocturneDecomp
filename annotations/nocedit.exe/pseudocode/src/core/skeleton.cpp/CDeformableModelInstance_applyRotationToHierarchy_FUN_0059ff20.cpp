// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// Address: 0059ff20
// Address Range: [[0059ff20, 005a00ed]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 (CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight, int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
          (CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  int iVar2;
  CQuaternion4f *unaff_ESI;
  CMatrix3x4f *pCVar3;
  int unaff_EDI;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1850 [1493];
  float fStack_e8;
  float fStack_e0;
  CMatrix3x4f local_b4;
  byte local_74 [8];
  float afStack_6c [6];
  byte local_54 [8];
  float afStack_4c [6];
  byte local_34 [8];
  float afStack_2c [2];
  CSkeleton *local_24;
  CVector3f local_20;
  float fStack_14;
  
  bVar6 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar2 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
            (rotation_quat,afStack_2c + 1,(CVector3f *)local_34);
  if (0 < pCVar1->bone_count) {
    local_20.y = (float)(this_ptr->bone_transform).bone_rotations;
    local_20.x = (float)this_ptr;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(local_24,iVar2,bone_index);
      if (-1 < hierarchy_distance) {
        fStack_e8 = (*blend_callback)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
        fStack_e8 = fStack_e8 * fStack_14;
        if ((float)1.0000000000000001e-05 < ABS(fStack_e8)) {
          fStack_e0 = 8.265272e-39;
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (fStack_e8,&local_20,(CQuaternion4f *)(local_34 + 4));
          local_54._4_4_ = local_34._4_4_;
          afStack_4c[(uint)bVar6 * -2] = afStack_2c[(uint)bVar6 * -2];
          afStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          (afStack_4c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
               (afStack_2c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          fStack_e0 = 8.265326e-39;
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    (unaff_ESI,(CQuaternion4f *)(local_54 + 4),(CQuaternion4f *)(local_74 + 4));
          pfVar4 = (float *)(unaff_EDI + 0x6b4 + (uint)bVar6 * -8);
          *(uint *)(unaff_EDI + 0x6b0) = local_74._4_4_;
          pfVar5 = pfVar4 + (uint)bVar6 * -2 + 1;
          *pfVar4 = afStack_6c[(uint)bVar6 * -2];
          *pfVar5 = afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          pfVar5[(uint)bVar6 * -2 + 1] =
               (afStack_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
        }
      }
      local_20.x = (float)&((CMotionController *)local_20.x)->tween_speed;
      iVar2 = iVar2 + 1;
      local_20.y = (float)((int)local_20.y + 0x10);
    } while (iVar2 < local_24->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
            (afStack_2c[1] * blend_weight,(CVector3f *)local_34,(CQuaternion4f *)local_74);
  local_54._0_4_ = local_74._0_4_;
  afStack_4c[(uint)bVar6 * -2 + -1] = afStack_6c[(uint)bVar6 * -2 + -1];
  afStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2] = afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2];
  (afStack_4c + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
       (afStack_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CQuaternion4f *)local_54,&local_b4);
  pCVar3 = &local_b4;
  pfVar4 = (float *)&stack0xffffff1c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&(this_ptr->bone_transform).root_position,(CMatrix3x4f *)&stack0xffffff1c);
  return;
}
