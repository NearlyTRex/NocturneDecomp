// Name: FUN_0050f990
// Address: 0050f990
// Address Range: [[0050f990, 0050f9db]]
// Convention: unknown
// Signature: void FUN_0050f990(int param_1,int param_2)

#include "nocturne.h"

void FUN_0050f990(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00438ef0(param_1,0,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    FUN_0050f9e0(param_1,iVar1,*(uint *)(param_1 + 0x18));
    FUN_005a3770(iVar1);
    if (param_2 != 0) {
      FUN_0050fd90(param_1);
      return;
    }
  }
  return;
}
