// Name: core_melee.cpp_CMelee_process_FUN_004cf0c0
// Address: 004cf0c0
// Address Range: [[004cf0c0, 004cf172]]
// Convention: unknown
// Signature: void core_melee_cpp_CMelee_process_FUN_004cf0c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_melee_cpp_CMelee_process_FUN_004cf0c0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  byte local_24 [12];
  byte auStack_18 [20];
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  if ((0 < *(int *)(param_1 + 0x588)) &&
     (param_2 = *(float *)(param_1 + 0x58c) - param_2, *(float *)(param_1 + 0x58c) = param_2,
     param_2 <= 0.0)) {
    fVar1 = *(float *)(param_1 + 0x590) * (float)_DAT_00588473;
    *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0x588) + -1;
    *(float *)(param_1 + 0x590) = fVar1;
    *(float *)(param_1 + 0x58c) = fVar1;
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_24);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_18,uVar2);
    core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
              (0x01C78C7C,auStack_18,&DAT_02dd1184,*(uint *)(param_1 + 0x584));
    return;
  }
  return;
}
