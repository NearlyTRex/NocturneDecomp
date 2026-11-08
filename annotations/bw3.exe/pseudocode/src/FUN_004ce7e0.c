// Name: FUN_004ce7e0
// Address: 004ce7e0
// Address Range: [[004ce7e0, 004ce895]]
// Convention: unknown
// Signature: undefined4 FUN_004ce7e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ce7e0(void)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (byte *)0x1d22eb4;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x48;
  } while (puVar2 != &DAT_01d276b4);
  iVar3 = 0;
  if (0 < _DAT_01d276b8) {
    iVar4 = 0x1d276bc;
    do {
      FUN_004cdb20(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar3 < _DAT_01d276b8);
  }
  uVar1 = FUN_004cdc90(0x1d4a944);
  iVar3 = 0;
  if (0 < _DAT_01d4a940) {
    iVar4 = 0x1d4a944;
    do {
      uVar1 = FUN_004cdfc0(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (iVar3 < _DAT_01d4a940);
  }
  return uVar1;
}
