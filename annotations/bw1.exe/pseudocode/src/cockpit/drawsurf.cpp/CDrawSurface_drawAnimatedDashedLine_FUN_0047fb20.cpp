// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0047fb20
// Address: 0047fb20
// Address Range: [[0047fb20, 0047fcef]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0047fb20(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0047fb20(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = x2;
  iVar1 = x1;
  if (_DAT_01c43534 != _DAT_01bc0f60) {
    _DAT_01bc0f58 = (float)_DAT_01c43530 * _DAT_005db1a9 + _DAT_01bc0f58;
    _DAT_01bc0f60 = _DAT_01c43534;
    if (_DAT_00612554 < _DAT_01bc0f58) {
      _DAT_01bc0f5c = _DAT_01bc0f58 / _DAT_00612554 + _DAT_01bc0f5c;
      if ((float)(_DAT_00612550 * 2) < _DAT_01bc0f5c) {
        _DAT_01bc0f5c = 0.0;
      }
      _DAT_01bc0f58 = 0.0;
    }
  }
  dVar4 = round((double)_DAT_01bc0f5c);
  iVar3 = (int)ROUND(dVar4);
  if (x2 < x1) {
    x1 = x2;
    x2 = iVar1;
    iVar1 = iVar2;
  }
  for (; iVar2 = x1, iVar1 < x2; iVar1 = iVar1 + 1) {
    if (iVar3 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,iVar1,x1);
    }
    iVar3 = iVar3 + 1;
  }
  for (; iVar1 = x2, iVar2 < x2; iVar2 = iVar2 + 1) {
    if (iVar3 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,x2,iVar2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < iVar1; iVar1 = iVar1 + -1) {
    if (iVar3 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,iVar1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < x2; x2 = x2 + -1) {
    if (iVar3 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,x1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}
