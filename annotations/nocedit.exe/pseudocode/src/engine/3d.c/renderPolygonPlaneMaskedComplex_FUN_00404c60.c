// Name: engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
// Address: 00404c60
// Address Range: [[00404c60, 00404d45]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar1 == 0) goto LAB_00404cce;
  if (g_PerspectiveReciprocal == 0.0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) goto LAB_00404c98;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
    else {
      if (g_BitsPerPixel != 0x20) goto LAB_00404cfd;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
LAB_00404c98:
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
LAB_00404cfd:
    g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  g_RenderStateFlags.dword = RENDER_FULL_FEATURED;
  g_RenderStateFlag2 = RENDER_TEXTURE_ENABLE;
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(prim);
  engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,(int *)(prim + 1));
LAB_00404cce:
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
