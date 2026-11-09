// Name: unkafter_dosio.cpp_FUN_00461260
// Address: 00461260
// Address Range: [[00461260, 004613a3]]
// Convention: unknown
// Signature: void unkafter_dosio_cpp_FUN_00461260(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void unkafter_dosio_cpp_FUN_00461260(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar6;
  char acStack_508 [500];
  char acStack_314 [12];
  char acStack_308 [244];
  char acStack_214 [12];
  char acStack_208 [244];
  char cStack_114;
  char cStack_113;
  char acStack_108 [244];
  char acStack_14 [4];
  char acStack_10 [4];
  char *pcVar5;
  
  bVar6 = 0;
  engine_dosio_cpp_FUN_00461070(param_2,acStack_14,&cStack_114,acStack_214,acStack_314);
  if ((acStack_14[0] != '\0') ||
     (((cStack_114 == '\\' || (cStack_114 == '/')) && ((cStack_113 == '\\' || (cStack_113 == '/'))))
     )) {
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
  engine_dosio_cpp_FUN_004610d0(param_1,acStack_10,&stack0xfffffaec);
  if ((acStack_108[0] == '/') || (acStack_108[0] == '\\')) {
    acStack_508[0] = '\0';
  }
  pcVar3 = acStack_108;
  iVar2 = -1;
  pcVar5 = acStack_508;
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
  engine_dosio_cpp_FUN_004610a0(param_3,&stack0xfffffffc,acStack_508,acStack_208,acStack_308);
  return;
}
