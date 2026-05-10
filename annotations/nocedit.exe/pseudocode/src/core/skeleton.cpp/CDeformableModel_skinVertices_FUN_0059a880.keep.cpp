// Name: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
// Address: 0059a880
// MANUAL RECONSTRUCTION
// Address Range: [[0059a880, 0059a9f5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  SVert *vert;
  CVector3f *input_vector;
  int iVar5;
  CVector3f local_54;
  CVector3f local_3c;
  CVector3f local_30;
  int local_20;
  int *local_18;

  local_18 = output_buffer;
  for (local_20 = 0; local_20 < this_ptr->vertex_count[lod_index]; local_20 = local_20 + 1) {
    vert = this_ptr->vertex_data_ptr[lod_index] + local_20;
    input_vector = &vert->position;
    if (vert->num_bone_influences == 1) {
      pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_3c,input_vector,bone_matrices + vert->bone_indices[0]);
      if (&local_30 != pCVar2) {
        local_30 = *pCVar2;
      }
    }
    else {
      local_30.y = 0.0;
      local_30.x = 0.0;
      local_30.z = 0.0;
      for (iVar5 = 0; iVar5 < (int)(uint)vert->num_bone_influences; iVar5 = iVar5 + 1) {
        pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_54,input_vector,bone_matrices + vert->bone_indices[iVar5]);
        input_vector = input_vector + 1;
        local_30.x = local_30.x + pCVar1->x * vert->bone_weights[iVar5];
        local_30.y = local_30.y + pCVar1->y * vert->bone_weights[iVar5];
        local_30.z = local_30.z + pCVar1->z * vert->bone_weights[iVar5];
      }
    }
    *local_18 = (int)ROUND(local_30.x * 256.0f);
    local_18[1] = (int)ROUND(local_30.y * 256.0f);
    local_18[2] = (int)ROUND(local_30.z * 256.0f);
    local_18 = local_18 + 3;
  }
  return;
}
