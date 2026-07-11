// Name: FUN_004df770
// Address: 004df770
// Address Range: [[004df770, 004df7bb]]
// Convention: unknown
// Signature: void FUN_004df770(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004df770(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0051b880(param_3);
  FUN_0051da50(param_3,0);
  iVar1 = *(int *)(param_3 + 0x2230);
  iVar2 = FUN_0051e020(param_3);
  FUN_004df660(param_1,param_2,*(uint *)(param_3 + 0x2234),0,
               *(uint *)(iVar2 + 0x2c + iVar1 * 4));
  return;
}
