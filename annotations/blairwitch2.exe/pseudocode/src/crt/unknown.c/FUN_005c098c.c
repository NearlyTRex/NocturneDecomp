// Name: crt_unknown.c_FUN_005c098c
// Address: 005c098c
// Address Range: [[005c098c, 005c0a60]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c098c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void FUN_005c098c(HANDLE param_1,uint param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if ((int)param_2 < 0) {
    return;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d8)();
  if (param_2 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (param_2 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (param_2 != 2) goto LAB_005c09da;
    nStdHandle = 0xfffffff4;
  }
  SetStdHandle(nStdHandle,param_1);
LAB_005c09da:
  if ((int)param_2 < g_INT_0061f4dc) {
    g_IOControlBlock->standard_handles[param_2] = param_1;
  }
  else {
    g_IOControlBlock = realloc(g_IOControlBlock,param_2 * 4 + 4);
    if (g_INT_0061f4dc < (int)param_2) {
      iVar1 = g_INT_0061f4dc * 4;
      do {
        *(uint *)((int)g_IOControlBlock->standard_handles + iVar1) = 0;
        iVar1 = iVar1 + 4;
      } while (iVar1 < (int)(param_2 * 4));
    }
    g_INT_0061f4dc = param_2 + 1;
    g_IOControlBlock->standard_handles[param_2] = param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2dc)();
  return;
}
