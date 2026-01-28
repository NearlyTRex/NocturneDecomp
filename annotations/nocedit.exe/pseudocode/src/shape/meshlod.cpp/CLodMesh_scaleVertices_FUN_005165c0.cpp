// Name: shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0
// Address: 005165c0
// Address Range: [[005165c0, 00516614]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(CLodMesh *this_ptr,CVector3f *scale_factors)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(CLodMesh *this_ptr,CVector3f *scale_factors)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar1 = 0;
    do {
      *(float *)(this_ptr->vertex_data->lod_workspace + iVar1 + -0x10) =
           scale_factors->x * *(float *)(this_ptr->vertex_data->lod_workspace + iVar1 + -0x10);
      *(float *)(this_ptr->vertex_data->lod_workspace + iVar1 + -0xc) =
           scale_factors->y * *(float *)(this_ptr->vertex_data->lod_workspace + iVar1 + -0xc);
      iVar2 = iVar2 + 1;
      *(float *)(this_ptr->vertex_data->lod_workspace + iVar1 + -8) =
           scale_factors->z * *(float *)(this_ptr->vertex_data->lod_workspace + iVar1 + -8);
      iVar1 = iVar1 + 0x4c4;
    } while (iVar2 < this_ptr->vertex_count);
  }
  shape_meshlod_cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(this_ptr);
  return;
}
