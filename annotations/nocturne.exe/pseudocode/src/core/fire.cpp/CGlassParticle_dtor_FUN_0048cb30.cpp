// Name: core_fire.cpp_CGlassParticle_dtor_FUN_0048cb30
// Address: 0048cb30
// Address Range: [[0048cb30, 0048cb50]]
// Convention: __cdecl
// Signature: CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_0048cb30(CGlassParticle *this_ptr,uint flags)

#include "nocturne.h"

CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_0048cb30(CGlassParticle *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  CGlassParticle *pCVar2;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0((this_ptr->triangle_delta).vertices,0);
  pCVar2 = (CGlassParticle *)
           core_particle_cpp_CParticle_dtor_FUN_004ef030((CParticle *)(pCVar1 + -10),1);
  return pCVar2;
}
