// Name: FUN_0046ec80
// Address: 0046ec80
// Address Range: [[0046ec80, 0046eced]]
// Convention: unknown
// Signature: undefined4 FUN_0046ec80(int param_1)

#include "nocturne.h"

uint FUN_0046ec80(int param_1)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0
            (0x01C08D04,param_1 + 0x20,param_1 + 0x30,(uint *)(param_1 + 0x574),
             *(uint *)(param_1 + 0x570),*(uint *)(param_1 + 0x580));
  *(uint *)(param_1 + 0x580) = 0;
  *(uint *)(param_1 + 0x570) = 0xbf800000;
  *(uint *)(param_1 + 0x57c) = 0;
  *(uint *)(param_1 + 0x578) = *(uint *)(param_1 + 0x57c);
  *(uint *)(param_1 + 0x574) = *(uint *)(param_1 + 0x578);
  return 1;
}
