// Name: FUN_004a6d10
// Address: 004a6d10
// Address Range: [[004a6d10, 004a6d7d]]
// Convention: unknown
// Signature: int FUN_004a6d10(undefined4 param_1,int param_2)

#include "nocturne.h"

int FUN_004a6d10(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_8;
  
  DAT_01c56ed0 = 0;
  local_8 = 0;
  iVar2 = FUN_004a97b0(param_1,param_2,&local_8);
  if ((-1 < iVar2) && (*(char *)(param_2 + local_8) != '\0')) {
    pcVar3 = "Syntax error";
    pcVar4 = &DAT_01c56ed0;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  return iVar2;
}
