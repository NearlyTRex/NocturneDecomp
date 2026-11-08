// Name: FUN_00511980
// Address: 00511980
// Address Range: [[00511980, 00511a61]]
// Convention: unknown
// Signature: int FUN_00511980(int param_1)

#include "nocturne.h"

int FUN_00511980(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  if ((*(float *)(param_1 + 0x25080) <= 1.0) && (*(int *)(param_1 + 0x2568) == 0)) {
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar3 = auStack_34;
    puVar4 = auStack_1c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = FUN_0041a840(auStack_1c);
    if (iVar2 != 0) {
      if ((*(uint *)(param_1 + 0x25080) & 0x7fffffff) != 0) {
        iVar1 = param_1 + 0x24454;
        FUN_005b7150(iVar1,0,param_1 + 0x2b4,0);
        FUN_005b7150(iVar1,1,*(int *)(param_1 + 0x24450) + 0x2b4,0);
        FUN_005b76a0(iVar1,*(uint *)(param_1 + 0x25080));
        FUN_00408a10(param_1);
        return iVar2;
      }
      FUN_00424bd0(param_1);
    }
    FUN_00408a10(param_1);
    return iVar2;
  }
  return 0;
}
