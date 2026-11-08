// Name: FUN_0054e500
// Address: 0054e500
// Address Range: [[0054e500, 0054e540]]
// Convention: unknown
// Signature: void FUN_0054e500(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054e500(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2320)) {
    FUN_0054e420(param_1,param_2);
  }
  uVar1 = FUN_0054ea40(param_1,*(uint *)(param_1 + 0x2320),*(uint *)(param_1 + 0x2324));
  FUN_00548bd0(uVar1);
  return;
}
