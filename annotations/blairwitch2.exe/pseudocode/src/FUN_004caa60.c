// Name: FUN_004caa60
// Address: 004caa60
// Address Range: [[004caa60, 004caab8]]
// Convention: unknown
// Signature: void FUN_004caa60(int param_1)

#include "nocturne.h"

void FUN_004caa60(int param_1)

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
    FUN_005b86a0(*(int *)(param_1 + 0x24));
    *(uint *)(param_1 + 0x24) = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x28) = 0;
      return;
    }
  }
  uVar2 = FUN_005734a0(iVar1,0);
  FUN_005b7fdc(uVar2);
  *(uint *)(param_1 + 0x28) = 0;
  return;
}
