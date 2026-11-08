// Name: FUN_004a9150
// Address: 004a9150
// Address Range: [[004a9150, 004a91af]]
// Convention: unknown
// Signature: undefined4 FUN_004a9150(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_004a9150(int param_1,uint *param_2)

{
  int iVar1;
  
  FUN_004a91b0(param_1);
  iVar1 = FUN_004a9710(param_1,param_2[2],param_2[3]);
  if (iVar1 != 0) {
    param_2[1] = *(uint *)(param_1 + 0x18);
    *param_2 = *(uint *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
    FUN_004a9230(param_1,param_2);
    return 1;
  }
  FUN_004a9300(param_1);
  return 0;
}
