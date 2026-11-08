// Name: FUN_0059d990
// Address: 0059d990
// Address Range: [[0059d990, 0059d9e6]]
// Convention: unknown
// Signature: undefined4 FUN_0059d990(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0059d990(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x834) != 0) &&
     (iVar3 = 0, iVar2 = param_1, 0 < *(int *)(param_1 + 0x834))) {
    do {
      iVar1 = FUN_005b8c30(param_2,iVar2);
      iVar3 = iVar3 + 1;
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x83c) = iVar3;
        return 1;
      }
      iVar2 = iVar2 + 0x19;
    } while (iVar3 < *(int *)(param_1 + 0x834));
  }
  return 0;
}
