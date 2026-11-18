// Name: core_gore.cpp_CBloodParticle_onCollision_FUN_004cd3f0
// Address: 004cd3f0
// Address Range: [[004cd3f0, 004cd440]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004cd3f0(CBloodParticle *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004cd3f0(CBloodParticle *this_ptr,CVector3f *collision_normal)

{
  EBloodType blood_type;
  
  blood_type = this_ptr->blood_type;
  if (blood_type != (BLOOD_TYPE_NONE|BLOOD_TYPE_ICHOR)) {
    if ((float)0.90000000000000002 < collision_normal->y) {
      core_gore_cpp_CGore_createGroundBloodSplat_FUN_004ce950
                (g_CGorePtr,(CVector3f *)this_ptr,blood_type);
      return 1;
    }
    core_gore_cpp_CGore_createWallBloodSplat_FUN_004ce980
              (g_CGorePtr,(CVector3f *)this_ptr,collision_normal,blood_type);
  }
  return 1;
}
