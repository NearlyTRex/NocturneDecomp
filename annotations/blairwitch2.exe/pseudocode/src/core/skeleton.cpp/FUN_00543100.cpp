// Name: FUN_00543100
// Address: 00543100
// Address Range: [[00543100, 00543185]]
// Convention: unknown
// Signature: int FUN_00543100(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00543100(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    iVar3 = param_1 + 0xc04;
    do {
      iVar1 = FUN_005b8130(param_2,iVar3);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0xc00));
  }
  if (param_3 == 0) {
    return -1;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x5d7;
  FUN_004e4500("Can't find part %s in model %s",param_2,param_1 + 0x2a70);
  return -1;
}
