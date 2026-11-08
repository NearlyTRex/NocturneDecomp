// Name: FUN_004bc540
// Address: 004bc540
// Address Range: [[004bc540, 004bc59e]]
// Convention: unknown
// Signature: undefined4 FUN_004bc540(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004bc540(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    iVar3 = param_1 + 0x2c4;
    do {
      iVar1 = FUN_005c04e0(iVar3,param_2);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x394 + iVar2 * 0xd4) = 1;
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xd4;
    } while (iVar2 < *(int *)(param_1 + 0x2c0));
  }
  return 0;
}
