// Name: FUN_005a18f0
// Address: 005a18f0
// Address Range: [[005a18f0, 005a1930]]
// Convention: unknown
// Signature: int FUN_005a18f0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

int FUN_005a18f0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_005c1a70(param_2,1,param_3,*(int *)(param_1 + 4));
    if ((iVar1 == param_3) || ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x20) == 0)) {
      return iVar1;
    }
  }
  return -2;
}
