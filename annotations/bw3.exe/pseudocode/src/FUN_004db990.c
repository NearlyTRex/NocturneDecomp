// Name: FUN_004db990
// Address: 004db990
// Address Range: [[004db990, 004db9d1]]
// Convention: unknown
// Signature: undefined4 FUN_004db990(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004db990(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = FUN_005a3260(*(uint *)(iVar2 + 0x14),param_2);
      if (iVar1 == 0) {
        return *(uint *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}
