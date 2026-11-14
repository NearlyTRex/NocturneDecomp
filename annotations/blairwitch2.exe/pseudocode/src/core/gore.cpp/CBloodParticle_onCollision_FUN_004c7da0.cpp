// Name: core_gore.cpp_CBloodParticle_onCollision_FUN_004c7da0
// Address: 004c7da0
// Address Range: [[004c7da0, 004c7df4]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004c7da0(CBloodParticle *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004c7da0(CBloodParticle *this_ptr,CVector3f *collision_normal)

{
  if ((float)_DAT_005d9452 < collision_normal->y) {
    core_gore_cpp_CGore_createGroundBloodSplat_FUN_004c97e0
              (g_CGorePtr,(CVector3f *)this_ptr,this_ptr->blood_type);
    return 1;
  }
  core_gore_cpp_CGore_createWallBloodSplat_FUN_004c9810
            (g_CGorePtr,(CVector3f *)this_ptr,collision_normal,this_ptr->blood_type);
  return 1;
}
