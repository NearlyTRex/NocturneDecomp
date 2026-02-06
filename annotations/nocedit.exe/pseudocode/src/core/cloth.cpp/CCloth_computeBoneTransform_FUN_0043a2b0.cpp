// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0
// Address: 0043a2b0
// Address Range: [[0043a2b0, 0043a41c]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043a2b0 (CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl
core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043a2b0
          (CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  CMatrix3x4f local_138;
  CMatrix3x4f local_108;
  CMatrix3x4f local_d8;
  float local_a8 [3];
  float local_9c;
  float local_8c;
  float local_7c;
  CMatrix3x4f local_78;
  CMatrix3x4f local_48;
  byte local_18 [12];
  
  bVar6 = 0;
  core_xform_cpp_inverse_FUN_005f6210
            ((model_ptr->bone_transform).bone_world_matrices +
             this_ptr->collide_bones[bone_index].parent_bone_index,&local_48);
  pCVar3 = &local_48;
  pCVar4 = &local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_78,&this_ptr->collide_bones[bone_index].world_matrix,&local_d8);
  pCVar3 = &local_d8;
  pCVar4 = &local_138;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  this_ptr->collide_bones[bone_index].local_matrix.m[0].x = local_138.m[0].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].y = local_138.m[1].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].z = local_138.m[2].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].x = local_138.m[0].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].y = local_138.m[1].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].z = local_138.m[2].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].x = local_138.m[0].y;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].y = local_138.m[1].y;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].z = local_138.m[2].y;
  core_xform_cpp_inverse_FUN_005f6210(&local_138,&local_108);
  pCVar3 = &local_108;
  pfVar5 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
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
