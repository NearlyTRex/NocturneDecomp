// Name: core_fire.cpp_CGlassParticle_dtor_FUN_004c9660
// Address: 004c9660
// Address Range: [[004c9660, 004c9680]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle *this_ptr,uint flags)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  CGlassParticle *pCVar2;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460((this_ptr->triangle_delta).vertices,0);
  pCVar2 = (CGlassParticle *)
           core_particle_cpp_CParticle_dtor_FUN_00545670((CParticle *)(pCVar1 + -10),1);
  return pCVar2;
}
