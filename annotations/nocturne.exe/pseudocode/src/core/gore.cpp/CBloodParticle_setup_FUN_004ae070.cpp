// Name: core_gore.cpp_CBloodParticle_setup_FUN_004ae070
// Address: 004ae070
// Address Range: [[004ae070, 004ae09f]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ae070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ae070(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x38) = param_4;
  uVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xf);
  *(uint *)(param_1 + 0x3c) = uVar1;
  core_particle_cpp_CParticle_setup_FUN_004ef040(param_1,param_2,param_3);
  return;
}
