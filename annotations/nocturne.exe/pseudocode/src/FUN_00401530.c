// Name: FUN_00401530
// Address: 00401530
// Address Range: [[00401530, 0040159a]]
// Convention: unknown
// Signature: void FUN_00401530(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401530(int param_1,int param_2)

{
  param_2 = param_2 * 4;
  if (DAT_005b7624 == 8) {
    *(byte *)(param_1 + *(int *)(&DAT_01bd2fa0 + param_2)) = DAT_01c00c70;
    return;
  }
  if (DAT_005b7624 == 0x10) {
    *(ushort *)(param_1 * 2 + *(int *)(&DAT_01bd2fa0 + param_2)) =
         *(ushort *)((_DAT_01c00c70 & 0xff) * 2 + 0x1bff720);
    return;
  }
  *(uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + param_2)) =
       *(uint *)((_DAT_01c00c70 & 0xff) * 4 + 0x1bff920);
  return;
}
