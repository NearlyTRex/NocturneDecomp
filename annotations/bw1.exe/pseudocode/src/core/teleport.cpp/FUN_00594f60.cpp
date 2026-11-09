// Name: core_teleport.cpp_FUN_00594f60
// Address: 00594f60
// Address Range: [[00594f60, 0059503b]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_00594f60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_teleport_cpp_FUN_00594f60(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_100c [1004];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    core_actor_cpp_FUN_00408bb0(param_1,*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
    fStack_24 = fStack_18;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar2 = (uint *)&stack0xffffffc4;
    puVar3 = &stack0xffffffac;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((((fStack_54 <= fStack_24) && (fStack_50 <= fStack_20)) && (fStack_4c <= fStack_1c)) &&
       (((fStack_24 <= fStack_48 && (fStack_20 <= fStack_44)) && (fStack_1c <= fStack_40)))) {
      core_mission_cpp_CDemonMission_setTeleportTarget_FUN_0051b700
                (0x01D2C900,(CLocation *)(*(int *)(param_1 + 0x164) + 0x20));
      return;
    }
  }
  return;
}
