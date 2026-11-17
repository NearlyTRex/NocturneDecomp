// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100
// Address: 00407100
// Address Range: [[00407100, 004072ff]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SRenderBufferEntry *pSVar4;
  SMRGLTextureBasic *pSVar5;
  int *piVar6;
  int iVar7;
  SMRGLHeaderPrimitive *pSVar8;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *pSVar11;
  SMRGLTextureModel *pSVar12;
  byte bVar13;
  int iStack_14;
  
  bVar13 = 0;
  iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar3 != 0) {
    if (g_INT_01c6e2a0 == 0) {
      if (g_INT_005fba20 == 0x20) {
        g_PTR_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        g_PTR_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (g_INT_005fba20 == 0x20) {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    piVar6 = g_INT_ARRAY_00730418;
    g_BIT_INTEGER32_01c6e2b4.dword = 0x1e7;
    g_INT_01c6e2b8 = 1;
    pSVar8 = prim + 1;
    for (iVar3 = 0; iVar2 = g_INT_0073047c, iVar3 < (prim->base).count * 3; iVar3 = iVar3 + 3) {
      *piVar6 = (pSVar8->base).type + g_UINT_007303e0;
      uVar1 = g_UINT_007303e0;
      g_SRenderVertex_ARRAY_0060b014[(pSVar8->base).type + g_UINT_007303e0].u = (pSVar8->base).count
      ;
      piVar6 = piVar6 + 1;
      g_SRenderVertex_ARRAY_0060b014[uVar1 + (pSVar8->base).type].v =
           (int)(pSVar8->surface_normal).A;
      pSVar8 = (SMRGLHeaderPrimitive *)&(pSVar8->surface_normal).B;
    }
    if (((g_INT_00730478 == 0) || (0x9c3 < g_INT_0073047c)) ||
       (iVar3 = (prim->base).count, 4 < iVar3)) {
      engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,g_INT_ARRAY_00730418);
    }
    else {
      iVar9 = 0;
      iStack_14 = 0x7fffffff;
      pSVar4 = g_SRenderBufferEntry_ARRAY_00730480 + g_INT_0073047c;
      g_INT_0073047c = g_INT_0073047c + 1;
      pSVar4->vertex_count = iVar3;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          pSVar10 = g_SRenderVertex_ARRAY_0060b014 + *(int *)((int)g_INT_ARRAY_00730418 + iVar3);
          pSVar11 = pSVar4->vertices;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            (pSVar11->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar13 * -2 + 1) * 4);
          }
          iVar7 = pSVar4->vertices[0].projected_vertex.transformed_z;
          if (iVar7 < iStack_14) {
            iStack_14 = iVar7;
          }
          pSVar4 = (SRenderBufferEntry *)&pSVar4->vertices[0].a;
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar9 < (prim->base).count);
      }
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_0056acf0();
      iVar3 = g_INT_005fba38;
      pSVar12 = &g_SRenderBufferEntry_ARRAY_00730480[iVar2].texture_data;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        (pSVar12->base).type = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar13 * -8 + 4);
        pSVar12 = (SMRGLTextureModel *)((int)pSVar12 + ((uint)bVar13 * -2 + 1) * 4);
      }
      g_SRenderBufferEntry_ARRAY_00730480[iVar2].alpha_value = iVar3;
      g_SRenderBufferEntry_ARRAY_00730480[iVar2].blend_mode = g_INT_01c6e2ac;
      g_SRenderBufferEntry_ARRAY_00730480[iVar2].min_z_value = iStack_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
