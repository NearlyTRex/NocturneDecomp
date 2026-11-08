// Name: FUN_004fb9c0
// Address: 004fb9c0
// Address Range: [[004fb9c0, 004fba42]]
// Convention: unknown
// Signature: int FUN_004fb9c0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fb9c0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1c24)) {
    iVar3 = param_1 + 0x1c28;
    do {
      iVar1 = FUN_005a3260(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x120;
    } while (iVar2 < *(int *)(param_1 + 0x1c24));
  }
  if (param_3 == 0) {
    return -1;
  }
  _DAT_01d71de0 = "..\\core\\motion.cpp";
  _DAT_01d71de4 = 0x13f;
  FUN_004e4330("Can't find motion \"%s\" in motion list",param_2);
  return -1;
}
