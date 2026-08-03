// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_00436580
// Address: 00436580
// Address Range: [[00436580, 004366ec]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_00436580(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_00436580(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  uint local_108 [12];
  uint local_d8 [12];
  uint local_a8 [3];
  float local_9c;
  float local_8c;
  float local_7c;
  uint local_78 [12];
  uint local_48 [12];
  byte local_18 [12];
  
  bVar7 = 0;
  core_xform_cpp_inverse_FUN_0055bd00
            ((model_ptr->bone_transform).bone_world_matrices +
             this_ptr->collide_bones[bone_index].parent_bone_index);
  puVar4 = local_48;
  puVar6 = local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
            (local_78,&this_ptr->collide_bones[bone_index].world_matrix);
  pfVar3 = (float *)local_d8;
  pfVar5 = &local_138;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  this_ptr->collide_bones[bone_index].local_matrix.m[0].x = local_138;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].y = local_128;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].z = local_118;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].x = local_134;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].y = local_124;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].z = local_114;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].x = local_130;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].y = local_120;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].z = local_110;
  core_xform_cpp_inverse_FUN_0055bd00(&local_138);
  puVar4 = local_108;
  puVar6 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  pCVar2 = &this_ptr->collide_bones[bone_index].position_offset;
  if (pCVar2 == (CVector3f *)local_18) {
    return;
  }
  pCVar2->x = local_9c;
  this_ptr->collide_bones[bone_index].position_offset.y = local_8c;
  this_ptr->collide_bones[bone_index].position_offset.z = local_7c;
  return;
}
