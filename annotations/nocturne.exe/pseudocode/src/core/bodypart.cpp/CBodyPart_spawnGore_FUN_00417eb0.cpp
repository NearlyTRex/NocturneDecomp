// Name: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0
// Address: 00417eb0
// Address Range: [[00417eb0, 00417ee5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(int param_1)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(int param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3da3d70a);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
            (0x01C78C7C,param_1 + 0x20,&DAT_02dd1184,*(uint *)(param_1 + 0xca0));
  return;
}
