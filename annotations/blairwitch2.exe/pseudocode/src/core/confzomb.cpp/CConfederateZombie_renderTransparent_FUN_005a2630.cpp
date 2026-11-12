// Name: core_confzomb.cpp_CConfederateZombie_renderTransparent_FUN_005a2630
// Address: 005a2630
// Address Range: [[005a2630, 005a2655]]
// Convention: __cdecl
// Signature: int __cdecl core_confzomb_cpp_CConfederateZombie_renderTransparent_FUN_005a2630(CConfederateZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_confzomb_cpp_CConfederateZombie_renderTransparent_FUN_005a2630(CConfederateZombie *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  core_bwspart_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.particle_systems + 4);
  return iVar1;
}
