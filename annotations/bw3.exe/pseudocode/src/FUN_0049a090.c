// Name: FUN_0049a090
// Address: 0049a090
// Address Range: [[0049a090, 0049a132]]
// Convention: unknown
// Signature: void FUN_0049a090(int param_1)

#include "nocturne.h"

void FUN_0049a090(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_28 [3];
  byte auStack_1c [12];
  
  bVar4 = 0;
  FUN_0046ce90(DAT_005f2afc,param_1);
  FUN_0046cee0(DAT_005f2afc,param_1 + 0x40,0);
  puVar2 = *(uint **)(*(int *)(param_1 + 0x4c) + 0x350);
  puVar3 = auStack_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_28,0);
  if (iVar1 != 0) {
    FUN_005375c0(0x01ED78C8,param_1,&DAT_02cfd900,auStack_28,auStack_1c,0);
    FUN_00460f20(*(uint *)(param_1 + 0x4c),0,0,0xffffffff);
  }
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return;
}
