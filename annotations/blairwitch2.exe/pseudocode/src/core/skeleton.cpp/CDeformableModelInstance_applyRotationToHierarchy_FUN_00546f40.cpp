// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
// Address: 00546f40
// Address Range: [[00546f40, 0054710d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int hierarchy_distance;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1860 [1497];
  float fStack_e8;
  uint local_e4 [12];
  uint local_b4 [12];
  uint uStack_84;
  uint auStack_80 [7];
  uint uStack_64;
  uint auStack_60 [3];
  uint local_54;
  uint auStack_50 [7];
  byte local_34 [12];
  float local_28;
  CSkeleton *local_24;
  CDeformableModelInstance *local_20;
  byte *local_1c;
  float fStack_18;
  
  bVar5 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  iVar2 = 0;
  local_24 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_00593d50(rotation_quat,&local_28,local_34);
  if (0 < *(int *)&pCVar1->field_0x1d1f8) {
    local_1c = &this_ptr->field_0x6b0;
    local_20 = this_ptr;
    do {
      hierarchy_distance = core_skeleton_cpp_FUN_00540fc0(local_24,iVar2,bone_index);
      if (-1 < hierarchy_distance) {
        fStack_18 = (*blend_callback)(iVar2,bone_index,blend_weight,hierarchy_distance,this_ptr);
        fStack_e8 = fStack_18 * local_28;
        if ((float)_DAT_005e7337 < ABS(fStack_e8)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_00594060(fStack_e8,local_34);
          uStack_64 = auStack_50[3];
          *(uint *)((int)auStack_60 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + 4) * 4);
          *(uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
          ((uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
          [(uint)bVar5 * -2 + 1] =
               ((uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
               [(uint)bVar5 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(local_1c,&uStack_64);
          puVar3 = (uint *)((int)local_20 + (uint)bVar5 * -8 + 0x6b4);
          *(uint *)&local_20->field_0x6b0 = uStack_84;
          puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
          *puVar3 = *(uint *)((int)auStack_80 + (uint)bVar5 * 0xfffffff8);
          *puVar4 = *(uint *)
                     ((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
          puVar4[(uint)bVar5 * -2 + 1] =
               ((uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
               [(uint)bVar5 * -2 + 1];
        }
      }
      local_20 = (CDeformableModelInstance *)&local_20->field_0x10;
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 0x10;
    } while (iVar2 < *(int *)&local_24->field_0x1d1f8);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_00594060(local_28 * blend_weight,local_34);
  local_54 = auStack_80[3];
  *(uint *)((int)auStack_50 + (uint)bVar5 * 0xfffffff8) =
       *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + -8) * 4);
  *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
  ((uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
  [(uint)bVar5 * -2 + 1] =
       ((uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
       [(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&local_54);
  puVar3 = local_b4;
  puVar4 = local_e4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0(&this_ptr->field_0x6a4,local_e4);
  return;
}
