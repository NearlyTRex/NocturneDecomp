// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
// Address: 00407290
// Address Range: [[00407290, 0040746d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *prim)

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
  SMRGLTextureBasic **ppSVar12;
  byte bVar13;
  int local_14;
  
  bVar13 = 0;
  iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar3 != 0) {
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
    piVar7 = g_ProcessedVertexIndices;
    g_RenderStateFlags.dword = RENDER_ENGINE_PREMIUM_QUALITY;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    pSVar4 = prim + 1;
    for (iVar3 = 0; iVar2 = g_RenderBufferCount, uVar1 = g_ProcessedVertexOffset,
        iVar3 < (prim->base).count * 3; iVar3 = iVar3 + 3) {
      *piVar7 = (pSVar4->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar4->base).type + uVar1].u = (pSVar4->base).count;
      piVar7 = piVar7 + 1;
      g_RenderVertexBuffer[(pSVar4->base).type + uVar1].v = (pSVar4->surface_normal).A;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
    }
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (iVar3 = (prim->base).count, 4 < iVar3)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
    }
    else {
      iVar9 = 0;
      local_14 = 0x7fffffff;
      pSVar5 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar5->vertex_count = iVar3;
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          pSVar10 = g_RenderVertexBuffer + *(int *)((int)g_ProcessedVertexIndices + iVar3);
          pSVar11 = pSVar5->vertices;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            (pSVar11->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar13 * -2 + 1) * 4);
          }
          iVar8 = pSVar5->vertices[0].projected_vertex.transformed_z;
          if (iVar8 < local_14) {
            local_14 = iVar8;
          }
          pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar9 < (prim->base).count);
      }
      pSVar6 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar3 = g_CurrentAlphaValue;
      ppSVar12 = g_RenderBufferPool[iVar2].texture_data;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        *ppSVar12 = (SMRGLTextureBasic *)(pSVar6->base).type;
        pSVar6 = (SMRGLTextureBasic *)((int)pSVar6 + (uint)bVar13 * -8 + 4);
        ppSVar12 = ppSVar12 + (uint)bVar13 * -2 + 1;
      }
      g_RenderBufferPool[iVar2].alpha_value = iVar3;
      g_RenderBufferPool[iVar2].blend_mode = g_BlendMode;
      g_RenderBufferPool[iVar2].min_z_value = local_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
