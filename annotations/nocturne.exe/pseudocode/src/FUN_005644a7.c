// Name: FUN_005644a7
// Address: 005644a7
// Address Range: [[005644a7, 005644ee]]
// Convention: unknown
// Signature: int FUN_005644a7(int param_1,uint param_2,int param_3)

#include "nocturne.h"

int FUN_005644a7(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  pcVar1 = *(code **)(param_3 + 4);
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = param_1;
  for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
    (*pcVar1)(iVar3,uVar4,param_3);
    iVar3 = iVar3 + iVar2;
  }
  return param_1;
}
