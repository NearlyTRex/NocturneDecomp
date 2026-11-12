// Name: core_hero.cpp_FUN_004d2620
// Address: 004d2620
// Address Range: [[004d2620, 004d26ae]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d2620(int param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004d2620(int param_1)

{
  int iVar1;
  CInventory *pCVar2;
  CPathMap *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  
  *(byte ***)(param_1 + 0x154) = &PTR_core_hero_cpp_FUN_004d26b0_005e1534;
  iVar1 = 0;
  do {
    if (param_1 == *(int *)(iVar1 + 0x1d5ba04)) {
      *(uint *)(iVar1 + 0x1d5ba04) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004da420((CInventory *)(param_1 + 0x206e8),0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_0050ad40
                     ((CPathMap *)(pCVar2[-0x47].item_angles + 0x23),0);
  iVar1 = core_armour_cpp_FUN_00410370(pCVar3[-1].height_cache_tags[4] + 0x20,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar4[-0x1b].filenames[7] + 8),0);
  core_actor_cpp_CDemonActor_dtor_FUN_00408770
            ((CDemonActor *)(pCVar5[-1].part_data.texture_set_indices + 7),1);
  return;
}
