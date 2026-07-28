// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
// Address: 0051d7a0
// Address Range: [[0051d7a0, 0051d96d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1860 [1497];
  float fStack_e8;
  CMatrix3x4f local_e4;
  float local_b4 [12];
  float fStack_84;
  uint auStack_80 [7];
  uint auStack_64 [4];
  uint local_54 [4];
  uint uStack_44;
  byte local_34 [12];
  float local_28;
  CSkeleton *local_24;
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  float fStack_18;
  
  bVar7 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  iVar2 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_0055d220(rotation_quat,&local_28,local_34);
  if (0 < pCVar1->bone_count) {
    local_1c = (this_ptr->bone_transform).pose_data.bone_rotations;
    local_20 = this_ptr;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(local_24,iVar2,bone_index);
      if (-1 < hierarchy_distance) {
        fStack_18 = (*blend_callback)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
        fStack_e8 = fStack_18 * local_28;
        if ((float)1.0000000000000001e-05 < ABS(fStack_e8)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_0055d560(fStack_e8,local_34);
          auStack_64[0] = uStack_44;
          auStack_80[(uint)bVar7 * -2 + 8] = auStack_80[(uint)bVar7 * -2 + 0x10];
          auStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9] =
               auStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11];
          (auStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1] =
               (auStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11)[(uint)bVar7 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(local_1c,auStack_80 + 7);
          puVar4 = (uint *)((int)local_20 + (uint)bVar7 * -8 + 0x6b4);
          (local_20->bone_transform).pose_data.bone_rotations[0].w = fStack_84;
          puVar5 = puVar4 + (uint)bVar7 * -2 + 1;
          *puVar4 = auStack_80[(uint)bVar7 * -2];
          *puVar5 = auStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          puVar5[(uint)bVar7 * -2 + 1] =
               (auStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        }
      }
      local_20 = (CDeformableModelInstance *)&(local_20->motion_controller).tween_speed;
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 1;
    } while (iVar2 < local_24->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_0055d560(local_28 * blend_weight,local_34);
  local_54[0] = auStack_80[3];
  auStack_80[(uint)bVar7 * -2 + 0xc] = auStack_80[(uint)bVar7 * -2 + 4];
  auStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       auStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
  (auStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd)[(uint)bVar7 * -2 + 1] =
       (auStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_0055ced0(auStack_80 + 0xb);
  pfVar3 = local_b4;
  pCVar6 = &local_e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_0055a910
            ((CVector3f *)&this_ptr->bone_transform,&local_e4);
  return;
}
