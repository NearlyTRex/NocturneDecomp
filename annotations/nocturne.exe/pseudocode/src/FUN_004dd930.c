// Name: FUN_004dd930
// Address: 004dd930
// Address Range: [[004dd930, 004dd9ed]]
// Convention: unknown
// Signature: int FUN_004dd930(undefined4 param_1)

#include "nocturne.h"

int FUN_004dd930(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004b46d0(param_1);
  iVar2 = FUN_0051b660(iVar2 + 0x1fa3c);
  iVar2 = FUN_004e0050(iVar2 + 0x2388);
  *(byte ***)(iVar2 + -0x21c78) = &PTR_FUN_005a0ac4;
  FUN_0051e0c0(iVar2 + -0x21c74,"moloch_h.dfm");
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
  return iVar2 + -0x21dc4;
}
