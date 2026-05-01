// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840
// Address: 00437840
// MANUAL RECONSTRUCTION
// Address Range: [[00437840, 0043796c]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00437840(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00437840(void)

{
  byte bVar1;
  uint uVar2;
  SRenderVertex *v1;
  SRenderVertex *pSVar2;
  int local_14;

  local_14 = 0;
  if (0 < g_OutputVertexCount) {
    v1 = g_ClipperOutputBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_OutputVertexCount) {
        uVar2 = uVar2 ^ g_OutputVertexCount;
      }
      pSVar2 = g_ClipperOutputBuffer + uVar2;
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((pSVar2->projected_vertex).transformed_x <=
          -g_ClipperOutputBuffer[uVar2].projected_vertex.transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        g_ClipperWorkingBuffer[g_TempVertexCount] = *v1;
        g_TempVertexCount = g_TempVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                  (pSVar2,v1,g_ClipperWorkingBuffer + g_TempVertexCount);
        g_TempVertexCount = g_TempVertexCount + 1;
        break;
      case 2:
        g_ClipperWorkingBuffer[g_TempVertexCount] = *v1;
        g_TempVertexCount = g_TempVertexCount + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                  (v1,pSVar2,g_ClipperWorkingBuffer + g_TempVertexCount);
        g_TempVertexCount = g_TempVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_OutputVertexCount);
  }
  return;
}
