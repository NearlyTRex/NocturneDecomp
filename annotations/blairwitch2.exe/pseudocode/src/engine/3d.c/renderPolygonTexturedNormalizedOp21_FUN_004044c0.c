// Name: engine_3d.c_renderPolygonTexturedNormalizedOp21_FUN_004044c0
// Address: 004044c0
// Address Range: [[004044c0, 00404556]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_004044c0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_004044c0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
  if (iVar1 != 0) {
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
    g_BIT_INTEGER32_01c38b54.dword = 1;
    g_INT_01c38b58 = 2;
    engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}
