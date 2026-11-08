// Name: FUN_00461260
// Address: 00461260
// Address Range: [[00461260, 004613a3]]
// Convention: unknown
// Signature: void FUN_00461260(undefined4 param_1,char *param_2,char *param_3)

#include "nocturne.h"

void FUN_00461260(uint param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar6;
  char acStack_514 [512];
  byte auStack_314 [256];
  byte auStack_214 [256];
  char acStack_114 [256];
  char acStack_14 [4];
  byte auStack_10 [4];
  char *pcVar5;
  
  bVar6 = 0;
  FUN_00461070(param_2,acStack_14,acStack_114,auStack_214,auStack_314);
  if ((acStack_14[0] != '\0') ||
     (((acStack_114[0] == '\\' || (acStack_114[0] == '/')) &&
      ((acStack_114[1] == '\\' || (acStack_114[1] == '/')))))) {
    do {
      cVar1 = *param_2;
      *param_3 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
    return;
  }
  FUN_004610d0(param_1,auStack_10,acStack_514);
  if ((acStack_114[0] == '/') || (acStack_114[0] == '\\')) {
    acStack_514[0] = '\0';
  }
  pcVar3 = acStack_114;
  iVar2 = -1;
  pcVar5 = acStack_514;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_004610a0(param_3,auStack_10,acStack_514,auStack_214,auStack_314);
  return;
}
