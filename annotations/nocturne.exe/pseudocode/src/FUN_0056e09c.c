// Name: FUN_0056e09c
// Address: 0056e09c
// Address Range: [[0056e09c, 0056e170]]
// Convention: unknown
// Signature: void FUN_0056e09c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_0056e09c(HANDLE param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((int)param_2 < 0) {
    return;
  }
  (*(code *)PTR_FUN_005c1af0)();
  if (param_2 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (param_2 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (param_2 != 2) goto LAB_0056e0ea;
    nStdHandle = 0xfffffff4;
  }
  SetStdHandle(nStdHandle,param_1);
LAB_0056e0ea:
  iVar1 = param_2 * 4;
  if ((int)param_2 < DAT_005c1f58) {
    *(HANDLE *)(iVar1 + DAT_005c1f54) = param_1;
  }
  else {
    DAT_005c1f54 = FUN_00564a70(DAT_005c1f54,iVar1 + 4);
    if (DAT_005c1f58 < (int)param_2) {
      iVar2 = DAT_005c1f58 * 4;
      do {
        *(uint *)(DAT_005c1f54 + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar2 < iVar1);
    }
    DAT_005c1f58 = param_2 + 1;
    *(HANDLE *)(param_2 * 4 + DAT_005c1f54) = param_1;
  }
  (*(code *)PTR_FUN_005c1af4)();
  return;
}
