// Name: entry
// Address: 100057f0
// Address Range: [[100057f0, 100058b9]]
// Convention: unknown
// Signature: int entry(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

int entry(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_10016c60 = DAT_10016c60 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10016c60 < 1) {
      return 0;
    }
    DAT_10016c60 = DAT_10016c60 + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_10241984 != (code *)0x0) {
      iVar2 = (*DAT_10241984)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_100056a0(param_1,param_2,param_3);
      goto LAB_10005865;
    }
LAB_10005873:
    if (iVar1 != 0) goto LAB_10005886;
  }
  else {
LAB_10005865:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_100085c0(param_1,param_2,param_3);
      goto LAB_10005873;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_10007910();
  }
LAB_10005886:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_100056a0(param_1,param_2,param_3);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_10241984 != (code *)0x0)) {
      iVar1 = (*DAT_10241984)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}
