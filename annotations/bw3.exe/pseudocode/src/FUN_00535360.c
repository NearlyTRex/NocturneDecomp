// Name: FUN_00535360
// Address: 00535360
// Address Range: [[00535360, 005353a2]]
// Convention: unknown
// Signature: int FUN_00535360(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00535360(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar1 = FUN_005a3260(piVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x69;
    } while (iVar2 < *param_1);
  }
  return -1;
}
