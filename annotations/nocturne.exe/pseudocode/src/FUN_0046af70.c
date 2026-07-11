// Name: FUN_0046af70
// Address: 0046af70
// Address Range: [[0046af70, 0046afe0]]
// Convention: unknown
// Signature: void FUN_0046af70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046af70(void)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_00460f20(0x01B4D738,0xff,0xff,0xff);
  if (0 < _DAT_01b7b744) {
    puVar1 = &DAT_01b8efcc;
    iVar3 = 0;
    do {
      FUN_00460a00(0x01B4D738,puVar1);
      FUN_0044aff0(*(uint *)(iVar3 + 0x1b7b74c),0);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      FUN_00532b30();
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < _DAT_01b7b744);
  }
  return;
}
