// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c80
// Address: 00404c80
// Address Range: [[00404c80, 00404d65]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c80(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c80(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 == 0) goto LAB_00404cee;
  if (_DAT_01c38aec == 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) goto LAB_00404cb8;
      _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
    }
    else {
      if (DAT_006141c0 != 0x20) goto LAB_00404d1d;
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
  }
  else if (_DAT_01c38b40 == 0) {
    if (DAT_006141c0 == 0x20) {
LAB_00404cb8:
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
LAB_00404d1d:
    _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
  }
  _DAT_01c38b54 = 0xd9;
  _DAT_01c38b58 = 1;
  engine_3d_c_calculatePolygonLighting_FUN_00403a20(prim);
  engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
LAB_00404cee:
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
