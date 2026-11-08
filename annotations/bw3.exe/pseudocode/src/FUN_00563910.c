// Name: FUN_00563910
// Address: 00563910
// Address Range: [[00563910, 00563968]]
// Convention: unknown
// Signature: void FUN_00563910(char *param_1)

#include "nocturne.h"

void FUN_00563910(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar6;
  char *pcVar5;
  
  bVar6 = 0;
  FUN_00408890(param_1);
  pcVar5 = param_1 + 0x158;
  pcVar3 = pcVar5;
  do {
    cVar1 = *param_1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d54a8;
  iVar2 = -1;
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
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
