// Name: core_bride.cpp_CBride_dtor_FUN_00424b80
// Address: 00424b80
// Address Range: [[00424b80, 00424c38]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_CBride_dtor_FUN_00424b80(CBride *this_ptr,uint flags)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_CBride_dtor_FUN_00424b80(CBride *this_ptr,uint flags)

{
  CBride_ptr_13260 pCVar1;
  CBride_ptr_12060 pSVar1;
  CBride_ptr_11536 pCVar2;
  CBride_ptr_11356 pCVar3;
  CBride_ptr_10900 pCVar4;
  CBride_ptr_344 pCVar5;
  CBride *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBrideTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = (CBride_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720((this_ptr->base).base.flames,0);
  pSVar1 = (CBride_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar1)->base.base.fire_effects,0);
  pCVar2 = (CBride_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar3 = (CBride_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar2)->base.base.collision_test_points,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar3)->base.base.cloth_list,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar4)->base.base.model,0);
  ptr = (CBride *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar5),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
