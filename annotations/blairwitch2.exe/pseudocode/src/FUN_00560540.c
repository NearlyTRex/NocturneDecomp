// Name: FUN_00560540
// Address: 00560540
// Address Range: [[00560540, 00560679]]
// Convention: unknown
// Signature: int FUN_00560540(undefined4 param_1)

#include "nocturne.h"

int FUN_00560540(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  pcVar3 = (char *)0x5eaff5;
  *(uint *)(iVar2 + -4) = 0x5fbe04;
  FUN_0044fd70(iVar2,0x5eafeb);
  *(uint *)(iVar2 + 0x17c) = 0;
  *(uint *)(iVar2 + 0x180) = 0;
  pcVar4 = (char *)(iVar2 + 0x198);
  *(uint *)(iVar2 + 0x184) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5eaffa;
  pcVar4 = (char *)(iVar2 + 0x1fc);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5eafff;
  pcVar4 = (char *)(iVar2 + 0x260);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5eb004;
  pcVar4 = (char *)(iVar2 + 0x2c4);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x328) = 0x3f800000;
  *(uint *)(iVar2 + 0x32c) = 0x3f800000;
  *(byte *)(iVar2 + 0x334) = 0;
  *(byte *)(iVar2 + 0x398) = 0;
  *(uint *)(iVar2 + 0x3fc) = 0x3f800000;
  *(uint *)(iVar2 + 0x400) = 0x3dcccccd;
  *(uint *)(iVar2 + 0x404) = 0;
  return iVar2 + -0x2b4;
}
