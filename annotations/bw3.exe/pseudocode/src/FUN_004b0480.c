// Name: FUN_004b0480
// Address: 004b0480
// Address Range: [[004b0480, 004b04f7]]
// Convention: unknown
// Signature: void FUN_004b0480(int param_1)

#include "nocturne.h"

void FUN_004b0480(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 4;
    FUN_005a30b6(*(uint *)(iVar1 + 0x194));
    *(uint *)(iVar1 + 0x194) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x10);
  if (*(int *)(param_1 + 0x1dcc) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x1dcc));
    *(uint *)(param_1 + 0x1dcc) = 0;
  }
  if (*(int *)(param_1 + 0x1dd4) == 0) {
    FUN_004af7d0(param_1);
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 0x1dd4));
  FUN_004af7d0(param_1);
  return;
}
