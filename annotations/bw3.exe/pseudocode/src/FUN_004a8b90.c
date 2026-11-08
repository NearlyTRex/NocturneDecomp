// Name: FUN_004a8b90
// Address: 004a8b90
// Address Range: [[004a8b90, 004a8ca5]]
// Convention: unknown
// Signature: void FUN_004a8b90(int param_1,char *param_2)

#include "nocturne.h"

void FUN_004a8b90(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char acStack_114 [256];
  int iStack_14;
  
  bVar7 = 0;
  iVar2 = 0;
  cVar1 = *(char *)(param_1 + 0x18);
  iVar3 = param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    cVar1 = *(char *)(iVar3 + 0x38);
    iVar3 = iVar3 + 0x20;
  }
  if (2 < iVar2) {
    FUN_005a28f0(param_1 + 0x18,0,0x60);
    iVar2 = 0;
  }
  pcVar5 = (char *)(param_1 + 0x18 + iVar2 * 0x20);
  iVar2 = 0x40;
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iStack_14 = param_1 + 0x18;
  iVar3 = 0;
  pcVar5 = "twana";
  pcVar4 = acStack_114;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
    pcVar4 = (char *)((int)pcVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  do {
    if (*(char *)(param_1 + 0x18) != '\0') {
      pcVar4 = (char *)0x5c0dfd;
      iVar2 = -1;
      pcVar5 = acStack_114;
      do {
        pcVar6 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
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
      pcVar4 = (char *)(iStack_14 + iVar3 * 0x20);
      iVar2 = -1;
      pcVar5 = acStack_114;
      do {
        pcVar6 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
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
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x20;
    if (2 < iVar3) {
      FUN_0048c150(0x01C6E360,acStack_114);
      return;
    }
  } while( true );
}
