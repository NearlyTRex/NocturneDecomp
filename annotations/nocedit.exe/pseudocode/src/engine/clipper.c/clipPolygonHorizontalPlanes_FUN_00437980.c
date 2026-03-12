// Name: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980
// Address: 00437980
// Address Range: [[00437980, 00437aa7]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonHorizontalPlanes_FUN_00437980(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonHorizontalPlanes_FUN_00437980(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar1;
  SRenderVertex *v1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
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
        pSVar2 = v1;
        pSVar3 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
          pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar6 * -8 + 4);
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(char *)&(pSVar3->projected_vertex).transformed_x =
               (char)(pSVar2->projected_vertex).transformed_x;
          pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar6 * -2 + 1);
          pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar6 * -2 + 1);
        }
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                  (g_ClipperWorkingBuffer + uVar2,v1,
                   g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        break;
      case 2:
        pSVar4 = v1;
        pSVar5 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          *(char *)&(pSVar5->projected_vertex).transformed_x =
               (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = pSVar4;
          pSVar5 = pSVar5;
        }
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
