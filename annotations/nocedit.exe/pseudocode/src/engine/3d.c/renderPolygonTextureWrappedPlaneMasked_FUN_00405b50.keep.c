// Name: engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
// Address: 00405b50
// MANUAL RECONSTRUCTION
// Address Range: [[00405b50, 00405cd7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLVertex *pSVar2;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_PerspectiveReciprocal == 0) {
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
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    }
    else {
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
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    }
    g_VertexPreprocessMode = 1;
    pSVar2 = (SMRGLVertex *)(prim + 1);
    for (iVar1 = 0; iVar1 < (prim->base).count; iVar1 = iVar1 + 1) {
      iVar2 = pSVar2[iVar1].vertex_index + g_ProcessedVertexOffset;
      g_ProcessedVertexIndices[iVar1] = iVar2;
      g_RenderVertexBuffer[iVar2].u = pSVar2[iVar1].texture_u;
      g_RenderVertexBuffer[iVar2].v = pSVar2[iVar1].texture_v;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(prim + 1) + (prim->base).count);
}
