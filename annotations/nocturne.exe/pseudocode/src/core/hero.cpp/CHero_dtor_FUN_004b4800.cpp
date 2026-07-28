// Name: core_hero.cpp_CHero_dtor_FUN_004b4800
// Address: 004b4800
// Address Range: [[004b4800, 004b48c5]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004b4800(CHero *this_ptr,uint flags)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004b4800(CHero *this_ptr,uint flags)

{
  int iVar1;
  CPathMap *pCVar2;
  CFlame *pCVar3;
  SFire *pSVar4;
  CVector3f *pCVar5;
  CClothList *pCVar6;
  CDeformableModelInstance *pCVar7;
  CHero *pCVar8;
  
  (this_ptr->base).base.vtable._ub = (CDemonActor_vtable *)&PTR_core_hero_cpp_FUN_004b48d0_0059eb34;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)(iVar1 + 0x1cae0d8)) {
      *(uint *)(iVar1 + 0x1cae0d8) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  iVar1 = core_inv_cpp_FUN_004bee60(&this_ptr->inventory,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_004efdd0((CPathMap *)(iVar1 + -0x138e0),0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)(pCVar2[-1].height_cache_tags[0xc] + 0x2c),0);
  pSVar4 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar3[-2].base.create_event + 0x10),0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar4[-0x16].bone_index,0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar5 + -0xf,0);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar5 + -0x26),0);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar6[-0x18].filenames[2] + 0x10),0);
  pCVar8 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                              ((CDemonActor *)(pCVar7[-1].part_data.visibility_flags + 9),1);
  return pCVar8;
}
