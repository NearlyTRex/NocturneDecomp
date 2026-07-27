// Name: engine_prim.c_FUN_004f9bc0
// Address: 004f9bc0
// Address Range: [[004f9bc0, 004f9cab]]
// Convention: unknown
// Signature: bool engine_prim_c_FUN_004f9bc0(int param_1)

#include "nocturne.h"

bool engine_prim_c_FUN_004f9bc0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x30);
  iVar3 = iVar4 * 0x30;
  if (DAT_006b0280 == 1) {
    local_24 = (&DAT_005c5024)[iVar4 * 0xc] - (&DAT_005c5024)[iVar1 * 0xc];
    local_20 = *(int *)(&DAT_005c5028 + iVar3) - *(int *)(&DAT_005c5028 + iVar1 * 0x30);
    local_1c = (&DAT_005c5024)[iVar5 * 0xc] - (&DAT_005c5024)[iVar4 * 0xc];
    local_18 = *(int *)(&DAT_005c5028 + iVar5 * 0x30) - *(int *)(&DAT_005c5028 + iVar3);
  }
  else {
    local_1c = (&DAT_005c5024)[iVar4 * 0xc] - (&DAT_005c5024)[iVar1 * 0xc];
    local_18 = *(int *)(&DAT_005c5028 + iVar3) - *(int *)(&DAT_005c5028 + iVar1 * 0x30);
    local_24 = (&DAT_005c5024)[iVar5 * 0xc] - (&DAT_005c5024)[iVar4 * 0xc];
    local_20 = *(int *)(&DAT_005c5028 + iVar5 * 0x30) - *(int *)(&DAT_005c5028 + iVar3);
  }
  iVar4 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar5 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar5 - iVar4;
  return (SBORROW4(iVar5,iVar4) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0;
}
