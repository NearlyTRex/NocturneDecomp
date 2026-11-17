// Name: engine_clipper.c_clipPolygonTopPlaneGlobal_FUN_00433ef0
// Address: 00433ef0
// Address Range: [[00433ef0, 00434017]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonTopPlaneGlobal_FUN_00433ef0(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonTopPlaneGlobal_FUN_00433ef0(void)

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
  if (0 < g_INT_00767b44) {
    v1 = g_SRenderVertex_ARRAY_0076874c;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_INT_00767b44) {
        uVar2 = uVar2 ^ g_INT_00767b44;
      }
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_y;
      if (g_SRenderVertex_ARRAY_0076874c[uVar2].projected_vertex.transformed_z <=
          g_SRenderVertex_ARRAY_0076874c[uVar2].projected_vertex.transformed_y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48;
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
        g_INT_00767b48 = g_INT_00767b48 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433a00
                  (g_SRenderVertex_ARRAY_0076874c + uVar2,v1,
                   g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48);
        g_INT_00767b48 = g_INT_00767b48 + 1;
        break;
      case 2:
        pSVar4 = v1;
        pSVar5 = g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48;
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
        g_INT_00767b48 = g_INT_00767b48 + 1;
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433a00
                  (v1,g_SRenderVertex_ARRAY_0076874c + uVar2,
                   g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48);
        g_INT_00767b48 = g_INT_00767b48 + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_INT_00767b44);
  }
  return;
}
