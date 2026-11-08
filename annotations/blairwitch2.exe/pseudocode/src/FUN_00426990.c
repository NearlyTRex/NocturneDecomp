// Name: FUN_00426990
// Address: 00426990
// Address Range: [[00426990, 00426a0e]]
// Convention: unknown
// Signature: void FUN_00426990(int param_1)

#include "nocturne.h"

void FUN_00426990(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_00547890(param_1 + 0x2b4);
  if (0 < *(int *)(param_1 + 0x3564)) {
    iVar2 = param_1 + 0x3a20;
    iVar3 = param_1;
    do {
      if ((*(int *)(param_1 + 0x23f4 + *(int *)(iVar3 + 0x3570) * 4) != 0) &&
         (*(int *)(*(int *)(iVar3 + 0x3574) * 0x24 + iVar1 + 0x1d21c) != -1)) {
        (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x1c))(iVar2);
      }
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x400;
    } while (iVar4 < *(int *)(param_1 + 0x3564));
  }
  return;
}
