// Name: FUN_0057b040
// Address: 0057b040
// Address Range: [[0057b040, 0057b117]]
// Convention: unknown
// Signature: int FUN_0057b040(int param_1)

#include "nocturne.h"

int FUN_0057b040(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar6 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_40;
  puVar5 = auStack_28;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_0041daf0(auStack_28);
  if (*(int *)(param_1 + 0x588) == 0x10000) {
    FUN_004087d0(param_1);
  }
  else {
    FUN_004087f0(param_1);
    if (iVar3 != 0) {
      FUN_0046d4c0(DAT_005f2afc,*(uint *)(param_1 + 0x588));
      FUN_00462540(param_1 + 0x158,0,0x267);
    }
    FUN_00408830(param_1);
    uVar1 = DAT_005f2afc;
    *(uint *)(param_1 + 0x584) = 0;
    iVar2 = FUN_0046d540(uVar1);
    if ((iVar2 == 0) && (iVar3 != 0)) {
      *(uint *)(param_1 + 0x584) = 1;
      return iVar3;
    }
  }
  return iVar3;
}
