// Name: FUN_00548090
// Address: 00548090
// Address Range: [[00548090, 00548115]]
// Convention: unknown
// Signature: int FUN_00548090(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00548090(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1de78)) {
    iVar3 = param_1 + 0x1de7c;
    do {
      iVar1 = FUN_005a3260(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < *(int *)(param_1 + 0x1de78));
  }
  if (param_3 == 0) {
    return -1;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x179;
  FUN_004e4330("Can't find bone %s in skeleton %s!",param_2,param_1 + 0x1de28);
  return -1;
}
