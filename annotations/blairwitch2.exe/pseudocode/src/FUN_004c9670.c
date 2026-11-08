// Name: FUN_004c9670
// Address: 004c9670
// Address Range: [[004c9670, 004c9725]]
// Convention: unknown
// Signature: undefined4 FUN_004c9670(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c9670(void)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (byte *)0x1cb82f4;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x48;
  } while (puVar2 != &DAT_01cbcaf4);
  iVar3 = 0;
  if (0 < _DAT_01cbcaf8) {
    iVar4 = 0x1cbcafc;
    do {
      FUN_004c8690(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x44;
    } while (iVar3 < _DAT_01cbcaf8);
  }
  uVar1 = FUN_004c8800(0x1cdde44);
  iVar3 = 0;
  if (0 < _DAT_01cdde40) {
    iVar4 = 0x1cdde44;
    do {
      uVar1 = FUN_004c8ce0(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (iVar3 < _DAT_01cdde40);
  }
  return uVar1;
}
