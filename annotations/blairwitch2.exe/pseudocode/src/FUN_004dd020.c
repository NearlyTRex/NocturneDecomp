// Name: FUN_004dd020
// Address: 004dd020
// Address Range: [[004dd020, 004dd098]]
// Convention: unknown
// Signature: void FUN_004dd020(int param_1)

#include "nocturne.h"

void FUN_004dd020(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x468) * 4 + param_1 + 0x610);
  if (iVar1 == 0) {
    return;
  }
  *(uint *)(*(int *)(param_1 + 0x464) + 0x470) = *(uint *)(iVar1 + 0x6c4);
  *(uint *)(*(int *)(param_1 + 0x464) + 0x474) =
       *(uint *)(*(int *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4) + 0x6c8);
  uVar2 = FUN_00408a50(*(uint *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4));
  FUN_0040e240(*(uint *)(param_1 + 0x464),uVar2);
  return;
}
