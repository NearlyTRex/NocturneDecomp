// Name: core_flashlit.cpp_FUN_004b9c50
// Address: 004b9c50
// Address Range: [[004b9c50, 004b9cdf]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004b9c50(char *param_1)

#include "nocturne.h"

void core_flashlit_cpp_FUN_004b9c50(char *param_1)

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
      if (((&DAT_00626114)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  param_1[n] = '\0';
  while (((&DAT_00626114)[(byte)(*param_1 + 1)] & 2) != 0) {
    memmove(param_1,param_1 + 1,n);
    n = n - 1;
  }
  iVar4 = 0;
  if (0 < (int)n) {
    do {
      while (((&DAT_00626114)[(byte)(*param_1 + 1)] & 2) != 0) {
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
