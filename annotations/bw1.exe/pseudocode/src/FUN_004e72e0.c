// Name: FUN_004e72e0
// Address: 004e72e0
// Address Range: [[004e72e0, 004e7338]]
// Convention: unknown
// Signature: void FUN_004e72e0(int param_1)

#include "nocturne.h"

void FUN_004e72e0(int param_1)

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
    FUN_005c09f0(*(int *)(param_1 + 0x24));
    *(uint *)(param_1 + 0x24) = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x28) = 0;
      return;
    }
  }
  uVar2 = FUN_005960c0(iVar1,0);
  FUN_005c0344(uVar2);
  *(uint *)(param_1 + 0x28) = 0;
  return;
}
