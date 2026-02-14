// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
// Address: 005a16c0
// Address Range: [[005a16c0, 005a17a0]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox)

{
  CBoundingBox3D *this_ptr_00;
  CMatrix3x4f *pCVar1;
  CDeformableModel *this_ptr_01;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  uint corner_index;
  CMatrix3x4f *matrix;
  CVector3f local_3c;
  CVector3f local_30;
  int local_24;
  CBoundingBox3D *local_20;
  int local_1c;
  CDeformableModel *local_18;
  CMatrix3x4f *local_14;
  
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr_01);
  local_24 = pCVar2->bone_count;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(output_bbox);
  local_1c = 0;
  if (0 < local_24) {
    local_20 = (CBoundingBox3D *)&this_ptr_01->bbox_pool[0].max;
    local_14 = (this_ptr->bone_transform).bone_world_matrices;
    local_18 = this_ptr_01;
    do {
      pCVar1 = local_14;
      this_ptr_00 = local_20;
      if (local_18->bone_flags[0] == 2) {
        corner_index = 0;
        do {
          matrix = pCVar1;
          pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                             (this_ptr_00,&local_3c,corner_index);
          pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_30,pCVar3,matrix);
          corner_index = corner_index + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(output_bbox,pCVar3);
        } while ((int)corner_index < 8);
      }
      local_18 = (CDeformableModel *)local_18->lod_info;
      local_20 = local_20 + 1;
      local_14 = local_14 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < local_24);
  }
  return output_bbox;
}
