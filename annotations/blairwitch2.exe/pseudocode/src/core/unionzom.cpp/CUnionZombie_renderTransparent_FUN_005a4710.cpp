// Name: core_unionzom.cpp_CUnionZombie_renderTransparent_FUN_005a4710
// Address: 005a4710
// Address Range: [[005a4710, 005a4735]]
// Convention: __cdecl
// Signature: int __cdecl core_unionzom_cpp_CUnionZombie_renderTransparent_FUN_005a4710(CUnionZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_unionzom_cpp_CUnionZombie_renderTransparent_FUN_005a4710(CUnionZombie *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.particle_systems + 4);
  return iVar1;
}
