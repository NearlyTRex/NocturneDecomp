// Name: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
// Address: 0045c1e0
// Address Range: [[0045c1e0, 0045c3f7]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint unaff_retaddr;
  uint uVar5;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_1c;
  
  if (_DAT_01bd1d84 != _DAT_01b4d480) {
    _DAT_01b4d478 = (float)_DAT_01bd1d80 * (float)_DAT_0057d976 + _DAT_01b4d478;
    _DAT_01b4d480 = _DAT_01bd1d84;
    if (_DAT_005ae6f8 < _DAT_01b4d478) {
      _DAT_01b4d47c = _DAT_01b4d478 / _DAT_005ae6f8 + _DAT_01b4d47c;
      if ((float)(_DAT_005ae6f4 * 2) < _DAT_01b4d47c) {
        _DAT_01b4d47c = 0.0;
      }
      _DAT_01b4d478 = 0.0;
    }
  }
  uVar5 = 0x45c21d;
  fVar4 = (float10)round((float10)_DAT_01b4d47c);
  uStack_1c = (uint)ROUND(fVar4);
  iStack_2c = 1;
  param_2 = param_2 - *(int *)(param_1 + 8);
  param_4 = param_4 - *(int *)(param_1 + 8);
  param_3 = param_3 - *(int *)(param_1 + 0xc);
  param_5 = param_5 - *(int *)(param_1 + 0xc);
  iStack_30 = 1;
  iVar1 = param_3;
  iVar2 = param_2;
  if (param_3 <= param_5) {
    iStack_30 = -1;
    iVar1 = param_5;
    param_5 = param_3;
    iVar2 = param_4;
    param_4 = param_2;
  }
  iVar1 = iVar1 - param_5;
  iVar2 = iVar2 - param_4;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iStack_2c = -1;
  }
  if (iVar1 < iVar2) {
    iStack_24 = 0;
    iVar3 = iVar1 * 2 - iVar2;
    if (-1 < iVar2) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (_DAT_005ae6f4 * 2) < _DAT_005ae6f4) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
                    (unaff_retaddr,param_4,param_5,uVar5);
        }
        if (0 < iVar3) {
          param_5 = param_5 + 1;
          iVar3 = iVar3 - iVar2;
        }
        uStack_1c = uStack_1c + iStack_30;
        param_4 = param_4 + iStack_2c;
        iStack_24 = iStack_24 + 1;
        iVar3 = iVar3 + iVar1;
      } while (iStack_24 <= iVar2);
    }
  }
  else {
    iStack_28 = 0;
    iVar3 = iVar2 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        if ((int)((uStack_1c ^ (int)uStack_1c >> 0x1f) - ((int)uStack_1c >> 0x1f)) %
            (_DAT_005ae6f4 * 2) < _DAT_005ae6f4) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
                    (unaff_retaddr,param_4,param_5,uVar5);
        }
        if (0 < iVar3) {
          iVar3 = iVar3 - iVar1;
          param_4 = param_4 + iStack_2c;
        }
        param_5 = param_5 + 1;
        iVar3 = iVar3 + iVar2;
        uStack_1c = uStack_1c + iStack_30;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 <= iVar1);
    }
  }
  return;
}
