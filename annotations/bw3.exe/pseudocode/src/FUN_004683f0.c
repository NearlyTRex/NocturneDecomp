// Name: FUN_004683f0
// Address: 004683f0
// Address Range: [[004683f0, 00468483]]
// Convention: unknown
// Signature: void FUN_004683f0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_004683f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  iVar1 = FUN_00468870(param_1,&param_2,&param_3,&param_4,&param_5,*(uint *)(param_1 + 0x10),
                       *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18),
                       *(uint *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return;
  }
  FUN_00468530(param_1,param_2,param_3,param_4,param_5);
  return;
}
