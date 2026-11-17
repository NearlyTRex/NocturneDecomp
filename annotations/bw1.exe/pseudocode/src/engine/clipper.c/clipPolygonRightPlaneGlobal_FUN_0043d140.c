// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_0043d140
// Address: 0043d140
// Address Range: [[0043d140, 0043d262]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043d140(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043d140(void)

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
  if (0 < g_INT_007c8420) {
    v1 = g_SRenderVertex_ARRAY_007c8a30;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == g_INT_007c8420) {
        uVar2 = uVar2 ^ g_INT_007c8420;
      }
      pSVar4 = g_SRenderVertex_ARRAY_007c8a30 + uVar2;
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if (g_SRenderVertex_ARRAY_007c8a30[uVar2].projected_vertex.transformed_z <=
          (pSVar4->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424;
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
        g_INT_007c8424 = g_INT_007c8424 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                  (pSVar4,v1,g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424);
        g_INT_007c8424 = g_INT_007c8424 + 1;
        break;
      case 2:
        pSVar5 = v1;
        pSVar6 = g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424;
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
        g_INT_007c8424 = g_INT_007c8424 + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                  (v1,pSVar4,g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424);
        g_INT_007c8424 = g_INT_007c8424 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < g_INT_007c8420);
  }
  return;
}
