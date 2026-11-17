// Name: engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70
// Address: 00406d70
// Address Range: [[00406d70, 00406ea8]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (g_INT_01c50948 == 0) {
    engine_3d_c_renderPolygonDepthWritePass_FUN_004057b0(prim);
    pSVar2 = engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600(prim);
    return pSVar2;
  }
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
      g_BIT_INTEGER32_01c51d14.dword = 0x28d;
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
    g_BIT_INTEGER32_01c51d14.dword = 0x8d;
    g_INT_01c51d18 = 5;
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
