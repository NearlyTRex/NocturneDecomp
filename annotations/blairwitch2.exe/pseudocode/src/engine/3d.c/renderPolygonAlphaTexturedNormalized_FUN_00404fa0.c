// Name: engine_3d.c_renderPolygonAlphaTexturedNormalized_FUN_00404fa0
// Address: 00404fa0
// Address Range: [[00404fa0, 00405036]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized_FUN_00404fa0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized_FUN_00404fa0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b54 = 9;
    _DAT_01c38b58 = 2;
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  }
  return &prim[1].base.type + (prim->base).count;
}
