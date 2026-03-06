// Name: core_biggs.cpp_CBiggs_dtor_FUN_00418d10
// Address: 00418d10
// Address Range: [[00418d10, 00418dd8]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs *this_ptr,uint flags)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs *this_ptr,uint flags)

{
  CBiggs_ptr_49216 pCVar1;
  CBiggs_ptr_13260 pCVar2;
  CBiggs_ptr_12060 pSVar1;
  CBiggs_ptr_11536 pCVar3;
  CBiggs_ptr_11356 pCVar4;
  CBiggs_ptr_10900 pCVar5;
  CBiggs_ptr_344 pCVar6;
  CBiggs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBiggsTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = (CBiggs_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720(ADJ(pCVar1)->base.base.flames,0);
  pSVar1 = (CBiggs_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar2)->base.base.fire_effects,0);
  pCVar3 = (CBiggs_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar4 = (CBiggs_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar3)->base.base.collision_test_points,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar4)->base.base.cloth_list,0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar5)->base.base.model,0);
  ptr = (CBiggs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar6),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
