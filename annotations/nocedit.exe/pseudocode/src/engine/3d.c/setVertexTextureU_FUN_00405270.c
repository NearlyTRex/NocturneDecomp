// Name: engine_3d.c_setVertexTextureU_FUN_00405270
// Address: 00405270
// Address Range: [[00405270, 004052ad]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00405270(SVertexBatch *vertex_batch)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00405270(SVertexBatch *vertex_batch)

{
  int iVar1;
  CVector3i *pCVar2;
  
  pCVar2 = &vertex_batch->vertex_buffer;
  iVar1 = 0;
  if (0 < vertex_batch->vertex_count) {
    do {
      g_RenderVertexBuffer[vertex_batch->render_queue_index + iVar1].u = pCVar2->x << 0x10;
      iVar1 = iVar1 + 1;
      pCVar2 = (CVector3i *)&pCVar2->y;
    } while (iVar1 < vertex_batch->vertex_count);
  }
  return (SMRGLHeaderExtended *)(&(vertex_batch->vertex_buffer).x + vertex_batch->vertex_count);
}
