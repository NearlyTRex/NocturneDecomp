// Name: FUN_00532770
// Address: 00532770
// Address Range: [[00532770, 00532841]]
// Convention: unknown
// Signature: int FUN_00532770(undefined4 param_1)

#include "nocturne.h"

int FUN_00532770(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00531670(param_1);
  pcVar3 = "wolfbrn.dfm";
  iVar2 = FUN_00522fa0(iVar2 + 0x1fbc4);
  pcVar4 = (char *)(iVar2 + -0xa8);
  *(byte ***)(iVar2 + -0x1fa70) = &PTR_FUN_00604614;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "false";
  pcVar4 = (char *)(iVar2 + -0x10c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "nameMePlease";
  *(uint *)(iVar2 + -4) = 0;
  FUN_00569f50(iVar2 + -0x1fa6c,"trainman.dfm");
  pcVar4 = (char *)(iVar2 + -0x88);
  *(uint *)(iVar2 + 0xc30) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(byte *)(iVar2 + -0x68) = 0;
  return iVar2 + -0x1fbc4;
}
