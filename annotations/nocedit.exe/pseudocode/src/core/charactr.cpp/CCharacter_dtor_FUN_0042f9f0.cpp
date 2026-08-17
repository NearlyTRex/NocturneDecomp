// Name: core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0
// Address: 0042f9f0
// Address Range: [[0042f9f0, 0042faa8]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042f9f0(CCharacter *this_ptr,uint flags)

#include "nocturne.h"

CCharacter * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042f9f0(CCharacter *this_ptr,uint flags)

{
  CCharacter_ptr_13260 pCVar1;
  CCharacter_ptr_12060 pSVar1;
  CCharacter_ptr_11536 pCVar2;
  CCharacter_ptr_11356 pCVar3;
  CCharacter_ptr_10900 pCVar4;
  CCharacter_ptr_344 pCVar5;
  CCharacter *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCharacterTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = (CCharacter_ptr_13260)core_armour_cpp_CFlame_arrdtor50_FUN_00412720(this_ptr->flames,0);
  pSVar1 = (CCharacter_ptr_12060)core_armour_cpp_SFire_arrdtor50_FUN_00412700(ADJ(pCVar1)->fires,0);
  pCVar2 = (CCharacter_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor15_FUN_004126e0(ADJ(pSVar1)->collision_test_normals,0);
  pCVar3 = (CCharacter_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor15_FUN_004126e0(ADJ(pCVar2)->collision_test_points,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar3)->cloth_list,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40(&ADJ(pCVar4)->model,0);
  ptr = (CCharacter *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pCVar5)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
