// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
// Address: 005a16c0
// Address Range: [[005a16c0, 005a17a0]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
          (CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox)

{
  CBoundingBox3D *this_ptr_00;
  CDeformableModel *this_ptr_01;
  CSkeleton *pCVar1;
  CVector3f *pCVar2;
  uint corner_index;
  BADSPACEBASE *in_ESP;
  CBoundingBox3D *in_stack_ffffffd0;
  CVector3f local_20;
  CBoundingBox3D *local_14;
  int iVar3;
  
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr_01);
  local_20.y = (float)pCVar1->bone_count;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(output_bbox);
  iVar3 = 0;
  if (0 < (int)local_20.z) {
    local_14 = (CBoundingBox3D *)&this_ptr_01->bbox_pool[0].max;
    do {
      this_ptr_00 = local_14;
      if (this_ptr_01->bone_flags[0] == 2) {
        corner_index = 0;
        do {
          pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                             (this_ptr_00,(CVector3f *)&stack0xffffffd0,corner_index);
          pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_20,pCVar2,(CMatrix3x4f *)in_stack_ffffffd0);
          corner_index = corner_index + 1;
          in_stack_ffffffd0 = output_bbox;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(output_bbox,pCVar2);
        } while ((int)corner_index < 8);
      }
      this_ptr_01 = (CDeformableModel *)this_ptr_01->lod_info;
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_20.z);
  }
  return output_bbox;
}
