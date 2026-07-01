// Name: core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043a110
// Address: 0043a110
// MANUAL RECONSTRUCTION
// Address Range: [[0043a110, 0043a2af] [03fc4607, 03fc4664]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043a110(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043a110(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  float fVar1;
  CSkeleton *this_ptr_00;
  int iVar1;
  int iVar2;
  SClothBone *bone_name;
  CVector3f *pCVar2;
  CMatrix3x4f local_94;
  CMatrix3x4f local_64;
  CVector3f local_34;
  CVector3f local_28;
  int local_18;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(model_ptr);
  bone_name = this_ptr->collide_bones + bone_index;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,bone_name->name,1);
  bone_name->child_distance = 0.0;
  local_18 = -1;
  bone_name->parent_bone_index = iVar1;
  iVar2 = 0;
  if (0 < this_ptr_00->bone_count) {
    pCVar2 = model_ptr->transformed_vertices;
    do {
      if ((bone_name->parent_bone_index == this_ptr_00->bone_list[iVar2].parent_index) &&
         (fVar1 = SQRT(pCVar2->z * pCVar2->z + pCVar2->x * pCVar2->x + pCVar2->y * pCVar2->y),
         bone_name->child_distance < fVar1)) {
        bone_name->child_distance = fVar1;
        local_18 = iVar2;
      }
      iVar2 = iVar2 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar2 < this_ptr_00->bone_count);
  }
  if (local_18 < 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 703;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't orient bone with no children!");
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            (&local_34,model_ptr->transformed_vertices + local_18);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&bone_name->world_matrix,&local_28,&local_34);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_94,&bone_name->euler1,&bone_name->euler2);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&bone_name->world_matrix,&local_94,&local_64);
  bone_name->world_matrix = local_64;
  bone_name->inv_radius1 = 1.0 / bone_name->radius1;
  bone_name->inv_radius2 = 1.0 / bone_name->radius2;
  if (bone_name->length <= 0.0) {
    return;
  }
  bone_name->child_distance = bone_name->length;
  return;
}
