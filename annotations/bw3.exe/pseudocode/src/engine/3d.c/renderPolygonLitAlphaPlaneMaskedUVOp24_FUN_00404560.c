// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560
// Address: 00404560
// Address Range: [[00404560, 004046d1]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
  if (iVar1 == 0) goto LAB_00404580;
  engine_3d_c_calculatePolygonLighting_FUN_004039d0(primitive);
  if (_DAT_01c6e24c == 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) goto LAB_004045d6;
      _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
    }
    else {
      if (DAT_005fba20 != 0x20) goto LAB_00404668;
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
  }
  else if (_DAT_01c6e2a0 == 0) {
    if (DAT_005fba20 == 0x20) {
LAB_004045d6:
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
LAB_00404668:
    _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
  }
  piVar3 = &DAT_00730418;
  _DAT_01c6e2b8 = 1;
  _DAT_01c6e2b4 = 0xd9;
  pSVar2 = primitive + 1;
  for (iVar1 = 0; iVar1 < (primitive->base).count * 3; iVar1 = iVar1 + 3) {
    *piVar3 = (pSVar2->base).type + DAT_007303e0;
    (&DAT_0060b02c)[((pSVar2->base).type + DAT_007303e0) * 0xc] = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    *(UIntegerFloat *)(&DAT_0060b030 + ((pSVar2->base).type + DAT_007303e0) * 0x30) =
         (pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043a840((primitive->base).count,&DAT_00730418);
LAB_00404580:
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
