// Name: FUN_00449600
// Address: 00449600
// Address Range: [[00449600, 004496bb]]
// Convention: unknown
// Signature: void FUN_00449600(int param_1)

#include "nocturne.h"

void FUN_00449600(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_40 [6];
  uint local_28;
  float fStack_24;
  float fStack_18;
  uint uStack_10;
  float fStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x70) != 1) {
    return;
  }
  FUN_00445430(PTR_DAT_00611100,"?%s exploding!\n" + 1,param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = local_40;
  puVar3 = &local_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&uStack_10 != (uint *)(param_1 + 0x20)) {
    uStack_10 = *(uint *)(param_1 + 0x20);
    fStack_c = *(float *)(param_1 + 0x24);
    uStack_8 = *(uint *)(param_1 + 0x28);
  }
  fStack_c = (fStack_18 - fStack_24) + fStack_c;
  FUN_004b6c60(0x01C57074,&uStack_10,0x42000000,0x44bb8000,0x40800000);
  FUN_0051b740(0x01D2C900,param_1,1);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
