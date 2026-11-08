// Name: FUN_0053ee00
// Address: 0053ee00
// Address Range: [[0053ee00, 0053ee96]]
// Convention: unknown
// Signature: void FUN_0053ee00(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0053ee00(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_54 [3];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c [6];
  byte auStack_24 [12];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  puVar2 = local_3c;
  puVar3 = local_54;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&uStack_18 != &uStack_48) {
    uStack_18 = uStack_48;
    uStack_14 = uStack_44;
    uStack_10 = uStack_40;
  }
  FUN_00477e60(&DAT_0203b37c,param_2 + 0x20,param_2 + 0x30,auStack_24,&uStack_18);
  FUN_0050cf60();
  return;
}
