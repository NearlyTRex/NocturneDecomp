// Name: FUN_005b0b70
// Address: 005b0b70
// Address Range: [[005b0b70, 005b0ba5]]
// Convention: unknown
// Signature: void FUN_005b0b70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005b0b70(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_00524770(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x24) == 0x13) {
    return;
  }
  FUN_00432050(param_1,param_2,param_3,param_4);
  return;
}
