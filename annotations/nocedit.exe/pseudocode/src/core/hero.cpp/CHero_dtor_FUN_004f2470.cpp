// Name: core_hero.cpp_CHero_dtor_FUN_004f2470
// Address: 004f2470
// Address Range: [[004f2470, 004f2535]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004f2470(CHero *this_ptr,uint flags)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004f2470(CHero *this_ptr,uint flags)

{
  int iVar1;
  CInventory *pCVar2;
  CPathMap *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CClothList *pCVar7;
  CDeformableModelInstance *pCVar8;
  CHero *pCVar9;
  
  (this_ptr->base).base.vtable._ub = &g_CHeroVTable;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)((int)g_HeroActors + iVar1)) {
      *(uint *)((int)g_HeroActors + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004fd0c0(&this_ptr->inventory,0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_005464d0
                     ((CPathMap *)(pCVar2[-0x48].item_angles + 0x21),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_00412720
                     ((CFlame *)(pCVar3[-1].height_cache_tags[0xb] + 0x2c),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar4[-2].base.create_event + 0x20),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)(pSVar5[-0x16].unk + 4),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar6 + -0x26),0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  pCVar9 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                              ((CDemonActor *)(pCVar8[-1].part_data.visibility_flags + 7),1);
  return pCVar9;
}
