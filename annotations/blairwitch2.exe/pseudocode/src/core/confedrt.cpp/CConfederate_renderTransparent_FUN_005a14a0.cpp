// Name: core_confedrt.cpp_CConfederate_renderTransparent_FUN_005a14a0
// Address: 005a14a0
// Address Range: [[005a14a0, 005a14c4]]
// Convention: __cdecl
// Signature: int __cdecl core_confedrt_cpp_CConfederate_renderTransparent_FUN_005a14a0(CConfederate *this_ptr)

#include "nocturne.h"

int __cdecl core_confedrt_cpp_CConfederate_renderTransparent_FUN_005a14a0(CConfederate *this_ptr)

{
  core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.particle_systems);
  return 1;
}
