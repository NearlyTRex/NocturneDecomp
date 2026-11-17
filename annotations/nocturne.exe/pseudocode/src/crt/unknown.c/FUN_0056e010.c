// Name: crt_unknown.c_FUN_0056e010
// Address: 0056e010
// Address Range: [[0056e010, 0056e09a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056e010(HANDLE param_1)

#include "nocturne.h"

int FUN_0056e010(HANDLE param_1)

{
  int iVar1;
  HANDLE *ppvVar2;
  int *piVar3;
  int iVar4;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af0)();
  iVar4 = 0;
  if (0 < g_INT_005c1f58) {
    iVar1 = 0;
    do {
      piVar3 = (int *)((int)g_SIOControlBlock_PTR_005c1f54->standard_handles + iVar1);
      if (*piVar3 == 0) {
        *piVar3 = (int)param_1;
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af4)();
        return iVar4;
      }
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar1 < g_INT_005c1f58 * 4);
  }
  g_SIOControlBlock_PTR_005c1f54 =
       realloc(g_SIOControlBlock_PTR_005c1f54,(g_INT_005c1f58 + 1) * 4);
  ppvVar2 = g_SIOControlBlock_PTR_005c1f54->standard_handles + g_INT_005c1f58;
  g_INT_005c1f58 = g_INT_005c1f58 + 1;
  *ppvVar2 = param_1;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af4)();
  return g_INT_005c1f58 + -1;
}
