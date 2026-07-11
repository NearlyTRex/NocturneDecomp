// Name: FUN_0051e960
// Address: 0051e960
// Address Range: [[0051e960, 0051e9d5]]
// Convention: unknown
// Signature: undefined4 FUN_0051e960(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0051e960(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0051e020(param_1);
  iVar3 = *piVar1 + -2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar3 != *(int *)(param_1 + 0x2230)) {
    FUN_0051da50(param_1,iVar3);
  }
  uVar2 = FUN_0051e020(param_1,iVar3,param_2,param_3,*(uint *)(param_1 + 0x2234),
                       param_1 + 0x2140);
  uVar2 = FUN_0051a470(uVar2);
  return uVar2;
}
