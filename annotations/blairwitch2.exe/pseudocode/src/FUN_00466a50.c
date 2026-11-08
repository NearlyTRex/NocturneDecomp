// Name: FUN_00466a50
// Address: 00466a50
// Address Range: [[00466a50, 00466c5d]]
// Convention: unknown
// Signature: void FUN_00466a50(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466a50(uint param_1,int param_2,int param_3,int param_4)

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
  fVar5 = (float10)_DAT_01ba5994;
  FUN_005b7ff0();
  uStack_18 = (uint)ROUND(fVar5);
  iStack_28 = 1;
  param_2 = param_2 - *(int *)(extraout_ECX + 8);
  param_4 = param_4 - *(int *)(extraout_ECX + 8);
  param_3 = param_3 - *(int *)(extraout_ECX + 0xc);
  iVar1 = extraout_EDX - *(int *)(extraout_ECX + 0xc);
  iStack_2c = 1;
  iVar2 = param_3;
  iVar3 = param_4;
  if (param_3 <= iVar1) {
    iStack_2c = -1;
    iVar2 = iVar1;
    iVar3 = param_2;
    param_2 = param_4;
    iVar1 = param_3;
  }
  iVar2 = iVar2 - iVar1;
  param_2 = param_2 - iVar3;
  if (param_2 < 0) {
    param_2 = -param_2;
    iStack_28 = -1;
  }
  if (iVar2 < param_2) {
    iStack_20 = 0;
    iVar4 = iVar2 * 2 - param_2;
    if (-1 < param_2) {
      do {
        if ((int)((uStack_18 ^ (int)uStack_18 >> 0x1f) - ((int)uStack_18 >> 0x1f)) %
            (_DAT_0060b270 * 2) < _DAT_0060b270) {
          FUN_00466360(param_1,iVar3,iVar1);
        }
        if (0 < iVar4) {
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 - param_2;
        }
        uStack_18 = uStack_18 + iStack_2c;
        iVar3 = iVar3 + iStack_28;
        iStack_20 = iStack_20 + 1;
        iVar4 = iVar4 + iVar2;
      } while (iStack_20 <= param_2);
    }
  }
  else {
    iStack_24 = 0;
    iVar4 = param_2 * 2 - iVar2;
    if (-1 < iVar2) {
      do {
        if ((int)((uStack_18 ^ (int)uStack_18 >> 0x1f) - ((int)uStack_18 >> 0x1f)) %
            (_DAT_0060b270 * 2) < _DAT_0060b270) {
          FUN_00466360(param_1,iVar3,iVar1);
        }
        if (0 < iVar4) {
          iVar4 = iVar4 - iVar2;
          iVar3 = iVar3 + iStack_28;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + param_2;
        uStack_18 = uStack_18 + iStack_2c;
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 <= iVar2);
    }
  }
  return;
}
