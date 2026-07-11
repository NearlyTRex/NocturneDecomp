// Name: FUN_0044be60
// Address: 0044be60
// Address Range: [[0044be60, 0044bea6]]
// Convention: unknown
// Signature: int FUN_0044be60(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_0044be60(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar1 = FUN_005649c0(piVar3,param_2);
      if (iVar1 == 0) {
        return param_1[iVar2 + 0x281];
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar2 < *param_1);
  }
  return 0;
}
