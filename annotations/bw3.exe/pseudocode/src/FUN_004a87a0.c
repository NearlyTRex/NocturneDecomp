// Name: FUN_004a87a0
// Address: 004a87a0
// Address Range: [[004a87a0, 004a882d]]
// Convention: unknown
// Signature: int FUN_004a87a0(undefined4 param_1,char *param_2)

#include "nocturne.h"

int FUN_004a87a0(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte local_10c [256];
  
  iVar2 = FUN_004a8650(param_1);
  *(byte ***)(iVar2 + 0x14) = &PTR_FUN_005e02b4;
  pcVar3 = (char *)(iVar2 + 0x2c);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  FUN_005a28c0(local_10c,&DAT_005c0d9a,(char *)(iVar2 + 0x2c));
  *(uint *)(iVar2 + 0xc) = 0x4b;
  *(uint *)(iVar2 + 8) = 0x38;
  FUN_0040d460(iVar2 + 0x18,local_10c,*(uint *)(iVar2 + 8),*(uint *)(iVar2 + 0xc));
  return iVar2;
}
