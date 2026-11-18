// Name: crt_unknown.c_FUN_005c8bc0
// Address: 005c8bc0
// Address Range: [[005c8bc0, 005c8c4a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c8bc0(HANDLE param_1)

#include "nocturne.h"

int FUN_005c8bc0(HANDLE param_1)

{
  int iVar1;
  HANDLE *ppvVar2;
  int *piVar3;
  int iVar4;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626630)();
  iVar4 = 0;
  if (0 < g_INT_0062683c) {
    iVar1 = 0;
    do {
      piVar3 = (int *)((int)g_IOControlBlock->standard_handles + iVar1);
      if (*piVar3 == 0) {
        *piVar3 = (int)param_1;
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626634)();
        return iVar4;
      }
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar1 < g_INT_0062683c * 4);
  }
  g_IOControlBlock = realloc(g_IOControlBlock,(g_INT_0062683c + 1) * 4);
  ppvVar2 = g_IOControlBlock->standard_handles + g_INT_0062683c;
  g_INT_0062683c = g_INT_0062683c + 1;
  *ppvVar2 = param_1;
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626634)();
  return g_INT_0062683c + -1;
}
