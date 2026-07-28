// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_00436580
// Address: 00436580
// Address Range: [[00436580, 004366ec]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_00436580(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_00436580(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float local_138;
  float local_134;
  int local_130;
  float local_128;
  float local_124;
  int local_120;
  float local_118;
  int local_114;
  int local_110;
  uint local_108 [12];
  uint local_d8 [12];
  uint local_a8 [3];
  int local_9c;
  int local_8c;
  int local_7c;
  uint local_78 [12];
  uint local_48 [12];
  uint local_18 [3];
  
  bVar7 = 0;
  core_xform_cpp_inverse_FUN_0055bd00
            ((model_ptr->bone_transform).bone_world_matrices +
             this_ptr->vertices[0x2d5].connected_indices[bone_index * 0x2b + 0xe]);
  puVar4 = local_48;
  puVar6 = local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
            (local_78,this_ptr->vertices[0x2d5].rest_lengths + bone_index * 0x2b + -1);
  pfVar3 = (float *)local_d8;
  pfVar5 = &local_138;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  this_ptr->vertices[0x2d5].rest_lengths[bone_index * 0x2b + 0xb] = local_138;
  this_ptr->vertices[0x2d5].rest_lengths[bone_index * 0x2b + 0xc] = local_128;
  this_ptr->vertices[0x2d5].rest_lengths[bone_index * 0x2b + 0xd] = local_118;
  this_ptr->vertices[0x2d5].rest_lengths[bone_index * 0x2b + 0xe] = local_134;
  this_ptr->vertices[0x2d5].rest_lengths[bone_index * 0x2b + 0xf] = local_124;
  this_ptr->vertices[0x2d5].bone_index[bone_index * 0x2b + -10] = local_114;
  this_ptr->vertices[0x2d5].bone_index[bone_index * 0x2b + -9] = local_130;
  this_ptr->vertices[0x2d5].bone_index[bone_index * 0x2b + -8] = local_120;
  this_ptr->vertices[0x2d5].bone_index[bone_index * 0x2b + -7] = local_110;
  core_xform_cpp_inverse_FUN_0055bd00(&local_138);
  puVar4 = local_108;
  puVar6 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  piVar2 = this_ptr->vertices[0x2d5].bone_index + bone_index * 0x2b + -5;
  if (piVar2 == local_18) {
    return;
  }
  *piVar2 = local_9c;
  this_ptr->vertices[0x2d5].bone_index[bone_index * 0x2b + -4] = local_8c;
  this_ptr->vertices[0x2d5].bone_index[bone_index * 0x2b + -3] = local_7c;
  return;
}
