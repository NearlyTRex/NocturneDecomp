// Name: FUN_00574930
// Address: 00574930
// Address Range: [[00574930, 0057495d]]
// Convention: unknown
// Signature: bool FUN_00574930(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

bool FUN_00574930(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return false;
  }
  iVar1 = FUN_005a457c(*(int *)(param_1 + 4),param_2,param_3);
  return iVar1 == 0;
}
