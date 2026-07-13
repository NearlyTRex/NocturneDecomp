// Name: FUN_00529f60
// Address: 00529f60
// Address Range: [[00529f60, 0052a0c1]]
// Convention: unknown
// Signature: undefined4 FUN_00529f60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00529f60(int *param_1)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  int iVar4;
  ulonglong local_338;
  byte auStack_330 [400];
  byte auStack_1a0 [400];
  
  if (_DAT_02dc921c == (int *)0x0) {
    local_338 = 0.05;
  }
  else {
    _DAT_02dc9238 =
         ((int)((_DAT_02dc9228 + (_DAT_02dc9228 >> 0x1f) * -8) -
               (uint)((_DAT_02dc9228 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02dc9234 * _DAT_02dc9230;
    local_338 = ((double)_DAT_02dc9234 / (double)_DAT_02dc922c) * _DAT_00594167;
    iVar4 = 0;
    _DAT_02dc9240 = 0;
    if (0 < _DAT_02dc923c) {
      do {
        iVar1 = FUN_00529c10();
        if (iVar1 == 0) goto LAB_0052a05b;
        iVar4 = iVar4 + 1;
      } while (iVar4 < _DAT_02dc923c);
    }
  }
  iVar4 = FUN_005286d0((uint)local_338,local_338._4_4_);
  if (iVar4 != 0) {
    if (_DAT_02dc921c == (int *)0x0) {
      return 1;
    }
    iVar4 = (**(code **)(*_DAT_02dc921c + 0x34))(_DAT_02dc921c,0);
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*_DAT_02dc921c + 0x30))(_DAT_02dc921c,0,0,1);
      if (iVar4 == 0) {
        return 1;
      }
      uVar2 = FUN_00529a90(iVar4);
      FUN_00563c90(auStack_330,"DirectSux: Unable to %s.  (%s)",
                   "Play the secondary buffer",uVar2);
      puVar3 = auStack_330;
    }
    else {
      uVar2 = FUN_00529a90(iVar4);
      FUN_00563c90(auStack_1a0,"DirectSux: Unable to %s.  (%s)",
                   "Position secondary buffer to 0",uVar2);
      puVar3 = auStack_1a0;
    }
    FUN_00529980(puVar3);
  }
LAB_0052a05b:
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
