// Name: FUN_0053aef0
// Address: 0053aef0
// Address Range: [[0053aef0, 0053affd]]
// Convention: unknown
// Signature: void FUN_0053aef0(int param_1)

#include "nocturne.h"

void FUN_0053aef0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1034 [979];
  byte local_dc [48];
  uint local_ac [12];
  uint local_7c [12];
  uint local_4c;
  uint auStack_48 [5];
  uint local_34 [3];
  uint local_28 [3];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  FUN_005b5760(local_dc,param_1 + 0x20,param_1 + 0x30);
  local_14 = param_1 + 0x51c;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x51c) != 0) {
      FUN_005b5200(local_14 + iVar2 * 0x34 + 4,local_dc);
      puVar3 = local_ac;
      puVar4 = local_7c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      local_1c = *(int *)(param_1 + 0x51c);
      local_18 = *(int *)(local_1c + 0x154);
      FUN_005b5930(local_7c);
      local_34[0] = auStack_48[2];
      auStack_48[(uint)bVar5 * -2 + 6] = auStack_48[(uint)bVar5 * -2 + 3];
      auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      FUN_005b6270(local_7c,auStack_48 + 5);
      local_28[0] = local_4c;
      auStack_48[(uint)bVar5 * -2 + 9] = auStack_48[(uint)bVar5 * -2];
      auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (**(code **)(local_18 + 0x68))(local_1c,auStack_48 + 8);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x34;
  } while (iVar2 < 10);
  return;
}
