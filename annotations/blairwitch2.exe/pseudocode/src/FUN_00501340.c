// Name: FUN_00501340
// Address: 00501340
// Address Range: [[00501340, 005013fd]]
// Convention: unknown
// Signature: int FUN_00501340(undefined4 param_1)

#include "nocturne.h"

int FUN_00501340(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ce240(param_1);
  iVar2 = FUN_00544cd0(iVar2 + 0x25640);
  iVar2 = FUN_005b6e60(iVar2 + 0x2388);
  *(byte **)(iVar2 + -0x27718) = &DAT_005fa3e4;
  FUN_005478b0(iVar2 + -0x27714,"moloch_h.dfm");
  pcVar3 = "molochToDemon";
  pcVar4 = (char *)(iVar2 + -200);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "molochToHuman";
  pcVar4 = (char *)(iVar2 + -100);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xd4) = 1;
  *(uint *)(iVar2 + -0xd0) = 0;
  *(uint *)(iVar2 + -0xcc) = 0;
  return iVar2 + -0x279c8;
}
