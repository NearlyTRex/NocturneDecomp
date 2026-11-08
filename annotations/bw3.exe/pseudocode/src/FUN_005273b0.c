// Name: FUN_005273b0
// Address: 005273b0
// Address Range: [[005273b0, 005274df]]
// Convention: unknown
// Signature: int FUN_005273b0(undefined4 param_1)

#include "nocturne.h"

int FUN_005273b0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00508f40(param_1);
  pcVar3 = (char *)0x5cda15;
  iVar2 = FUN_004fa8a0(iVar2 + 0x20814);
  pcVar4 = (char *)(iVar2 + -0xe8);
  *(byte ***)(iVar2 + -0x206c0) = &PTR_FUN_005e36e4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5cda21;
  pcVar4 = (char *)(iVar2 + -0xa8);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "stand";
  pcVar4 = (char *)(iVar2 + -0x88);
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
  pcVar4 = (char *)(iVar2 + -0x14c);
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
  FUN_0054eae0(iVar2 + -0x206bc,"bwp3_prye_morph.dfm");
  pcVar4 = (char *)(iVar2 + -200);
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
  FUN_0043fa40(iVar2 + -0x1d90c,0x5cda56);
  return iVar2 + -0x20814;
}
