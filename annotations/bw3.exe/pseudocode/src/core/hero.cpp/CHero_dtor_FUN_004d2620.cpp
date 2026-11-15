// Name: core_hero.cpp_CHero_dtor_FUN_004d2620
// Address: 004d2620
// Address Range: [[004d2620, 004d26ae]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004d2620(CHero *this_ptr,uint flags)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004d2620(CHero *this_ptr,uint flags)

{
  int iVar1;
  CInventory *pCVar2;
  CPathMap *pCVar3;
  CFlame *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CHero *pCVar7;
  
  (this_ptr->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_hero_cpp_CHero_setup_FUN_004d26b0_005e1534;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)(iVar1 + 0x1d5ba04)) {
      *(uint *)(iVar1 + 0x1d5ba04) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004da420(&this_ptr->inventory,0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_0050ad40
                     ((CPathMap *)(pCVar2[-0x47].item_angles + 0x23),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor50_FUN_00410370
                     ((CFlame *)(pCVar3[-1].height_cache_tags[4] + 0x20),0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_0043f900
                     ((CClothList *)((int)&pCVar4[-4].base.previous_transform_state.orientation + 4)
                      ,0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar5[-0x1b].filenames[7] + 8),0);
  pCVar7 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00408770
                              ((CDemonActor *)(pCVar6[-1].part_data.texture_set_indices + 7),1);
  return pCVar7;
}
