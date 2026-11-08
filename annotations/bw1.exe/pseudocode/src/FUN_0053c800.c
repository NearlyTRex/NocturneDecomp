// Name: FUN_0053c800
// Address: 0053c800
// Address Range: [[0053c800, 0053c896]]
// Convention: unknown
// Signature: void FUN_0053c800(int *param_1,char *param_2)

#include "nocturne.h"

void FUN_0053c800(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char acStack_224 [256];
  byte auStack_124 [276];
  
  pcVar5 = acStack_224;
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar2 = FUN_00478ef0(acStack_224);
  if ((iVar2 != 0) && (iVar2 = 0, piVar4 = param_1, 0 < *param_1)) {
    do {
      while (iVar3 = FUN_005c04e0(piVar4[1] + 4,auStack_124), iVar3 == 0) {
        FUN_0053d490(param_1,iVar2);
        if (*param_1 <= iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}
