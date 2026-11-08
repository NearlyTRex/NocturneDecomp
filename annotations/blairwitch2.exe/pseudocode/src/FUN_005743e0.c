// Name: FUN_005743e0
// Address: 005743e0
// Address Range: [[005743e0, 0057448f]]
// Convention: unknown
// Signature: void FUN_005743e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005743e0(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  
  puVar2 = (uint *)(param_1 + 4 + (*(uint *)(param_2 + 4) & 0xffff) * 0x60);
  if (puVar2[0x11] != 0) {
    FUN_005b86a0(puVar2[0x11]);
  }
  if (puVar2[0x12] != 0) {
    FUN_005b86a0(puVar2[0x12]);
  }
  if (puVar2[0x13] != 0) {
    FUN_005b86a0(puVar2[0x13]);
  }
  if (puVar2[0x14] != 0) {
    FUN_005b86a0(puVar2[0x14]);
  }
  pcVar3 = (char *)(param_2 + 8);
  FUN_005b77c0(puVar2,0,0x60);
  pcVar4 = (char *)(puVar2 + 1);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  puVar2[0x16] = 1;
  puVar2[0x14] = param_4;
  *puVar2 = param_3;
  return;
}
