// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
// Address: 00407290
// Address Range: [[00407290, 0040746d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *polygon_info)

{
  uint uVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  SRenderBufferEntry *pSVar4;
  SMRGLTextureBasic *pSVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  uint unaff_EDI;
  SRenderVertex *pSVar10;
  byte bVar11;
  int iVar12;
  
  bVar11 = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    piVar6 = g_ProcessedVertexIndices;
    g_RenderStateFlags = RENDER_ENGINE_PREMIUM_QUALITY;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    pSVar3 = polygon_info + 1;
    for (iVar2 = 0; uVar1 = g_ProcessedVertexOffset, iVar12 = (polygon_info->base).count,
        SBORROW /* signed borrow */4(iVar2,iVar12 * 3) != iVar2 + iVar12 * -3 < 0; iVar2 = iVar2 + 3) {
      *piVar6 = (pSVar3->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar3->base).type + uVar1].u = (float)(pSVar3->base).count;
      piVar6 = piVar6 + 1;
      g_RenderVertexBuffer[(pSVar3->base).type + uVar1].v = (float)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (iVar2 = (polygon_info->base).count, 4 < iVar2)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0
                ((polygon_info->base).count,g_ProcessedVertexIndices);
    }
    else {
      iVar8 = 0;
      iVar12 = 0x7fffffff;
      pSVar4 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar4->vertex_count = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          pSVar9 = g_RenderVertexBuffer + *(int *)((int)g_ProcessedVertexIndices + iVar2);
          pSVar10 = pSVar4->vertices;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            (pSVar10->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
          }
          iVar7 = pSVar4->vertices[0].projected_vertex.transformed_z;
          if (iVar7 < iVar12) {
            iVar12 = iVar7;
          }
          pSVar4 = (SRenderBufferEntry *)&pSVar4->vertices[0].w_recip;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < (polygon_info->base).count);
      }
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar2 = g_CurrentAlphaValue;
      piVar6 = (int *)(iVar12 + 0xc4);
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar6 = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(int *)(iVar12 + 0x10c) = iVar2;
      *(int *)(iVar12 + 0x110) = g_BlendMode;
      *(uint *)(iVar12 + 0x114) = unaff_EDI;
    }
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}
