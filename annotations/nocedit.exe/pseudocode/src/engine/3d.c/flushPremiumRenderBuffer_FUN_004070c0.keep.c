// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_004070c0
// Address: 004070c0
// MANUAL RECONSTRUCTION
// Address Range: [[004070c0, 00407280] [03fc38df, 03fc393f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070c0(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070c0(void)

{
  int iVar2;
  int iVar3;
  SRenderBufferEntry *pSVar1;
  int local_c;
  
  if (g_RenderBufferEnabled != 0) {
    for (iVar2 = 0; iVar2 < g_RenderBufferCount; iVar2 = iVar2 + 1) {
      g_RenderBufferSortArray[iVar2] = g_RenderBufferPool + iVar2;
    }
    _qsort
              (g_RenderBufferSortArray,g_RenderBufferCount,4,
               engine_3d_c_qsortByRenderDepth_FUN_00407080);
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
    for (local_c = 0; local_c < g_RenderBufferCount; local_c = local_c + 1) {
      pSVar1 = g_RenderBufferSortArray[local_c];
      for (iVar3 = 0; iVar3 < pSVar1->vertex_count; iVar3 = iVar3 + 1) {
        g_RenderVertexBuffer[iVar3] = pSVar1->vertices[iVar3];
        *(ushort *)&g_RenderVertexBuffer[iVar3].a =
             (ushort)g_RenderVertexBuffer[iVar3].a ^ 0xffff;
        g_ProcessedVertexIndices[iVar3] = iVar3;
      }
      engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0(&pSVar1->texture_data.textures[0]);
      g_BlendMode = pSVar1->blend_mode;
      g_CurrentAlphaValue = pSVar1->alpha_value;
      engine_clipper_c_clipAndRasterize_FUN_004371b0(pSVar1->vertex_count,g_ProcessedVertexIndices);
    }
    g_RenderBufferCount = 0;
    g_RenderBufferEnabled = 0;
    engine_3d_c_setBlendMode_FUN_00406dd0(0);
  }
  return;
}
