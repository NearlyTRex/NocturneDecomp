// Name: crt_unknown.c_FUN_0056e010
// Address: 0056e010
// Address Range: [[0056e010, 0056e09a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056e010(int param_1)

#include "nocturne.h"

int FUN_0056e010(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af0)();
  iVar2 = 0;
  if (0 < DAT_005c1f58) {
    iVar1 = 0;
    do {
      if (*(int *)((int)DAT_005c1f54 + iVar1) == 0) {
        *(int *)((int)DAT_005c1f54 + iVar1) = param_1;
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af4)();
        return iVar2;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar1 < DAT_005c1f58 * 4);
  }
  DAT_005c1f54 = realloc(DAT_005c1f54,(DAT_005c1f58 + 1) * 4);
  iVar2 = DAT_005c1f58 * 4;
  DAT_005c1f58 = DAT_005c1f58 + 1;
  *(int *)((int)DAT_005c1f54 + iVar2) = param_1;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af4)();
  return DAT_005c1f58 + -1;
}
