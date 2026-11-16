// Name: core_bwgrndma.cpp_shouldSpawnParticle_FUN_005a7ed0
// Address: 005a7ed0
// Address Range: [[005a7ed0, 005a7eef]]
// Convention: __cdecl
// Signature: int __cdecl core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0(void)

#include "nocturne.h"

int __cdecl core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0(void)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0xffff);
  return (uint)(iVar1 < DAT_0061ec60);
}
