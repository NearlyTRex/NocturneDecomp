// Name: FUN_0049a620
// Address: 0049a620
// Address Range: [[0049a620, 0049a70f]]
// Convention: unknown
// Signature: int FUN_0049a620(undefined4 param_1)

#include "nocturne.h"

int FUN_0049a620(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00499380(param_1);
  iVar2 = FUN_0049c970(iVar2 + 0x1bc);
  iVar2 = FUN_0049d480(iVar2 + 0x38);
  iVar2 = FUN_0049d480(iVar2 + 0xe4);
  *(byte ***)(iVar2 + -0x2cc) = &PTR_FUN_005ff834;
  *(uint *)(iVar2 + -0xe8) = 0;
  *(uint *)(iVar2 + 0xe4) = 0xffffffff;
  *(uint *)(iVar2 + -300) = 0;
  *(uint *)(iVar2 + -0x128) = 0;
  *(uint *)(iVar2 + -0x124) = 0;
  *(uint *)(iVar2 + -0x120) = 0;
  pcVar3 = (char *)FUN_00531090(&DAT_005dc605);
  pcVar4 = (char *)(iVar2 + -0x27c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00531090("Cancel");
  pcVar4 = (char *)(iVar2 + -0x218);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x284) = 0xffffffff;
  *(uint *)(iVar2 + -0x280) = 0;
  return iVar2 + -0x2d8;
}
