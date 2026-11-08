// Name: FUN_004d7e90
// Address: 004d7e90
// Address Range: [[004d7e90, 004d7f4e]]
// Convention: unknown
// Signature: void FUN_004d7e90(void)

#include "nocturne.h"

void FUN_004d7e90(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint auStack_74 [25];
  byte auStack_10 [4];
  
  puVar3 = (uint *)0x61db70;
  puVar4 = auStack_74;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_00496150(0x01C3EB54,"Enter Server IP",auStack_74,100,1);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = FUN_0059c4d0(auStack_10,auStack_74);
  iVar2 = FUN_0052c6b0(0x01D51C20,uVar1);
  if (iVar2 != 0) {
    DAT_01cd05c0 = 0;
    while( true ) {
      iVar2 = FUN_0052e120(0x01D51C20);
      if (iVar2 == 0) break;
      FUN_0051bad0(0x01D2C900);
    }
    FUN_0052cab0(0x01D51C20,1);
    return;
  }
  FUN_0052cab0(0x01D51C20,0);
  return;
}
