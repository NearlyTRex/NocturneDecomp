// Name: FUN_00447090
// Address: 00447090
// Address Range: [[00447090, 004470f9]]
// Convention: unknown
// Signature: int FUN_00447090(undefined4 param_1)

#include "nocturne.h"

int FUN_00447090(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x5cea54;
  iVar2 = FUN_00408790(param_1);
  pcVar4 = (char *)(iVar2 + 0x2e4);
  *(uint *)(iVar2 + 0x2b0) = 0x5f4e94;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x2b4) = 0;
  *(byte *)(iVar2 + 0x2b8) = 0;
  *(uint *)(iVar2 + 0x34c) = 1;
  *(uint *)(iVar2 + 0x348) = 1;
  return iVar2;
}
