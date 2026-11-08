// Name: FUN_00496740
// Address: 00496740
// Address Range: [[00496740, 00496836]]
// Convention: unknown
// Signature: int FUN_00496740(int param_1)

#include "nocturne.h"

int FUN_00496740(int param_1)

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
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_58;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_40);
  if (iVar1 == 0) {
    FUN_00408830(param_1);
    return 0;
  }
  uStack_1c = 0;
  uStack_14 = *(uint *)(param_1 + 0x3d8);
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_24 = 0x40000000;
  FUN_0046cf30(DAT_005f2afc,&DAT_02cfd900,&uStack_28);
  FUN_0046cf30(DAT_005f2afc,&uStack_1c,&DAT_02cfd900);
  FUN_00462540(param_1 + 500,0,0xffffffff);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  FUN_00408830(param_1);
  return iVar1;
}
