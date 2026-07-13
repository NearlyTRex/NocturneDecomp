// Name: FUN_0045c1e0
// Address: 0045c1e0
// Address Range: [[0045c1e0, 0045c3f7]]
// Convention: unknown
// Signature: void FUN_0045c1e0(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c1e0(uint param_1,int param_2,int param_3,int param_4)

{
  int extraout_ECX;
  int extraout_EDX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_18;
  
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
  fVar5 = (float10)_DAT_01b4d47c;
  FUN_00563a30();
  uStack_18 = (uint)ROUND(fVar5);
  iStack_28 = 1;
  param_2 = param_2 - *(int *)(extraout_ECX + 8);
  param_4 = param_4 - *(int *)(extraout_ECX + 8);
  param_3 = param_3 - *(int *)(extraout_ECX + 0xc);
  iVar1 = extraout_EDX - *(int *)(extraout_ECX + 0xc);
  iStack_2c = 1;
  iVar2 = param_3;
  iVar3 = param_2;
  if (param_3 <= iVar1) {
    iStack_2c = -1;
    iVar2 = iVar1;
    iVar1 = param_3;
    iVar3 = param_4;
    param_4 = param_2;
  }
  iVar2 = iVar2 - iVar1;
  iVar3 = iVar3 - param_4;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    iStack_28 = -1;
  }
  if (iVar2 < iVar3) {
    iStack_20 = 0;
    iVar4 = iVar2 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        if ((int)((uStack_18 ^ (int)uStack_18 >> 0x1f) - ((int)uStack_18 >> 0x1f)) %
            (_DAT_005ae6f4 * 2) < _DAT_005ae6f4) {
          FUN_0045bab0(param_1,param_4,iVar1);
        }
        if (0 < iVar4) {
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 - iVar3;
        }
        uStack_18 = uStack_18 + iStack_2c;
        param_4 = param_4 + iStack_28;
        iStack_20 = iStack_20 + 1;
        iVar4 = iVar4 + iVar2;
      } while (iStack_20 <= iVar3);
    }
  }
  else {
    iStack_24 = 0;
    iVar4 = iVar3 * 2 - iVar2;
    if (-1 < iVar2) {
      do {
        if ((int)((uStack_18 ^ (int)uStack_18 >> 0x1f) - ((int)uStack_18 >> 0x1f)) %
            (_DAT_005ae6f4 * 2) < _DAT_005ae6f4) {
          FUN_0045bab0(param_1,param_4,iVar1);
        }
        if (0 < iVar4) {
          iVar4 = iVar4 - iVar2;
          param_4 = param_4 + iStack_28;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + iVar3;
        uStack_18 = uStack_18 + iStack_2c;
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 <= iVar2);
    }
  }
  return;
}
