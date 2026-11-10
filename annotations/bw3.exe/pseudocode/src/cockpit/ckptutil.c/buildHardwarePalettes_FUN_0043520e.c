// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_0043520e
// Address: 0043520e
// Address Range: [[0043520e, 00435309]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_buildHardwarePalettes_FUN_0043520e(byte *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043527d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_buildHardwarePalettes_FUN_0043520e(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c6a970 = param_1;
  if (DAT_005fba20 != 0x20) {
    iVar4 = 0;
    do {
      bVar3 = *param_1;
      pbVar1 = param_1 + 1;
      pbVar2 = param_1 + 2;
      iVar5 = iVar4 + 2;
      param_1 = param_1 + 3;
      *(ushort *)(iVar4 + 0x1c6ad74) =
           (ushort)(*pbVar1 / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
           (ushort)(bVar3 / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f)) |
           (ushort)(*pbVar2 / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f));
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
    *(uint *)(&DAT_01c6a974 + iVar4) =
         (uint)*pbVar2 << (DAT_01c6af8c & 0x1f) |
         (uint)bVar3 << (DAT_01c6af74 & 0x1f) | (uint)*pbVar1 << (DAT_01c6af80 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
