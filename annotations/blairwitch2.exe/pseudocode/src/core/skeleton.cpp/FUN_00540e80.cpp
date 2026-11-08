// Name: FUN_00540e80
// Address: 00540e80
// Address Range: [[00540e80, 00540f05]]
// Convention: unknown
// Signature: int FUN_00540e80(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00540e80(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1d1f8)) {
    iVar3 = param_1 + 0x1d1fc;
    do {
      iVar1 = FUN_005b8130(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < *(int *)(param_1 + 0x1d1f8));
  }
  if (param_3 == 0) {
    return -1;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x178;
  FUN_004e4500("Can't find bone %s in skeleton %s!",param_2,param_1 + 0x1d1a8);
  return -1;
}
