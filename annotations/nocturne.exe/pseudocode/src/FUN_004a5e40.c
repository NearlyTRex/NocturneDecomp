// Name: FUN_004a5e40
// Address: 004a5e40
// Address Range: [[004a5e40, 004a5efe]]
// Convention: unknown
// Signature: void FUN_004a5e40(void)

#include "nocturne.h"

void FUN_004a5e40(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint auStack_74 [25];
  byte auStack_10 [4];
  
  puVar3 = (uint *)0x5b9568;
  puVar4 = auStack_74;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_00471600(0x01BCD074,"Enter Server IP",auStack_74,100,1);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = FUN_00548af0(auStack_10,auStack_74);
  iVar2 = FUN_004e9a90(0x01CEA280,uVar1);
  if (iVar2 != 0) {
    DAT_01c78598 = 0;
    while( true ) {
      iVar2 = FUN_004eb520(0x01CEA280);
      if (iVar2 == 0) break;
      FUN_004d9440(0x01CC9450);
    }
    FUN_004e9e90(0x01CEA280,1);
    return;
  }
  FUN_004e9e90(0x01CEA280,0);
  return;
}
