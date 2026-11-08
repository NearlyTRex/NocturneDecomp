// Name: FUN_004bfa40
// Address: 004bfa40
// Address Range: [[004bfa40, 004bfb47]]
// Convention: unknown
// Signature: void FUN_004bfa40(int param_1)

#include "nocturne.h"

void FUN_004bfa40(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_210 [260];
  byte local_10c [256];
  
  *(uint *)(param_1 + 0xa78) = 0;
  *(byte *)(param_1 + 0xa7c) = 0;
  FUN_005a5128(&DAT_01d225c8,0,0,0,local_10c);
  iVar2 = FUN_005a3260(local_10c,&DAT_005c3a88);
  if ((iVar2 == 0) || (iVar2 = FUN_005a3260(local_10c,&DAT_005c3a8c), iVar2 == 0)) {
    pcVar5 = local_210;
    pcVar4 = &DAT_01d225c8;
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
  uVar3 = FUN_00508960("Select file to load",&DAT_005c3a97,"*.sav",local_210,1);
  iVar2 = FUN_0047db70(0x01C5B0E4,uVar3);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = (char *)(param_1 + 0xa7c);
  *(uint *)(param_1 + 0xa78) = 1;
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
