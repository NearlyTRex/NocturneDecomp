// Name: FUN_004f81c0
// Address: 004f81c0
// Address Range: [[004f81c0, 004f823a]]
// Convention: unknown
// Signature: void FUN_004f81c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004f81c0(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)(param_1 + 4);
  pcVar5 = (char *)(param_3 + 0x100);
  iVar3 = *(int *)(param_1 + 0x20c) + param_2 * 0x14;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_3 + 0x200) = *(uint *)(iVar3 + 8);
  *(uint *)(param_3 + 0x204) = *(uint *)(iVar3 + 4);
  *(uint *)(param_3 + 0x20c) = *(uint *)(iVar3 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x104);
  *(uint *)(param_3 + 0x208) = 1;
  *(uint *)(param_3 + 0x210) = uVar2;
  return;
}
