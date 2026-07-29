// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407470
// Address: 00407470
// MANUAL RECONSTRUCTION
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
  int iVar6;
  int *vertex_indices;
  int iVar7;

  vertex_indices = (int *)(primitive + 1);
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,vertex_indices);
    }
    else {
      pSVar3 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar3->vertex_count = (primitive->base).count;
      iVar7 = 0x7fffffff;
      for (iVar6 = 0; iVar6 < (primitive->base).count; iVar6 = iVar6 + 1) {
        iVar3 = vertex_indices[iVar6];
        pSVar3->vertices[iVar6] = g_RenderVertexBuffer[iVar3];
        iVar3 = pSVar3->vertices[iVar6].projected_vertex.transformed_z;
        if (iVar3 < iVar7) {
          iVar7 = iVar3;
        }
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      memcpy(&pSVar3->texture_data, pSVar4, sizeof(SMRGLTextureLod));
      pSVar3->alpha_value = g_CurrentAlphaValue;
      pSVar3->min_z_value = iVar7;
      pSVar3->blend_mode = g_BlendMode;
    }
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(primitive + 1) + (primitive->base).count);
}
