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
  CFlame *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CHero *pCVar7;
  
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
  pCVar4 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0
                     ((CFlame *)(pCVar3[-1].height_cache[0x42] + 0x44),0);
  iVar1 = core_muzzle_cpp_FUN_0059df70(&pCVar4[-3].base.particle_systems[3].max_particles,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar1 + -0x34c),0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar5[-0x19].filenames[6] + 0x10),0);
  pCVar7 = (CHero *)core_actor_cpp_CDemonActor_dtor_FUN_00408930
                              ((CDemonActor *)
                               (pCVar6[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  return pCVar7;
}
