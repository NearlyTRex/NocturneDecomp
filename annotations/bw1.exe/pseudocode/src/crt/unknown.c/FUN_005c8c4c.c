// Name: crt_unknown.c_FUN_005c8c4c
// Address: 005c8c4c
// Address Range: [[005c8c4c, 005c8d20]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c8c4c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_005c8c4c(HANDLE param_1,uint param_2)

{
  int iVar1;
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
  if ((int)param_2 < g_INT_0062683c) {
    g_SIOControlBlock_PTR_00626838->standard_handles[param_2] = param_1;
  }
  else {
    g_SIOControlBlock_PTR_00626838 =
         realloc(g_SIOControlBlock_PTR_00626838,param_2 * 4 + 4);
    if (g_INT_0062683c < (int)param_2) {
      iVar1 = g_INT_0062683c * 4;
      do {
        *(uint *)((int)g_SIOControlBlock_PTR_00626838->standard_handles + iVar1) = 0;
        iVar1 = iVar1 + 4;
      } while (iVar1 < (int)(param_2 * 4));
    }
    g_INT_0062683c = param_2 + 1;
    g_SIOControlBlock_PTR_00626838->standard_handles[param_2] = param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626634)();
  return;
}
