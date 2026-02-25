// Name: engine_3d.c_processVertexLighting_FUN_00403a20
// Address: 00403a20
// Address Range: [[00403a20, 00403a7c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00403a20(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00403a20(SMRGLHeaderExtended *mrgl)

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
      engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850
                (iVar1 + g_ProcessedVertexOffset,vertex_position);
    } while (iVar2 < mrgl->child_count);
  }
  return mrgl + mrgl->child_count + 1;
}
