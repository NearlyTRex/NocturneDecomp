// Name: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
// Address: 0059aa00
// Address Range: [[0059aa00, 0059ab16]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices)

{
  CVector3f *pCVar1;
  SVert *pSVar2;
  CVector3f *input_vector;
  SVert *pSVar3;
  int iVar4;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  SVert *local_14;
  
  pSVar3 = this_ptr->vertex_data_ptr[lod_index] + vertex_index;
  input_vector = &pSVar3->position;
  local_14 = pSVar3;
  if (pSVar3->num_bone_influences == '\x01') {
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (output_pos,input_vector,bone_matrices + pSVar3->bone_indices[0]);
  }
  else {
    iVar4 = 0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_2c = 0.0;
    pSVar2 = pSVar3;
    while( true ) {
      pSVar2 = (SVert *)pSVar2->bone_weights;
      if ((int)(uint)local_14->num_bone_influences <= iVar4) break;
      pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_38,input_vector,bone_matrices + pSVar3->bone_indices[0]);
      local_20 = pCVar1->x * *(float *)pSVar2;
      local_1c = pCVar1->y * *(float *)pSVar2;
      local_18 = pCVar1->z * *(float *)pSVar2;
      pSVar3 = (SVert *)pSVar3->bone_indices;
      iVar4 = iVar4 + 1;
      input_vector = input_vector + 1;
      local_2c = local_2c + local_20;
      local_28 = local_28 + local_1c;
      local_24 = local_24 + local_18;
    }
    output_pos->x = local_2c;
    output_pos->y = local_28;
    output_pos->z = local_24;
  }
  return output_pos;
}
