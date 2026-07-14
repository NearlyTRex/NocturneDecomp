// Name: FUN_1000b480
// Address: 1000b480
// Address Range: [[1000b480, 1000b4e7]]
// Convention: unknown
// Signature: void FUN_1000b480(char *param_1,char *param_2)

#include "nocturne.h"

void FUN_1000b480(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)pcVar5 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (param_2[0x40] != '\0') {
    FUN_1000b330(param_1,2,&DAT_10012768,param_2 + 0x40);
  }
  if (param_2[0x80] != '\0') {
    FUN_1000b330(param_1,2,&DAT_10012764,param_2 + 0x80);
  }
  return;
}
