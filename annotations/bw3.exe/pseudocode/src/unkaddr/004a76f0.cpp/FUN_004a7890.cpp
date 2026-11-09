// Name: unkaddr_004a76f0.cpp_FUN_004a7890
// Address: 004a7890
// Address Range: [[004a7890, 004a791f]]
// Convention: unknown
// Signature: void unkaddr_004a76f0_cpp_FUN_004a7890(char *param_1)

#include "nocturne.h"

void unkaddr_004a76f0_cpp_FUN_004a7890(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  int iVar4;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = param_1 + n;
    do {
      if (((&DAT_006074b8)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  param_1[n] = '\0';
  while (((&DAT_006074b8)[(byte)(*param_1 + 1)] & 2) != 0) {
    memmove(param_1,param_1 + 1,n);
    n = n - 1;
  }
  iVar4 = 0;
  if (0 < (int)n) {
    do {
      while (((&DAT_006074b8)[(byte)(*param_1 + 1)] & 2) != 0) {
        *param_1 = ' ';
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
        if ((int)n <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (iVar4 < (int)n);
  }
  return;
}
