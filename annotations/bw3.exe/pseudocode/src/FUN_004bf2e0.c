// Name: FUN_004bf2e0
// Address: 004bf2e0
// Address Range: [[004bf2e0, 004bf39e]]
// Convention: unknown
// Signature: void FUN_004bf2e0(void)

#include "nocturne.h"

void FUN_004bf2e0(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint auStack_74 [25];
  byte auStack_10 [4];
  
  puVar3 = (uint *)0x5febf0;
  puVar4 = auStack_74;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_0047ecf0(0x01C5B0E4,"Enter Server IP",auStack_74,100,1);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = FUN_0056f4c0(auStack_10,auStack_74);
  iVar2 = FUN_00503fb0(0x01DA62F0,uVar1);
  if (iVar2 != 0) {
    DAT_01d225c8 = 0;
    while( true ) {
      iVar2 = FUN_00505a30(0x01DA62F0);
      if (iVar2 == 0) break;
      FUN_004f72a0(0x01D81080);
    }
    FUN_005043b0(0x01DA62F0,1);
    return;
  }
  FUN_005043b0(0x01DA62F0,0);
  return;
}
