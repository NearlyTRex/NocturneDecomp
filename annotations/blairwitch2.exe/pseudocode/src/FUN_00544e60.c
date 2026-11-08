// Name: FUN_00544e60
// Address: 00544e60
// Address Range: [[00544e60, 00544edd]]
// Convention: unknown
// Signature: void FUN_00544e60(int param_1)

#include "nocturne.h"

void FUN_00544e60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_00547890(param_1);
  if (0 < *(int *)(iVar1 + 0x1d1f8)) {
    iVar4 = param_1 + 0x6b0;
    iVar2 = param_1;
    do {
      FUN_00593c40(iVar4);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar2 + 0xcf0) = *(uint *)(iVar2 + 0x514);
      iVar4 = iVar4 + 0x10;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(iVar1 + 0x1d1f8));
  }
  *(uint *)(param_1 + 0x6ac) = 0;
  *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6ac);
  *(uint *)(param_1 + 0x6a4) = *(uint *)(param_1 + 0x6a8);
  return;
}
