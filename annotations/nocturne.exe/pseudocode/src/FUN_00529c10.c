// Name: FUN_00529c10
// Address: 00529c10
// Address Range: [[00529c10, 00529dd6]]
// Convention: unknown
// Signature: undefined4 FUN_00529c10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00529c10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piStack_380;
  int iStack_37c;
  int iStack_378;
  byte *puStack_374;
  byte *puStack_370;
  byte *puStack_36c;
  byte *puStack_368;
  uint uStack_364;
  byte auStack_204 [420];
  int aiStack_60 [8];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  byte local_20 [4];
  byte local_1c [4];
  byte local_18 [4];
  byte local_14 [4];
  
  if (_DAT_02dc921c != (int *)0x0) {
    uStack_364 = 0;
    puStack_368 = local_14;
    puStack_36c = local_20;
    puStack_370 = local_18;
    puStack_374 = local_1c;
    iStack_37c = _DAT_02dc9240 * _DAT_02dc9238;
    iStack_378 = _DAT_02dc9238;
    piStack_380 = _DAT_02dc921c;
    iVar1 = (**(code **)(*_DAT_02dc921c + 0x2c))();
    if (iVar1 != 0) {
      uVar4 = FUN_00529a90(iVar1);
      FUN_00563c90(&piStack_380,"DirectSux: Unable to %s.  (%s)",
                   "Lock secondary buffer",uVar4);
      FUN_00529980(&piStack_380);
      return 0;
    }
    if ((iStack_40 == 0) && (iStack_38 == _DAT_02dc9238)) {
      iVar2 = (int)((_DAT_02dc9228 + (_DAT_02dc9228 >> 0x1f) * -8) -
                   (uint)((_DAT_02dc9228 >> 0x1f) << 2 < 0)) >> 3;
      iVar3 = 0;
      iVar1 = iStack_3c;
      if (0 < _DAT_02dc9230 * 4) {
        do {
          *(int *)((int)aiStack_60 + iVar3) = iVar1;
          iVar3 = iVar3 + 4;
          iVar1 = iVar1 + iVar2;
        } while (iVar3 < _DAT_02dc9230 * 4);
      }
      FUN_005294f0(aiStack_60,_DAT_02dc9228,_DAT_02dc9230,_DAT_02dc922c,_DAT_02dc9234,
                   iVar2 * _DAT_02dc9230);
      _DAT_02dc9240 = _DAT_02dc9240 + 1;
      if (_DAT_02dc923c <= _DAT_02dc9240) {
        _DAT_02dc9240 = 0;
      }
      iVar1 = (**(code **)(*_DAT_02dc921c + 0x4c))
                        (_DAT_02dc921c,iStack_3c,iStack_38,iStack_40,uStack_34);
      if (iVar1 != 0) {
        uVar4 = FUN_00529a90(iVar1);
        FUN_00563c90(auStack_204,"DirectSux: Unable to %s.  (%s)",
                     "Unlock secondary buffer",uVar4);
        FUN_00529980(auStack_204);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
