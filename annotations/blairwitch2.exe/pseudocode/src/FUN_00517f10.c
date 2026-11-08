// Name: FUN_00517f10
// Address: 00517f10
// Address Range: [[00517f10, 00517f50]]
// Convention: unknown
// Signature: int FUN_00517f10(int *param_1)

#include "nocturne.h"

int FUN_00517f10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = *param_1 * 0x24;
  if (0 < *param_1) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = FUN_00516250(param_1[1] + iVar3);
      iVar3 = iVar3 + 0x24;
      iVar4 = iVar4 + iVar1;
    } while (iVar2 < *param_1);
  }
  return iVar4;
}
