// Name: crt_unknown.c_FUN_005aba8c
// Address: 005aba8c
// Address Range: [[005aba8c, 005abb60]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aba8c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_005aba8c(HANDLE param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((int)param_2 < 0) {
    return;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d4)();
  if (param_2 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (param_2 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (param_2 != 2) goto LAB_005abada;
    nStdHandle = 0xfffffff4;
  }
  SetStdHandle(nStdHandle,param_1);
LAB_005abada:
  iVar1 = param_2 * 4;
  if ((int)param_2 < DAT_00607be0) {
    *(HANDLE *)(iVar1 + (int)DAT_00607bdc) = param_1;
  }
  else {
    DAT_00607bdc = realloc(DAT_00607bdc,iVar1 + 4);
    if (DAT_00607be0 < (int)param_2) {
      iVar2 = DAT_00607be0 * 4;
      do {
        *(uint *)((int)DAT_00607bdc + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar2 < iVar1);
    }
    DAT_00607be0 = param_2 + 1;
    *(HANDLE *)(param_2 * 4 + (int)DAT_00607bdc) = param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d8)();
  return;
}
