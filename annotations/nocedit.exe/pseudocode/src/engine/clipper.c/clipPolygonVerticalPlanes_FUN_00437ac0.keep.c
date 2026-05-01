// Name: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0
// Address: 00437ac0
// MANUAL RECONSTRUCTION
// Address Range: [[00437ac0, 00437bed]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonVerticalPlanes_FUN_00437ac0(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonVerticalPlanes_FUN_00437ac0(void)

{
  byte bVar1;
  uint uVar2;
  SRenderVertex *v1;
  int local_14;

  local_14 = 0;
  if (0 < g_IntermediateVertexCount) {
    v1 = g_ClipperIntermediateBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_IntermediateVertexCount) {
        uVar2 = uVar2 ^ g_IntermediateVertexCount;
      }
      bVar1 = (v1->projected_vertex).transformed_y <= -(v1->projected_vertex).transformed_z;
      if (g_ClipperIntermediateBuffer[uVar2].projected_vertex.transformed_y <=
          -g_ClipperIntermediateBuffer[uVar2].projected_vertex.transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        g_ClippedVertexBuffer[g_ClippedVertexCount] = *v1;
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                  (g_ClipperIntermediateBuffer + uVar2,v1,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 2:
        g_ClippedVertexBuffer[g_ClippedVertexCount] = *v1;
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                  (v1,g_ClipperIntermediateBuffer + uVar2,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_IntermediateVertexCount);
  }
  return;
}
