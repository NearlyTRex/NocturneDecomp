// Name: FUN_004831c0
// Address: 004831c0
// Address Range: [[004831c0, 004832af]]
// Convention: unknown
// Signature: int FUN_004831c0(undefined4 param_1)

#include "nocturne.h"

int FUN_004831c0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00481f20(param_1);
  iVar2 = FUN_00485510(iVar2 + 0x1bc);
  iVar2 = FUN_00486020(iVar2 + 0x38);
  iVar2 = FUN_00486020(iVar2 + 0xe4);
  *(byte ***)(iVar2 + -0x2cc) = &PTR_FUN_005df044;
  *(uint *)(iVar2 + -0xe8) = 0;
  *(uint *)(iVar2 + 0xe4) = 0xffffffff;
  *(uint *)(iVar2 + -300) = 0;
  *(uint *)(iVar2 + -0x128) = 0;
  *(uint *)(iVar2 + -0x124) = 0;
  *(uint *)(iVar2 + -0x120) = 0;
  pcVar3 = (char *)FUN_00508960(&DAT_005bd6c2);
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
  pcVar3 = (char *)FUN_00508960("Cancel");
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
