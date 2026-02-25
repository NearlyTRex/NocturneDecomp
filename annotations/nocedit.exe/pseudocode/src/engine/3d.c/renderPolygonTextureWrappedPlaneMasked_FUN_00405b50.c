// Name: engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
// Address: 00405b50
// Address Range: [[00405b50, 00405cd7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_PerspectiveReciprocal == 0.0) {
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
      g_RenderStateFlags.dword = RENDER_TEXTURE_UV_WRAPPED;
    }
    else {
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
      g_RenderStateFlags.dword = RENDER_TEXTURE_ENHANCED;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    piVar3 = g_ProcessedVertexIndices;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar2->base).type + g_ProcessedVertexOffset].u = (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      g_RenderVertexBuffer[(pSVar2->base).type + g_ProcessedVertexOffset].v =
           (pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
