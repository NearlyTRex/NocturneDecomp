// Name: FUN_005090a0
// Address: 005090a0
// Address Range: [[005090a0, 005090e2]]
// Convention: unknown
// Signature: int FUN_005090a0(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_005090a0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar1 = FUN_00564520(piVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x68;
    } while (iVar2 < *param_1);
  }
  return -1;
}
