// Name: crt_unknown.c_FUN_0056e09c
// Address: 0056e09c
// Address Range: [[0056e09c, 0056e170]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e09c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_0056e09c(HANDLE param_1,uint param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if ((int)param_2 < 0) {
    return;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af0)();
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
  if ((int)param_2 < g_INT_005c1f58) {
    g_IOControlBlock->standard_handles[param_2] = param_1;
  }
  else {
    g_IOControlBlock = realloc(g_IOControlBlock,param_2 * 4 + 4);
    if (g_INT_005c1f58 < (int)param_2) {
      iVar1 = g_INT_005c1f58 * 4;
      do {
        *(uint *)((int)g_IOControlBlock->standard_handles + iVar1) = 0;
        iVar1 = iVar1 + 4;
      } while (iVar1 < (int)(param_2 * 4));
    }
    g_INT_005c1f58 = param_2 + 1;
    g_IOControlBlock->standard_handles[param_2] = param_1;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af4)();
  return;
}
