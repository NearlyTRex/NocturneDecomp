// Name: cockpit_drawsurf.cpp_FUN_0047fb20
// Address: 0047fb20
// Address Range: [[0047fb20, 0047fcef]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_0047fb20(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_0047fb20(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int x;
  int iVar1;
  int iVar2;
  int x_00;
  float10 fVar3;
  
  iVar1 = y1;
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
  fVar3 = (float10)_DAT_01bc0f5c;
  round();
  iVar2 = (int)ROUND(fVar3);
  x_00 = x1;
  if (x2 < x1) {
    x_00 = x2;
    x2 = x1;
  }
  x = x_00;
  if (y2 < y1) {
    y1 = y2;
    y2 = iVar1;
  }
  for (; iVar1 = y1, x < x2; x = x + 1) {
    if (iVar2 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,x,y1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; iVar1 < y2; iVar1 = iVar1 + 1) {
    if (iVar2 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,x2,iVar1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; x_00 < x2; x2 = x2 + -1) {
    if (iVar2 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,x2,y2);
    }
    iVar2 = iVar2 + 1;
  }
  for (; y1 < y2; y2 = y2 + -1) {
    if (iVar2 % (_DAT_00612550 * 2) < _DAT_00612550) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(this_ptr,x_00,y2);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}
