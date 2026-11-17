// Name: engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40
// Address: 00406f40
// Address Range: [[00406f40, 00407078]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (g_INT_01c37788 == 0) {
    engine_3d_c_renderPolygonDepthWritePass_FUN_00405980(prim);
    pSVar2 = engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0(prim);
    return pSVar2;
  }
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_INT_01c35e68 == 0) {
      if (g_INT_01c38b40 == 0) {
        if (g_INT_006141c0 == 0x20) {
          g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
        }
        else {
          g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
        }
      }
      else if (g_INT_006141c0 == 0x20) {
        g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
      }
      else {
        g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      g_BIT_INTEGER32_01c38b54.dword = 0x28d;
      g_INT_01c38b58 = 5;
      engine_clipper_c_clipPolygonToViewport_FUN_00433000((prim->base).count,(int *)(prim + 1));
      return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
    }
    if (g_INT_01c38b40 == 0) {
      if (g_INT_006141c0 == 0x20) {
        g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (g_INT_006141c0 == 0x20) {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    g_BIT_INTEGER32_01c38b54.dword = 0x8d;
    g_INT_01c38b58 = 5;
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
