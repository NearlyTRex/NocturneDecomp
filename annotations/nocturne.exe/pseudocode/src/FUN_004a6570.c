// Name: FUN_004a6570
// Address: 004a6570
// Address Range: [[004a6570, 004a6677]]
// Convention: unknown
// Signature: void FUN_004a6570(int param_1)

#include "nocturne.h"

void FUN_004a6570(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_210 [260];
  byte local_10c [256];
  
  *(uint *)(param_1 + 0x9c4) = 0;
  *(byte *)(param_1 + 0x9c8) = 0;
  FUN_00566498(&DAT_01c78598,0,0,0,local_10c);
  iVar2 = FUN_00564520(local_10c,&DAT_00584562);
  if ((iVar2 == 0) || (iVar2 = FUN_00564520(local_10c,&DAT_00584566), iVar2 == 0)) {
    pcVar5 = local_210;
    pcVar4 = &DAT_01c78598;
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
  uVar3 = FUN_004ee370("Select file to load",&DAT_00584571,"*.noc",local_210,1);
  iVar2 = FUN_00470550(0x01BCD074,uVar3);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = (char *)(param_1 + 0x9c8);
  *(uint *)(param_1 + 0x9c4) = 1;
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
