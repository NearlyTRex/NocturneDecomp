// Name: FUN_00565780
// Address: 00565780
// Address Range: [[00565780, 00565805]]
// Convention: unknown
// Signature: int FUN_00565780(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00565780(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    iVar3 = param_1 + 0xc04;
    do {
      iVar1 = FUN_005c04e0(param_2,iVar3);
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
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x5e1;
  FUN_005030e0("Can't find part %s in model %s",param_2,param_1 + 0x35b0);
  return -1;
}
