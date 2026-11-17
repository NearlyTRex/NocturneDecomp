// Name: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00406540
// Address: 00406540
// Address Range: [[00406540, 00406608]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00406540(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00406540(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_005fba20 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (g_INT_005fba20 == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    g_RenderStateFlags.dword = RENDER_LIGHTING_COLOR;
    g_VertexPreprocessMode = 0;
    g_INT_01c6b5c4 =
         engine_light_cpp_calculateLighting_FUN_004e0e00
                   ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i
                   );
    g_INT_01c6b5c0 = engine_3d_c_lookupLitColor_FUN_00403990(g_CurrentPolygonColor,g_INT_01c6b5c4);
    engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
