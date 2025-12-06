// Name: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0
// Address: 00437ac0
// Address Range: [[00437ac0, 00437bed]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonVerticalPlanes_FUN_00437ac0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
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
        pSVar4 = v1;
        pSVar5 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                  (g_ClipperIntermediateBuffer + uVar2,v1,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 2:
        pSVar4 = v1;
        pSVar5 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
