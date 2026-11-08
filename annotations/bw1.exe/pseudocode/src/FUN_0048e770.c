// Name: FUN_0048e770
// Address: 0048e770
// Address Range: [[0048e770, 0048e7e0]]
// Convention: unknown
// Signature: void FUN_0048e770(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048e770(void)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_00483cf0(0x01BC120C,0xff,0xff,0xff);
  if (0 < _DAT_01bef218) {
    puVar1 = &DAT_01c02aa0;
    iVar3 = 0;
    do {
      FUN_004837b0(0x01BC120C,puVar1);
      FUN_00457f70(*(uint *)(iVar3 + 0x1bef220),0);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      FUN_00582920();
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < _DAT_01bef218);
  }
  return;
}
