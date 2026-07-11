// Name: FUN_00427290
// Address: 00427290
// Address Range: [[00427290, 0042730e]]
// Convention: unknown
// Signature: void FUN_00427290(int param_1)

#include "nocturne.h"

void FUN_00427290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_0051e0a0(param_1 + 0x150);
  if (0 < *(int *)(param_1 + 0x2f08)) {
    iVar2 = param_1 + 0x33c4;
    iVar3 = param_1;
    do {
      if ((*(int *)(param_1 + 0x2290 + *(int *)(iVar3 + 0x2f14) * 4) != 0) &&
         (*(int *)(*(int *)(iVar3 + 0x2f18) * 0x24 + iVar1 + 0x2857c) != -1)) {
        (**(code **)(*(int *)(iVar2 + 0x14c) + 0xc))(iVar2);
      }
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x29c;
    } while (iVar4 < *(int *)(param_1 + 0x2f08));
  }
  return;
}
