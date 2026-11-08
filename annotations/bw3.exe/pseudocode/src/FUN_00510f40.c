// Name: FUN_00510f40
// Address: 00510f40
// Address Range: [[00510f40, 00510f80]]
// Convention: unknown
// Signature: int FUN_00510f40(int *param_1)

#include "nocturne.h"

int FUN_00510f40(int *param_1)

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
      iVar1 = FUN_0050f280(param_1[1] + iVar3);
      iVar3 = iVar3 + 0x24;
      iVar4 = iVar4 + iVar1;
    } while (iVar2 < *param_1);
  }
  return iVar4;
}
