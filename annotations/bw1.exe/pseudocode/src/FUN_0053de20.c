// Name: FUN_0053de20
// Address: 0053de20
// Address Range: [[0053de20, 0053df0b]]
// Convention: unknown
// Signature: bool FUN_0053de20(int param_1)

#include "nocturne.h"

bool FUN_0053de20(int param_1)

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
  if (DAT_00713a7c == 1) {
    local_24 = (&DAT_00629024)[iVar4 * 0xc] - (&DAT_00629024)[iVar1 * 0xc];
    local_20 = *(int *)(&DAT_00629028 + iVar3) - *(int *)(&DAT_00629028 + iVar1 * 0x30);
    local_1c = (&DAT_00629024)[iVar5 * 0xc] - (&DAT_00629024)[iVar4 * 0xc];
    local_18 = *(int *)(&DAT_00629028 + iVar5 * 0x30) - *(int *)(&DAT_00629028 + iVar3);
  }
  else {
    local_1c = (&DAT_00629024)[iVar4 * 0xc] - (&DAT_00629024)[iVar1 * 0xc];
    local_18 = *(int *)(&DAT_00629028 + iVar3) - *(int *)(&DAT_00629028 + iVar1 * 0x30);
    local_24 = (&DAT_00629024)[iVar5 * 0xc] - (&DAT_00629024)[iVar4 * 0xc];
    local_20 = *(int *)(&DAT_00629028 + iVar5 * 0x30) - *(int *)(&DAT_00629028 + iVar3);
  }
  iVar4 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar5 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar5 - iVar4;
  return (SBORROW4(iVar5,iVar4) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0;
}
