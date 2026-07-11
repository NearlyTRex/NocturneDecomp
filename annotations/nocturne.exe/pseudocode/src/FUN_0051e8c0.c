// Name: FUN_0051e8c0
// Address: 0051e8c0
// Address Range: [[0051e8c0, 0051e95f]]
// Convention: unknown
// Signature: void FUN_0051e8c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_0051e8c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x2140 + param_3 * 4) = 0;
    return;
  }
  piVar1 = (int *)FUN_0051e020(param_1);
  uVar2 = (uint)(1 < *piVar1);
  for (piVar3 = piVar1 + uVar2 * 2; (0 < (int)uVar2 && (piVar3[2] != 0)); piVar3 = piVar3 + -2) {
    uVar2 = uVar2 - 1;
  }
  if (uVar2 != *(uint *)(param_1 + 0x2230)) {
    FUN_0051da50(param_1,uVar2);
  }
  FUN_00519ec0(piVar1,*(uint *)(param_1 + 0x2230),param_2,param_3,
               *(uint *)(param_1 + 0x2234),*(uint *)(param_1 + 0x21b8 + param_3 * 4));
  *(uint *)(param_1 + 0x2140 + param_3 * 4) = 0;
  return;
}
