// Name: FUN_0051b800
// Address: 0051b800
// Address Range: [[0051b800, 0051b87d]]
// Convention: unknown
// Signature: void FUN_0051b800(int param_1)

#include "nocturne.h"

void FUN_0051b800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_0051e0a0(param_1);
  if (0 < *(int *)(iVar1 + 0x28558)) {
    iVar4 = param_1 + 0x6b0;
    iVar2 = param_1;
    do {
      FUN_0055d110(iVar4);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar2 + 0xcf0) = *(uint *)(iVar2 + 0x514);
      iVar4 = iVar4 + 0x10;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x28558));
  }
  *(uint *)(param_1 + 0x6ac) = 0;
  *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6ac);
  *(uint *)(param_1 + 0x6a4) = *(uint *)(param_1 + 0x6a8);
  return;
}
