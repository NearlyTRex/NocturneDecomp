// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005837e0
// Address: 005837e0
// Address Range: [[005837e0, 005838c8]]
// Convention: unknown
// Signature: CVampireBoss * core_vampboss_cpp_CVampireBoss_dtor_FUN_005837e0(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CVampireBoss * core_vampboss_cpp_CVampireBoss_dtor_FUN_005837e0(CVampireBoss *this_ptr,uint flags)

{
  CMorph *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CClothList *pCVar4;
  CVampireBoss *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  iVar2 = core_necklace_cpp_FUN_005ade00
                    (pCVar1[-0x4e].models[1].textures[0xd].texture_name + 0x14,0);
  iVar2 = core_necklace_cpp_FUN_005ade00(iVar2 + -0x3ab30,0);
  iVar2 = core_necklace_cpp_FUN_005ade00(iVar2 + -0x3ab30,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(iVar2 + -0x22b4),0);
  iVar2 = core_armour_cpp_FUN_0040f2b0(pCVar3[-7].part_data.texture_set_indices + 0x17,0);
  iVar2 = core_muzzle_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CVampireBoss *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar3[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
