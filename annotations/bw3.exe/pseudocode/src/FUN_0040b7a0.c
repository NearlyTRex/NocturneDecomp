// Name: FUN_0040b7a0
// Address: 0040b7a0
// Address Range: [[0040b7a0, 0040b825]]
// Convention: unknown
// Signature: void FUN_0040b7a0(undefined4 param_1,char *param_2)

#include "nocturne.h"

void FUN_0040b7a0(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char local_134 [300];
  
  pcVar4 = local_134;
  puVar3 = &DAT_005f09f8;
  pcVar5 = local_134;
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar5 = (char *)((int)pcVar5 + 4);
  }
  if (param_2 != (char *)0x0) {
    do {
      cVar1 = *param_2;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  pcVar4 = " !LOCALIZE!";
  iVar2 = -1;
  pcVar5 = local_134;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  FUN_0040b680(param_1,local_134);
  return;
}
