// Name: core_hero.cpp_CHero_dtor_FUN_004f2470
// Address: 004f2470
// MANUAL RECONSTRUCTION
// Address Range: [[004f2470, 004f2535]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004f2470(CHero *this_ptr,uint flags)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004f2470(CHero *this_ptr,uint flags)

{
  int iVar1;
  CHero_ptr_128824 pCVar2;
  CHero_ptr_48728 pCVar3;
  CHero_ptr_13260 pCVar4;
  CHero_ptr_12060 pSVar2;
  CHero_ptr_11536 pCVar5;
  CHero_ptr_11356 pCVar6;
  CHero_ptr_10900 pCVar7;
  CHero_ptr_344 pCVar8;
  CHero *pCVar9;
  
  (this_ptr->base).base.vtable._ub = &g_CHeroVTable._ub;
  for (iVar1 = 0; iVar1 < (int)(sizeof(g_HeroActors) / sizeof(g_HeroActors[0]));
       iVar1 = iVar1 + 1) {
    if (this_ptr == g_HeroActors[iVar1]) {
      g_HeroActors[iVar1] = (CHero *)0x0;
    }
  }
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004fd0c0(&this_ptr->inventory,0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_005464d0(&ADJ(pCVar2)->path_map,0);
  pCVar4 = (CHero_ptr_13260)core_armour_cpp_CFlame_arrdtor50_FUN_00412720(ADJ(pCVar3)->base.flames,0)
  ;
  pSVar2 = (CHero_ptr_12060)core_armour_cpp_SFire_arrdtor50_FUN_00412700(ADJ(pCVar4)->base.fires,0);
  pCVar5 = (CHero_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor15_FUN_004126e0(ADJ(pSVar2)->base.collision_test_normals,0)
  ;
  pCVar6 = (CHero_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor15_FUN_004126e0(ADJ(pCVar5)->base.collision_test_points,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar6)->base.cloth_list,0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40(&ADJ(pCVar7)->base.model,0);
  pCVar9 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar8),1);
  return pCVar9;
}
