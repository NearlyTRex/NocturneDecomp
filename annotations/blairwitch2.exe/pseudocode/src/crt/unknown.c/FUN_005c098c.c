// Name: crt_unknown.c_FUN_005c098c
// Address: 005c098c
// Address Range: [[005c098c, 005c0a60]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c098c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_005c098c(HANDLE param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((int)param_2 < 0) {
    return;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d8)();
  if (param_2 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (param_2 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (param_2 != 2) goto LAB_005c09da;
    nStdHandle = 0xfffffff4;
  }
  SetStdHandle(nStdHandle,param_1);
LAB_005c09da:
  iVar1 = param_2 * 4;
  if ((int)param_2 < DAT_0061f4dc) {
    *(HANDLE *)(iVar1 + (int)DAT_0061f4d8) = param_1;
  }
  else {
    DAT_0061f4d8 = realloc(DAT_0061f4d8,iVar1 + 4);
    if (DAT_0061f4dc < (int)param_2) {
      iVar2 = DAT_0061f4dc * 4;
      do {
        *(uint *)((int)DAT_0061f4d8 + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar2 < iVar1);
    }
    DAT_0061f4dc = param_2 + 1;
    *(HANDLE *)(param_2 * 4 + (int)DAT_0061f4d8) = param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2dc)();
  return;
}
