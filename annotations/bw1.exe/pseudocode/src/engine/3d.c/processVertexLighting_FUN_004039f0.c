// Name: engine_3d.c_processVertexLighting_FUN_004039f0
// Address: 004039f0
// Address Range: [[004039f0, 00403a4c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_004039f0(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_004039f0(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  int iVar2;
  CVector3i *vertex_position;
  
  iVar2 = 0;
  vertex_position = (CVector3i *)mrgl;
  if (0 < mrgl->child_count) {
    do {
      vertex_position = vertex_position + 1;
      iVar1 = (mrgl->base).count + iVar2;
      iVar2 = iVar2 + 1;
      engine_light_cpp_calculateAndStoreVertexLight_FUN_004ffe10
                (iVar1 + DAT_00713a60,vertex_position);
    } while (iVar2 < mrgl->child_count);
  }
  return mrgl + mrgl->child_count + 1;
}
