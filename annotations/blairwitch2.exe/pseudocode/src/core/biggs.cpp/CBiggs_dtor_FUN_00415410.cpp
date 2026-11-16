// Name: core_biggs.cpp_CBiggs_dtor_FUN_00415410
// Address: 00415410
// Address Range: [[00415410, 004154b4]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00415410(CBiggs *this_ptr,uint flags)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00415410(CBiggs *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CFlame *pCVar2;
  SFollowFormation *pSVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CBiggs *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBiggsTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0
                     ((CFlame *)(pCVar1[-0x12].models[1].textures[8].texture_name + 4),0);
  pSVar3 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar2[-3].base.particle_systems[3].max_particles,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar3[-1].slots[2].offset.y,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[6] + 0x10),0);
  pCVar6 = (CBiggs *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar5[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar6;
  }
  FUN_005b7fdc(pCVar6);
  return pCVar6;
}
