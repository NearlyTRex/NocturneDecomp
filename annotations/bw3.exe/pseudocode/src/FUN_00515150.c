// Name: FUN_00515150
// Address: 00515150
// Address Range: [[00515150, 005151e0]]
// Convention: unknown
// Signature: int FUN_00515150(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00515150(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte auStack_210 [256];
  byte auStack_110 [256];
  
  iVar2 = 0;
  FUN_00465e50(param_2,0,0,auStack_110,0);
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      FUN_00465e50(piVar3[1] + 4,0,0,auStack_210,0);
      iVar1 = FUN_005a3260(auStack_110,auStack_210);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  return -1;
}
