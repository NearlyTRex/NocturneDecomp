// Name: FUN_00492ef0
// Address: 00492ef0
// Address Range: [[00492ef0, 00492fe6]]
// Convention: unknown
// Signature: int FUN_00492ef0(int param_1)

#include "nocturne.h"

int FUN_00492ef0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_58 [6];
  uint auStack_40 [6];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar4 = 0;
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = auStack_58;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(auStack_40);
  if (iVar1 == 0) {
    FUN_00408a10(param_1);
    return 0;
  }
  uStack_1c = 0;
  uStack_14 = *(uint *)(param_1 + 0x534);
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_24 = 0x40000000;
  FUN_0046b350(DAT_0060b280,&DAT_0265370c,&uStack_28);
  FUN_0046b350(DAT_0060b280,&uStack_1c,&DAT_0265370c);
  FUN_0044fcc0(param_1 + 0x350,0,0xffffffff);
  thunk_FUN_004e9810(DAT_0060b280);
  thunk_FUN_004e9810(DAT_0060b280);
  FUN_00408a10(param_1);
  return iVar1;
}
