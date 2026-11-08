// Name: FUN_0053a150
// Address: 0053a150
// Address Range: [[0053a150, 0053a1ae]]
// Convention: unknown
// Signature: undefined4 FUN_0053a150(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0053a150(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0053a720(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x15b424)) {
    do {
      iVar2 = FUN_0053a720(param_1,iVar3);
      if (iVar2 == iVar1) {
        iVar2 = FUN_0053a090(param_1,iVar3,param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x15b424));
  }
  return 0;
}
