// Name: FUN_004f9200
// Address: 004f9200
// Address Range: [[004f9200, 004f924f]]
// Convention: unknown
// Signature: undefined4 FUN_004f9200(int *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004f9200(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = FUN_004f8150(piVar2[1],param_2);
      if (-1 < iVar1) {
        FUN_004f81c0(piVar2[1],iVar1,param_2);
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}
