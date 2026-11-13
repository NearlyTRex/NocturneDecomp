// Name: core_basicene.cpp_CBasicEnemy_dtor_FUN_005a0780
// Address: 005a0780
// Address Range: [[005a0780, 005a07d4]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_dtor_FUN_005a0780(CBasicEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_dtor_FUN_005a0780(CBasicEnemy *this_ptr)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  
  iVar1 = core_armour_cpp_FUN_0040f2b0((this_ptr->base).base.flames,0);
  iVar1 = core_muzzle_cpp_FUN_0059df70(iVar1 + -0x9c8,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar1 + -0x34c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[6] + 0x10),0);
  core_actor_cpp_CDemonActor_dtor_FUN_00408930
            ((CDemonActor *)(pCVar3[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  return;
}
