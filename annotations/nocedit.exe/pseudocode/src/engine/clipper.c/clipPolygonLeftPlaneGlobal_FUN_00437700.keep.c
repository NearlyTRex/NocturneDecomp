// Name: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700
// Address: 00437700
// MANUAL RECONSTRUCTION
// Address Range: [[00437700, 00437822]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00437700(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00437700(void)

{
  byte bVar1;
  uint uVar2;
  SRenderVertex *v1;
  SRenderVertex *pSVar2;
  int local_14;

  local_14 = 0;
  if (0 < g_InputVertexCount) {
    v1 = g_ClipperInputBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_InputVertexCount) {
        uVar2 = uVar2 ^ g_InputVertexCount;
      }
      pSVar2 = g_ClipperInputBuffer + uVar2;
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if (g_ClipperInputBuffer[uVar2].projected_vertex.transformed_z <=
          (pSVar2->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        g_ClipperOutputBuffer[g_OutputVertexCount] = *v1;
        g_OutputVertexCount = g_OutputVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                  (pSVar2,v1,g_ClipperOutputBuffer + g_OutputVertexCount);
        g_OutputVertexCount = g_OutputVertexCount + 1;
        break;
      case 2:
        g_ClipperOutputBuffer[g_OutputVertexCount] = *v1;
        g_OutputVertexCount = g_OutputVertexCount + 1;
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                  (v1,pSVar2,g_ClipperOutputBuffer + g_OutputVertexCount);
        g_OutputVertexCount = g_OutputVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_InputVertexCount);
  }
  return;
}
