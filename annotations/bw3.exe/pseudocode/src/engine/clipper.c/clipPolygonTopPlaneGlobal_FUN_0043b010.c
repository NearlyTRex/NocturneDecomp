// Name: engine_clipper.c_clipPolygonTopPlaneGlobal_FUN_0043b010
// Address: 0043b010
// Address Range: [[0043b010, 0043b071] [0043b09c, 0043b0e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonTopPlaneGlobal_FUN_0043b010(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonTopPlaneGlobal_FUN_0043b010(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  byte bVar6;
  int iStack_14;
  
  bVar6 = 0;
  iStack_14 = 0;
  if (0 < g_TempVertexCount) {
    v1 = g_ClipperWorkingBuffer;
    do {
      uVar2 = iStack_14 + 1;
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
        pSVar4 = v1;
        pSVar5 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar5->projected_vertex).transformed_x =
               (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
        }
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
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
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar5->projected_vertex).transformed_x =
               (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
        }
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                  (v1,g_ClipperWorkingBuffer + uVar2,
                   g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < g_TempVertexCount);
  }
  return;
}
