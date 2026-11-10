// Name: cockpit_drawsurf.cpp_FUN_0047ef60
// Address: 0047ef60
// Address Range: [[0047ef60, 0047f16d]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0047ef60(CDrawSurface *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_0047ef60(CDrawSurface *param_1,int param_2,int param_3,int param_4)

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
  
  if (_DAT_01c43534 != _DAT_01bc0f54) {
    _DAT_01bc0f4c = (float)_DAT_01c43530 * _DAT_005db0d9 + _DAT_01bc0f4c;
    _DAT_01bc0f54 = _DAT_01c43534;
    if (_DAT_00612554 < _DAT_01bc0f4c) {
      _DAT_01bc0f50 = _DAT_01bc0f4c / _DAT_00612554 + _DAT_01bc0f50;
      if ((float)(_DAT_00612550 * 2) < _DAT_01bc0f50) {
        _DAT_01bc0f50 = 0.0;
      }
      _DAT_01bc0f4c = 0.0;
    }
  }
  fVar3 = (float10)_DAT_01bc0f50;
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
            (_DAT_00612550 * 2) < _DAT_00612550) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(param_1,x,y);
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
            (_DAT_00612550 * 2) < _DAT_00612550) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(param_1,x,y);
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
