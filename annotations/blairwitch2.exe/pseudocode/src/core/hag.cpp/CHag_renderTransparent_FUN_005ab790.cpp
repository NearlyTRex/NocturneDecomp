// Name: core_hag.cpp_CHag_renderTransparent_FUN_005ab790
// Address: 005ab790
// Address Range: [[005ab790, 005ab7c3]]
// Convention: __cdecl
// Signature: int __cdecl core_hag_cpp_CHag_renderTransparent_FUN_005ab790(CHag *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_hag_cpp_CHag_renderTransparent_FUN_005ab790(CHag *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.particle_systems);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.particle_systems + 4);
  return iVar1;
}
