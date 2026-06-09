// Name: core_mimic.cpp_CMimic_updatePose_FUN_0051f930
// Address: 0051f930
// MANUAL RECONSTRUCTION
// Address Range: [[0051f930, 0051fcb8] [0060495b, 0060497e] [03fc15ee, 03fc18bb]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0051f930(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0051f930(CMimic *this_ptr)

{
  CHero *pCVar5;
  CSkeleton *pCVar6;
  int iVar7;
  SPose *pSVar8;
  CVector3f *pCVar9;
  int iVar6;
  SPose *pSVar13;
  UOrientationVector *pUVar14;
  CMatrix3x4f local_210;
  CMatrix3x4f local_1e0;
  CMatrix3x4f local_1b0;
  CMatrix3x4f local_180;
  CMatrix3x4f local_150;
  CMatrix3x4f local_120;
  CMatrix3x4f local_f0;
  CMatrix3x4f local_c0;
  CMatrix3x4f local_90;
  CVector3f local_24;
  CCloth *pCVar3;
  CDemonActor *pCVar4;
  CHero *pCVar2;
  
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&(this_ptr->base).base.model);
  iVar6 = pCVar6->bone_count;
  for (iVar7 = 0; iVar7 < iVar6; iVar7 = iVar7 + 1) {
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[iVar7] =
         (pCVar5->base).model.bone_transform.pose_data.bone_rotations[iVar7];
    (this_ptr->base).base.model.bone_transform.bone_world_matrices[iVar7] =
         (pCVar5->base).model.bone_transform.bone_world_matrices[iVar7];
    (this_ptr->base).base.model.transformed_vertices[iVar7] =
         (pCVar5->base).model.transformed_vertices[iVar7];
  }
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  pSVar8 = &(this_ptr->base).base.model.bone_transform;
  pSVar13 = &(pCVar2->base).model.bone_transform;
  if (pSVar8 != pSVar13) {
    (pSVar8->pose_data).root_position.x = (pSVar13->pose_data).root_position.x;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.y =
         (pCVar2->base).model.bone_transform.pose_data.root_position.y;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.z =
         (pCVar2->base).model.bone_transform.pose_data.root_position.z;
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  pCVar3 = (g_HeroActors[g_LocalHeroIndex]->base).cloth_list.cloths[0];
  memcpy((this_ptr->cloth).model.vertex_list,(pCVar3->model).vertex_list,
         (pCVar3->model).vertex_count * sizeof(CVector3i));
  pCVar4 = this_ptr->mirror_plane_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_120,&(pCVar4->location).position,&(pCVar4->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_c0,&(this_ptr->mirror_plane_actor->location).position,
               &(this_ptr->mirror_plane_actor->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_f0,&(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
               &(g_HeroActors[g_LocalHeroIndex]->base).base.orient.vec);
    core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(0.0,&local_90);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_f0,&local_120,&local_210);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_210,&local_90,&local_1e0);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_1e0,&local_c0,&local_1b0);
    core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(0.0,&local_180);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_180,&local_1b0,&local_150);
    (this_ptr->base).base.base.location.position.x = local_150.m[0].z;
    (this_ptr->base).base.base.location.position.y = local_150.m[1].z;
    (this_ptr->base).base.base.location.position.z = local_150.m[2].z;
    pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_150,&local_24);
    pUVar14 = &(this_ptr->base).base.base.orient;
    if (pUVar14 != (UOrientationVector *)pCVar9) {
      pUVar14->vec = *pCVar9;
      return;
    }
  }
  return;
}
