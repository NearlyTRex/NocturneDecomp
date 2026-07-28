// Name: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417eb0
// Address: 00417eb0
// Address Range: [[00417eb0, 00417ee5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(CBodyPart *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.08);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
            ((CGore *)INT_005b96c4,&(this_ptr->base).location.position,(CVector3f *)&DAT_02dd1184,
             this_ptr->blood_type);
  return;
}
