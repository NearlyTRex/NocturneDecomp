// Name: FUN_005481d0
// Address: 005481d0
// Address Range: [[005481d0, 00548245]]
// Convention: unknown
// Signature: undefined4 FUN_005481d0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_005481d0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00547810(param_1);
  iVar3 = *piVar1 + -2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar3 != *(int *)(param_1 + 0x2230)) {
    FUN_005471f0(param_1,iVar3);
  }
  uVar2 = FUN_00547810(param_1,iVar3,param_2,param_3,*(uint *)(param_1 + 0x2234),
                       param_1 + 0x2140);
  uVar2 = FUN_00543a40(uVar2);
  return uVar2;
}
