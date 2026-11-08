// Name: FUN_0051b1e0
// Address: 0051b1e0
// Address Range: [[0051b1e0, 0051b272]]
// Convention: unknown
// Signature: void FUN_0051b1e0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b1e0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_110 [256];
  
  iVar4 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      pcVar5 = (char *)(piVar3[1] + 4);
      pcVar6 = acStack_110;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = FUN_00519f00(piVar3[1],acStack_110);
      if (iVar2 == 0) {
        _DAT_01d046a4 = 0x404;
        _DAT_01d046a0 = "..\\engine\\pod.cpp";
        FUN_004e4500("Can't re-mount %s",acStack_110);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *param_1);
  }
  return;
}
