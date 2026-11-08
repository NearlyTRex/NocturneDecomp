// Name: FUN_005a2898
// Address: 005a2898
// Address Range: [[005a2898, 005a28be]]
// Convention: unknown
// Signature: void FUN_005a2898(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005a2898(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_005a6190(param_1,param_2,param_3,&LAB_005a2880);
  *(byte *)(param_1 + iVar1) = 0;
  return;
}
