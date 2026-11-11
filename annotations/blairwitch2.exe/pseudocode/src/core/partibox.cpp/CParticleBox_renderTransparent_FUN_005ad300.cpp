// Name: core_partibox.cpp_CParticleBox_renderTransparent_FUN_005ad300
// Address: 005ad300
// Address Range: [[005ad300, 005ad350]]
// Convention: __cdecl
// Signature: int __cdecl core_partibox_cpp_CParticleBox_renderTransparent_FUN_005ad300(CParticleBox *this_ptr)

#include "nocturne.h"

int __cdecl core_partibox_cpp_CParticleBox_renderTransparent_FUN_005ad300(CParticleBox *this_ptr)

{
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.particle_systems);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.particle_systems + 1);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.particle_systems + 2);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.particle_systems + 3);
  core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041c690(&this_ptr->base);
  return 1;
}
