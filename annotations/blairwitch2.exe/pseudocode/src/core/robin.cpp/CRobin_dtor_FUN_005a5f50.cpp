// Name: core_robin.cpp_CRobin_dtor_FUN_005a5f50
// Address: 005a5f50
// Address Range: [[005a5f50, 005a602a]]
// Convention: unknown
// Signature: CRobin * core_robin_cpp_CRobin_dtor_FUN_005a5f50(CRobin *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRobin * core_robin_cpp_CRobin_dtor_FUN_005a5f50(CRobin *this_ptr,uint flags)

{
  CSimpleParticleSystem *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CRobin *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CRobinTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (this_ptr->base).base.base.base.base.particle_systems + 1;
  (this_ptr->base).base.base.base.base.vtable._ub = &g_CRobinVTable._ub;
  unkaddr_005a7eb0_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  unkafter_superopt_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  pCVar1 = (this_ptr->base).base.base.base.base.particle_systems;
  unkaddr_005a7eb0_cpp_CSimpleParticleSystem_stop_FUN_005a8100(pCVar1,0);
  unkafter_superopt_cpp_CSimpleParticleSystem_release_FUN_005a8220(pCVar1);
  iVar2 = core_armour_cpp_FUN_0040f2b0((this_ptr->base).base.base.base.flames,0);
  iVar2 = unkaddr_0059d350_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CRobin *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
