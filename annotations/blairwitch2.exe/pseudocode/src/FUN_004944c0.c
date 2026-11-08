// Name: FUN_004944c0
// Address: 004944c0
// Address Range: [[004944c0, 00494572]]
// Convention: unknown
// Signature: void FUN_004944c0(int param_1)

#include "nocturne.h"

void FUN_004944c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_28 [3];
  byte local_1c [12];
  
  bVar5 = 0;
  FUN_0046b2b0(DAT_0060b280,param_1 + 4);
  FUN_0046b350(DAT_0060b280,param_1 + 0x10,0);
  iVar1 = FUN_0044fd20(0x1c3def8);
  puVar3 = (uint *)(iVar1 + 0x338);
  puVar4 = local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = FUN_0041a840(local_28,0);
  if (iVar1 != 0) {
    FUN_00530980(0x01E661B8,param_1 + 4,param_1 + 0x10,local_28,local_1c,param_1 + 0x1c);
    FUN_0044fcc0(0x1c3def8,0,0xffffffff);
  }
  thunk_FUN_004e9810(DAT_0060b280);
  return;
}
