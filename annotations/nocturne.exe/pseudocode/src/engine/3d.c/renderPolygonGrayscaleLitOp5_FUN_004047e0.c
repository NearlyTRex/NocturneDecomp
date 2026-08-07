// Name: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_004047e0
// Address: 004047e0
// Address Range: [[004047e0, 004048a8]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_004047e0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_004047e0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
    }
    g_RenderStateFlags.dword = RENDER_LIGHTING_COLOR;
    g_VertexPreprocessMode = 0;
    g_CurrentLightingValue =
         engine_light_cpp_calculateLighting_FUN_004c6cc0
                   ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                    (primitive->surface_normal).C.i);
    g_ActiveRenderColor =
         engine_3d_c_lookupLitColor_FUN_00404680(DAT_006b0260,g_CurrentLightingValue);
    engine_clipper_c_clipAndRasterize_FUN_00432cd0((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}
