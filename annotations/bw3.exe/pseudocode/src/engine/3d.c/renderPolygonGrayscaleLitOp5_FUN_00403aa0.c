// Name: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403aa0
// Address: 00403aa0
// Address Range: [[00403aa0, 00403b68]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403aa0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403aa0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
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
                   ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                    (primitive->surface_normal).C.i);
    g_INT_01c6b5c0 = engine_3d_c_lookupLitColor_FUN_00403990(g_CurrentPolygonColor,g_INT_01c6b5c4);
    engine_clipper_c_clipAndRasterize_FUN_0043a840((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}
