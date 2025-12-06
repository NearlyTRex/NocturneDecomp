// Name: core_fire.cpp_CGlassParticle_dtor_FUN_004c9660
// Address: 004c9660
// Address Range: [[004c9660, 004c9680]]
// Convention: __cdecl
// Signature: CGlassParticle * core_fire.cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle * this_ptr)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle *this_ptr)

{
  int iVar1;
  CGlassParticle *pCVar2;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)&this_ptr->triangle_delta);
  pCVar2 = (CGlassParticle *)
           core_particle_cpp_CParticle_dtor_FUN_00545670((CParticle *)(iVar1 + -0x78));
  return pCVar2;
}
