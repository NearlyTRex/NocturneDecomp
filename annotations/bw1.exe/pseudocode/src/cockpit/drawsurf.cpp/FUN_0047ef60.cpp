// Name: cockpit_drawsurf.cpp_FUN_0047ef60
// Address: 0047ef60
// Address Range: [[0047ef60, 0047f16d]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0047ef60(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_0047ef60(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int x;
  int iVar2;
  double dVar3;
  CDrawSurface *unaff_retaddr;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_1c;
  
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
  dVar3 = round((double)_DAT_01bc0f50);
  uStack_1c = (uint)ROUND(dVar3);
  iStack_2c = 1;
  param_2 = param_2 - *(int *)(param_1 + 8);
  param_4 = param_4 - *(int *)(param_1 + 8);
  param_3 = param_3 - *(int *)(param_1 + 0xc);
  param_5 = param_5 - *(int *)(param_1 + 0xc);
  iStack_30 = 1;
  iVar1 = param_3;
  x = param_4;
  if (param_3 <= param_5) {
    iStack_30 = -1;
    iVar1 = param_5;
    x = param_2;
    param_2 = param_4;
    param_5 = param_3;
  }
  iVar1 = iVar1 - param_5;
  param_2 = param_2 - x;
  if (param_2 < 0) {
    param_2 = -param_2;
    iStack_2c = -1;
  }
  if (iVar1 < param_2) {
    iStack_24 = 0;
    iVar2 = iVar1 * 2 - param_2;
    if (-1 < param_2) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (_DAT_00612550 * 2) < _DAT_00612550) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(unaff_retaddr,x,param_5);
        }
        if (0 < iVar2) {
          param_5 = param_5 + 1;
          iVar2 = iVar2 - param_2;
        }
        uStack_1c = uStack_1c + iStack_30;
        x = x + iStack_2c;
        iStack_24 = iStack_24 + 1;
        iVar2 = iVar2 + iVar1;
      } while (iStack_24 <= param_2);
    }
  }
  else {
    iStack_28 = 0;
    iVar2 = param_2 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (_DAT_00612550 * 2) < _DAT_00612550) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870(unaff_retaddr,x,param_5);
        }
        if (0 < iVar2) {
          iVar2 = iVar2 - iVar1;
          x = x + iStack_2c;
        }
        param_5 = param_5 + 1;
        iVar2 = iVar2 + param_2;
        uStack_1c = uStack_1c + iStack_30;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 <= iVar1);
    }
  }
  return;
}
