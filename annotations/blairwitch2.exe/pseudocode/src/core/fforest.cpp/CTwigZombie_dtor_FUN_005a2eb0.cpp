// Name: core_fforest.cpp_CTwigZombie_dtor_FUN_005a2eb0
// Address: 005a2eb0
// Address Range: [[005a2eb0, 005a2f44]]
// Convention: __cdecl
// Signature: CTwigZombie * __cdecl core_fforest_cpp_CTwigZombie_dtor_FUN_005a2eb0(CTwigZombie *this_ptr,uint flags)

#include "nocturne.h"

CTwigZombie * __cdecl core_fforest_cpp_CTwigZombie_dtor_FUN_005a2eb0(CTwigZombie *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFollowFormation *pSVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CTwigZombie *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTwigZombieTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0((this_ptr->base).base.base.flames,0);
  pSVar2 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar1[-3].base.particle_systems[3].max_particles,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar2[-1].slots[2].offset.y,0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CTwigZombie *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
