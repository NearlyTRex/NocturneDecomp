// Name: FUN_0054c090
// Address: 0054c090
// Address Range: [[0054c090, 0054c10d]]
// Convention: unknown
// Signature: void FUN_0054c090(int param_1)

#include "nocturne.h"

void FUN_0054c090(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_0054eac0(param_1);
  if (0 < *(int *)(iVar1 + 0x1de78)) {
    iVar4 = param_1 + 0x6b0;
    iVar2 = param_1;
    do {
      FUN_00585970(iVar4);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar2 + 0xcf0) = *(uint *)(iVar2 + 0x514);
      iVar4 = iVar4 + 0x10;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x1de78));
  }
  *(uint *)(param_1 + 0x6ac) = 0;
  *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6ac);
  *(uint *)(param_1 + 0x6a4) = *(uint *)(param_1 + 0x6a8);
  return;
}
