// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0
// Address: 005487d0
// Address Range: [[005487d0, 005488e9]]
// Convention: __stack_esi
// Signature: CBoundingBox3D * __stack_esi core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox)

#include "nocturne.h"

CBoundingBox3D * __stack_esi core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox)

{
  CMatrix3x4f *pCVar1;
  CDeformableModel *this_ptr_00;
  CSkeleton *pCVar2;
  int iVar3;
  uint corner_index;
  CBoundingBox3D *pCVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  uint auStackY_1040 [1009];
  CMatrix3x4f *matrix;
  CBoundingBox3D local_70;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CBoundingBox3D *local_28;
  int local_24;
  CDeformableModel *local_20;
  CMatrix3x4f *local_1c;
  CBoundingBox3D *local_18;
  int local_14;
  CBoundingBox3D *local_10;
  
  bVar6 = 0;
  local_28 = output_bbox;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(this_ptr_00);
  local_24 = pCVar2->bone_count;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041b600(&local_70);
  local_14 = 0;
  if (0 < local_24) {
    local_18 = this_ptr_00->bone_bounds;
    local_1c = (this_ptr->bone_transform).bone_model_matrices;
    local_20 = this_ptr_00;
    do {
      pCVar1 = local_1c;
      if (local_20->bone_flags[0] == 2) {
        corner_index = 0;
        local_10 = local_18;
        do {
          matrix = pCVar1;
          core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(local_10,corner_index,&local_4c);
          local_40.x = local_4c.x;
          *(uint *)((int)&local_40 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_4c + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_40 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_4c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_xform_cpp_transformVector3x4_FUN_00591530(&local_40,matrix,&local_34);
          local_58.x = local_34.x;
          *(uint *)((int)&local_58 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_34 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          corner_index = corner_index + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(&local_70,&local_58);
        } while ((int)corner_index < 8);
      }
      local_14 = local_14 + 1;
      local_20 = (CDeformableModel *)local_20->lod_info;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    } while (local_14 < local_24);
  }
  pCVar4 = &local_70;
  pCVar5 = local_28;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar5->min).x = *(float *)pCVar4;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
  }
  return local_28;
}
