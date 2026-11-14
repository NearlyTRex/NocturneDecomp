// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00435210
// Address: 00435210
// Address Range: [[00435210, 00435309]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_buildHardwarePalettes_FUN_00435210(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043527d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_buildHardwarePalettes_FUN_00435210(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *in_stack_00000004;
  
  _DAT_01c6a970 = in_stack_00000004;
  if (DAT_005fba20 != 0x20) {
    iVar4 = 0;
    do {
      bVar3 = *in_stack_00000004;
      pbVar1 = in_stack_00000004 + 1;
      pbVar2 = in_stack_00000004 + 2;
      iVar5 = iVar4 + 2;
      in_stack_00000004 = in_stack_00000004 + 3;
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
    pbVar1 = in_stack_00000004 + 1;
    bVar3 = *in_stack_00000004;
    pbVar2 = in_stack_00000004 + 2;
    iVar5 = iVar4 + 4;
    in_stack_00000004 = in_stack_00000004 + 3;
    *(uint *)(&DAT_01c6a974 + iVar4) =
         (uint)*pbVar2 << (DAT_01c6af8c & 0x1f) |
         (uint)bVar3 << (DAT_01c6af74 & 0x1f) | (uint)*pbVar1 << (DAT_01c6af80 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}
