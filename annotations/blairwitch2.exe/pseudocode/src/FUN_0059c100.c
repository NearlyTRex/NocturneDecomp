// Name: FUN_0059c100
// Address: 0059c100
// Address Range: [[0059c100, 0059c193]]
// Convention: unknown
// Signature: int FUN_0059c100(int param_1)

#include "nocturne.h"

int FUN_0059c100(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  FUN_0046b2b0(DAT_0060b280,param_1 + 0x20);
  FUN_0046b350(DAT_0060b280,param_1 + 0x30,0);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = auStack_24;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(auStack_3c);
  if (iVar1 != 0) {
    FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
  }
  thunk_FUN_004e9810(DAT_0060b280);
  return iVar1;
}
