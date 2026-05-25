// Name: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
// Address: 0059aa00
// MANUAL RECONSTRUCTION
// Address Range: [[0059aa00, 0059ab16]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices)

{
  SVert *pSVar1;
  CVector3f *pCVar1;
  CVector3f *input_vector;
  int iVar4;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;

  pSVar1 = this_ptr->vertex_data_ptr[lod_index] + vertex_index;
  input_vector = &pSVar1->position;
  if (pSVar1->num_bone_influences == '\x01') {
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (output_pos,input_vector,bone_matrices + pSVar1->bone_indices[0]);
  }
  else {
    local_28 = 0.0;
    local_24 = 0.0;
    local_2c = 0.0;
    for (iVar4 = 0; iVar4 < (int)(uint)pSVar1->num_bone_influences; iVar4 = iVar4 + 1) {
      pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_38,input_vector,bone_matrices + pSVar1->bone_indices[iVar4]);
      input_vector = input_vector + 1;
      local_2c = local_2c + pCVar1->x * pSVar1->bone_weights[iVar4];
      local_28 = local_28 + pCVar1->y * pSVar1->bone_weights[iVar4];
      local_24 = local_24 + pCVar1->z * pSVar1->bone_weights[iVar4];
    }
    output_pos->x = local_2c;
    output_pos->y = local_28;
    output_pos->z = local_24;
  }
  return output_pos;
}
