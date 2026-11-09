// Name: cockpit_drawsurf.cpp_FUN_00466a50
// Address: 00466a50
// Address Range: [[00466a50, 00466c5d]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00466a50(CDrawSurface *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_00466a50(CDrawSurface *param_1,int param_2,int param_3,int param_4)

{
  int extraout_ECX;
  int extraout_EDX;
  int y;
  int iVar1;
  int x;
  int iVar2;
  float10 fVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_18;
  
  if (_DAT_01c2a374 != _DAT_01ba5998) {
    _DAT_01ba5990 = (float)_DAT_01c2a370 * _DAT_005d12e0 + _DAT_01ba5990;
    _DAT_01ba5998 = _DAT_01c2a374;
    if (_DAT_0060b274 < _DAT_01ba5990) {
      _DAT_01ba5994 = _DAT_01ba5990 / _DAT_0060b274 + _DAT_01ba5994;
      if ((float)(_DAT_0060b270 * 2) < _DAT_01ba5994) {
        _DAT_01ba5994 = 0.0;
      }
      _DAT_01ba5990 = 0.0;
    }
  }
  fVar3 = (float10)_DAT_01ba5994;
  round();
  uStack_18 = (uint)ROUND(fVar3);
  iStack_28 = 1;
  param_2 = param_2 - *(int *)(extraout_ECX + 8);
  param_4 = param_4 - *(int *)(extraout_ECX + 8);
  param_3 = param_3 - *(int *)(extraout_ECX + 0xc);
  y = extraout_EDX - *(int *)(extraout_ECX + 0xc);
  iStack_2c = 1;
  iVar1 = param_3;
  x = param_4;
  if (param_3 <= y) {
    iStack_2c = -1;
    iVar1 = y;
    x = param_2;
    param_2 = param_4;
    y = param_3;
  }
  iVar1 = iVar1 - y;
  param_2 = param_2 - x;
  if (param_2 < 0) {
    param_2 = -param_2;
    iStack_28 = -1;
  }
  if (iVar1 < param_2) {
    iStack_20 = 0;
    iVar2 = iVar1 * 2 - param_2;
    if (-1 < param_2) {
      do {
        if ((int)((uStack_18 ^ (int)uStack_18 >> 0x1f) - ((int)uStack_18 >> 0x1f)) %
            (_DAT_0060b270 * 2) < _DAT_0060b270) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_1,x,y);
        }
        if (0 < iVar2) {
          y = y + 1;
          iVar2 = iVar2 - param_2;
        }
        uStack_18 = uStack_18 + iStack_2c;
        x = x + iStack_28;
        iStack_20 = iStack_20 + 1;
        iVar2 = iVar2 + iVar1;
      } while (iStack_20 <= param_2);
    }
  }
  else {
    iStack_24 = 0;
    iVar2 = param_2 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        if ((int)((uStack_18 ^ (int)uStack_18 >> 0x1f) - ((int)uStack_18 >> 0x1f)) %
            (_DAT_0060b270 * 2) < _DAT_0060b270) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_1,x,y);
        }
        if (0 < iVar2) {
          iVar2 = iVar2 - iVar1;
          x = x + iStack_28;
        }
        y = y + 1;
        iVar2 = iVar2 + param_2;
        uStack_18 = uStack_18 + iStack_2c;
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 <= iVar1);
    }
  }
  return;
}
