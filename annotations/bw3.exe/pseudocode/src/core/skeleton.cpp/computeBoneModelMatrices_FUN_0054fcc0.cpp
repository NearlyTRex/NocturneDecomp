// Name: core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0
// Address: 0054fcc0
// Address Range: [[0054fcc0, 0054feed]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_computeBoneModelMatrices_FUN_0054fcc0(SPose *bone_data,CDeformableModelInstance *instance_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_computeBoneModelMatrices_FUN_0054fcc0(SPose *bone_data,CDeformableModelInstance *instance_ptr)

{
  int iVar1;
  SPose *pSVar2;
  SPose *pSVar3;
  byte bVar4;
  float afStackY_1030 [1016];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CSkeleton *pCStack_30;
  CVector3f *pCStack_2c;
  CSkeleton *pCStack_28;
  CQuaternion4f *pCStack_24;
  int iStack_20;
  int iStack_1c;
  CMatrix3x4f *pCStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar4 = 0;
  pCStack_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(instance_ptr);
  iStack_1c = 0;
  if (0 < pCStack_30->bone_count) {
    iStack_20 = 0;
    pCStack_18 = bone_data->bone_model_matrices;
    pCStack_24 = (bone_data->pose_data).bone_rotations;
    pCStack_2c = instance_ptr->bone_origins;
    pSVar2 = bone_data;
    pSVar3 = bone_data;
    pCStack_28 = pCStack_30;
    pCStack_14 = pCStack_18;
    do {
      iVar1 = iStack_1c;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005855f0(pCStack_14,pCStack_24);
      if (pSVar2->bone_scales[0] != 1.0) {
        bone_data->bone_model_matrices[iVar1].m[0].w =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[0].w;
        bone_data->bone_model_matrices[iVar1].m[0].x =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[0].x;
        bone_data->bone_model_matrices[iVar1].m[0].y =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[0].y;
        bone_data->bone_model_matrices[iVar1].m[1].w =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[1].w;
        bone_data->bone_model_matrices[iVar1].m[1].x =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[1].x;
        bone_data->bone_model_matrices[iVar1].m[1].y =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[1].y;
        bone_data->bone_model_matrices[iVar1].m[2].w =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[2].w;
        bone_data->bone_model_matrices[iVar1].m[2].x =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[2].x;
        bone_data->bone_model_matrices[iVar1].m[2].y =
             pSVar2->bone_scales[0] * bone_data->bone_model_matrices[iVar1].m[2].y;
      }
      iVar1 = pCStack_28->bone_list[0].parent_index;
      if (iVar1 < 0) {
        pSVar3->bone_model_matrices[0].m[0].z =
             *(float *)((int)&instance_ptr->bone_origins[0].x + iStack_20) +
             (bone_data->pose_data).root_position.x;
        pSVar3->bone_model_matrices[0].m[1].z =
             *(float *)((int)&instance_ptr->bone_origins[0].y + iStack_20) +
             (bone_data->pose_data).root_position.y;
        pSVar3->bone_model_matrices[0].m[2].z =
             *(float *)((int)&instance_ptr->bone_origins[0].z + iStack_20) +
             (bone_data->pose_data).root_position.z;
      }
      else {
        core_xform_cpp_FUN_00583260((int)&pCStack_2c->x + iStack_20,pCStack_18 + iVar1);
        fStack_48 = fStack_3c;
        *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        pSVar3->bone_model_matrices[0].m[0].z = fStack_48;
        pSVar3->bone_model_matrices[0].m[1].z = fStack_44;
        pSVar3->bone_model_matrices[0].m[2].z = fStack_40;
      }
      pSVar2 = (SPose *)&(pSVar2->pose_data).root_position.y;
      pSVar3 = (SPose *)&(pSVar3->pose_data).bone_rotations[2].x;
      pCStack_14 = pCStack_14 + 1;
      pCStack_24 = pCStack_24 + 1;
      iStack_20 = iStack_20 + 0xc;
      pCStack_28 = (CSkeleton *)((pCStack_28->motion_list).state_names[1] + 2);
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < pCStack_30->bone_count);
  }
  return;
}
