// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_005af3b0
// Address: 005af3b0
// Address Range: [[005af3b0, 005af52d]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_005af3b0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_005af3b0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
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
  float local_a8;
  uint local_98;
  uint local_88;
  float local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar7 = 0;
  core_xform_cpp_inverse_FUN_00592830
            ((model_ptr->bone_transform).bone_model_matrices +
             this_ptr->collide_bones[bone_index].parent_bone_index);
  puVar4 = (uint *)&stack0xffffffac;
  puVar6 = (uint *)&stack0xffffff7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (&stack0xffffff7c,&this_ptr->collide_bones[bone_index].world_matrix);
  pfVar3 = (float *)&stack0xfffffeec;
  pfVar5 = &stack0xfffffebc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
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
  core_xform_cpp_inverse_FUN_00592830(&stack0xfffffebc);
  puVar4 = (uint *)&stack0xffffff1c;
  puVar6 = (uint *)&stack0xffffff4c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  pCVar2 = &this_ptr->collide_bones[bone_index].position_offset;
  local_24 = local_a8;
  local_20 = local_98;
  local_1c = local_88;
  local_18 = local_a8;
  (&stack0xffffffe0)[(uint)bVar7 * -2 + 3] = (&stack0xffffffe0)[(uint)bVar7 * 0xfffffffe];
  (&stack0xffffffe0)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       (&stack0xffffffe0)[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (pCVar2 == (CVector3f *)&stack0xffffffe8) {
    return;
  }
  pCVar2->x = local_18;
  this_ptr->collide_bones[bone_index].position_offset.y = local_14;
  this_ptr->collide_bones[bone_index].position_offset.z = local_10;
  return;
}
