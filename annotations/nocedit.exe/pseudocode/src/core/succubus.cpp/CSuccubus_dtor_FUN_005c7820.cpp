// Name: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
// Address: 005c7820
// Address Range: [[005c7820, 005c7908]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus *this_ptr,uint flags)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus *this_ptr,uint flags)

{
  CSuccubus_ptr_58172 pCVar1;
  CSuccubus_ptr_57712 pCVar2;
  CSuccubus_ptr_48828 pCVar3;
  CSuccubus_ptr_13260 pCVar4;
  CSuccubus_ptr_12060 pSVar1;
  CSuccubus_ptr_11536 pCVar5;
  CSuccubus_ptr_11356 pCVar6;
  CSuccubus_ptr_10900 pCVar7;
  CSuccubus_ptr_344 pCVar8;
  CSuccubus *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CSuccubusTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar1)->hotdemon_cloth_list,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar2)->hotdemon_model,0);
  pCVar4 = (CSuccubus_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720(ADJ(pCVar3)->base.base.flames,0);
  pSVar1 = (CSuccubus_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar4)->base.base.fire_effects,0);
  pCVar5 = (CSuccubus_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar6 = (CSuccubus_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar5)->base.base.collision_test_points,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar6)->base.base.cloth_list,0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar7)->base.base.model,0);
  ptr = (CSuccubus *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar8),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
