// Name: crt_unknown.c_FUN_005c0900
// Address: 005c0900
// Address Range: [[005c0900, 005c098a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c0900(HANDLE param_1)

#include "nocturne.h"

int FUN_005c0900(HANDLE param_1)

{
  int iVar1;
  HANDLE *ppvVar2;
  int *piVar3;
  int iVar4;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d8)();
  iVar4 = 0;
  if (0 < g_INT_0061f4dc) {
    iVar1 = 0;
    do {
      piVar3 = (int *)((int)g_IOControlBlock->standard_handles + iVar1);
      if (*piVar3 == 0) {
        *piVar3 = (int)param_1;
        (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2dc)();
        return iVar4;
      }
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar1 < g_INT_0061f4dc * 4);
  }
  g_IOControlBlock = realloc(g_IOControlBlock,(g_INT_0061f4dc + 1) * 4);
  ppvVar2 = g_IOControlBlock->standard_handles + g_INT_0061f4dc;
  g_INT_0061f4dc = g_INT_0061f4dc + 1;
  *ppvVar2 = param_1;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2dc)();
  return g_INT_0061f4dc + -1;
}
