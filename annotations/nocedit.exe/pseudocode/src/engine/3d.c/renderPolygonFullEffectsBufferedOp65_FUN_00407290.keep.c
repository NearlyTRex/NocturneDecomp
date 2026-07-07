// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407290
// Address: 00407290
// MANUAL RECONSTRUCTION
// Address Range: [[00407290, 0040746d] [03fc3820, 03fc387d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407290(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407290(SMRGLHeaderPrimitive *prim)

{
  int iVar3;
  SMRGLVertex *pSVar4;
  SRenderBufferEntry *pSVar5;
  SMRGLTextureBasic *pSVar6;
  int iVar1;
  int iVar4;
  int iVar9;
  int local_14;

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
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
    pSVar4 = (SMRGLVertex *)(prim + 1);
    for (iVar4 = 0; iVar4 < (prim->base).count; iVar4 = iVar4 + 1) {
      iVar1 = pSVar4[iVar4].vertex_index + g_ProcessedVertexOffset;
      g_ProcessedVertexIndices[iVar4] = iVar1;
      g_RenderVertexBuffer[iVar1].u = pSVar4[iVar4].texture_u;
      g_RenderVertexBuffer[iVar1].v = pSVar4[iVar4].texture_v;
    }
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (iVar4 = (prim->base).count, 4 < iVar4)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
    }
    else {
      local_14 = 0x7fffffff;
      pSVar5 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar5->vertex_count = iVar4;
      for (iVar9 = 0; iVar9 < (prim->base).count; iVar9 = iVar9 + 1) {
        iVar1 = g_ProcessedVertexIndices[iVar9];
        pSVar5->vertices[iVar9] = g_RenderVertexBuffer[iVar1];
        iVar1 = pSVar5->vertices[iVar9].projected_vertex.transformed_z;
        if (iVar1 < local_14) {
          local_14 = iVar1;
        }
      }
      pSVar6 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      memcpy(&pSVar5->texture_data, pSVar6, sizeof(SMRGLTextureLod));
      pSVar5->alpha_value = g_CurrentAlphaValue;
      pSVar5->blend_mode = g_BlendMode;
      pSVar5->min_z_value = local_14;
    }
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(prim + 1) + (prim->base).count);
}
