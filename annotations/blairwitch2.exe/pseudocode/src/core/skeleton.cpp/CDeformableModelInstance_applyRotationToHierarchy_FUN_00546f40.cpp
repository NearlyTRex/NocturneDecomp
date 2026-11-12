// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
// Address: 00546f40
// Address Range: [[00546f40, 0054710d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1860 [1497];
  float fStack_e8;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  float fStack_84;
  float afStack_80 [7];
  float afStack_64 [4];
  CQuaternion4f local_54;
  uint uStack_44;
  float afStack_40 [3];
  CVector3f local_34;
  float local_28;
  CSkeleton *local_24;
  CDeformableModelInstance *local_20;
  CQuaternion4f *local_1c;
  float fStack_18;
  
  bVar7 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  iVar2 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_00593d50(rotation_quat,&local_28,&local_34);
  if (0 < pCVar1->bone_count) {
    local_1c = (this_ptr->bone_transform).pose_data.bone_rotations;
    local_20 = this_ptr;
    do {
      hierarchy_distance =
           core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(local_24,iVar2,bone_index);
      if (-1 < hierarchy_distance) {
        fStack_18 = (*blend_callback)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
        fStack_e8 = fStack_18 * local_28;
        if ((float)_DAT_005e7337 < ABS(fStack_e8)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_00594060(fStack_e8,&local_34);
          afStack_64[0] = (float)uStack_44;
          afStack_80[(uint)bVar7 * -2 + 8] = afStack_40[(uint)bVar7 * -2];
          afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9] =
               afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          (afStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1] =
               (afStack_40 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(local_1c,afStack_80 + 7);
          pfVar4 = (float *)((int)local_20 + (uint)bVar7 * -8 + 0x6b4);
          (local_20->bone_transform).pose_data.bone_rotations[0].w = fStack_84;
          pfVar5 = pfVar4 + (uint)bVar7 * -2 + 1;
          *pfVar4 = afStack_80[(uint)bVar7 * -2];
          *pfVar5 = afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          pfVar5[(uint)bVar7 * -2 + 1] =
               (afStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
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
  core_xform_cpp_quaternionFromAxisAngle_FUN_00594060(local_28 * blend_weight,&local_34);
  local_54.w = afStack_80[3];
  pfVar4 = (float *)((int)&local_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(float *)((int)&local_54 + (uint)bVar7 * -8 + 4) = afStack_80[(uint)bVar7 * -2 + 4];
  *pfVar4 = afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
  pfVar4[(uint)bVar7 * -2 + 1] =
       (afStack_80 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&local_54,&local_b4);
  pCVar3 = &local_b4;
  pCVar6 = &local_e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            ((CVector3f *)&this_ptr->bone_transform,&local_e4);
  return;
}
