// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043fbd0
// Address: 0043fbd0
// Address Range: [[0043fbd0, 0043fd4d]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043fbd0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043fbd0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_100c [944];
  float local_144;
  float local_140;
  float local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_124;
  float local_120;
  float local_11c;
  CMatrix3x4f local_114;
  uint local_e4 [12];
  uint local_b4 [3];
  float local_a8;
  float local_98;
  uint local_88;
  CMatrix3x4f local_84;
  float local_54 [12];
  float local_24;
  float local_20 [4];
  float local_10;
  
  bVar7 = 0;
  core_xform_cpp_inverse_FUN_005b6380
            ((model_ptr->bone_transform).bone_model_matrices +
             this_ptr->collide_bones[bone_index].parent_bone_index);
  pfVar3 = local_54;
  pCVar4 = &local_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&local_84,&this_ptr->collide_bones[bone_index].world_matrix,&local_114);
  pCVar4 = &local_114;
  pfVar3 = &stack0xfffffebc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
  }
  this_ptr->collide_bones[bone_index].local_matrix.m[0].x = local_144;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].y = local_134;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].z = local_124;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].x = local_140;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].y = local_130;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].z = local_120;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].x = local_13c;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].y = local_12c;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].z = local_11c;
  core_xform_cpp_inverse_FUN_005b6380(&stack0xfffffebc);
  puVar5 = local_e4;
  puVar6 = local_b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  pCVar2 = &this_ptr->collide_bones[bone_index].position_offset;
  local_24 = local_a8;
  local_20[0] = local_98;
  local_20[1] = (float)local_88;
  local_20[2] = local_a8;
  local_20[(uint)bVar7 * -2 + 3] = local_20[(uint)bVar7 * -2];
  local_20[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_20[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (pCVar2 == (CVector3f *)(local_20 + 2)) {
    return;
  }
  pCVar2->x = local_20[2];
  this_ptr->collide_bones[bone_index].position_offset.y = local_20[3];
  this_ptr->collide_bones[bone_index].position_offset.z = local_10;
  return;
}
