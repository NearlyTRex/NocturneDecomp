// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
// Address: 00405c90
// Address Range: [[00405c90, 00405e01]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(SMRGLHeaderPrimitive *param_1)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&param_1->surface_normal);
  if (iVar1 == 0) goto LAB_00405cb0;
  engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
  if (_DAT_01c038f4 == 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) goto LAB_00405d06;
      _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
    }
    else {
      if (DAT_005b7624 != 0x20) goto LAB_00405d98;
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
  }
  else if (_DAT_01c03948 == 0) {
    if (DAT_005b7624 == 0x20) {
LAB_00405d06:
      _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
    }
  }
  else if (DAT_005b7624 == 0x20) {
    _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
  }
  else {
LAB_00405d98:
    _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
  }
  piVar3 = &DAT_006b029c;
  _DAT_01c039a4 = 1;
  _DAT_01c039a0 = 0xd9;
  pSVar2 = param_1 + 1;
  for (iVar1 = 0; iVar1 < (param_1->base).count * 3; iVar1 = iVar1 + 3) {
    *piVar3 = (pSVar2->base).type + DAT_006b0264;
    (&DAT_005c502c)[((pSVar2->base).type + DAT_006b0264) * 0xc] = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    *(UIntegerFloat *)(&DAT_005c5030 + ((pSVar2->base).type + DAT_006b0264) * 0x30) =
         (pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_FUN_00432cd0((param_1->base).count,&DAT_006b029c);
LAB_00405cb0:
  return (int)&param_1[1].base + (param_1->base).count * 0xc;
}
