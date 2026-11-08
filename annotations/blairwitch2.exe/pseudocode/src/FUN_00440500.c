// Name: FUN_00440500
// Address: 00440500
// Address Range: [[00440500, 00440553]]
// Convention: unknown
// Signature: void FUN_00440500(int param_1)

#include "nocturne.h"

void FUN_00440500(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar5 = 0;
    do {
      pcVar3 = (char *)(iVar5 + 0xae24d8);
      pcVar2 = (char *)(iVar5 + 0xaf5218);
      for (iVar4 = *(int *)(param_1 + 0x150); 0 < iVar4; iVar4 = iVar4 + -1) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar2 = *pcVar2 + cVar1;
        pcVar2 = pcVar2 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar6 < *(int *)(param_1 + 0x154));
  }
  return;
}
