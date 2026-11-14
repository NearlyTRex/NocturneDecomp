// Name: core_bodypart.cpp_CBodyPart_spawnGore_FUN_0041aef0
// Address: 0041aef0
// Address Range: [[0041aef0, 0041af25]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041aef0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041aef0(CBodyPart *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.08);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
            (g_CGorePtr,&(this_ptr->base).location.position,(CVector3f *)&DAT_02c8af28,
             this_ptr->blood_type);
  return;
}
