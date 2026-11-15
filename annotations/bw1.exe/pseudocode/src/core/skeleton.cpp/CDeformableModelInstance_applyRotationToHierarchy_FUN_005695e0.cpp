// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
// Address: 005695e0
// Address Range: [[005695e0, 005697ad]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  int iVar2;
  CMatrix3x4f *pCVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float afStackY_1860 [1497];
  float fStack_e8;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CQuaternion4f CStack_84;
  float local_74;
  float afStack_70 [3];
  CQuaternion4f CStack_64;
  CQuaternion4f local_54;
  float fStack_44;
  uint auStack_40 [3];
  CVector3f local_34;
  float local_28;
  CSkeleton *local_24;
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  float fStack_18;
  
  bVar9 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  iVar2 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005b78a0(rotation_quat,&local_28,&local_34);
  if (0 < pCVar1->bone_count) {
    local_1c = (this_ptr->bone_transform).pose_data.bone_rotations;
    local_20 = this_ptr;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630(local_24,iVar2,bone_index);
      if (-1 < hierarchy_distance) {
        fStack_18 = (*blend_callback)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
        fStack_e8 = fStack_18 * local_28;
        if ((float)_DAT_005f2531 < ABS(fStack_e8)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_005b7bb0(fStack_e8,&local_34);
          CStack_64.w = fStack_44;
          puVar4 = (uint *)((int)&CStack_64 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          *(uint *)((int)&CStack_64 + (uint)bVar9 * -8 + 4) = auStack_40[(uint)bVar9 * -2];
          *puVar4 = auStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          puVar4[(uint)bVar9 * -2 + 1] =
               (auStack_40 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005b77b0(local_1c,&CStack_64,&CStack_84);
          puVar5 = (uint *)((int)local_20 + (uint)bVar9 * -8 + 0x6b4);
          (local_20->bone_transform).pose_data.bone_rotations[0].w = CStack_84.w;
          puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
          puVar4 = (uint *)((int)&CStack_84 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          *puVar5 = *(uint *)((int)&CStack_84 + (uint)bVar9 * -8 + 4);
          *puVar6 = *puVar4;
          puVar6[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        }
      }
      local_20 = (CDeformableModelInstance *)&(local_20->base).tween_speed;
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 1;
    } while (iVar2 < local_24->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005b7bb0(local_28 * blend_weight,&local_34);
  local_54.w = local_74;
  pfVar7 = (float *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(float *)((int)&local_54 + (uint)bVar9 * -8 + 4) = afStack_70[(uint)bVar9 * -2];
  *pfVar7 = afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  pfVar7[(uint)bVar9 * -2 + 1] =
       (afStack_70 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_005b7560(&local_54,&local_b4);
  pCVar3 = &local_b4;
  pCVar8 = &local_e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar8->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005b5100
            ((CVector3f *)&this_ptr->bone_transform,&local_e4);
  return;
}
