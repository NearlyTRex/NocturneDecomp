// Name: FUN_004d85f0
// Address: 004d85f0
// Address Range: [[004d85f0, 004d86f7]]
// Convention: unknown
// Signature: void FUN_004d85f0(int param_1)

#include "nocturne.h"

void FUN_004d85f0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_210 [260];
  byte local_10c [256];
  
  *(uint *)(param_1 + 0x9f8) = 0;
  *(byte *)(param_1 + 0x9fc) = 0;
  FUN_005c2238(&DAT_01cd05c0,0,0,0,local_10c);
  iVar2 = FUN_005c04e0(local_10c,"noc");
  if ((iVar2 == 0) || (iVar2 = FUN_005c04e0(local_10c,".noc"), iVar2 == 0)) {
    pcVar5 = local_210;
    pcVar4 = &DAT_01cd05c0;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_210[0] = '\0';
  }
  pcVar5 = local_210;
  uVar3 = FUN_00531090("Select file to load","save","*.noc",local_210,1);
  iVar2 = FUN_00494fd0(0x01C3EB54,uVar3);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = (char *)(param_1 + 0x9fc);
  *(uint *)(param_1 + 0x9f8) = 1;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
