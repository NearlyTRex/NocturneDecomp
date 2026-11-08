// Name: FUN_0047ed30
// Address: 0047ed30
// Address Range: [[0047ed30, 0047edc3]]
// Convention: unknown
// Signature: void FUN_0047ed30(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_0047ed30(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  iVar1 = FUN_0047f1b0(param_1,&param_2,&param_3,&param_4,&param_5,*(uint *)(param_1 + 0x10),
                       *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18),
                       *(uint *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return;
  }
  FUN_0047ee70(param_1,param_2,param_3,param_4,param_5);
  return;
}
