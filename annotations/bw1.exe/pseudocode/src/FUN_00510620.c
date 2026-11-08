// Name: FUN_00510620
// Address: 00510620
// Address Range: [[00510620, 005108c6]]
// Convention: unknown
// Signature: int FUN_00510620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00510620(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1058 [965];
  byte *puVar5;
  byte local_d0 [48];
  uint local_a0 [6];
  uint local_88 [6];
  uint local_70;
  uint auStack_6c [9];
  uint auStack_48 [5];
  uint local_34 [3];
  uint local_28 [3];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x24fc) == 0) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar2 = local_88;
    puVar3 = local_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_18 = FUN_004207b0(local_a0);
    if (local_18 != 0) {
      if (*(float *)(param_1 + 0x47abc) < 0.0) {
        local_1c = *(int *)(DAT_00612560 + 0x18);
        FUN_00484190(DAT_00612560,local_1c == 0);
        FUN_005083b0();
        _DAT_01c51d2c = -_DAT_01c51d2c;
        _DAT_01c51d50 = -_DAT_01c51d50;
        _DAT_01c51d5c = -_DAT_01c51d5c;
        _DAT_01c51d60 = -_DAT_01c51d60;
        _DAT_01c51d64 = -_DAT_01c51d64;
        FUN_00569810(param_1 + 0x158,0xffffffff,0xffffffff,1,0);
        FUN_00441800(param_1 + 0xc330,0);
        local_14 = FUN_0040c600(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),_DAT_02c83694);
        if (local_14 != 0) {
          puVar2 = auStack_48 + 8;
          auStack_6c[2] = 0;
          auStack_6c[4] = 0;
          auStack_6c[3] = 0x40490fdb;
          auStack_6c[5] = 0;
          auStack_6c[6] = 0x3f38263b;
          puVar3 = auStack_6c + 5;
          puVar5 = local_d0;
          auStack_6c[7] = 0x3e3d70a4;
          local_28[0] = 0;
          auStack_48[(uint)bVar4 * -2 + 9] = auStack_6c[(uint)bVar4 * -2 + 3];
          auStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               auStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          FUN_005b5760(puVar5,puVar3,puVar2);
          FUN_005b5200(local_d0,param_1 + 0xfd8 + _DAT_01d22424 * 0x30);
          puVar2 = (uint *)&stack0xffffff00;
          puVar3 = (uint *)&stack0xfffffed0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          FUN_005b6270(&stack0xfffffed0);
          local_34[0] = auStack_48[2];
          auStack_48[(uint)bVar4 * -2 + 6] = auStack_48[(uint)bVar4 * -2 + 3];
          auStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               auStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          FUN_005b5930(&stack0xfffffed0);
          puVar2 = auStack_48 + 5;
          puVar3 = auStack_6c + 8;
          auStack_6c[8] = local_70;
          auStack_48[(uint)bVar4 * -2] = auStack_6c[(uint)bVar4 * -2];
          iVar1 = DAT_00612560;
          auStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               auStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          FUN_00483850(iVar1,puVar3,puVar2);
          FUN_004688a0(local_14 + 0x200ac,0,0xffffffff);
          thunk_FUN_005084b0(DAT_00612560);
        }
        FUN_0042f3c0(param_1);
        if ((_DAT_01d39d34 != 0) && (iVar1 = FUN_00483e60(DAT_00612560), iVar1 == 0)) {
          FUN_005254b0(param_1 + 0x158,param_1);
          FUN_00524770(param_1 + 0x158);
        }
        thunk_FUN_005084b0(DAT_00612560);
        FUN_00484190(DAT_00612560,local_1c);
      }
      else {
        FUN_005237e0(param_1 + 0x46e90,*(uint *)(param_1 + 0x47abc));
      }
    }
    FUN_004087f0(param_1);
    return local_18;
  }
  return 0;
}
