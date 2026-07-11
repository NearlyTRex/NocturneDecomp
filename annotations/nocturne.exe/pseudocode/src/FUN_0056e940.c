// Name: FUN_0056e940
// Address: 0056e940
// Address Range: [[0056e940, 0056e98a]]
// Convention: unknown
// Signature: char * FUN_0056e940(char *param_1)

#include "nocturne.h"

char * FUN_0056e940(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = (char *)FUN_005635b0(uVar3);
  if (pcVar2 != (char *)0x0) {
    pcVar5 = pcVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(uint *)pcVar5 = *(uint *)param_1;
      param_1 = param_1 + (uint)bVar6 * -8 + 4;
      pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *param_1;
      param_1 = param_1 + (uint)bVar6 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return pcVar2;
}
