// Name: FUN_0051c760
// Address: 0051c760
// Address Range: [[0051c760, 0051c810]]
// Convention: unknown
// Signature: bool FUN_0051c760(int param_1,int param_2,int param_3)

#include "nocturne.h"

bool FUN_0051c760(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (DAT_0070ca7c == 1) {
    local_24 = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x10);
    local_20 = *(int *)(param_2 + 0x14) - *(int *)(param_1 + 0x14);
    local_1c = *(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10);
    local_18 = *(int *)(param_3 + 0x14) - *(int *)(param_2 + 0x14);
  }
  else {
    local_1c = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x10);
    local_18 = *(int *)(param_2 + 0x14) - *(int *)(param_1 + 0x14);
    local_24 = *(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10);
    local_20 = *(int *)(param_3 + 0x14) - *(int *)(param_2 + 0x14);
  }
  iVar3 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar1 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar2 = iVar4 - iVar3;
  return (SBORROW4(iVar4,iVar3) != SBORROW4(iVar2,uVar1)) != (int)(iVar2 - uVar1) < 0;
}
