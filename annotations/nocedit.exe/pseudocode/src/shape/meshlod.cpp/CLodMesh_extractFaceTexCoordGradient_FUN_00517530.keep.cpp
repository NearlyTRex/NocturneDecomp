// Name: shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
// Address: 00517530
// MANUAL RECONSTRUCTION
// Address Range: [[00517530, 0051762a]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh *this_ptr,int tri_index,int corner_idx,CVector3f *out_gradient,float *out_offset)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh *this_ptr,int tri_index,int corner_idx,CVector3f *out_gradient,float *out_offset)

{
  CLodVert *pCVar2;
  CLodVert *pCVar3;
  CVector3f local_positions[3];
  float local_uvs[3];
  CLodFace *pCVar1;

  pCVar1 = this_ptr->tri_data;
  __arrinit(local_positions,3,&g_CVectorTypeInfo);
  pCVar2 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_0;
  if ((CLodVert *)&local_positions[0] != pCVar2) {
    local_positions[0] = pCVar2->position;
  }
  pCVar3 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_1;
  if ((CLodVert *)&local_positions[1] != pCVar3) {
    local_positions[1] = pCVar3->position;
  }
  pCVar3 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_2;
  if ((CLodVert *)&local_positions[2] != pCVar3) {
    local_positions[2] = pCVar3->position;
  }
  local_uvs[0] = pCVar1[tri_index].uv_coords[0][corner_idx];
  local_uvs[1] = pCVar1[tri_index].uv_coords[1][corner_idx];
  local_uvs[2] = pCVar1[tri_index].uv_coords[2][corner_idx];
  shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0
            (3,local_positions,local_uvs,&pCVar1[tri_index].normal,out_gradient,out_offset);
  return;
}
