// Name: FUN_004cfc70
// Address: 004cfc70
// Address Range: [[004cfc70, 004cfcc8]]
// Convention: unknown
// Signature: void FUN_004cfc70(int param_1)

#include "nocturne.h"

void FUN_004cfc70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x28) = 0;
      return;
    }
  }
  else {
    FUN_005a3770(*(int *)(param_1 + 0x24));
    *(uint *)(param_1 + 0x24) = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x28) = 0;
      return;
    }
  }
  uVar2 = FUN_005690b0(iVar1,0);
  FUN_005a30c4(uVar2);
  *(uint *)(param_1 + 0x28) = 0;
  return;
}
