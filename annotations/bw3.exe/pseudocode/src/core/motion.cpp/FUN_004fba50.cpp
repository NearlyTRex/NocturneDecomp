// Name: FUN_004fba50
// Address: 004fba50
// Address Range: [[004fba50, 004fbac4]]
// Convention: unknown
// Signature: int FUN_004fba50(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fba50(int *param_1,uint param_2,int param_3)

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
      piVar3 = (int *)((int)piVar3 + 0x1e);
    } while (iVar2 < *param_1);
  }
  if (param_3 == 0) {
    return -1;
  }
  _DAT_01d71de0 = "..\\core\\motion.cpp";
  _DAT_01d71de4 = 0x152;
  FUN_004e4330("Can't find state \"%s\" in motion list",param_2);
  return -1;
}
