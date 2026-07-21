// Name: core_fire.cpp_CShell_setup_FUN_00489640
// Address: 00489640
// Address Range: [[00489640, 004896cb]]
// Convention: unknown
// Signature: void core_fire_cpp_CShell_setup_FUN_00489640(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void core_fire_cpp_CShell_setup_FUN_00489640(int param_1,uint param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  core_particle_cpp_CParticle_setup_FUN_004ef040(param_1,param_2,param_4);
  if ((uint *)(param_1 + 0x38) != param_3) {
    *(uint *)(param_1 + 0x38) = *param_3;
    *(uint *)(param_1 + 0x3c) = param_3[1];
    *(uint *)(param_1 + 0x40) = param_3[2];
  }
  *(uint *)(param_1 + 0x54) = param_5;
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0c90fdb,0x40c90fdb);
  *(uint *)(param_1 + 0x44) = uVar1;
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0490fdb,0x40490fdb);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x18) = 0x40400000;
  *(uint *)(param_1 + 0x48) = uVar1;
  return;
}
