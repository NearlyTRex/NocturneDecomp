// Name: FUN_0059ddb0
// Address: 0059ddb0
// Address Range: [[0059ddb0, 0059de99]]
// Convention: unknown
// Signature: int FUN_0059ddb0(int param_1)

#include "nocturne.h"

int FUN_0059ddb0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  if ((1.0 < *(float *)(param_1 + 0x487c4)) || (*(int *)(param_1 + 0x24fc) != 0)) {
    return 0;
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_34;
  puVar4 = auStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041daf0(auStack_1c);
  if (iVar2 != 0) {
    if (((*(uint *)(param_1 + 0x487c4) & 0x7fffffff) != 0) && (*(int *)(param_1 + 0x47b90) == 0)) {
      iVar1 = param_1 + 0x47b98;
      FUN_004fab90(iVar1,0,param_1 + 0x158,0);
      FUN_004fab90(iVar1,1,*(int *)(param_1 + 0x47b94) + 0x158,0);
      FUN_004fb0e0(iVar1,*(uint *)(param_1 + 0x487c4));
      FUN_00408830(param_1);
      return iVar2;
    }
    FUN_0042d8e0(param_1);
  }
  FUN_00408830(param_1);
  return iVar2;
}
