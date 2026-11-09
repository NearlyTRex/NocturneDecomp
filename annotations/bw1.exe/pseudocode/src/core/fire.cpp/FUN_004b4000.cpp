// Name: core_fire.cpp_FUN_004b4000
// Address: 004b4000
// Address Range: [[004b4000, 004b408b]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b4000(CParticle *param_1,CVector3f *param_2,CParticle *param_3,CVector3f *param_4,undefined4 param_5)

#include "nocturne.h"

void core_fire_cpp_FUN_004b4000(CParticle *param_1,CVector3f *param_2,CParticle *param_3,CVector3f *param_4,uint param_5)

{
  uint uVar1;
  
  core_particle_cpp_CParticle_setup_FUN_00532160(param_1,param_2,param_4);
  if (param_1 + 0x40 != param_3) {
    *(uint *)(param_1 + 0x40) = *(uint *)param_3;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_3 + 4);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_3 + 8);
  }
  *(uint *)(param_1 + 0x5c) = param_5;
  uVar1 = core_actor_cpp_FUN_0040cc00(0xc0c90fdb,0x40c90fdb);
  *(uint *)(param_1 + 0x4c) = uVar1;
  uVar1 = core_actor_cpp_FUN_0040cc00(0xc0490fdb,0x40490fdb);
  *(uint *)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x24) = 0x40400000;
  *(uint *)(param_1 + 0x50) = uVar1;
  return;
}
