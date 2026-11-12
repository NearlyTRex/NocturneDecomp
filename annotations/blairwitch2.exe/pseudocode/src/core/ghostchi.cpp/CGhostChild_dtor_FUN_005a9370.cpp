// Name: core_ghostchi.cpp_CGhostChild_dtor_FUN_005a9370
// Address: 005a9370
// Address Range: [[005a9370, 005a9430]]
// Convention: unknown
// Signature: CGhostChild * core_ghostchi_cpp_CGhostChild_dtor_FUN_005a9370(CGhostChild *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGhostChild * core_ghostchi_cpp_CGhostChild_dtor_FUN_005a9370(CGhostChild *this_ptr,uint flags)

{
  CSimpleParticleSystem *this_ptr_00;
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CGhostChild *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CGhostChildTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr_00 = (this_ptr->base).base.base.base.particle_systems + 4;
  (this_ptr->base).base.base.base.vtable._ub = &g_CGhostChildVTable._ub;
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(this_ptr_00,0);
  core_bwspart_cpp_CSimpleParticleSystem_release_FUN_005a8220(this_ptr_00);
  iVar1 = core_armour_cpp_FUN_0040f2b0((this_ptr->base).base.base.flames,0);
  iVar1 = core_muzzle_cpp_FUN_0059df70(iVar1 + -0x9c8,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar1 + -0x34c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[6] + 0x10),0);
  pCVar4 = (CGhostChild *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar3[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005b7fdc(pCVar4);
  return pCVar4;
}
