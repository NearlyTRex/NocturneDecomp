// Name: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00563e90
// Address: 00563e90
// Address Range: [[00563e90, 00563ff1]]
// Convention: __stack4_esi
// Signature: CVector3f * __stack4_esi core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00563e90(CDeformableModel *this_ptr,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices,CVector3f *output_pos)

#include "nocturne.h"

CVector3f * __stack4_esi core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00563e90(CDeformableModel *this_ptr,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices,CVector3f *output_pos)

{
  SVert *pSVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1058 [1016];
  float fStack_70;
  float fStack_64;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  SVert *pSStack_18;
  CVector3f *pCStack_14;
  SVert *pSStack_10;
  
  bVar5 = 0;
  pCStack_1c = output_pos;
  pSVar1 = this_ptr->vertex_data_ptr[lod_index] + vertex_index;
  pSStack_18 = pSVar1;
  if (pSVar1->num_bone_influences == '\x01') {
    core_xform_cpp_FUN_005b5080(pSVar1->bone_offsets,bone_matrices + pSVar1->bone_indices[0]);
    pfVar3 = (float *)&stack0xffffffa8;
  }
  else {
    pCStack_14 = pSVar1->bone_offsets;
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    fStack_40 = 0.0;
    pSStack_10 = pSVar1;
    for (iVar2 = 0; pSVar1 = (SVert *)pSVar1->bone_weights,
        iVar2 < (int)(uint)pSStack_18->num_bone_influences; iVar2 = iVar2 + 1) {
      core_xform_cpp_FUN_005b5080(pCStack_14,bone_matrices + pSStack_10->bone_indices[0]);
      fStack_4c = fStack_64;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_28 = fStack_4c * *(float *)pSVar1;
      fStack_24 = fStack_48 * *(float *)pSVar1;
      fStack_20 = fStack_44 * *(float *)pSVar1;
      fStack_34 = fStack_4c * *(float *)pSVar1;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      pCStack_14 = pCStack_14 + 1;
      fStack_40 = fStack_40 + fStack_34;
      fStack_3c = fStack_3c + fStack_30;
      fStack_38 = fStack_38 + fStack_2c;
      pSStack_10 = (SVert *)pSStack_10->bone_indices;
    }
    pfVar3 = &stack0xffffffc0;
  }
  fStack_70 = *pfVar3;
  *(float *)(&stack0xffffff94 + (uint)bVar5 * -8) = pfVar3[(uint)bVar5 * -2 + 1];
  *(float *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       (pfVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  puVar4 = (uint *)((int)pCStack_1c + (uint)bVar5 * -8 + 4);
  pCStack_1c->x = fStack_70;
  *puVar4 = *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return pCStack_1c;
}
