// Name: FUN_004e1010
// Address: 004e1010
// Address Range: [[004e1010, 004e1092]]
// Convention: unknown
// Signature: int FUN_004e1010(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e1010(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x964)) {
    iVar3 = param_1 + 0x968;
    do {
      iVar1 = FUN_00564520(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x54c;
    } while (iVar2 < *(int *)(param_1 + 0x964));
  }
  if (param_3 == 0) {
    return -1;
  }
  _DAT_01cc4800 = "..\\core\\motion.cpp";
  _DAT_01cc4804 = 0x100;
  FUN_004c8440("Can't find motion \"%s\" in motion list",param_2);
  return -1;
}
