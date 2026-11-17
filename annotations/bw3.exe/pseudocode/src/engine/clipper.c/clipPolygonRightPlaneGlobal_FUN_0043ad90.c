// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_0043ad90
// Address: 0043ad90
// Address Range: [[0043ad90, 0043ae5c]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043ad90(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043ad90(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  byte bVar7;
  int iStack_14;
  
  bVar7 = 0;
  iStack_14 = 0;
  if (0 < g_INT_007e4d54) {
    v1 = g_SRenderVertex_ARRAY_007e5364;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == g_INT_007e4d54) {
        uVar2 = uVar2 ^ g_INT_007e4d54;
      }
      pSVar4 = g_SRenderVertex_ARRAY_007e5364 + uVar2;
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if (g_SRenderVertex_ARRAY_007e5364[uVar2].projected_vertex.transformed_z <=
          (pSVar4->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58;
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
        g_INT_007e4d58 = g_INT_007e4d58 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                  (pSVar4,v1,g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58);
        g_INT_007e4d58 = g_INT_007e4d58 + 1;
        break;
      case 2:
        pSVar5 = v1;
        pSVar6 = g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58;
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
        g_INT_007e4d58 = g_INT_007e4d58 + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                  (v1,pSVar4,g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58);
        g_INT_007e4d58 = g_INT_007e4d58 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < g_INT_007e4d54);
  }
  return;
}
