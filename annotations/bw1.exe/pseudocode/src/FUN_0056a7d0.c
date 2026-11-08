// Name: FUN_0056a7d0
// Address: 0056a7d0
// Address Range: [[0056a7d0, 0056a86f]]
// Convention: unknown
// Signature: void FUN_0056a7d0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0056a7d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x2140 + param_3 * 4) = 0;
    return;
  }
  piVar1 = (int *)FUN_00569eb0(param_1);
  uVar2 = (uint)(1 < *piVar1);
  for (piVar3 = piVar1 + uVar2 * 2; (0 < (int)uVar2 && (piVar3[2] != 0)); piVar3 = piVar3 + -2) {
    uVar2 = uVar2 - 1;
  }
  if (uVar2 != *(uint *)(param_1 + 0x2320)) {
    FUN_00569890(param_1,uVar2);
  }
  FUN_00565b10(piVar1,*(uint *)(param_1 + 0x2320),param_2,param_3,
               *(uint *)(param_1 + 0x2324),*(uint *)(param_1 + 0x2230 + param_3 * 4));
  *(uint *)(param_1 + 0x2140 + param_3 * 4) = 0;
  return;
}
