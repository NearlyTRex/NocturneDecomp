// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00
// Address: 00404b00
// Address Range: [[00404b00, 00404be5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 == 0) goto LAB_00404b6e;
  if (_DAT_01c6e24c == 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) goto LAB_00404b38;
      _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
    }
    else {
      if (DAT_005fba20 != 0x20) goto LAB_00404b9d;
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
  }
  else if (_DAT_01c6e2a0 == 0) {
    if (DAT_005fba20 == 0x20) {
LAB_00404b38:
      _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
    }
  }
  else if (DAT_005fba20 == 0x20) {
    _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
  }
  else {
LAB_00404b9d:
    _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
  }
  _DAT_01c6e2b4 = 0xd9;
  _DAT_01c6e2b8 = 1;
  engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
  engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,(int *)(prim + 1));
LAB_00404b6e:
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
