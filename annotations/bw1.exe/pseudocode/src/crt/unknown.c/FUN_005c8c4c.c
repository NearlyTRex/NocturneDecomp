// Name: crt_unknown.c_FUN_005c8c4c
// Address: 005c8c4c
// Address Range: [[005c8c4c, 005c8d20]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c8c4c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_005c8c4c(HANDLE param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((int)param_2 < 0) {
    return;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626630)();
  if (param_2 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (param_2 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (param_2 != 2) goto LAB_005c8c9a;
    nStdHandle = 0xfffffff4;
  }
  SetStdHandle(nStdHandle,param_1);
LAB_005c8c9a:
  iVar1 = param_2 * 4;
  if ((int)param_2 < DAT_0062683c) {
    *(HANDLE *)(iVar1 + (int)DAT_00626838) = param_1;
  }
  else {
    DAT_00626838 = realloc(DAT_00626838,iVar1 + 4);
    if (DAT_0062683c < (int)param_2) {
      iVar2 = DAT_0062683c * 4;
      do {
        *(uint *)((int)DAT_00626838 + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar2 < iVar1);
    }
    DAT_0062683c = param_2 + 1;
    *(HANDLE *)(param_2 * 4 + (int)DAT_00626838) = param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626634)();
  return;
}
