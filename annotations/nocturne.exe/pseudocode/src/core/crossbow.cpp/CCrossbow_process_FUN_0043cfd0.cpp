// Name: core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0
// Address: 0043cfd0
// Address Range: [[0043cfd0, 0043d093]]
// Convention: unknown
// Signature: void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  byte auStack_1c [12];
  byte local_10 [12];
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_10);
  puVar2 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_1c,uVar1);
  *(uint *)(param_1 + 0x594) = *puVar2;
  *(uint *)(param_1 + 0x598) = puVar2[1];
  *(uint *)(param_1 + 0x59c) = puVar2[2];
  if ((((*(int *)(param_1 + 0x2cc) != 2) || (*(int *)(param_1 + 0x560) < 1)) ||
      (*(int *)(param_1 + 0x564) != 5)) || (0.0 < *(float *)(param_1 + 0x2f8))) {
    FUN_0048df10(param_1 + 0x574);
    *(uint *)(param_1 + 0x570) = 0;
  }
  else {
    *(uint *)(param_1 + 0x570) = 1;
  }
  core_flame_cpp_CFlame_process_FUN_0048d0c0(param_1 + 0x574,param_2);
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0x570);
  return;
}
