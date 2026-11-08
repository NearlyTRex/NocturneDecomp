// Name: FUN_005a0ec0
// Address: 005a0ec0
// Address Range: [[005a0ec0, 005a0f52]]
// Convention: unknown
// Signature: undefined4 FUN_005a0ec0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005a0ec0(int param_1,int param_2)

{
  uint lDistanceToMove;
  int iVar1;
  int iVar2;
  uint uVar3;
  DWORD local_14;
  
  lDistanceToMove = param_2 + *(int *)(param_1 + 0xc) & 0xfffff000;
  iVar1 = lDistanceToMove - *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8) - iVar1;
  *(int *)(param_1 + 0x24) = iVar2;
  *(int *)(param_1 + 0x1c) = iVar1;
  uVar3 = iVar2 + 0xfffU & 0xfffff000;
  *(uint *)(param_1 + 0x24) = uVar3;
  if (*(int *)(param_1 + 0x20) < (int)uVar3) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
  }
  SetFilePointer(*(HANDLE *)(param_1 + 4),lDistanceToMove,(PLONG)0x0,0);
  local_14 = 0;
  ReadFile(*(HANDLE *)(param_1 + 4),*(LPVOID *)(param_1 + 0x18),*(DWORD *)(param_1 + 0x24),&local_14
           ,(LPOVERLAPPED)0x0);
  *(DWORD *)(param_1 + 0x24) = local_14;
  if ((int)local_14 < 1) {
    *(uint *)(param_1 + 0x24) = 0;
    return 0;
  }
  return 1;
}
