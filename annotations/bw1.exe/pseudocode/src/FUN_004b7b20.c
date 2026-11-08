// Name: FUN_004b7b20
// Address: 004b7b20
// Address Range: [[004b7b20, 004b7b85]]
// Convention: unknown
// Signature: void FUN_004b7b20(int param_1)

#include "nocturne.h"

void FUN_004b7b20(int param_1)

{
  uint uVar1;
  byte *puVar2;
  byte *puVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_00408850(param_1);
  puVar3 = &DAT_0061ce80;
  do {
    puVar2 = &DAT_0061cdc0 + iVar4 * 0xc0;
    do {
      FUN_00484f00(DAT_00612560,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar3);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0xc0;
  } while (iVar4 < 5);
  uVar1 = FUN_005c084c();
  *(uint *)(param_1 + 0x294) = uVar1 & 1;
  return;
}
