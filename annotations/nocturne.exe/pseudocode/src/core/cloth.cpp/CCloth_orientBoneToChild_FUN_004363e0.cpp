// Name: core_cloth.cpp_CCloth_orientBoneToChild_FUN_004363e0
// Address: 004363e0
// Address Range: [[004363e0, 0043657f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int *bone_name;
  CVector3f *pCVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  CMatrix3x4f local_94;
  float local_64 [12];
  CVector3f local_34;
  CVector3f local_28;
  CSkeleton *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(model_ptr);
  bone_name = this_ptr->vertices[0x2d5].connected_indices + bone_index * 0x2b + -2;
  local_1c = this_ptr_00;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,(char *)bone_name,1);
  bone_name[0x11] = 0;
  local_18 = -1;
  bone_name[0x10] = iVar1;
  iVar1 = 0;
  if (0 < this_ptr_00->bone_count) {
    pCVar2 = model_ptr->transformed_vertices;
    do {
      if ((bone_name[0x10] == this_ptr_00->bone_list[0].parent_index) &&
         (local_14 = SQRT(pCVar2->z * pCVar2->z + pCVar2->x * pCVar2->x + pCVar2->y * pCVar2->y),
         (float)bone_name[0x11] < local_14)) {
        bone_name[0x11] = (int)local_14;
        local_18 = iVar1;
      }
      this_ptr_00 = (CSkeleton *)((this_ptr_00->motion_list).state_names[1] + 2);
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar1 < local_1c->bone_count);
  }
  if (local_18 < 0) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0x2bf;
    core_main_c_FUN_004c8440("Can't orient bone with no children!");
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
            (&local_34,model_ptr->transformed_vertices + local_18);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            ((CMatrix3x4f *)(bone_name + 0x12),&local_28,&local_34);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&local_94,(CVector3f *)(bone_name + 7),(CVector3f *)(bone_name + 10));
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(bone_name + 0x12,&local_94);
  pfVar3 = local_64;
  pfVar4 = (float *)(bone_name + 0x12);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  bone_name[0xe] = (int)(1.0 / (float)bone_name[5]);
  bone_name[0xf] = (int)(1.0 / (float)bone_name[6]);
  if ((float)bone_name[0xd] <= 0.0) {
    return;
  }
  bone_name[0x11] = bone_name[0xd];
  return;
}
