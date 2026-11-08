// Name: FUN_005a1940
// Address: 005a1940
// Address Range: [[005a1940, 005a196d]]
// Convention: unknown
// Signature: bool FUN_005a1940(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

bool FUN_005a1940(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  iVar1 = FUN_005c170c(*(int *)(param_1 + 4),param_2,param_3);
  return iVar1 == 0;
}
