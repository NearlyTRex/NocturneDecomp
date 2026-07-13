// Name: FUN_004b69f0
// Address: 004b69f0
// Address Range: [[004b69f0, 004b6b12]]
// Convention: unknown
// Signature: int FUN_004b69f0(undefined4 param_1)

#include "nocturne.h"

int FUN_004b69f0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ee950(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_FUN_0059ef44;
  FUN_0051e0c0(iVar2 + 0x150,"hickdad.dfm");
  *(uint *)(iVar2 + 0x1f91c) = 0;
  *(uint *)(iVar2 + 0x1f924) = 0;
  pcVar3 = &DAT_005859ff;
  *(uint *)(iVar2 + 0x1f928) = 0;
  *(uint *)(iVar2 + 0x1f92c) = 0;
  pcVar4 = (char *)(iVar2 + 0x1f574);
  *(uint *)(iVar2 + 0x1f570) = 0x40a00000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1f930) = 0;
  *(uint *)(iVar2 + 0x2590) = 0;
  *(uint *)(iVar2 + 0x1f948) = 0;
  *(uint *)(iVar2 + 0x1f94c) = 0;
  *(byte *)(iVar2 + 0x1f5d8) = 0;
  *(byte *)(iVar2 + 0x1f5f8) = 0;
  *(byte *)(iVar2 + 0x1f65c) = 0;
  *(byte *)(iVar2 + 0x1f6c0) = 0;
  *(byte *)(iVar2 + 0x1f724) = 0;
  *(byte *)(iVar2 + 0x1f788) = 0;
  *(byte *)(iVar2 + 0x1f7ec) = 0;
  *(uint *)(iVar2 + 0x1f950) = 0;
  *(uint *)(iVar2 + 0x1f954) = 0;
  *(uint *)(iVar2 + 0x1f944) = 0;
  *(byte *)(iVar2 + 0x2440) = 0;
  *(byte *)(iVar2 + 0x1f850) = 0;
  *(byte *)(iVar2 + 0x1f8b4) = 0;
  *(uint *)(iVar2 + 0x243c) = 1;
  return iVar2;
}
