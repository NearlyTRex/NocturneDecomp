// Name: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a3d0
// Address: 0041a3d0
// Address Range: [[0041a3d0, 0041a464]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a3d0(CBoneGuy *this_ptr,uint flags)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a3d0(CBoneGuy *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFollowFormation *pSVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CBoneGuy *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBoneGuyTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0((this_ptr->base).base.flames,0);
  pSVar2 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar1[-3].base.particle_systems[3].max_particles,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar2[-1].slots[2].offset.y,0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CBoneGuy *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
