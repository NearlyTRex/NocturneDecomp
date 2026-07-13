// Name: FUN_004f5bf0
// Address: 004f5bf0
// Address Range: [[004f5bf0, 004f5c30]]
// Convention: unknown
// Signature: int FUN_004f5bf0(int *param_1)

#include "nocturne.h"

int FUN_004f5bf0(int *param_1)

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
      iVar1 = FUN_004f3fa0(param_1[1] + iVar3);
      iVar3 = iVar3 + 0x24;
      iVar4 = iVar4 + iVar1;
    } while (iVar2 < *param_1);
  }
  return iVar4;
}
