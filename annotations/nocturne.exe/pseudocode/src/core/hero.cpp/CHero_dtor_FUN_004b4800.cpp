// Name: core_hero.cpp_CHero_dtor_FUN_004b4800
// Address: 004b4800
// Address Range: [[004b4800, 004b48c5]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004b4800(CHero *this_ptr,uint flags)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004b4800(CHero *this_ptr,uint flags)

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
  
  (this_ptr->base).base.vtable._ub = &g_CHeroVTable._ub;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)(iVar1 + 0x1cae0d8)) {
      *(uint *)(iVar1 + 0x1cae0d8) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004bee60(&this_ptr->inventory,0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_004efdd0
                     ((CPathMap *)(pCVar2[-0x48].item_angles + 0x21),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)(pCVar3[-1].height_cache_tags[0xc] + 0x2c),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar4[-2].base.create_event + 0x10),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar6 + -0x26),0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  pCVar9 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                              ((CDemonActor *)(pCVar8[-1].part_data.visibility_flags + 9),1);
  return pCVar9;
}
