// Name: FUN_00473530
// Address: 00473530
// Address Range: [[00473530, 004735b5]]
// Convention: unknown
// Signature: void FUN_00473530(int param_1)

#include "nocturne.h"

void FUN_00473530(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar4 = 0;
    for (iVar3 = 0;
        iVar3 < *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
        iVar3 = iVar3 + 1) {
      puVar2 = (uint *)(*(int *)(param_1 + 0x4c) + iVar4);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[0x15] = 0;
      if (puVar2[3] != 0) {
        uVar1 = FUN_00466290(puVar2[3],0);
        FUN_005a30c4(uVar1);
      }
      iVar4 = iVar4 + 0x58;
      puVar2[3] = 0;
    }
    FUN_005a3770(*(uint *)(param_1 + 0x4c));
  }
  *(uint *)(param_1 + 0x4c) = 0;
  return;
}
