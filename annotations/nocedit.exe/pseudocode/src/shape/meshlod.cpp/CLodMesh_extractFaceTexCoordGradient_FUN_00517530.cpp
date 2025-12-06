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
  BADSPACEBASE *in_ESP;
  float *in_stack_00000018;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pCVar1 = this_ptr->tri_data;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffffc8,3,&g_CVectorTypeInfo);
  pCVar2 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_0;
  if ((CLodVert *)&local_34 != pCVar2) {
    local_34.x = (pCVar2->position).x;
    local_34.y = (pCVar2->position).y;
    local_34.z = (pCVar2->position).z;
  }
  pCVar2 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_1;
  if ((CLodVert *)&local_28 != pCVar2) {
    local_28 = (pCVar2->position).x;
    local_24 = (pCVar2->position).y;
    local_20 = (pCVar2->position).z;
  }
  pCVar2 = this_ptr->vertex_data + pCVar1[tri_index].vertex_idx_2;
  if ((CLodVert *)&local_1c != pCVar2) {
    local_1c = (pCVar2->position).x;
    local_18 = (pCVar2->position).y;
    local_14 = (pCVar2->position).z;
  }
  local_10 = pCVar1[tri_index].uv_coords[0][(int)out_gradient];
  local_c = pCVar1[tri_index].uv_coords[1][(int)out_gradient];
  shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0
            (3,&local_34,&local_10,&pCVar1[tri_index].normal,(CVector3f *)out_offset,
             in_stack_00000018);
  return;
}
