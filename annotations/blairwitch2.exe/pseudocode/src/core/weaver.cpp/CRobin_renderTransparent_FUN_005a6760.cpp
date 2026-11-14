// Name: core_weaver.cpp_CRobin_renderTransparent_FUN_005a6760
// Address: 005a6760
// Address Range: [[005a6760, 005a6793]]
// Convention: __cdecl
// Signature: int __cdecl core_weaver_cpp_CRobin_renderTransparent_FUN_005a6760(CRobin *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_weaver_cpp_CRobin_renderTransparent_FUN_005a6760(CRobin *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderTransparent_FUN_0059f980((CBasicEnemy *)this_ptr);
  core_bwspart_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.base.particle_systems);
  core_bwspart_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.base.base.particle_systems + 1);
  return iVar1;
}
