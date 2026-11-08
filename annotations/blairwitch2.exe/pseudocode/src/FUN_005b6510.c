// Name: FUN_005b6510
// Address: 005b6510
// Address Range: [[005b6510, 005b655b]]
// Convention: unknown
// Signature: void FUN_005b6510(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_005b6510(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00544ee0(param_3);
  FUN_005471f0(param_3,0);
  iVar1 = *(int *)(param_3 + 0x2230);
  iVar2 = FUN_00547810(param_3);
  FUN_005b6400(param_1,param_2,*(uint *)(param_3 + 0x2234),0,
               *(uint *)(iVar2 + 0x2c + iVar1 * 4));
  return;
}
