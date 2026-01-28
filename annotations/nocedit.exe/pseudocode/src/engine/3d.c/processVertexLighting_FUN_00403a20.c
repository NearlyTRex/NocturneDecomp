// Name: engine_3d.c_processVertexLighting_FUN_00403a20
// Address: 00403a20
// Address Range: [[00403a20, 00403a7c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00403a20(SVertexBatch *vertex_batch)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_processVertexLighting_FUN_00403a20(SVertexBatch *vertex_batch)

{
  int iVar1;
  int iVar2;
  SVertexBatch *vertex_position;
  
  iVar2 = 0;
  vertex_position = vertex_batch;
  if (0 < vertex_batch->vertex_count) {
    do {
      vertex_position = (SVertexBatch *)&vertex_position->vertex_buffer;
      iVar1 = vertex_batch->render_queue_index + iVar2;
      iVar2 = iVar2 + 1;
      engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850
                (iVar1 + g_ProcessedVertexOffset,(CVector3i *)vertex_position);
    } while (iVar2 < vertex_batch->vertex_count);
  }
  return (SMRGLHeaderExtended *)(&vertex_batch->vertex_buffer + vertex_batch->vertex_count);
}
