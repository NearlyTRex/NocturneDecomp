// Name: engine_3d.c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240
// Address: 00405240
// Address Range: [[00405240, 00405336]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240(SMRGLHeaderPrimitive *param_1)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int iVar5;
  
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
    _DAT_01c039a0 = 1;
    _DAT_01c039a4 = 2;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    iVar5 = 0;
    iVar2 = 0;
    pSVar3 = param_1 + 1;
    for (iVar4 = 0; iVar4 < (param_1->base).count * 3; iVar4 = iVar4 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)&DAT_006b029c + iVar2) = iVar1;
      (&DAT_005c502c)[iVar1 * 0xc] = (pSVar3->base).count;
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      *(UIntegerFloat *)(&DAT_005c5030 + (pSVar3->base).type * 0x30) = (pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_FUN_00432cd0(iVar5,&DAT_006b029c);
  }
  return (int)&param_1[1].base + (param_1->base).count * 0xc;
}
