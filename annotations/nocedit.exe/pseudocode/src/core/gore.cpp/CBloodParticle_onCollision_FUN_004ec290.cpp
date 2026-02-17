// Name: core_gore.cpp_CBloodParticle_onCollision_FUN_004ec290
// Address: 004ec290
// Address Range: [[004ec290, 004ec2e4]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ec290(CBloodParticle *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ec290(CBloodParticle *this_ptr,CVector3f *collision_normal)

{
  if ((float)0.90000000000000002 < collision_normal->y) {
    core_gore_cpp_CGore_createGroundBloodSplat_FUN_004edb40
              (g_CGorePtr,(CVector3f *)this_ptr,this_ptr->blood_type);
    return 1;
  }
  core_gore_cpp_CGore_createWallBloodSplat_FUN_004edb70
            (g_CGorePtr,(CVector3f *)this_ptr,collision_normal,this_ptr->blood_type);
  return 1;
}
