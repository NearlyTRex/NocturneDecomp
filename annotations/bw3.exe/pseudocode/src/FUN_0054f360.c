// Name: FUN_0054f360
// Address: 0054f360
// Address Range: [[0054f360, 0054f3ff]]
// Convention: unknown
// Signature: void FUN_0054f360(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0054f360(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x2140 + param_3 * 4) = 0;
    return;
  }
  piVar1 = (int *)FUN_0054ea40(param_1);
  uVar2 = (uint)(1 < *piVar1);
  for (piVar3 = piVar1 + uVar2 * 2; (0 < (int)uVar2 && (piVar3[2] != 0)); piVar3 = piVar3 + -2) {
    uVar2 = uVar2 - 1;
  }
  if (uVar2 != *(uint *)(param_1 + 0x2320)) {
    FUN_0054e420(param_1,uVar2);
  }
  FUN_0054a6a0(piVar1,*(uint *)(param_1 + 0x2320),param_2,param_3,
               *(uint *)(param_1 + 0x2324),*(uint *)(param_1 + 0x2230 + param_3 * 4));
  *(uint *)(param_1 + 0x2140 + param_3 * 4) = 0;
  return;
}
