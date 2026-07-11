// Name: FUN_004e10a0
// Address: 004e10a0
// Address Range: [[004e10a0, 004e1114]]
// Convention: unknown
// Signature: int FUN_004e10a0(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e10a0(int *param_1,uint param_2,int param_3)

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
      piVar3 = (int *)((int)piVar3 + 0x1e);
    } while (iVar2 < *param_1);
  }
  if (param_3 == 0) {
    return -1;
  }
  _DAT_01cc4800 = "..\\core\\motion.cpp";
  _DAT_01cc4804 = 0x113;
  FUN_004c8440("Can't find state \"%s\" in motion list",param_2);
  return -1;
}
