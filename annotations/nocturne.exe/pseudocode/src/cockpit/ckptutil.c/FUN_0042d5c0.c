// Name: cockpit_ckptutil.c_FUN_0042d5c0
// Address: 0042d5c0
// Address Range: [[0042d5c0, 0042d6b9]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042d5c0(byte *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0042d62d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042d5c0(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c00020 = param_1;
  if (DAT_005b7624 != 0x20) {
    iVar4 = 0;
    do {
      bVar3 = *param_1;
      pbVar1 = param_1 + 1;
      pbVar2 = param_1 + 2;
      iVar5 = iVar4 + 2;
      param_1 = param_1 + 3;
      *(ushort *)(iVar4 + 0x1c00424) =
           (ushort)(*pbVar1 / _DAT_01c00634 << (DAT_01c00630 & 0x1f)) |
           (ushort)(bVar3 / _DAT_01c00628 << (DAT_01c00624 & 0x1f)) |
           (ushort)(*pbVar2 / _DAT_01c00640 << (DAT_01c0063c & 0x1f));
      iVar4 = iVar5;
    } while (iVar5 != 0x200);
    return;
  }
  iVar4 = 0;
  do {
    pbVar1 = param_1 + 1;
    bVar3 = *param_1;
    pbVar2 = param_1 + 2;
    iVar5 = iVar4 + 4;
    param_1 = param_1 + 3;
    *(uint *)(&DAT_01c00024 + iVar4) =
         (uint)*pbVar2 << (DAT_01c0063c & 0x1f) |
         (uint)bVar3 << (DAT_01c00624 & 0x1f) | (uint)*pbVar1 << (DAT_01c00630 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
