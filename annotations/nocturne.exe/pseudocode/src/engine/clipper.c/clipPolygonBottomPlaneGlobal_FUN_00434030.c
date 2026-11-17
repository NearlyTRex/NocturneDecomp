// Name: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_00434030
// Address: 00434030
// Address Range: [[00434030, 0043415d]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_00434030(void)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_00434030(void)

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
  if (0 < g_INT_00767b48) {
    v1 = g_SRenderVertex_ARRAY_00768d4c;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_INT_00767b48) {
        uVar2 = uVar2 ^ g_INT_00767b48;
      }
      bVar1 = (v1->projected_vertex).transformed_y <= -(v1->projected_vertex).transformed_z;
      if (g_SRenderVertex_ARRAY_00768d4c[uVar2].projected_vertex.transformed_y <=
          -g_SRenderVertex_ARRAY_00768d4c[uVar2].projected_vertex.transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70;
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
        g_INT_00766c70 = g_INT_00766c70 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433b30
                  (g_SRenderVertex_ARRAY_00768d4c + uVar2,v1,
                   g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70);
        g_INT_00766c70 = g_INT_00766c70 + 1;
        break;
      case 2:
        pSVar4 = v1;
        pSVar5 = g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70;
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
        g_INT_00766c70 = g_INT_00766c70 + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433b30
                  (v1,g_SRenderVertex_ARRAY_00768d4c + uVar2,
                   g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70);
        g_INT_00766c70 = g_INT_00766c70 + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_INT_00767b48);
  }
  return;
}
