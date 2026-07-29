// Name: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_00407880
// Address: 00407880
// Address Range: [[00407880, 00407a12]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_00407880(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_00407880(SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pSVar4 = prim + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
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
    iVar7 = 0;
    _DAT_01c039a0 = 0xc3;
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    _DAT_01c039a4 = 1;
    iVar2 = 0;
    for (iVar6 = 0; iVar6 < (prim->base).count * 3; iVar6 = iVar6 + 3) {
      *(int *)((int)&DAT_006b029c + iVar2) = (pSVar4->base).type;
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
      iVar2 = iVar2 + 4;
      iVar7 = iVar7 + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      *(int *)(&DAT_005c5030 + pSVar1->type * 0x30) = iVar5;
    }
    engine_clipper_c_FUN_00432cd0(iVar7,&DAT_006b029c);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
