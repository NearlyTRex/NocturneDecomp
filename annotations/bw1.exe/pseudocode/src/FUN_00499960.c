// Name: FUN_00499960
// Address: 00499960
// Address Range: [[00499960, 0049999e]]
// Convention: unknown
// Signature: int FUN_00499960(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00499960(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      uVar1 = FUN_004998a0(param_1,iVar3,param_2);
      iVar2 = FUN_005c04e0(uVar1);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return -1;
}
