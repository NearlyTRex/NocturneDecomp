// Name: FUN_0051c820
// Address: 0051c820
// Address Range: [[0051c820, 0051c90b]]
// Convention: unknown
// Signature: bool FUN_0051c820(int param_1)

#include "nocturne.h"

bool FUN_0051c820(int param_1)

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
  if (DAT_0070ca7c == 1) {
    local_24 = (&DAT_00622024)[iVar4 * 0xc] - (&DAT_00622024)[iVar1 * 0xc];
    local_20 = *(int *)(&DAT_00622028 + iVar3) - *(int *)(&DAT_00622028 + iVar1 * 0x30);
    local_1c = (&DAT_00622024)[iVar5 * 0xc] - (&DAT_00622024)[iVar4 * 0xc];
    local_18 = *(int *)(&DAT_00622028 + iVar5 * 0x30) - *(int *)(&DAT_00622028 + iVar3);
  }
  else {
    local_1c = (&DAT_00622024)[iVar4 * 0xc] - (&DAT_00622024)[iVar1 * 0xc];
    local_18 = *(int *)(&DAT_00622028 + iVar3) - *(int *)(&DAT_00622028 + iVar1 * 0x30);
    local_24 = (&DAT_00622024)[iVar5 * 0xc] - (&DAT_00622024)[iVar4 * 0xc];
    local_20 = *(int *)(&DAT_00622028 + iVar5 * 0x30) - *(int *)(&DAT_00622028 + iVar3);
  }
  iVar4 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar5 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar5 - iVar4;
  return (SBORROW4(iVar5,iVar4) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0;
}
