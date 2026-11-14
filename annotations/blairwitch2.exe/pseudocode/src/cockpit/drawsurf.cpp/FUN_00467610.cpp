// Name: cockpit_drawsurf.cpp_FUN_00467610
// Address: 00467610
// Address Range: [[00467610, 004677df]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_FUN_00467610(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_FUN_00467610(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int x;
  int iVar1;
  int iVar2;
  int x_00;
  float10 fVar3;
  
  iVar1 = y1;
  if (_DAT_01c2a374 != _DAT_01ba59a4) {
    _DAT_01ba599c = (float)_DAT_01c2a370 * _DAT_005d13b0 + _DAT_01ba599c;
    _DAT_01ba59a4 = _DAT_01c2a374;
    if (_DAT_0060b274 < _DAT_01ba599c) {
      _DAT_01ba59a0 = _DAT_01ba599c / _DAT_0060b274 + _DAT_01ba59a0;
      if ((float)(_DAT_0060b270 * 2) < _DAT_01ba59a0) {
        _DAT_01ba59a0 = 0.0;
      }
      _DAT_01ba599c = 0.0;
    }
  }
  fVar3 = (float10)_DAT_01ba59a0;
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
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,x,y1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; iVar1 < y2; iVar1 = iVar1 + 1) {
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,x2,iVar1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; x_00 < x2; x2 = x2 + -1) {
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,x2,y2);
    }
    iVar2 = iVar2 + 1;
  }
  for (; y1 < y2; y2 = y2 + -1) {
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,x_00,y2);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}
