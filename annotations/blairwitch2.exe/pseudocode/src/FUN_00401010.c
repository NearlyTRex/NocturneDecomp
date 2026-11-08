// Name: FUN_00401010
// Address: 00401010
// Address Range: [[00401010, 00401113]]
// Convention: unknown
// Signature: void FUN_00401010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401010(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  byte local_2c [40];
  
  DAT_006141c0 = 0x20;
  FUN_00588790(0x280,0x1e0);
  FUN_00588a50(0x280,0x1e0,0x20);
  FUN_00401590("vga.act");
  FUN_00402940("vga.map");
  FUN_00589430();
  _DAT_01c35e70 = 0xffffffff;
  uVar3 = 1;
  iVar2 = 4;
  do {
    uVar1 = (ulonglong)uVar3;
    uVar3 = uVar3 + 1;
    *(int *)(&DAT_01c35e70 + iVar2) = (int)(0xffffffff / uVar1);
    iVar2 = iVar2 + 4;
  } while (uVar3 < 0x640);
  FUN_0057cd50(local_2c);
  iVar2 = FUN_0057d390(local_2c,&DAT_005ca030,"default.act");
  if (iVar2 == 0) {
    FUN_0057cec0(local_2c,0);
    return;
  }
  FUN_0057cfe0(local_2c,0x1c35b38,0x300);
  FUN_0057d180(local_2c);
  FUN_0057cec0(local_2c,0);
  return;
}
