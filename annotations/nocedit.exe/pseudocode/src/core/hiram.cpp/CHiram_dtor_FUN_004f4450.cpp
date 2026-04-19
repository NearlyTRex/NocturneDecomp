// Name: core_hiram.cpp_CHiram_dtor_FUN_004f4450
// Address: 004f4450
// Address Range: [[004f4450, 004f4522]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_CHiram_dtor_FUN_004f4450(CHiram *this_ptr,uint flags)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_CHiram_dtor_FUN_004f4450(CHiram *this_ptr,uint flags)

{
  CHiram_ptr_48676 pCVar1;
  CHiram_ptr_13260 pCVar2;
  CHiram_ptr_12060 pSVar1;
  CHiram_ptr_11536 pCVar3;
  CHiram_ptr_11356 pCVar4;
  CHiram_ptr_10900 pCVar5;
  CHiram_ptr_344 pCVar6;
  CHiram *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CHiramTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CHiramVTable._ub;
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0(&(this_ptr->base).path_map,0);
  pCVar2 = (CHiram_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720(ADJ(pCVar1)->base.base.flames,0);
  pSVar1 = (CHiram_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar2)->base.base.fires,0);
  pCVar3 = (CHiram_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar4 = (CHiram_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar3)->base.base.collision_test_points,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar4)->base.base.cloth_list,0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar5)->base.base.model,0);
  ptr = (CHiram *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar6),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
