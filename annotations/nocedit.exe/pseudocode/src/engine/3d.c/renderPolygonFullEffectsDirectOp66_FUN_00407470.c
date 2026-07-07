// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407470
// Address: 00407470
// Address Range: [[00407470, 00407618] [03fc387e, 03fc38de]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407470(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407470(SMRGLHeaderPrimitive *primitive)

{
  int iVar3;
  int iVar2;
  SRenderBufferEntry *pSVar3;
  SMRGLTextureBasic *pSVar4;
  int iVar5;
  int iVar4;
  int iVar6;
  SMRGLHeaderPrimitive *vertex_indices;
  int iVar7;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SMRGLTextureBasic **ppSVar9;
  byte bVar10;
  int iVar1;
  
  bVar10 = 0;
  vertex_indices = primitive + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  iVar1 = g_RenderBufferCount;
  if (iVar2 != 0) {
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
    g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)vertex_indices);
    }
    else {
      pSVar3 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar3->vertex_count = (primitive->base).count;
      iVar7 = 0x7fffffff;
      iVar6 = 0;
      if (0 < (primitive->base).count) {
        do {
          iVar3 = (vertex_indices->base).type;
          pSVar3->vertices[0].projected_vertex.transformed_x =
               g_RenderVertexBuffer[iVar3].projected_vertex.transformed_x;
          pSVar3->vertices[0].projected_vertex.transformed_y =
               g_RenderVertexBuffer[iVar3].projected_vertex.transformed_y;
          pSVar3->vertices[0].projected_vertex.transformed_z =
               g_RenderVertexBuffer[iVar3].projected_vertex.transformed_z;
          pSVar3->vertices[0].projected_vertex.inv_z =
               g_RenderVertexBuffer[iVar3].projected_vertex.inv_z;
          pSVar3->vertices[0].projected_vertex.screen_x =
               g_RenderVertexBuffer[iVar3].projected_vertex.screen_x;
          pSVar3->vertices[0].projected_vertex.screen_y =
               g_RenderVertexBuffer[iVar3].projected_vertex.screen_y;
          pSVar3->vertices[0].u = g_RenderVertexBuffer[iVar3].u;
          pSVar3->vertices[0].v = g_RenderVertexBuffer[iVar3].v;
          pSVar3->vertices[0].r = g_RenderVertexBuffer[iVar3].r;
          pSVar3->vertices[0].g = g_RenderVertexBuffer[iVar3].g;
          pSVar3->vertices[0].b = g_RenderVertexBuffer[iVar3].b;
          pSVar3->vertices[0].a = g_RenderVertexBuffer[iVar3].a;
          iVar3 = pSVar3->vertices[0].projected_vertex.transformed_z;
          if (iVar3 < iVar7) {
            iVar7 = iVar3;
          }
          pSVar3 = (SRenderBufferEntry *)&pSVar3->vertices[0].a;
          iVar6 = iVar6 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar6 < (primitive->base).count);
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar3 = g_CurrentAlphaValue;
      ppSVar9 = (SMRGLTextureBasic **)&g_RenderBufferPool[iVar1].texture_data;
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        ppSVar9 = ppSVar9 + (uint)bVar10 * -2 + 1;
        *ppSVar9 = (SMRGLTextureBasic *)(pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        ppSVar9 = ppSVar9;
      }
      g_RenderBufferPool[iVar1].alpha_value = iVar3;
      g_RenderBufferPool[iVar1].min_z_value = iVar7;
      g_RenderBufferPool[iVar1].blend_mode = g_BlendMode;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
