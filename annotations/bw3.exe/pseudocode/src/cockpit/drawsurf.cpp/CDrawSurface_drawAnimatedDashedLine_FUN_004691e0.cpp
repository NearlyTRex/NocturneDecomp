// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0
// Address: 004691e0
// Address Range: [[004691e0, 004693af]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = x2;
  iVar1 = x1;
  if (_DAT_01c5fad4 != _DAT_01bdd538) {
    _DAT_01bdd530 = (float)_DAT_01c5fad0 * _DAT_005bc340 + _DAT_01bdd530;
    _DAT_01bdd538 = _DAT_01c5fad4;
    if (_DAT_005f2af0 < _DAT_01bdd530) {
      _DAT_01bdd534 = _DAT_01bdd530 / _DAT_005f2af0 + _DAT_01bdd534;
      if ((float)(_DAT_005f2aec * 2) < _DAT_01bdd534) {
        _DAT_01bdd534 = 0.0;
      }
      _DAT_01bdd530 = 0.0;
    }
  }
  dVar4 = round((double)_DAT_01bdd534);
  iVar3 = (int)ROUND(dVar4);
  if (x2 < x1) {
    x1 = x2;
    x2 = iVar1;
    iVar1 = iVar2;
  }
  for (; iVar2 = x1, iVar1 < x2; iVar1 = iVar1 + 1) {
    if (iVar3 % (_DAT_005f2aec * 2) < _DAT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,iVar1,x1);
    }
    iVar3 = iVar3 + 1;
  }
  for (; iVar1 = x2, iVar2 < x2; iVar2 = iVar2 + 1) {
    if (iVar3 % (_DAT_005f2aec * 2) < _DAT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,x2,iVar2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < iVar1; iVar1 = iVar1 + -1) {
    if (iVar3 % (_DAT_005f2aec * 2) < _DAT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,iVar1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < x2; x2 = x2 + -1) {
    if (iVar3 % (_DAT_005f2aec * 2) < _DAT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,x1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}
