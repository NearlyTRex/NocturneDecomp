// Name: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
// Address: 0059a880
// Address Range: [[0059a880, 0059a9f5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  float *pfVar4;
  CVector3f *input_vector;
  float *pfVar1;
  int iVar5;
  CVector3f local_54;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  float *local_14;
  
  local_18 = output_buffer;
  local_1c = 0;
  for (local_20 = 0; local_20 < this_ptr->vertex_count[lod_index]; local_20 = local_20 + 1) {
    pfVar3 = (float *)(this_ptr->vertex_data_ptr[lod_index]->bone_indices + local_1c + -1);
    input_vector = (CVector3f *)(pfVar3 + 4);
    if (*(char *)pfVar3 == '\x01') {
      pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_3c,input_vector,bone_matrices + *(byte *)((int)pfVar3 + 1));
      if (&local_30 != pCVar2) {
        local_30.x = pCVar2->x;
        local_30.y = pCVar2->y;
        local_30.z = pCVar2->z;
      }
    }
    else {
      local_30.y = 0.0;
      local_30.x = 0.0;
      local_30.z = 0.0;
      pfVar1 = pfVar3;
      pfVar4 = pfVar3;
      for (iVar5 = 0; pfVar4 = pfVar4 + 1, iVar5 < (int)(uint)*(byte *)pfVar3; iVar5 = iVar5 + 1) {
        pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_54,input_vector,bone_matrices + *(byte *)((int)pfVar1 + 1));
        pfVar1 = (float *)((int)pfVar1 + 1);
        input_vector = input_vector + 1;
        local_30.x = local_30.x + pCVar1->x * *pfVar4;
        local_30.y = local_30.y + pCVar1->y * *pfVar4;
        local_30.z = local_30.z + pCVar1->z * *pfVar4;
      }
    }
    *local_18 = (int)ROUND(local_30.x * 256.0f);
    local_18[1] = (int)ROUND(local_30.y * 256.0f);
    local_18[2] = (int)ROUND(local_30.z * 256.0f);
    local_18 = local_18 + 3;
    local_1c = local_1c + 0x34;
  }
  return;
}
