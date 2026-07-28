// Name: core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120
// Address: 00519120
// Address Range: [[00519120, 005191ef]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_00519120(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_00519120(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)

{
  int iVar1;
  SBone *text;
  int iVar2;
  CVector3i local_2c;
  CVector3f local_20;
  CSkeleton *local_14;
  
  iVar2 = 0;
  local_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr);
  if (0 < local_14->bone_count) {
    text = local_14->bone_list;
    do {
      core_xform_cpp_getTranslation_FUN_0055bc00(bone_matrices,&local_20);
      local_2c.x = (int)ROUND(local_20.x * _DAT_005a1ea8);
      local_2c.y = (int)ROUND(local_20.y * _DAT_005a1ea8);
      local_2c.z = (int)ROUND(local_20.z * _DAT_005a1ea8);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)(*DAT_005ae704 + 0xea5d0),&local_2c);
      iVar1 = *DAT_005ae704;
      if ((*(byte *)(iVar1 + 0xea5e3) & 0x80) == 0) {
        engine_2d_c_drawText_FUN_00402600
                  (text->bone_name,*(int *)(iVar1 + 0xea5e0) >> 0x10,
                   *(int *)(iVar1 + 0xea5e4) >> 0x10);
      }
      bone_matrices = bone_matrices + 1;
      iVar2 = iVar2 + 1;
      text = text + 1;
    } while (iVar2 < local_14->bone_count);
  }
  return;
}
