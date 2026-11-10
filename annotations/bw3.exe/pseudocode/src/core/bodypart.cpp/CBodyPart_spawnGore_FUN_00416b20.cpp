// Name: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00416b20
// Address: 00416b20
// Address Range: [[00416b20, 00416b55]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00416b20(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00416b20(CBodyPart *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.08);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_CGore_spawnBloodParticles_FUN_004ce8a0
            (g_CGorePtr,&(this_ptr->base).location.position,(CVector3f *)&DAT_02cfd900,
             this_ptr->blood_type);
  return;
}
