// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_004375fe
// Address: 004375fe
// Address Range: [[004375fe, 004376f9]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_buildHardwarePalettes_FUN_004375fe(byte *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043766d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_buildHardwarePalettes_FUN_004375fe(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c4e3d0 = param_1;
  if (DAT_0061b4a0 != 0x20) {
    iVar4 = 0;
    do {
      bVar3 = *param_1;
      pbVar1 = param_1 + 1;
      pbVar2 = param_1 + 2;
      iVar5 = iVar4 + 2;
      param_1 = param_1 + 3;
      *(ushort *)(iVar4 + 0x1c4e7d4) =
           (ushort)(*pbVar1 / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
           (ushort)(bVar3 / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f)) |
           (ushort)(*pbVar2 / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f));
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
    *(uint *)(&DAT_01c4e3d4 + iVar4) =
         (uint)*pbVar2 << (DAT_01c4e9ec & 0x1f) |
         (uint)bVar3 << (DAT_01c4e9d4 & 0x1f) | (uint)*pbVar1 << (DAT_01c4e9e0 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
