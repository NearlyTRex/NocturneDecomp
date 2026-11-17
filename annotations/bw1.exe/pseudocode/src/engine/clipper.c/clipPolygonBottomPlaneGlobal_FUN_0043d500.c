// Name: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_0043d500
// Address: 0043d500
// Address Range: [[0043d500, 0043d5d7]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043d500(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043d500(void)

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
  if (0 < g_IntermediateVertexCount) {
    v1 = g_ClipperIntermediateBuffer;
    do {
      uVar2 = iStack_14 + 1;
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
        pSVar5 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
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
        g_INT_007c7554 = g_INT_007c7554 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                  (g_ClipperIntermediateBuffer + uVar2,v1,
                   g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
        g_INT_007c7554 = g_INT_007c7554 + 1;
        break;
      case 2:
        pSVar4 = v1;
        pSVar5 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
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
        g_INT_007c7554 = g_INT_007c7554 + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                  (v1,g_ClipperIntermediateBuffer + uVar2,
                   g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
        g_INT_007c7554 = g_INT_007c7554 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < g_IntermediateVertexCount);
  }
  return;
}
