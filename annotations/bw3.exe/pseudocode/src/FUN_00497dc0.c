// Name: FUN_00497dc0
// Address: 00497dc0
// Address Range: [[00497dc0, 00497e72]]
// Convention: unknown
// Signature: void FUN_00497dc0(int param_1)

#include "nocturne.h"

void FUN_00497dc0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_28 [3];
  byte local_1c [12];
  
  bVar5 = 0;
  FUN_0046ce90(DAT_005f2afc,param_1 + 4);
  FUN_0046cf30(DAT_005f2afc,param_1 + 0x10,0);
  iVar1 = FUN_004625a0(0x1c73698);
  puVar3 = (uint *)(iVar1 + 0x338);
  puVar4 = local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(local_28,0);
  if (iVar1 != 0) {
    FUN_005375c0(0x01ED78C8,param_1 + 4,param_1 + 0x10,local_28,local_1c,param_1 + 0x1c);
    FUN_00462540(0x1c73698,0,0xffffffff);
  }
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return;
}
