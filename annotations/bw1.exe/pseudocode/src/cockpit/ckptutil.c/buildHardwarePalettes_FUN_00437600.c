// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00437600
// Address: 00437600
// Address Range: [[00437600, 004376f9]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_buildHardwarePalettes_FUN_00437600(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043766d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_buildHardwarePalettes_FUN_00437600(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *in_stack_00000004;
  
  _DAT_01c4e3d0 = in_stack_00000004;
  if (DAT_0061b4a0 != 0x20) {
    iVar4 = 0;
    do {
      bVar3 = *in_stack_00000004;
      pbVar1 = in_stack_00000004 + 1;
      pbVar2 = in_stack_00000004 + 2;
      iVar5 = iVar4 + 2;
      in_stack_00000004 = in_stack_00000004 + 3;
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
    pbVar1 = in_stack_00000004 + 1;
    bVar3 = *in_stack_00000004;
    pbVar2 = in_stack_00000004 + 2;
    iVar5 = iVar4 + 4;
    in_stack_00000004 = in_stack_00000004 + 3;
    *(uint *)(&DAT_01c4e3d4 + iVar4) =
         (uint)*pbVar2 << (DAT_01c4e9ec & 0x1f) |
         (uint)bVar3 << (DAT_01c4e9d4 & 0x1f) | (uint)*pbVar1 << (DAT_01c4e9e0 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
