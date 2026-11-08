// Name: FUN_005bfb18
// Address: 005bfb18
// Address Range: [[005bfb18, 005bfb3e]]
// Convention: unknown
// Signature: void FUN_005bfb18(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005bfb18(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_005c3320(param_1,param_2,param_3,&LAB_005bfb00);
  *(byte *)(param_1 + iVar1) = 0;
  return;
}
