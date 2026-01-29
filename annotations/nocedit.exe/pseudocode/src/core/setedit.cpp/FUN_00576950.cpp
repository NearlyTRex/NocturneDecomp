// Name: core_setedit.cpp_FUN_00576950
// Address: 00576950
// Address Range: [[00576950, 0057699c]]
// Convention: unknown
// Signature: void core_setedit_cpp_FUN_00576950(void)

#include "nocturne.h"

void core_setedit_cpp_FUN_00576950(void)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *in_stack_00000004;
  
  uVar4 = 0xffffffff;
  pcVar6 = in_stack_00000004;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar5 = ~uVar4 - 2;
  if (0 < iVar5) {
    pbVar2 = (byte *)(in_stack_00000004 + iVar5);
    do {
      if ((*pbVar2 < 0x30) || (0x39 < *pbVar2)) break;
      iVar5 = iVar5 + -1;
      pbVar2 = pbVar2 + -1;
    } while (0 < iVar5);
  }
  iVar3 = atoi(in_stack_00000004 + iVar5 + 1);
  sprintf(in_stack_00000004 + iVar5 + 1,"%d",iVar3 + 1);
  return;
}
