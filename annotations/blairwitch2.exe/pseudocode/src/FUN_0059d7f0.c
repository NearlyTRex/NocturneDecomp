// Name: FUN_0059d7f0
// Address: 0059d7f0
// Address Range: [[0059d7f0, 0059d87e]]
// Convention: unknown
// Signature: undefined4 FUN_0059d7f0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0059d7f0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x838) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x838)) {
      iVar4 = param_1 + 500;
      do {
        iVar1 = FUN_005b8c30(param_2,iVar4);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar3 < *(int *)(param_1 + 0x838));
    }
    if ((iVar3 != *(int *)(param_1 + 0x838)) &&
       (iVar1 = 0, iVar4 = param_1, 0 < *(int *)(param_1 + 0x834))) {
      do {
        iVar2 = FUN_005b8c30(param_3,iVar4);
        if (iVar2 == 0) {
          *(int *)(iVar3 * 0x20 + 0x210 + param_1) = iVar4;
          return 2;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x19;
      } while (iVar1 < *(int *)(param_1 + 0x834));
    }
  }
  return 0;
}
