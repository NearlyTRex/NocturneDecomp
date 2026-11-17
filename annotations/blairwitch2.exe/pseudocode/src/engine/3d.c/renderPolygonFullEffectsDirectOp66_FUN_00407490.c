// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407490
// Address: 00407490
// Address Range: [[00407490, 00407638]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(SMRGLHeaderPrimitive *primitive)

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
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
  iVar1 = g_INT_0070cafc;
  if (iVar2 != 0) {
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
    g_INT_01c38b58 = 1;
    g_BIT_INTEGER32_01c38b54.dword = 0x1e7;
    if (((g_INT_0070caf8 == 0) || (0x9c3 < g_INT_0070cafc)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,(int *)vertex_indices);
    }
    else {
      pSVar3 = g_SRenderBufferEntry_ARRAY_0070cb00 + g_INT_0070cafc;
      g_INT_0070cafc = g_INT_0070cafc + 1;
      pSVar3->vertex_count = (primitive->base).count;
      iVar2 = 0x7fffffff;
      iVar6 = 0;
      if (0 < (primitive->base).count) {
        do {
          pSVar7 = g_SRenderVertex_ARRAY_00622014 + (vertex_indices->base).type;
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
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_005750e0();
      iVar6 = g_INT_006141d8;
      pSVar9 = &g_SRenderBufferEntry_ARRAY_0070cb00[iVar1].texture_data;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        (pSVar9->base).type = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        pSVar9 = (SMRGLTextureModel *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
      }
      g_SRenderBufferEntry_ARRAY_0070cb00[iVar1].alpha_value = iVar6;
      g_SRenderBufferEntry_ARRAY_0070cb00[iVar1].min_z_value = iVar2;
      g_SRenderBufferEntry_ARRAY_0070cb00[iVar1].blend_mode = g_INT_01c38b4c;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
