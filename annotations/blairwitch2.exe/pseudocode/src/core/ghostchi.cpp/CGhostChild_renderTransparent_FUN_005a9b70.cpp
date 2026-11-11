// Name: core_ghostchi.cpp_CGhostChild_renderTransparent_FUN_005a9b70
// Address: 005a9b70
// Address Range: [[005a9b70, 005a9b95]]
// Convention: __cdecl
// Signature: int __cdecl core_ghostchi_cpp_CGhostChild_renderTransparent_FUN_005a9b70(CGhostChild *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_ghostchi_cpp_CGhostChild_renderTransparent_FUN_005a9b70(CGhostChild *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980(&this_ptr->base);
  unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.particle_systems + 4);
  return iVar1;
}
