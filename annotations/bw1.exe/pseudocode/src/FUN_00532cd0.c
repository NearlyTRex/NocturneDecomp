// Name: FUN_00532cd0
// Address: 00532cd0
// Address Range: [[00532cd0, 00532db1]]
// Convention: unknown
// Signature: int FUN_00532cd0(int param_1)

#include "nocturne.h"

int FUN_00532cd0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  if ((*(float *)(param_1 + 0x207f0) <= 1.0) && (*(int *)(param_1 + 0x24fc) == 0)) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar3 = auStack_34;
    puVar4 = auStack_1c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = FUN_004207b0(auStack_1c);
    if (iVar2 != 0) {
      if ((*(uint *)(param_1 + 0x207f0) & 0x7fffffff) != 0) {
        iVar1 = param_1 + 0x1fbc4;
        FUN_00523290(iVar1,0,param_1 + 0x158,0);
        FUN_00523290(iVar1,1,*(int *)(param_1 + 0x1fbc0) + 0x158,0);
        FUN_005237e0(iVar1,*(uint *)(param_1 + 0x207f0));
        FUN_004087f0(param_1);
        return iVar2;
      }
      FUN_0042e960(param_1);
    }
    FUN_004087f0(param_1);
    return iVar2;
  }
  return 0;
}
