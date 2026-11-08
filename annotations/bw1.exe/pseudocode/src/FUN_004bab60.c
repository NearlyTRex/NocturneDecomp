// Name: FUN_004bab60
// Address: 004bab60
// Address Range: [[004bab60, 004babed]]
// Convention: unknown
// Signature: int FUN_004bab60(undefined4 param_1,char *param_2)

#include "nocturne.h"

int FUN_004bab60(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte local_10c [256];
  
  iVar2 = FUN_004baa10(param_1);
  *(byte ***)(iVar2 + 0x14) = &PTR_FUN_00600954;
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
  FUN_005bfb40(local_10c,&DAT_005df8ad,(char *)(iVar2 + 0x2c));
  *(uint *)(iVar2 + 0xc) = 0x4b;
  *(uint *)(iVar2 + 8) = 0x38;
  FUN_0040d220(iVar2 + 0x18,local_10c,*(uint *)(iVar2 + 8),*(uint *)(iVar2 + 0xc));
  return iVar2;
}
