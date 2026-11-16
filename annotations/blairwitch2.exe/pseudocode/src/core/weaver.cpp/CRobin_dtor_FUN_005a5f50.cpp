// Name: core_weaver.cpp_CRobin_dtor_FUN_005a5f50
// Address: 005a5f50
// Address Range: [[005a5f50, 005a602a]]
// Convention: __cdecl
// Signature: CRobin * __cdecl core_weaver_cpp_CRobin_dtor_FUN_005a5f50(CRobin *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CRobin * __cdecl core_weaver_cpp_CRobin_dtor_FUN_005a5f50(CRobin *this_ptr,uint flags)

{
  CSimpleParticleSystem *pCVar1;
  CFlame *pCVar2;
  SFollowFormation *pSVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CRobin *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CRobinTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = (this_ptr->base).base.base.base.base.particle_systems + 1;
  (this_ptr->base).base.base.base.base.vtable._ub = &g_CRobinVTable._ub;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  pCVar1 = (this_ptr->base).base.base.base.base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0((this_ptr->base).base.base.base.flames,0);
  pSVar3 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar2[-3].base.particle_systems[3].max_particles,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar3[-1].slots[2].offset.y,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[6] + 0x10),0);
  ptr = (CRobin *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408930
                  ((CDemonActor *)(pCVar5[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
