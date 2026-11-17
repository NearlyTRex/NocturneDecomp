// Name: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405850
// Address: 00405850
// Address Range: [[00405850, 004058ec]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405850(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405850(SMRGLHeaderPrimitive *prim)

{
  if (g_INT_01c51d00 == 0) {
    if (g_INT_0061b4a0 == 0x20) {
      g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
    }
    else {
      g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
  }
  else if (g_INT_0061b4a0 == 0x20) {
    g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
  }
  else {
    g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
  }
  g_INT_01c51d18 = 0;
  g_BIT_INTEGER32_01c51d14.dword = 1;
  if (g_INT_00713a6c != 0) {
    engine_fpoly_c_rasterizePolygonHardware_FUN_004c4d80
              ((SRenderVertex **)(prim + 1),(prim->base).count);
    return (SMRGLHeaderExtended *)&g_INT_00713a84;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,(int *)(prim + 1));
  return (SMRGLHeaderExtended *)&g_INT_00713a84;
}
