// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0
// Address: 004072b0
// Address Range: [[004072b0, 0040748d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  SRenderBufferEntry *pSVar5;
  SMRGLTextureBasic *pSVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *pSVar11;
  SMRGLTextureModel *pSVar12;
  byte bVar13;
  int iStack_14;
  
  bVar13 = 0;
  iVar3 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar3 != 0) {
    if (g_INT_01c38b40 == 0) {
      if (g_INT_006141c0 == 0x20) {
        g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (g_INT_006141c0 == 0x20) {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    piVar7 = g_INT_ARRAY_0070ca98;
    g_BIT_INTEGER32_01c38b54.dword = 0x1e7;
    g_INT_01c38b58 = 1;
    pSVar4 = prim + 1;
    for (iVar3 = 0; iVar2 = g_INT_0070cafc, uVar1 = g_UINT_0070ca60, iVar3 < (prim->base).count * 3;
        iVar3 = iVar3 + 3) {
      *piVar7 = (pSVar4->base).type + g_UINT_0070ca60;
      g_SRenderVertex_ARRAY_00622014[(pSVar4->base).type + uVar1].u = (pSVar4->base).count;
      piVar7 = piVar7 + 1;
      g_SRenderVertex_ARRAY_00622014[(pSVar4->base).type + uVar1].v =
           (int)(pSVar4->surface_normal).A;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
    }
    if (((g_INT_0070caf8 == 0) || (0x9c3 < g_INT_0070cafc)) ||
       (iVar3 = (prim->base).count, 4 < iVar3)) {
      engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,g_INT_ARRAY_0070ca98);
    }
    else {
      iVar9 = 0;
      iStack_14 = 0x7fffffff;
      pSVar5 = g_SRenderBufferEntry_ARRAY_0070cb00 + g_INT_0070cafc;
      g_INT_0070cafc = g_INT_0070cafc + 1;
      pSVar5->vertex_count = iVar3;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          pSVar10 = g_SRenderVertex_ARRAY_00622014 + *(int *)((int)g_INT_ARRAY_0070ca98 + iVar3);
          pSVar11 = pSVar5->vertices;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            (pSVar11->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar13 * -2 + 1) * 4);
          }
          iVar8 = pSVar5->vertices[0].projected_vertex.transformed_z;
          if (iVar8 < iStack_14) {
            iStack_14 = iVar8;
          }
          pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar9 < (prim->base).count);
      }
      pSVar6 = engine_texture_cpp_getCurrentTexture_FUN_005750e0();
      iVar3 = g_INT_006141d8;
      pSVar12 = &g_SRenderBufferEntry_ARRAY_0070cb00[iVar2].texture_data;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        (pSVar12->base).type = (pSVar6->base).type;
        pSVar6 = (SMRGLTextureBasic *)((int)pSVar6 + (uint)bVar13 * -8 + 4);
        pSVar12 = (SMRGLTextureModel *)((int)pSVar12 + ((uint)bVar13 * -2 + 1) * 4);
      }
      g_SRenderBufferEntry_ARRAY_0070cb00[iVar2].alpha_value = iVar3;
      g_SRenderBufferEntry_ARRAY_0070cb00[iVar2].blend_mode = g_INT_01c38b4c;
      g_SRenderBufferEntry_ARRAY_0070cb00[iVar2].min_z_value = iStack_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
