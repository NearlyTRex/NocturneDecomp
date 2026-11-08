// Name: FUN_004968d0
// Address: 004968d0
// Address Range: [[004968d0, 00496988]]
// Convention: unknown
// Signature: void FUN_004968d0(int param_1)

#include "nocturne.h"

void FUN_004968d0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_28 [3];
  byte auStack_1c [12];
  
  bVar4 = 0;
  FUN_0046b2b0(DAT_0060b280,param_1);
  FUN_0046b300(DAT_0060b280,param_1 + 0x44,0);
  puVar2 = *(uint **)(*(int *)(param_1 + 0x50) + 0x350);
  puVar3 = auStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(auStack_28,0);
  if (iVar1 != 0) {
    FUN_00530980(0x01E661B8,param_1,&DAT_0265370c,auStack_28,auStack_1c,0);
    FUN_0046b8e0(DAT_0060b280,0xffff);
    FUN_0044e6a0(*(uint *)(param_1 + 0x50),0,0,0x2e7);
  }
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
