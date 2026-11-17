// Name: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_004066f0
// Address: 004066f0
// Address Range: [[004066f0, 004067b8]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_004066f0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_004066f0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_006141c0 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (g_INT_006141c0 == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    g_RenderStateFlags.dword = RENDER_LIGHTING_COLOR;
    g_VertexPreprocessMode = 0;
    g_CurrentLightingValue =
         engine_light_cpp_calculateLighting_FUN_004e28b0
                   ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i
                   );
    g_INT_01c35e60 =
         engine_3d_c_lookupLitColor_FUN_004039e0(g_CurrentPolygonColor,g_CurrentLightingValue);
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
