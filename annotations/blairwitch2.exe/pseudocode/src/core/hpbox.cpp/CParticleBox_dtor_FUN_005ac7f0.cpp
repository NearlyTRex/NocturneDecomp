// Name: core_hpbox.cpp_CParticleBox_dtor_FUN_005ac7f0
// Address: 005ac7f0
// Address Range: [[005ac7f0, 005ac8ce]]
// Convention: __cdecl
// Signature: CParticleBox * __cdecl core_hpbox_cpp_CParticleBox_dtor_FUN_005ac7f0(CParticleBox *this_ptr,uint flags)

#include "nocturne.h"

CParticleBox * __cdecl core_hpbox_cpp_CParticleBox_dtor_FUN_005ac7f0(CParticleBox *this_ptr,uint flags)

{
  CSimpleParticleSystem *pCVar1;
  CBox *pCVar2;
  CParticleBox *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CParticleBoxTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (this_ptr->base).base.particle_systems + 3;
  (this_ptr->base).base.vtable._ub = &g_CParticleBoxVTable;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  pCVar1 = (this_ptr->base).base.particle_systems + 2;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  pCVar1 = (this_ptr->base).base.particle_systems + 1;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  pCVar1 = (this_ptr->base).base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_005b1c70(&(this_ptr->base).physics_box,0);
  pCVar3 = (CParticleBox *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)&pCVar2[-3].scrape_points[6].raytrace_normal.y,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005b7fdc(pCVar3);
  return pCVar3;
}
