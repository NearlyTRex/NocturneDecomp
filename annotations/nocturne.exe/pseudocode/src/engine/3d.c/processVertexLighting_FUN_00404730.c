// Name: engine_3d.c_processVertexLighting_FUN_00404730
// Address: 00404730
// Address Range: [[00404730, 0040478c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended *mrgl)

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
      engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90
                (iVar1 + DAT_006b0264,vertex_position);
    } while (iVar2 < mrgl->child_count);
  }
  return mrgl + mrgl->child_count + 1;
}
