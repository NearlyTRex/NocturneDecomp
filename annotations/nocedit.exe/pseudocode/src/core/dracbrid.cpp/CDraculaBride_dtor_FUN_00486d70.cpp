// Name: core_dracbrid.cpp_CDraculaBride_dtor_FUN_00486d70
// Address: 00486d70
// Address Range: [[00486d70, 00486e28]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_dtor_FUN_00486d70(CDraculaBride *this_ptr,uint flags)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_dtor_FUN_00486d70(CDraculaBride *this_ptr,uint flags)

{
  CDraculaBride_ptr_13260 pCVar1;
  CDraculaBride_ptr_12060 pSVar1;
  CDraculaBride_ptr_11536 pCVar2;
  CDraculaBride_ptr_11356 pCVar3;
  CDraculaBride_ptr_10900 pCVar4;
  CDraculaBride_ptr_344 pCVar5;
  CDraculaBride *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDraculaBrideTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = (CDraculaBride_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720((this_ptr->base).base.flames,0);
  pSVar1 = (CDraculaBride_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar1)->base.base.fires,0);
  pCVar2 = (CDraculaBride_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar3 = (CDraculaBride_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar2)->base.base.collision_test_points,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar3)->base.base.cloth_list,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar4)->base.base.model,0);
  ptr = (CDraculaBride *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar5),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
