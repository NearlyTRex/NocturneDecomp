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
  if (_DAT_01c51cac == 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) goto LAB_004045d6;
      _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
    else {
      if (DAT_0061b4a0 != 0x20) goto LAB_00404668;
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
  }
  else if (_DAT_01c51d00 == 0) {
    if (DAT_0061b4a0 == 0x20) {
LAB_004045d6:
      _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
  }
  else if (DAT_0061b4a0 == 0x20) {
    _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
  }
  else {
LAB_00404668:
    _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
  }
  piVar3 = &DAT_00713a98;
  _DAT_01c51d18 = 1;
  _DAT_01c51d14 = 0xd9;
  pSVar2 = primitive + 1;
  for (iVar1 = 0; iVar1 < (primitive->base).count * 3; iVar1 = iVar1 + 3) {
    *piVar3 = (pSVar2->base).type + DAT_00713a60;
    (&DAT_0062902c)[((pSVar2->base).type + DAT_00713a60) * 0xc] = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    *(UIntegerFloat *)(&DAT_00629030 + ((pSVar2->base).type + DAT_00713a60) * 0x30) =
         (pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0((primitive->base).count,&DAT_00713a98);
LAB_00404580:
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
