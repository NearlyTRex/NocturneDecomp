// Name: FUN_004c1830
// Address: 004c1830
// Address Range: [[004c1830, 004c18a7]]
// Convention: unknown
// Signature: void FUN_004c1830(int param_1)

#include "nocturne.h"

void FUN_004c1830(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 4;
    FUN_005c0336(*(uint *)(iVar1 + 0x194));
    *(uint *)(iVar1 + 0x194) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x10);
  if (*(int *)(param_1 + 0x1dcc) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x1dcc));
    *(uint *)(param_1 + 0x1dcc) = 0;
  }
  if (*(int *)(param_1 + 0x1dd4) == 0) {
    FUN_004c0b80(param_1);
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x1dd4));
  FUN_004c0b80(param_1);
  return;
}
