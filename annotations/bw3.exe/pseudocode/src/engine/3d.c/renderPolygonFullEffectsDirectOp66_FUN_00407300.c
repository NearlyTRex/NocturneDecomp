// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407300
// Address: 00407300
// Address Range: [[00407300, 004074a8]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SRenderBufferEntry *pSVar3;
  SMRGLTextureBasic *pSVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive *vertex_indices;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SMRGLTextureModel *pSVar9;
  byte bVar10;
  
  bVar10 = 0;
  vertex_indices = primitive + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
  iVar1 = g_INT_0073047c;
  if (iVar2 != 0) {
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
    g_INT_01c6e2b8 = 1;
    g_BIT_INTEGER32_01c6e2b4.dword = 0x1e7;
    if (((g_INT_00730478 == 0) || (0x9c3 < g_INT_0073047c)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_0043a840((primitive->base).count,(int *)vertex_indices);
    }
    else {
      pSVar3 = g_SRenderBufferEntry_ARRAY_00730480 + g_INT_0073047c;
      g_INT_0073047c = g_INT_0073047c + 1;
      pSVar3->vertex_count = (primitive->base).count;
      iVar2 = 0x7fffffff;
      iVar6 = 0;
      if (0 < (primitive->base).count) {
        do {
          pSVar7 = g_SRenderVertex_ARRAY_0060b014 + (vertex_indices->base).type;
          pSVar8 = pSVar3->vertices;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar10 * -2 + 1) * 4);
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
          }
          iVar5 = pSVar3->vertices[0].projected_vertex.transformed_z;
          if (iVar5 < iVar2) {
            iVar2 = iVar5;
          }
          pSVar3 = (SRenderBufferEntry *)&pSVar3->vertices[0].a;
          iVar6 = iVar6 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar6 < (primitive->base).count);
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_0056acf0();
      iVar6 = g_INT_005fba38;
      pSVar9 = &g_SRenderBufferEntry_ARRAY_00730480[iVar1].texture_data;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        (pSVar9->base).type = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        pSVar9 = (SMRGLTextureModel *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
      }
      g_SRenderBufferEntry_ARRAY_00730480[iVar1].alpha_value = iVar6;
      g_SRenderBufferEntry_ARRAY_00730480[iVar1].min_z_value = iVar2;
      g_SRenderBufferEntry_ARRAY_00730480[iVar1].blend_mode = g_INT_01c6e2ac;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
