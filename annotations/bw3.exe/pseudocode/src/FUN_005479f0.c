// Name: FUN_005479f0
// Address: 005479f0
// Address Range: [[005479f0, 00547a40]]
// Convention: unknown
// Signature: void FUN_005479f0(void)

#include "nocturne.h"

void FUN_005479f0(void)

{
  int iVar1;
  uint unaff_retaddr;
  
  FUN_005a5ff7(8);
  iVar1 = FUN_004fb1c0(unaff_retaddr);
  *(uint *)(iVar1 + 0x1de78) = 0;
  *(uint *)(iVar1 + 0x1ec8c) = 0;
  *(uint *)(iVar1 + 0x1ec90) = 0;
  *(uint *)(iVar1 + 0x1ec94) = 0;
  *(uint *)(iVar1 + 0x1ec98) = 0;
  *(byte *)(iVar1 + 0x1de28) = 0;
  return;
}
