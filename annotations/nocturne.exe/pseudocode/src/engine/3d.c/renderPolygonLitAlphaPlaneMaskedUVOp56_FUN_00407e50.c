// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50
// Address: 00407e50
// Address Range: [[00407e50, 00408004]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50(SMRGLHeaderPrimitive *param_1)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pSVar4 = param_1 + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&param_1->surface_normal);
  if (iVar2 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
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
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a0 = 0xd3;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    if (DAT_005b763c < 0xff) {
      _DAT_01c039a0 = _DAT_01c039a0 | 0x20;
    }
    iVar6 = 0;
    _DAT_01c039a4 = 1;
    iVar7 = 0;
    for (iVar2 = 0; iVar2 < (param_1->base).count * 3; iVar2 = iVar2 + 3) {
      *(int *)((int)&DAT_006b029c + iVar6) = (pSVar4->base).type;
      iVar3 = (pSVar4->base).count;
      iVar5 = (pSVar4->surface_normal).A.i;
      if (DAT_005b762c < 0x41) {
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (iVar5 < 0x40000) {
          iVar5 = 0x40000;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
        if (0xfbffff < iVar5) {
          iVar5 = 0xfbffff;
        }
      }
      else {
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (iVar5 < 0x10000) {
          iVar5 = 0x10000;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
        if (0xfeffff < iVar5) {
          iVar5 = 0xfeffff;
        }
      }
      (&DAT_005c502c)[(pSVar4->base).type * 0xc] = iVar3;
      pSVar1 = &pSVar4->base;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      *(int *)(&DAT_005c5030 + pSVar1->type * 0x30) = iVar5;
    }
    engine_clipper_c_FUN_00432cd0(iVar7,&DAT_006b029c);
  }
  return (int)&param_1[1].base + (param_1->base).count * 0xc;
}
