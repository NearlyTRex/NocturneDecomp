// Name: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700
// Address: 00437700
// Address Range: [[00437700, 00437822]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00437700(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  byte bVar7;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < g_InputVertexCount) {
    v1 = g_ClipperInputBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_InputVertexCount) {
        uVar2 = uVar2 ^ g_InputVertexCount;
      }
      pSVar4 = g_ClipperInputBuffer + uVar2;
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if (g_ClipperInputBuffer[uVar2].projected_vertex.transformed_z <=
          (pSVar4->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_ClipperOutputBuffer + g_OutputVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar5->projected_vertex).transformed_x =
               (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -2 + 1);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -2 + 1);
        }
        g_OutputVertexCount = g_OutputVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                  (pSVar4,v1,g_ClipperOutputBuffer + g_OutputVertexCount);
        g_OutputVertexCount = g_OutputVertexCount + 1;
        break;
      case 2:
        pSVar5 = v1;
        pSVar6 = g_ClipperOutputBuffer + g_OutputVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar6->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar6->projected_vertex).transformed_x =
               (char)(pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -2 + 1);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + (uint)bVar7 * -2 + 1);
        }
        g_OutputVertexCount = g_OutputVertexCount + 1;
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                  (v1,pSVar4,g_ClipperOutputBuffer + g_OutputVertexCount);
        g_OutputVertexCount = g_OutputVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_InputVertexCount);
  }
  return;
}
