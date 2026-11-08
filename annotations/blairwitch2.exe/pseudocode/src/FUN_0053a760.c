// Name: FUN_0053a760
// Address: 0053a760
// Address Range: [[0053a760, 0053a7a5]]
// Convention: unknown
// Signature: undefined4 FUN_0053a760(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0053a760(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x15b424)) {
    do {
      iVar1 = FUN_0053a090(param_1,iVar3,param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_0053a720(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x15b424));
  }
  return 0xffffffff;
}
