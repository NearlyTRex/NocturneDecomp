// Name: FUN_0056d99b
// Address: 0056d99b
// Address Range: [[0056d99b, 0056d9e4]]
// Convention: unknown
// Signature: int FUN_0056d99b(int param_1,uint param_2,int param_3)

#include "nocturne.h"

int FUN_0056d99b(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  pcVar1 = *(code **)(param_3 + 4);
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = param_1;
  for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
    (*pcVar1)(iVar3,0,uVar4,param_3);
    iVar3 = iVar3 + iVar2;
  }
  return param_1;
}
