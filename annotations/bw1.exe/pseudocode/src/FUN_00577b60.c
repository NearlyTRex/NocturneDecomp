// Name: FUN_00577b60
// Address: 00577b60
// Address Range: [[00577b60, 00577cc5]]
// Convention: unknown
// Signature: undefined4 FUN_00577b60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00577b60(int *param_1)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  int iVar4;
  byte auStack_330 [400];
  byte auStack_1a0 [400];
  float fStack_10;
  
  if (_DAT_02c81d9c == (int *)0x0) {
    fStack_10 = 0.1;
  }
  else {
    _DAT_02c81db8 =
         ((int)((_DAT_02c81da8 + (_DAT_02c81da8 >> 0x1f) * -8) -
               (uint)((_DAT_02c81da8 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c81db4 * _DAT_02c81db0;
    fStack_10 = ((float)_DAT_02c81db4 / (float)_DAT_02c81dac) * _DAT_005f4cef;
    iVar4 = 0;
    _DAT_02c81dc0 = 0;
    if (0 < _DAT_02c81dbc) {
      do {
        iVar1 = FUN_005776b0();
        if (iVar1 == 0) goto LAB_00577c5f;
        iVar4 = iVar4 + 1;
      } while (iVar4 < _DAT_02c81dbc);
    }
  }
  iVar4 = FUN_00575c00(fStack_10);
  if (iVar4 != 0) {
    if (_DAT_02c81d9c == (int *)0x0) {
      return 1;
    }
    puVar3 = auStack_330;
    iVar4 = (**(code **)(*_DAT_02c81d9c + 0x34))(_DAT_02c81d9c,0);
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*_DAT_02c81d9c + 0x30))(_DAT_02c81d9c,0,0,1);
      if (iVar4 == 0) {
        return 1;
      }
      uVar2 = FUN_00577500(iVar4);
      FUN_005bfb40(auStack_1a0,"DirectSux: Unable to %s.  (%s)",
                   "Play the secondary buffer",uVar2);
      puVar3 = auStack_1a0;
    }
    else {
      uVar2 = FUN_00577500(iVar4);
      FUN_005bfb40(auStack_330,"DirectSux: Unable to %s.  (%s)",
                   "@Position secondary buffer to 0" + 1,uVar2);
    }
    FUN_005773f0(puVar3);
  }
LAB_00577c5f:
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
