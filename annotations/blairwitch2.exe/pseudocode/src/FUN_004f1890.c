// Name: FUN_004f1890
// Address: 004f1890
// Address Range: [[004f1890, 004f1b36]]
// Convention: unknown
// Signature: int FUN_004f1890(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f1890(int param_1)

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
  if (*(int *)(param_1 + 0x2568) == 0) {
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar2 = local_88;
    puVar3 = local_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_18 = FUN_0041a840(local_a0);
    if (local_18 != 0) {
      if (*(float *)(param_1 + 0x4c34c) < 0.0) {
        local_1c = *(int *)(DAT_0060b280 + 0x18);
        FUN_0046bc90(DAT_0060b280,local_1c == 0);
        FUN_004e9710();
        _DAT_01c38b6c = -_DAT_01c38b6c;
        _DAT_01c38b90 = -_DAT_01c38b90;
        _DAT_01c38b9c = -_DAT_01c38b9c;
        _DAT_01c38ba0 = -_DAT_01c38ba0;
        _DAT_01c38ba4 = -_DAT_01c38ba4;
        FUN_00547170(param_1 + 0x2b4,0xffffffff,0xffffffff,1,0);
        FUN_005b0fe0(param_1 + 0x10bc0,0);
        local_14 = FUN_0040c8f0(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),_DAT_0264bec4);
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
          FUN_00591c10(puVar5,puVar3,puVar2);
          FUN_005916b0(local_d0,param_1 + 0x1134 + _DAT_01d097c4 * 0x30);
          puVar2 = (uint *)&stack0xffffff00;
          puVar3 = (uint *)&stack0xfffffed0;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          FUN_00592720(&stack0xfffffed0);
          local_34[0] = auStack_48[2];
          auStack_48[(uint)bVar4 * -2 + 6] = auStack_48[(uint)bVar4 * -2 + 3];
          auStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               auStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          FUN_00591de0(&stack0xfffffed0);
          puVar2 = auStack_48 + 5;
          puVar3 = auStack_6c + 8;
          auStack_6c[8] = local_70;
          auStack_48[(uint)bVar4 * -2] = auStack_6c[(uint)bVar4 * -2];
          iVar1 = DAT_0060b280;
          auStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               auStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          FUN_0046b350(iVar1,puVar3,puVar2);
          FUN_0044fcc0(local_14 + 0x25744,0,0xffffffff);
          thunk_FUN_004e9810(DAT_0060b280);
        }
        FUN_00425aa0(param_1);
        if ((_DAT_01d1cdc8 != 0) && (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)) {
          FUN_005042e0(param_1 + 0x2b4,param_1);
          FUN_005035c0(param_1 + 0x2b4);
        }
        thunk_FUN_004e9810(DAT_0060b280);
        FUN_0046bc90(DAT_0060b280,local_1c);
      }
      else {
        FUN_005b76a0(param_1 + 0x4b720,*(uint *)(param_1 + 0x4c34c));
      }
    }
    FUN_00408a10(param_1);
    return local_18;
  }
  return 0;
}
