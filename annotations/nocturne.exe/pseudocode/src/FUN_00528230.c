// Name: FUN_00528230
// Address: 00528230
// Address Range: [[00528230, 005282bd]]
// Convention: unknown
// Signature: int FUN_00528230(void)

#include "nocturne.h"

int FUN_00528230(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_005bea70) {
    return DAT_005bea70;
  }
  FUN_00528800();
  FUN_00528890();
  DAT_005bea70 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_0052c6c0(iVar2,DAT_005bea70 * 0x118 + 0x2dc7a58);
    if (iVar1 == 0) break;
    DAT_005bea70 = DAT_005bea70 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_005bea70 < 8);
  iVar2 = 0;
  while ((DAT_005bea70 < 8 &&
         (iVar1 = FUN_0052be40(iVar2,DAT_005bea70 * 0x118 + 0x2dc7a58), iVar1 != 0))) {
    DAT_005bea70 = DAT_005bea70 + 1;
    iVar2 = iVar2 + 1;
  }
  return DAT_005bea70;
}
