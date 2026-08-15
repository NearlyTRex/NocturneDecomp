// Name: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
// Address: 0041da40
// Address Range: [[0041da40, 0041db08]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy *this_ptr,uint flags)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy *this_ptr,uint flags)

{
  CBoneGuy_ptr_48956 pSVar1;
  CBoneGuy_ptr_13260 pCVar1;
  CBoneGuy_ptr_12060 pSVar2;
  CBoneGuy_ptr_11536 pCVar2;
  CBoneGuy_ptr_11356 pCVar3;
  CBoneGuy_ptr_10900 pCVar4;
  CBoneGuy_ptr_344 pCVar5;
  CBoneGuy *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBoneGuyTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = (CBoneGuy_ptr_48956)
           core_boneguy_cpp_SBoneGuyBox_arrdtor20_FUN_0041db30(this_ptr->boxes,0);
  pCVar1 = (CBoneGuy_ptr_13260)
           core_armour_cpp_CFlame_arrdtor50_FUN_00412720(ADJ(pSVar1)->base.base.flames,0);
  pSVar2 = (CBoneGuy_ptr_12060)
           core_armour_cpp_SFire_arrdtor50_FUN_00412700(ADJ(pCVar1)->base.base.fires,0);
  pCVar2 = (CBoneGuy_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor15_FUN_004126e0
                     (ADJ(pSVar2)->base.base.collision_test_normals,0);
  pCVar3 = (CBoneGuy_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor15_FUN_004126e0
                     (ADJ(pCVar2)->base.base.collision_test_points,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar3)->base.base.cloth_list,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar4)->base.base.model,0);
  ptr = (CBoneGuy *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar5),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
