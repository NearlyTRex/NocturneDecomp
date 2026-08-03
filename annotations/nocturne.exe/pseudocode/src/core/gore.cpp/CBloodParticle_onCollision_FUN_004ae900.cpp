// Name: core_gore.cpp_CBloodParticle_onCollision_FUN_004ae900
// Address: 004ae900
// Address Range: [[004ae900, 004ae954]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ae900(CBloodParticle *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ae900(CBloodParticle *this_ptr,CVector3f *collision_normal)

{
  if ((float)0.90000000000000002 < collision_normal->y) {
    core_gore_cpp_CGore_createGroundBloodSplat_FUN_004b0190
              (g_CGore_PTR_005b96c4,(CVector3f *)this_ptr,this_ptr->blood_type);
    return 1;
  }
  core_gore_cpp_CGore_createWallBloodSplat_FUN_004b01c0
            (g_CGore_PTR_005b96c4,(CVector3f *)this_ptr,collision_normal,this_ptr->blood_type);
  return 1;
}
