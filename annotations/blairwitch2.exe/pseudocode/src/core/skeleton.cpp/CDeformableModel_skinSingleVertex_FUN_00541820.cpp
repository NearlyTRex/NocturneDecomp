// Name: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00541820
// Address: 00541820
// Address Range: [[00541820, 00541981]]
// Convention: __stack4_esi
// Signature: CVector3f * __stack4_esi core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00541820(CDeformableModel *this_ptr,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices,CVector3f *output_pos)

#include "nocturne.h"

CVector3f * __stack4_esi core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00541820(CDeformableModel *this_ptr,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices,CVector3f *output_pos)

{
  SVert *pSVar1;
  int iVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1058 [1016];
  float fStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [4];
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
    core_xform_cpp_transformVector3x4_FUN_00591530
              (pSVar1->bone_offsets,bone_matrices + pSVar1->bone_indices[0],&CStack_58);
    pCVar3 = &CStack_58;
  }
  else {
    pCStack_14 = pSVar1->bone_offsets;
    CStack_40.y = 0.0;
    CStack_40.z = 0.0;
    CStack_40.x = 0.0;
    pSStack_10 = pSVar1;
    for (iVar2 = 0; pSVar1 = (SVert *)pSVar1->bone_weights,
        iVar2 < (int)(uint)pSStack_18->num_bone_influences; iVar2 = iVar2 + 1) {
      core_xform_cpp_transformVector3x4_FUN_00591530
                (pCStack_14,bone_matrices + pSStack_10->bone_indices[0],&CStack_64);
      fStack_4c = CStack_64.x;
      afStack_48[(uint)bVar5 * -2] = *(float *)((int)&CStack_64 + (uint)bVar5 * -8 + 4);
      afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)&CStack_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      afStack_30[2] = fStack_4c * *(float *)pSVar1;
      afStack_30[3] = afStack_48[0] * *(float *)pSVar1;
      fStack_20 = afStack_48[1] * *(float *)pSVar1;
      fStack_34 = fStack_4c * *(float *)pSVar1;
      afStack_30[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2 + 3];
      afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      pCStack_14 = pCStack_14 + 1;
      CStack_40.x = CStack_40.x + fStack_34;
      CStack_40.y = CStack_40.y + afStack_30[0];
      CStack_40.z = CStack_40.z + afStack_30[1];
      pSStack_10 = (SVert *)pSStack_10->bone_indices;
    }
    pCVar3 = (CVector3f *)(afStack_48 + 2);
  }
  puVar4 = (uint *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
  fStack_70 = pCVar3->x;
  *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8) = *puVar4;
  *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar4[(uint)bVar5 * -2 + 1];
  puVar4 = (uint *)((int)pCStack_1c + (uint)bVar5 * -8 + 4);
  pCStack_1c->x = fStack_70;
  *puVar4 = *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return pCStack_1c;
}
