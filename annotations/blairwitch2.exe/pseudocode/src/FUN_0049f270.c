// Name: FUN_0049f270
// Address: 0049f270
// Address Range: [[0049f270, 0049f2d5]]
// Convention: unknown
// Signature: void FUN_0049f270(int param_1)

#include "nocturne.h"

void FUN_0049f270(int param_1)

{
  uint uVar1;
  byte *puVar2;
  byte *puVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_00408a80(param_1);
  puVar3 = &DAT_00615bc0;
  do {
    puVar2 = &DAT_00615b00 + iVar4 * 0xc0;
    do {
      FUN_0046ca00(DAT_0060b280,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar3);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0xc0;
  } while (iVar4 < 5);
  uVar1 = FUN_005b849c();
  *(uint *)(param_1 + 0x3f0) = uVar1 & 1;
  return;
}
