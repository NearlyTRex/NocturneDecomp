// Name: core_teleport.cpp_FUN_00572330
// Address: 00572330
// Address Range: [[00572330, 0057240b]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_00572330(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_teleport_cpp_FUN_00572330(int param_1)

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
  if (*(int *)(param_1 + 0x2c0) != 0) {
    core_actor_cpp_FUN_00408de0(param_1,*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20);
    fStack_24 = fStack_18;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    puVar2 = (uint *)&stack0xffffffc4;
    puVar3 = &stack0xffffffac;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((((fStack_54 <= fStack_24) && (fStack_50 <= fStack_20)) && (fStack_4c <= fStack_1c)) &&
       (((fStack_24 <= fStack_48 && (fStack_20 <= fStack_44)) && (fStack_1c <= fStack_40)))) {
      core_mission_cpp_FUN_004fc780(0x01D182F0,(CLocation *)(*(int *)(param_1 + 0x2c0) + 0x20));
      return;
    }
  }
  return;
}
