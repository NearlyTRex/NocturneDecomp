// Name: FUN_0054f400
// Address: 0054f400
// Address Range: [[0054f400, 0054f475]]
// Convention: unknown
// Signature: undefined4 FUN_0054f400(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0054f400(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0054ea40(param_1);
  iVar3 = *piVar1 + -2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar3 != *(int *)(param_1 + 0x2320)) {
    FUN_0054e420(param_1,iVar3);
  }
  uVar2 = FUN_0054ea40(param_1,iVar3,param_2,param_3,*(uint *)(param_1 + 0x2324),
                       param_1 + 0x2140);
  uVar2 = FUN_0054ac50(uVar2);
  return uVar2;
}
