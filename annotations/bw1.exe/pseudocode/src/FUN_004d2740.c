// Name: FUN_004d2740
// Address: 004d2740
// Address Range: [[004d2740, 004d27a6]]
// Convention: unknown
// Signature: void FUN_004d2740(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

void FUN_004d2740(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_4 * 4 + param_1;
  *(float *)(iVar1 + 0x514) = *(float *)(iVar1 + 0x514) * param_3;
  iVar2 = 0;
  iVar1 = param_2;
  if (0 < *(int *)(param_2 + 0x1de78)) {
    do {
      if (param_4 == *(int *)(iVar1 + 0x1de9c)) {
        FUN_004d2740(param_1,param_2,param_3,iVar2);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x24;
    } while (iVar2 < *(int *)(param_2 + 0x1de78));
  }
  return;
}
