// Name: core_bodypart.cpp_CBodyPart_spawnGore_FUN_00417a70
// Address: 00417a70
// Address Range: [[00417a70, 00417aa5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417a70(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417a70(CBodyPart *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040d060(0.08);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730
            (g_CGorePtr,&(this_ptr->base).location.position,(CVector3f *)&DAT_0265370c,
             this_ptr->blood_type);
  return;
}
