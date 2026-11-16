// Name: core_mimic.cpp_CMimic_dtor_FUN_004f0400
// Address: 004f0400
// Address Range: [[004f0400, 004f04e8]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_004f0400(CMimic *this_ptr,uint flags)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_004f0400(CMimic *this_ptr,uint flags)

{
  CDemonActor *this_ptr_00;
  CMorph *pCVar1;
  CCloth *pCVar2;
  CFlame *pCVar3;
  SFollowFormation *pSVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CMimic *pCVar7;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMimicTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->morph_target_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CMimicVTable._ub;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->dtor)(this_ptr_00,2);
  }
  this_ptr->morph_target_actor = (CDemonActor *)0x0;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_005ade00
                     ((CCloth *)(pCVar1[-0x4e].models[1].textures[0xc].texture_name + 0x30),0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0
                     ((CFlame *)(pCVar2[-1].vertices[0x28e].connected_indices + 0xf),0);
  pSVar4 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar3[-3].base.particle_systems[3].max_particles,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar4[-1].slots[2].offset.y,0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar5[-0x19].filenames[6] + 0x10),0);
  pCVar7 = (CMimic *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar6[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar7;
  }
  FUN_005b7fdc(pCVar7);
  return pCVar7;
}
