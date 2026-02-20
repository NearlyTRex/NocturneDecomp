// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470
// Address: 00407470
// Address Range: [[00407470, 00407618]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive *primitive)

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
  SMRGLTextureBasic **ppSVar9;
  byte bVar10;
  
  bVar10 = 0;
  vertex_indices = primitive + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  iVar1 = g_RenderBufferCount;
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    g_RenderStateFlags.dword = RENDER_ENGINE_PREMIUM_QUALITY;
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)vertex_indices);
    }
    else {
      pSVar3 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar3->vertex_count = (primitive->base).count;
      iVar2 = 0x7fffffff;
      iVar6 = 0;
      if (0 < (primitive->base).count) {
        do {
          pSVar7 = g_RenderVertexBuffer + (vertex_indices->base).type;
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
          pSVar3 = (SRenderBufferEntry *)&pSVar3->vertices[0].fog;
          iVar6 = iVar6 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar6 < (primitive->base).count);
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar6 = g_CurrentAlphaValue;
      ppSVar9 = g_RenderBufferPool[iVar1].texture_data;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppSVar9 = (SMRGLTextureBasic *)(pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        ppSVar9 = ppSVar9 + (uint)bVar10 * -2 + 1;
      }
      g_RenderBufferPool[iVar1].alpha_value = iVar6;
      g_RenderBufferPool[iVar1].min_z_value = iVar2;
      g_RenderBufferPool[iVar1].blend_mode = g_BlendMode;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
