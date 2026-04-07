// Name: core_xform.cpp_clipPolygonStage2_FUN_005f8040
// Address: 005f8040
// MANUAL RECONSTRUCTION
// Address Range: [[005f8040, 005f81a2]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005f8040(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f814e) */
/* WARNING: Removing unreachable block (ram,0x005f80c3) */

void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005f8040(void)

{
  byte bVar3;
  uint uVar4;
  int iVar1;
  int iVar5;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar8;
  byte bVar9;
  int local_14;
  
  local_14 = 0;
  if (0 < g_ClipVertexCountStage2) {
    vertex_a = g_ClipVertexBufferStage2;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage2) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage2;
      }
      pSVar2 = g_ClipVertexBufferStage2 + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar2->projected_vertex).transformed_x <=
          -g_ClipVertexBufferStage2[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar2 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
        iVar1 = 0x30;
        pSVar6 = vertex_a;
        while (7 < iVar1) {
          memcpy(&(pSVar2->projected_vertex).transformed_x, &(pSVar6->projected_vertex).transformed_x, 8);
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_z;
          iVar1 = iVar1 + -8;
        }
        if (iVar1 != 0 && -9 < iVar1 + -8) {
          (pSVar2->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar1) {
            (pSVar2->projected_vertex).transformed_y = (pSVar6->projected_vertex).transformed_y;
          }
        }
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                  (pSVar2,vertex_a,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        break;
      case 2:
        pSVar8 = g_ClipVertexBufferStage3 + g_ClipVertexCountStage3;
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        while (iVar5 = iVar5 + -8, 7 < iVar5) {
          memcpy(&(pSVar8->projected_vertex).transformed_x, &(pSVar7->projected_vertex).transformed_x, 8);
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
          iVar5 = iVar5;
        }
        if (iVar5 != 0 && -9 < iVar5) {
          (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar5) {
            (pSVar8->projected_vertex).transformed_y = (pSVar7->projected_vertex).transformed_y;
          }
        }
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                  (vertex_a,pSVar2,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage2);
  }
  return;
}
