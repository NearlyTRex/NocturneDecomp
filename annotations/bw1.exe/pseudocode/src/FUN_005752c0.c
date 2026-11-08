// Name: FUN_005752c0
// Address: 005752c0
// Address Range: [[005752c0, 0057534d]]
// Convention: unknown
// Signature: int FUN_005752c0(void)

#include "nocturne.h"

int FUN_005752c0(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_006232f8) {
    return DAT_006232f8;
  }
  FUN_00575d20();
  FUN_00573e70();
  DAT_006232f8 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_0057b370(iVar2,DAT_006232f8 * 0x118 + 0x2c7fd90);
    if (iVar1 == 0) break;
    DAT_006232f8 = DAT_006232f8 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_006232f8 < 8);
  iVar2 = 0;
  while ((DAT_006232f8 < 8 &&
         (iVar1 = FUN_0057a290(iVar2,DAT_006232f8 * 0x118 + 0x2c7fd90), iVar1 != 0))) {
    DAT_006232f8 = DAT_006232f8 + 1;
    iVar2 = iVar2 + 1;
  }
  return DAT_006232f8;
}
