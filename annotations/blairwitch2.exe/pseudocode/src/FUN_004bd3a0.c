// Name: FUN_004bd3a0
// Address: 004bd3a0
// Address Range: [[004bd3a0, 004bd45e]]
// Convention: unknown
// Signature: void FUN_004bd3a0(void)

#include "nocturne.h"

void FUN_004bd3a0(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint auStack_74 [25];
  byte auStack_10 [4];
  
  puVar3 = (uint *)0x6166c0;
  puVar4 = auStack_74;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_0047dae0(0x01C25594,"Enter Server IP",auStack_74,100,1);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = FUN_00578bf0(auStack_10,auStack_74);
  iVar2 = FUN_0050b4d0(0x01D34CB0,uVar1);
  if (iVar2 != 0) {
    DAT_01cb7b50 = 0;
    while( true ) {
      iVar2 = FUN_0050cf50(0x01D34CB0);
      if (iVar2 == 0) break;
      FUN_004fcb00(0x01D182F0);
    }
    FUN_0050b8d0(0x01D34CB0,1);
    return;
  }
  FUN_0050b8d0(0x01D34CB0,0);
  return;
}
