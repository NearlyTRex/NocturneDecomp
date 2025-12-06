// Name: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
// Address: 0059aa00
// Address Range: [[0059aa00, 0059ab16]]
// Convention: __cdecl
// Signature: CVector3f * core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index, CMatrix3x4f * bone_matrices)

#include "nocturne.h"

CVector3f * __cdecl
core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
          (CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,
          CMatrix3x4f *bone_matrices)

{
  CVector3f *pCVar1;
  SVert *pSVar2;
  BADSPACEBASE *in_ESP;
  byte *unaff_EBP;
  CVector3f *input_vector;
  SVert *pSVar3;
  int iVar4;
  int in_stack_00000018;
  CVector3f CStack_34;
  uint local_28;
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
    local_28 = 0;
    local_24 = 0.0;
    CStack_34.z = 0.0;
    pSVar2 = pSVar3;
    while( true ) {
      pSVar2 = (SVert *)pSVar2->bone_weights;
      if ((int)(uint)*unaff_EBP <= iVar4) break;
      pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&CStack_34,input_vector,
                          (CMatrix3x4f *)((uint)pSVar3->bone_indices[0] * 0x30 + in_stack_00000018))
      ;
      local_18 = pCVar1->x * *(float *)pSVar2;
      local_14 = (SVert *)(pCVar1->y * *(float *)pSVar2);
      unaff_EBP = (byte *)(pCVar1->z * *(float *)pSVar2);
      pSVar3 = (SVert *)pSVar3->bone_indices;
      iVar4 = iVar4 + 1;
      input_vector = input_vector + 1;
      local_24 = local_24 + local_18;
      local_20 = local_20 + (float)local_14;
      local_1c = local_1c + (float)unaff_EBP;
    }
    *(uint *)lod_index = local_28;
    *(float *)(lod_index + 4) = local_24;
    *(float *)(lod_index + 8) = local_20;
  }
  return (CVector3f *)lod_index;
}
