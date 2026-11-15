// Name: core_hero.cpp_CHero_dtor_FUN_004ea980
// Address: 004ea980
// Address Range: [[004ea980, 004eaa0e]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004ea980(CHero *this_ptr,uint flags)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004ea980(CHero *this_ptr,uint flags)

{
  int iVar1;
  CInventory *pCVar2;
  CPathMap *pCVar3;
  CFlame *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CHero *pCVar7;
  
  (this_ptr->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_hero_cpp_CHero_setup_FUN_004eaa10_00601d34;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)(iVar1 + 0x1d06aa4)) {
      *(uint *)(iVar1 + 0x1d06aa4) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004f6f80(&this_ptr->inventory,0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_00533060((CPathMap *)(pCVar2[-0x47].items + 0x40),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor50_FUN_0040ee30
                     ((CFlame *)(pCVar3[-1].height_cache_tags[10] + 0x28),0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)&pCVar4[-4].base.vtable,0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar5[-0x19].filenames[0] + 0x10),0);
  pCVar7 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00408730
                              ((CDemonActor *)(pCVar6[-1].part_data.texture_set_indices + 7),1);
  return pCVar7;
}
