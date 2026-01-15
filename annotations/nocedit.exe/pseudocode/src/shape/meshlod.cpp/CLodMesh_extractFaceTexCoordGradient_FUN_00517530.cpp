// Name: shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
// Address: 00517530
// Address Range: [[00517530, 0051762a]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh * this_ptr, int tri_index, int corner_idx, CVector3f * out_gradient, float * out_offset)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
          (CLodMesh *this_ptr,int tri_index,int corner_idx,CVector3f *out_gradient,float *out_offset
          )

{
  CLodFace *pCVar1;
  CLodVert *pCVar2;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pCVar1 = this_ptr->tri_data;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_38,3,&g_CVectorTypeInfo);
  pCVar2 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_0;
  if ((CLodVert *)&local_38 != pCVar2) {
    local_38.x = (pCVar2->position).x;
    local_38.y = (pCVar2->position).y;
    local_38.z = (pCVar2->position).z;
  }
  pCVar2 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_1;
  if ((CLodVert *)&local_2c != pCVar2) {
    local_2c = (pCVar2->position).x;
    local_28 = (pCVar2->position).y;
    local_24 = (pCVar2->position).z;
  }
  pCVar2 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_2;
  if ((CLodVert *)&local_20 != pCVar2) {
    local_20 = (pCVar2->position).x;
    local_1c = (pCVar2->position).y;
    local_18 = (pCVar2->position).z;
  }
  local_14 = pCVar1[tri_index].uv_coords[0][corner_idx];
  local_10 = pCVar1[tri_index].uv_coords[1][corner_idx];
  local_c = pCVar1[tri_index].uv_coords[2][corner_idx];
  shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0
            (3,&local_38,&local_14,&pCVar1[tri_index].normal,out_gradient,out_offset);
  return;
}
