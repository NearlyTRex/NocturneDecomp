// Name: FUN_00476280
// Address: 00476280
// Address Range: [[00476280, 004762f0]]
// Convention: unknown
// Signature: void FUN_00476280(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476280(void)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_0046b7f0(0x01BA5C50,0xff,0xff,0xff);
  if (0 < _DAT_01bd3c5c) {
    puVar1 = &DAT_01be74e4;
    iVar3 = 0;
    do {
      FUN_0046b2b0(0x01BA5C50,puVar1);
      FUN_004468c0(*(uint *)(iVar3 + 0x1bd3c64),0);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      FUN_0055fed0();
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < _DAT_01bd3c5c);
  }
  return;
}
