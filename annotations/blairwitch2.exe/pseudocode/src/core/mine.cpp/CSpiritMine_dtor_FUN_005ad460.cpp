// Name: core_mine.cpp_CSpiritMine_dtor_FUN_005ad460
// Address: 005ad460
// Address Range: [[005ad460, 005ad4ec]]
// Convention: unknown
// Signature: CSpiritMine * core_mine_cpp_CSpiritMine_dtor_FUN_005ad460(CSpiritMine *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritMine * core_mine_cpp_CSpiritMine_dtor_FUN_005ad460(CSpiritMine *this_ptr,uint flags)

{
  CSimpleParticleSystem *this_ptr_00;
  CBox *pCVar1;
  CSpiritMine *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSpiritMineTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr_00 = (this_ptr->base).base.particle_systems;
  (this_ptr->base).base.vtable._ub = &g_CSpiritMineVTable;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(this_ptr_00,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(this_ptr_00);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&(this_ptr->base).physics_box,0);
  pCVar2 = (CSpiritMine *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)&pCVar1[-3].scrape_points[6].raytrace_normal.y,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
