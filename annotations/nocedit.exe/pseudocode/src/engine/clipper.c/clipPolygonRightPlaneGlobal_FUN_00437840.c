// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840
// Address: 00437840
// Address Range: [[00437840, 0043796c]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00437840(void)

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
  if (0 < g_OutputVertexCount) {
    v1 = g_ClipperOutputBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_OutputVertexCount) {
        uVar2 = uVar2 ^ g_OutputVertexCount;
      }
      pSVar4 = g_ClipperOutputBuffer + uVar2;
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((pSVar4->projected_vertex).transformed_x <=
          -g_ClipperOutputBuffer[uVar2].projected_vertex.transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_ClipperWorkingBuffer + g_TempVertexCount;
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
        g_TempVertexCount = g_TempVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                  (pSVar4,v1,g_ClipperWorkingBuffer + g_TempVertexCount);
        g_TempVertexCount = g_TempVertexCount + 1;
        break;
      case 2:
        pSVar5 = v1;
        pSVar6 = g_ClipperWorkingBuffer + g_TempVertexCount;
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
        g_TempVertexCount = g_TempVertexCount + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                  (v1,pSVar4,g_ClipperWorkingBuffer + g_TempVertexCount);
        g_TempVertexCount = g_TempVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_OutputVertexCount);
  }
  return;
}
