// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_005af3b0
// Address: 005af3b0
// Address Range: [[005af3b0, 005af52d]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_005af3b0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_005af3b0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_100c [944];
  CMatrix3x4f local_144;
  CMatrix3x4f local_114;
  CMatrix3x4f local_e4;
  float local_b4 [3];
  float local_a8;
  float local_98;
  uint local_88;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  float local_24;
  float local_20 [4];
  float local_10;
  
  bVar6 = 0;
  core_xform_cpp_inverse_FUN_00592830
            ((model_ptr->bone_transform).bone_model_matrices +
             this_ptr->collide_bones[bone_index].parent_bone_index,&local_54);
  pCVar3 = &local_54;
  pCVar4 = &local_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (&local_84,&this_ptr->collide_bones[bone_index].world_matrix,&local_114);
  pCVar3 = &local_114;
  pCVar4 = &local_144;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  this_ptr->collide_bones[bone_index].local_matrix.m[0].x = local_144.m[0].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].y = local_144.m[1].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].z = local_144.m[2].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].x = local_144.m[0].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].y = local_144.m[1].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].z = local_144.m[2].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].x = local_144.m[0].y;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].y = local_144.m[1].y;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].z = local_144.m[2].y;
  core_xform_cpp_inverse_FUN_00592830(&local_144,&local_e4);
  pCVar3 = &local_e4;
  pfVar5 = local_b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  pCVar2 = &this_ptr->collide_bones[bone_index].position_offset;
  local_24 = local_a8;
  local_20[0] = local_98;
  local_20[1] = (float)local_88;
  local_20[2] = local_a8;
  local_20[(uint)bVar6 * -2 + 3] = local_20[(uint)bVar6 * -2];
  local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (pCVar2 == (CVector3f *)(local_20 + 2)) {
    return;
  }
  pCVar2->x = local_20[2];
  this_ptr->collide_bones[bone_index].position_offset.y = local_20[3];
  this_ptr->collide_bones[bone_index].position_offset.z = local_10;
  return;
}
