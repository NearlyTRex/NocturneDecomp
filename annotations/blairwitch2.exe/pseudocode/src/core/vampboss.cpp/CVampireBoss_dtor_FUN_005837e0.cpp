// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005837e0
// Address: 005837e0
// Address Range: [[005837e0, 005838c8]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005837e0(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005837e0(CVampireBoss *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CCloth *pCVar2;
  CDeformableModelInstance *pCVar3;
  CFlame *pCVar4;
  SFollowFormation *pSVar5;
  CClothList *pCVar6;
  CVampireBoss *pCVar7;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_005ade00
                     ((CCloth *)(pCVar1[-0x4e].models[1].textures[0xd].texture_name + 0x14),0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_005ade00(pCVar2 + -1,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_005ade00(pCVar2 + -1,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)
                      (pCVar2[-1].collide_bones[0x13].world_matrix.m + 2),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0
                     ((CFlame *)(pCVar3[-7].part_data.texture_set_indices + 0x17),0);
  pSVar5 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar4[-3].base.particle_systems[3].max_particles,0);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar5[-1].slots[2].offset.y,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar6[-0x19].filenames[6] + 0x10),0);
  pCVar7 = (CVampireBoss *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar3[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar7;
  }
  FUN_005b7fdc(pCVar7);
  return pCVar7;
}
