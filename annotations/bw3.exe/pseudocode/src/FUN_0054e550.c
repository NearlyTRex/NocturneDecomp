// Name: FUN_0054e550
// Address: 0054e550
// Address Range: [[0054e550, 0054e590]]
// Convention: unknown
// Signature: void FUN_0054e550(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054e550(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2320)) {
    FUN_0054e420(param_1,param_2);
  }
  uVar1 = FUN_0054ea40(param_1,*(uint *)(param_1 + 0x2320),*(uint *)(param_1 + 0x2324));
  FUN_00548c10(uVar1);
  return;
}
