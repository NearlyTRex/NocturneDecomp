// Name: core_cloth.cpp_CCloth_orientBoneToChild_FUN_005af200
// Address: 005af200
// Address Range: [[005af200, 005af3ab]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_005af200(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_005af200(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  SClothBone *bone_name;
  CVector3f *pCVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float afStackY_101c [988];
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CVector3f local_40;
  float local_34;
  float afStack_30 [2];
  CVector3f local_28;
  CSkeleton *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(model_ptr);
  bone_name = this_ptr->collide_bones + bone_index;
  local_1c = this_ptr_00;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,bone_name->name,1);
  bone_name->child_distance = 0.0;
  local_18 = -1;
  bone_name->parent_bone_index = iVar1;
  iVar1 = 0;
  if (0 < this_ptr_00->bone_count) {
    pCVar2 = model_ptr->bone_origins;
    do {
      if ((bone_name->parent_bone_index == this_ptr_00->bone_list[0].parent_index) &&
         (local_14 = SQRT(pCVar2->z * pCVar2->z + pCVar2->x * pCVar2->x + pCVar2->y * pCVar2->y),
         bone_name->child_distance < local_14)) {
        bone_name->child_distance = local_14;
        local_18 = iVar1;
      }
      this_ptr_00 = (CSkeleton *)((this_ptr_00->motion_list).state_names[1] + 2);
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar1 < local_1c->bone_count);
  }
  if (local_18 < 0) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x2bf;
    core_main_c_FUN_004e4500("Can't orient bone with no children!");
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
            (model_ptr->bone_origins + local_18);
  pCVar2 = &local_28;
  local_40.x = 0.0;
  local_40.y = 0.0;
  local_40.z = 0.0;
  local_28.x = local_34;
  *(float *)((int)&local_28 + (uint)bVar5 * -8 + 4) = afStack_30[(uint)bVar5 * -2];
  *(float *)((int)&local_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_xform_cpp_FUN_00591ad0(&bone_name->world_matrix,&local_40,pCVar2);
  core_xform_cpp_FUN_00591ad0(&local_a0,&bone_name->euler1,&bone_name->euler2);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&bone_name->world_matrix,&local_a0,&local_70);
  pCVar3 = &local_70;
  pCVar4 = &bone_name->world_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
  }
  bone_name->inv_radius1 = 1.0 / bone_name->radius1;
  bone_name->inv_radius2 = 1.0 / bone_name->radius2;
  if (bone_name->length <= 0.0) {
    return;
  }
  bone_name->child_distance = bone_name->length;
  return;
}
