// Name: FUN_0050a450
// Address: 0050a450
// Address Range: [[0050a450, 0050a521]]
// Convention: unknown
// Signature: int FUN_0050a450(undefined4 param_1)

#include "nocturne.h"

int FUN_0050a450(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00508f40(param_1);
  pcVar3 = (char *)0x5cb6a5;
  iVar2 = FUN_004fa8a0(iVar2 + 0x207d4);
  pcVar4 = (char *)(iVar2 + -0xa8);
  *(byte ***)(iVar2 + -0x20680) = &PTR_FUN_005e2fe4;
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
  FUN_0054eae0(iVar2 + -0x2067c,"trainman.dfm");
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
  return iVar2 + -0x207d4;
}
