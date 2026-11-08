// Name: FUN_0047b5e0
// Address: 0047b5e0
// Address Range: [[0047b5e0, 0047b767]]
// Convention: unknown
// Signature: int FUN_0047b5e0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047b5e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if (param_3 < param_1) {
    param_1 = param_3;
    param_3 = iVar1;
  }
  if (param_4 < param_2) {
    param_2 = param_4;
    param_4 = iVar2;
  }
  iVar1 = 1;
  if (param_1 < param_3) {
    iVar2 = param_1;
    do {
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar2,param_2);
        }
        else {
          FUN_004f36e0(iVar2,param_2);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < param_3);
  }
  if (param_2 < param_4) {
    iVar2 = param_2;
    do {
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(param_3,iVar2);
        }
        else {
          FUN_004f36e0(param_3,iVar2);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < param_4);
  }
  if (param_1 < param_3) {
    do {
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(param_3,param_4);
        }
        else {
          FUN_004f36e0(param_3,param_4);
        }
      }
      param_3 = param_3 + -1;
      iVar1 = iVar1 + 1;
    } while (param_1 < param_3);
  }
  iVar2 = param_1;
  if (param_2 < param_4) {
    do {
      iVar2 = iVar1 / (param_5 * 2);
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c5baec == 0) {
          iVar2 = FUN_00401130(param_1,param_4);
        }
        else {
          iVar2 = FUN_004f36e0(param_1,param_4);
        }
      }
      param_4 = param_4 + -1;
      iVar1 = iVar1 + 1;
    } while (param_2 < param_4);
  }
  return iVar2;
}
