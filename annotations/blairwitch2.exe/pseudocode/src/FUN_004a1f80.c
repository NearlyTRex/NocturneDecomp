// Name: FUN_004a1f80
// Address: 004a1f80
// Address Range: [[004a1f80, 004a1ff9]]
// Convention: unknown
// Signature: int FUN_004a1f80(undefined4 param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

int FUN_004a1f80(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = FUN_004a1e60(param_1);
  *(byte ***)(iVar2 + 0x14) = &PTR_FUN_005f6ed4;
  *(uint *)(iVar2 + 0x11c) = param_3;
  pcVar4 = (char *)(iVar2 + 0x1c);
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x18) = 0;
  uVar3 = FUN_004aaf00(*(uint *)(iVar2 + 0x11c),(char *)(iVar2 + 0x1c));
  *(uint *)(iVar2 + 8) = uVar3;
  uVar3 = FUN_004ab560(*(uint *)(iVar2 + 0x11c),0x6a);
  *(uint *)(iVar2 + 0xc) = uVar3;
  return iVar2;
}
