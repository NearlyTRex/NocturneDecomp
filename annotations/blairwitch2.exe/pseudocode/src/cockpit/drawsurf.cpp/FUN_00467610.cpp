// Name: cockpit_drawsurf.cpp_FUN_00467610
// Address: 00467610
// Address Range: [[00467610, 004677df]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00467610(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_00467610(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int x;
  int iVar1;
  int iVar2;
  int x_00;
  float10 fVar3;
  
  iVar1 = param_3;
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
  x_00 = param_2;
  if (param_4 < param_2) {
    x_00 = param_4;
    param_4 = param_2;
  }
  x = x_00;
  if (param_5 < param_3) {
    param_3 = param_5;
    param_5 = iVar1;
  }
  for (; iVar1 = param_3, x < param_4; x = x + 1) {
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_1,x,param_3);
    }
    iVar2 = iVar2 + 1;
  }
  for (; iVar1 < param_5; iVar1 = iVar1 + 1) {
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_1,param_4,iVar1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; x_00 < param_4; param_4 = param_4 + -1) {
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_1,param_4,param_5);
    }
    iVar2 = iVar2 + 1;
  }
  for (; param_3 < param_5; param_5 = param_5 + -1) {
    if (iVar2 % (_DAT_0060b270 * 2) < _DAT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_1,x_00,param_5);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}
