// Name: crt_unknown.c_FUN_005aba00
// Address: 005aba00
// Address Range: [[005aba00, 005aba8a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005aba00(HANDLE param_1)

#include "nocturne.h"

int FUN_005aba00(HANDLE param_1)

{
  int iVar1;
  HANDLE *ppvVar2;
  int *piVar3;
  int iVar4;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d4)();
  iVar4 = 0;
  if (0 < g_INT_00607be0) {
    iVar1 = 0;
    do {
      piVar3 = (int *)((int)g_IOControlBlock->standard_handles + iVar1);
      if (*piVar3 == 0) {
        *piVar3 = (int)param_1;
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d8)();
        return iVar4;
      }
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar1 < g_INT_00607be0 * 4);
  }
  g_IOControlBlock = realloc(g_IOControlBlock,(g_INT_00607be0 + 1) * 4);
  ppvVar2 = g_IOControlBlock->standard_handles + g_INT_00607be0;
  g_INT_00607be0 = g_INT_00607be0 + 1;
  *ppvVar2 = param_1;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d8)();
  return g_INT_00607be0 + -1;
}
