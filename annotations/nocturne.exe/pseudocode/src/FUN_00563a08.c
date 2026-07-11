// Name: FUN_00563a08
// Address: 00563a08
// Address Range: [[00563a08, 00563a2e]]
// Convention: unknown
// Signature: void FUN_00563a08(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00563a08(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00569040(param_1,param_2,param_3,&LAB_005639f0);
  *(byte *)(param_1 + iVar1) = 0;
  return;
}
