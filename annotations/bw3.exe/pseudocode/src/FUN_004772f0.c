// Name: FUN_004772f0
// Address: 004772f0
// Address Range: [[004772f0, 00477360]]
// Convention: unknown
// Signature: void FUN_004772f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004772f0(void)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_0046d3d0(0x01BDD7E4,0xff,0xff,0xff);
  if (0 < _DAT_01c0b7b4) {
    puVar1 = &DAT_01c1f03c;
    iVar3 = 0;
    do {
      FUN_0046ce90(0x01BDD7E4,puVar1);
      FUN_004540c0(*(uint *)(iVar3 + 0x1c0b7bc),0);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      FUN_005661f0();
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < _DAT_01c0b7b4);
  }
  return;
}
