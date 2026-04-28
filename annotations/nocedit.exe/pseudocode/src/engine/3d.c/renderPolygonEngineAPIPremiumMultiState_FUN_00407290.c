// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
// Address: 00407290
// Address Range: [[00407290, 0040746d] [03fc3820, 03fc387d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *prim)

{
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  SRenderBufferEntry *pSVar5;
  SMRGLTextureBasic *pSVar6;
  int *piVar7;
  int iVar8;
  int iVar1;
  int iVar4;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *pSVar11;
  SMRGLTextureBasic **ppSVar12;
  byte bVar13;
  int local_14;
  int iVar2;
  uint uVar1;
  
  bVar13 = 0;
  iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar3 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    piVar7 = g_ProcessedVertexIndices;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
    pSVar4 = prim + 1;
    for (iVar4 = 0; iVar2 = g_RenderBufferCount, uVar1 = g_ProcessedVertexOffset,
        iVar4 < (prim->base).count * 3; iVar4 = iVar4 + 3) {
      *piVar7 = (pSVar4->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar4->base).type + uVar1].u = (pSVar4->base).count;
      piVar7 = piVar7 + 1;
      g_RenderVertexBuffer[(pSVar4->base).type + uVar1].v = (pSVar4->surface_normal).A;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
    }
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (iVar4 = (prim->base).count, 4 < iVar4)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
    }
    else {
      iVar9 = 0;
      local_14 = 0x7fffffff;
      pSVar5 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar5->vertex_count = iVar4;
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          iVar1 = *(int *)((int)g_ProcessedVertexIndices + iVar4);
          pSVar5->vertices[0].projected_vertex.transformed_x =
               g_RenderVertexBuffer[iVar1].projected_vertex.transformed_x;
          pSVar5->vertices[0].projected_vertex.transformed_y =
               g_RenderVertexBuffer[iVar1].projected_vertex.transformed_y;
          pSVar5->vertices[0].projected_vertex.transformed_z =
               g_RenderVertexBuffer[iVar1].projected_vertex.transformed_z;
          pSVar5->vertices[0].projected_vertex.inv_z =
               g_RenderVertexBuffer[iVar1].projected_vertex.inv_z;
          pSVar5->vertices[0].projected_vertex.screen_x =
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
          pSVar5->vertices[0].projected_vertex.screen_y =
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
          pSVar5->vertices[0].u = g_RenderVertexBuffer[iVar1].u;
          pSVar5->vertices[0].v = g_RenderVertexBuffer[iVar1].v;
          pSVar5->vertices[0].r = g_RenderVertexBuffer[iVar1].r;
          pSVar5->vertices[0].g = g_RenderVertexBuffer[iVar1].g;
          pSVar5->vertices[0].b = g_RenderVertexBuffer[iVar1].b;
          pSVar5->vertices[0].a = g_RenderVertexBuffer[iVar1].a;
          iVar1 = pSVar5->vertices[0].projected_vertex.transformed_z;
          if (iVar1 < local_14) {
            local_14 = iVar1;
          }
          pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;
          iVar9 = iVar9 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar9 < (prim->base).count);
      }
      pSVar6 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar4 = g_CurrentAlphaValue;
      ppSVar12 = g_RenderBufferPool[iVar2].texture_data;
      for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
        ppSVar12 = ppSVar12 + (uint)bVar13 * -2 + 1;
        *ppSVar12 = (SMRGLTextureBasic *)(pSVar6->base).type;
        pSVar6 = (SMRGLTextureBasic *)((int)pSVar6 + (uint)bVar13 * -8 + 4);
        ppSVar12 = ppSVar12;
      }
      g_RenderBufferPool[iVar2].alpha_value = iVar4;
      g_RenderBufferPool[iVar2].blend_mode = g_BlendMode;
      g_RenderBufferPool[iVar2].min_z_value = local_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
