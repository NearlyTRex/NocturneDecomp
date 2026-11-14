// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0
// Address: 004046e0
// Address Range: [[004046e0, 00404851]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
  if (iVar1 == 0) goto LAB_00404700;
  engine_3d_c_calculatePolygonLighting_FUN_00403a20(primitive);
  if (_DAT_01c38aec == 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) goto LAB_00404756;
      _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
    }
    else {
      if (DAT_006141c0 != 0x20) goto LAB_004047e8;
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
  }
  else if (_DAT_01c38b40 == 0) {
    if (DAT_006141c0 == 0x20) {
LAB_00404756:
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
LAB_004047e8:
    _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
  }
  piVar3 = &DAT_0070ca98;
  _DAT_01c38b58 = 1;
  _DAT_01c38b54 = 0xd9;
  pSVar2 = primitive + 1;
  for (iVar1 = 0; iVar1 < (primitive->base).count * 3; iVar1 = iVar1 + 3) {
    *piVar3 = (pSVar2->base).type + DAT_0070ca60;
    (&DAT_0062202c)[((pSVar2->base).type + DAT_0070ca60) * 0xc] = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    *(UIntegerFloat *)(&DAT_00622030 + ((pSVar2->base).type + DAT_0070ca60) * 0x30) =
         (pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,&DAT_0070ca98);
LAB_00404700:
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
