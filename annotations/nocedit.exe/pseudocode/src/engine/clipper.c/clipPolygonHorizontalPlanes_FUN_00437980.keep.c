// Name: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980
// Address: 00437980
// MANUAL RECONSTRUCTION
// Address Range: [[00437980, 00437aa7]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonHorizontalPlanes_FUN_00437980(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonHorizontalPlanes_FUN_00437980(void)

{
  byte bVar1;
  uint uVar2;
  SRenderVertex *v1;
  int local_14;

  local_14 = 0;
  if (0 < g_TempVertexCount) {
    v1 = g_ClipperWorkingBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_TempVertexCount) {
        uVar2 = uVar2 ^ g_TempVertexCount;
      }
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_y;
      if (g_ClipperWorkingBuffer[uVar2].projected_vertex.transformed_z <=
          g_ClipperWorkingBuffer[uVar2].projected_vertex.transformed_y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        g_ClipperIntermediateBuffer[g_IntermediateVertexCount] = *v1;
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                  (g_ClipperWorkingBuffer + uVar2,v1,
                   g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        break;
      case 2:
        g_ClipperIntermediateBuffer[g_IntermediateVertexCount] = *v1;
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                  (v1,g_ClipperWorkingBuffer + uVar2,
                   g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_TempVertexCount);
  }
  return;
}
