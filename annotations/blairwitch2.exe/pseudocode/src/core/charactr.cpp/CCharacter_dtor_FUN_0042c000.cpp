// Name: core_charactr.cpp_CCharacter_dtor_FUN_0042c000
// Address: 0042c000
// Address Range: [[0042c000, 0042c094]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042c000(CCharacter *this_ptr,uint flags)

#include "nocturne.h"

CCharacter * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042c000(CCharacter *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFollowFormation *pSVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CCharacter *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCharacterTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0(this_ptr->flames,0);
  pSVar2 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar1[-3].base.particle_systems[3].max_particles,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar2[-1].slots[2].offset.y,0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  ptr = (CCharacter *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408930
                  ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
