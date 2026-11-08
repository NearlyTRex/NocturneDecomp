// Name: FUN_004420c0
// Address: 004420c0
// Address Range: [[004420c0, 00442188]]
// Convention: unknown
// Signature: void FUN_004420c0(int param_1,char param_2)

#include "nocturne.h"

void FUN_004420c0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == '\n') {
    *(uint *)(param_1 + 0xfa8) = 0;
    iVar2 = *(int *)(param_1 + 0xfac) + 1;
    iVar1 = *(int *)(param_1 + 0xfb4) + -1;
    *(int *)(param_1 + 0xfac) = iVar2;
    if (iVar1 < iVar2) {
LAB_00442155:
      *(int *)(param_1 + 0xfac) = iVar1;
      FUN_004421d0(param_1);
      return;
    }
  }
  else {
    if (param_2 == '\0') {
      *(byte *)(*(int *)(param_1 + 0xfac) * 0x50 + param_1 + *(int *)(param_1 + 0xfa8) + 8) =
           0;
      return;
    }
    *(char *)(*(int *)(param_1 + 0xfac) * 0x50 + param_1 + *(int *)(param_1 + 0xfa8) + 8) = param_2;
    iVar1 = *(int *)(param_1 + 0xfa8) + 1;
    *(int *)(param_1 + 0xfa8) = iVar1;
    if (*(int *)(param_1 + 0xfb0) + -1 < iVar1) {
      *(uint *)(param_1 + 0xfa8) = 0;
      iVar2 = *(int *)(param_1 + 0xfac) + 1;
      iVar1 = *(int *)(param_1 + 0xfb4) + -1;
      *(int *)(param_1 + 0xfac) = iVar2;
      if (iVar1 < iVar2) goto LAB_00442155;
    }
  }
  return;
}
