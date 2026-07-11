// Name: FUN_00519b30
// Address: 00519b30
// Address Range: [[00519b30, 00519bb5]]
// Convention: unknown
// Signature: int FUN_00519b30(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00519b30(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    iVar3 = param_1 + 0xc04;
    do {
      iVar1 = FUN_00564520(param_2,iVar3);
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
  _DAT_01cc4800 = "..\\core\\skeleton.cpp";
  _DAT_01cc4804 = 0x5c8;
  FUN_004c8440("Can't find part %s in model %s",param_2,param_1 + 0x2a70);
  return -1;
}
