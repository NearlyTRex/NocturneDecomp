// Name: FUN_004bdb10
// Address: 004bdb10
// Address Range: [[004bdb10, 004bdc17]]
// Convention: unknown
// Signature: void FUN_004bdb10(int param_1)

#include "nocturne.h"

void FUN_004bdb10(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_210 [260];
  byte local_10c [256];
  
  *(uint *)(param_1 + 0x9e8) = 0;
  *(byte *)(param_1 + 0x9ec) = 0;
  FUN_005b9e58(&DAT_01cb7b50,0,0,0,local_10c);
  iVar2 = FUN_005b8130(local_10c,&DAT_005d892b);
  if ((iVar2 == 0) || (iVar2 = FUN_005b8130(local_10c,&DAT_005d892f), iVar2 == 0)) {
    pcVar5 = local_210;
    pcVar4 = &DAT_01cb7b50;
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
  uVar3 = FUN_0050fe80("Select file to load",&DAT_005d893a,"*.noc",local_210,1);
  iVar2 = FUN_0047c970(0x01C25594,uVar3);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = (char *)(param_1 + 0x9ec);
  *(uint *)(param_1 + 0x9e8) = 1;
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
