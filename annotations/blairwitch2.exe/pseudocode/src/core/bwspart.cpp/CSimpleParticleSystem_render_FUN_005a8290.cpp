// Name: core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290
// Address: 005a8290
// Address Range: [[005a8290, 005a82ff]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem *this_ptr)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem *this_ptr)

{
  int iVar1;
  int *particle;
  int iVar2;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar1 == 0) {
    if ((this_ptr->standalone == 0) && (this_ptr->owner == (CDemonActor *)0x0)) {
      return;
    }
    if ((this_ptr->active != 0) && (iVar1 = 0, 0 < this_ptr->max_particles)) {
      iVar2 = 0;
      do {
        while (particle = (int *)((int)this_ptr->particles + iVar2), *particle != 0) {
          core_bwspart_cpp_renderSimpleParticle_FUN_005a86a0(particle);
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x60;
          if (this_ptr->max_particles <= iVar1) {
            return;
          }
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x60;
      } while (iVar1 < this_ptr->max_particles);
    }
  }
  return;
}
