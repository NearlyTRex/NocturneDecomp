// Name: engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0
// Address: 004067a0
// Address Range: [[004067a0, 0040685e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar1 != 0) {
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
    g_RenderStateFlags.dword = RENDER_TEXTURE_PERSPECTIVE;
    if (g_CurrentAlphaValue < 0xff) {
      g_RenderStateFlags.dword = RENDER_ALPHA_PERSPECTIVE;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(prim);
    engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
