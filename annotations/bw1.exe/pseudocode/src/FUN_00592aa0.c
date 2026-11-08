// Name: FUN_00592aa0
// Address: 00592aa0
// Address Range: [[00592aa0, 00592c36]]
// Convention: unknown
// Signature: int FUN_00592aa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00592aa0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  int iStack_c;
  
  bVar6 = 0;
  iStack_c = FUN_00484180(DAT_00612560);
  if (iStack_c == 0) {
    *(uint *)(param_1 + 0x27bc) = 0;
  }
  if (*(int *)(param_1 + 0x24fc) == 0) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar4 = auStack_3c;
    puVar5 = auStack_24;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar3 = FUN_004207b0(auStack_24);
    if (iVar3 != 0) {
      iVar2 = param_1 + 0xc268;
      *(uint *)(param_1 + 0x27bc) = 1;
      if (iStack_c == 0) {
        if (*(int *)(param_1 + 0xe7d0) == 0) {
          FUN_0042e960(param_1);
        }
        else {
          iVar1 = param_1 + 0xe7d8;
          FUN_00523290(iVar1,0,param_1 + 0x158,0);
          FUN_00523290(iVar1,1,iVar2,0);
          FUN_005232d0(iVar1,1,*(uint *)(param_1 + 0xe7a0),0,1);
          FUN_005232d0(iVar1,1,*(uint *)(param_1 + 0xe7a0),0,2);
          FUN_005237e0(iVar1,*(float *)(param_1 + 0xe7d4) / _DAT_00606278);
        }
      }
      else {
        FUN_00569810(iVar2,0xffffffff,0xffffffff,1,0);
        FUN_00441ff0(param_1 + 0xe60c,iVar2);
      }
      if ((_DAT_01d39d34 != 0) && (iVar2 = FUN_00483e60(DAT_00612560), iVar2 == 0)) {
        FUN_005254b0(param_1 + 0x158,param_1);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x58))(param_1);
      }
    }
    FUN_004087f0(param_1);
    return iVar3;
  }
  return 0;
}
