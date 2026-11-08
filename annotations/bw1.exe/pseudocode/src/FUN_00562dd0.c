// Name: FUN_00562dd0
// Address: 00562dd0
// Address Range: [[00562dd0, 00562e20]]
// Convention: unknown
// Signature: void FUN_00562dd0(void)

#include "nocturne.h"

void FUN_00562dd0(void)

{
  int iVar1;
  uint unaff_retaddr;
  
  FUN_005c3187(8);
  iVar1 = FUN_005238c0(unaff_retaddr);
  *(uint *)(iVar1 + 0x1de78) = 0;
  *(uint *)(iVar1 + 0x1ec8c) = 0;
  *(uint *)(iVar1 + 0x1ec90) = 0;
  *(uint *)(iVar1 + 0x1ec94) = 0;
  *(uint *)(iVar1 + 0x1ec98) = 0;
  *(byte *)(iVar1 + 0x1de28) = 0;
  return;
}
