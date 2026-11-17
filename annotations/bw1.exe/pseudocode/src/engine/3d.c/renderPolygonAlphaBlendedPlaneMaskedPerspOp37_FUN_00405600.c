// Name: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600
// Address: 00405600
// Address Range: [[00405600, 0040571a]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_INT_01c4f028 == 0) {
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
      g_BIT_INTEGER32_01c51d14.dword = 0x20d;
      g_INT_01c51d18 = 5;
      engine_clipper_c_clipPolygonToViewport_FUN_0043de60((prim->base).count,(int *)(prim + 1));
      return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
    }
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
    g_BIT_INTEGER32_01c51d14.dword = 0xd;
    g_INT_01c51d18 = 5;
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
