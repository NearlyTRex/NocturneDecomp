// Name: FUN_005407e0
// Address: 005407e0
// Address Range: [[005407e0, 00540830]]
// Convention: unknown
// Signature: void FUN_005407e0(void)

#include "nocturne.h"

void FUN_005407e0(void)

{
  int iVar1;
  uint unaff_retaddr;
  
  FUN_005badc7(8);
  iVar1 = FUN_00502760(unaff_retaddr);
  *(uint *)(iVar1 + 0x1d1f8) = 0;
  *(uint *)(iVar1 + 0x1e00c) = 0;
  *(uint *)(iVar1 + 0x1e010) = 0;
  *(uint *)(iVar1 + 0x1e014) = 0;
  *(uint *)(iVar1 + 0x1e018) = 0;
  *(byte *)(iVar1 + 0x1d1a8) = 0;
  return;
}
