// Name: FUN_004e1500
// Address: 004e1500
// Address Range: [[004e1500, 004e15f4]]
// Convention: unknown
// Signature: undefined4 FUN_004e1500(int param_1)

#include "nocturne.h"

uint FUN_004e1500(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_004e1660(param_1);
  iVar4 = *(int *)(param_1 + 0x28);
  if ((iVar4 < 0) || (iVar4 == *(int *)(iVar1 + 0x24))) {
    *(uint *)(param_1 + 0x2c) = 0;
    return 0;
  }
  if ((*(int **)(param_1 + 0x2c) == (int *)0x0) || (iVar4 != **(int **)(param_1 + 0x2c))) {
    iVar2 = 0;
    iVar4 = 0;
    iVar3 = iVar1;
    if (0 < *(int *)(iVar1 + 0x68)) {
      do {
        if (*(int *)(iVar3 + 0x6c) == *(int *)(param_1 + 0x28)) {
          iVar4 = iVar1 + 0x6c + iVar2 * 0x18;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < *(int *)(iVar1 + 0x68));
    }
    if ((iVar4 != 0) && (iVar4 != *(int *)(param_1 + 0x2c))) {
      *(uint *)(param_1 + 0x2c) = 0;
      FUN_004e19f0(param_1);
      switch(*(uint *)(iVar4 + 4)) {
      case 1:
        FUN_004e1990(param_1,*(uint *)(iVar4 + 8),*(uint *)(iVar4 + 0xc));
        if (*(int *)(iVar4 + 0x14) != 0) {
          iVar4 = FUN_004e1660(param_1);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x24);
        }
        return 1;
      case 2:
        *(int *)(param_1 + 0x2c) = iVar4;
        return 0;
      case 3:
      case 4:
      case 5:
      case 6:
        *(int *)(param_1 + 0x2c) = iVar4;
        FUN_004e1770(param_1,iVar4);
        return 0;
      }
    }
  }
  return 0;
}
