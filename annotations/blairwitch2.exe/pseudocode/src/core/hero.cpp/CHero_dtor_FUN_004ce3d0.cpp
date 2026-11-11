// Name: core_hero.cpp_CHero_dtor_FUN_004ce3d0
// Address: 004ce3d0
// Address Range: [[004ce3d0, 004ce495]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004ce3d0(CHero *this_ptr,uint flags)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_CHero_dtor_FUN_004ce3d0(CHero *this_ptr,uint flags)

{
  int iVar1;
  CInventory *pCVar2;
  CPathMap *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CHero *pCVar6;
  
  (this_ptr->base).base.vtable._ub = (CDemonActor_vtable *)&DAT_005f8274;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)(iVar1 + 0x1cedee4)) {
      *(uint *)(iVar1 + 0x1cedee4) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004da840(this_ptr->inventories + 2,0);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004da840(pCVar2 + -1,0);
  pCVar2 = core_inv_cpp_CInventory_dtor_FUN_004da840(pCVar2 + -1,0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_00511d10((CPathMap *)(pCVar2[-0x33].items + 0xe),0);
  iVar1 = core_armour_cpp_FUN_0040f2b0(pCVar3[-1].height_cache[0x42] + 0x44,0);
  iVar1 = unkaddr_0059d350_cpp_FUN_0059df70(iVar1 + -0x9c8,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar1 + -0x34c),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[6] + 0x10),0);
  pCVar6 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00408930
                              ((CDemonActor *)
                               (pCVar5[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  return pCVar6;
}
