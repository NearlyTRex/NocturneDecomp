// Name: core_hostage.cpp_CHostage_dtor_FUN_004d36e0
// Address: 004d36e0
// Address Range: [[004d36e0, 004d3784]]
// Convention: __cdecl
// Signature: CHostage * __cdecl core_hostage_cpp_CHostage_dtor_FUN_004d36e0(CHostage *this_ptr,uint flags)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_CHostage_dtor_FUN_004d36e0(CHostage *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  CFlame *pCVar2;
  int iVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CHostage *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHostageTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00511d10(&(this_ptr->base).path_map,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0
                     ((CFlame *)(pCVar1[-1].height_cache[0x42] + 0x53),0);
  iVar3 = core_muzzle_cpp_FUN_0059df70(&pCVar2[-3].base.particle_systems[3].max_particles,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar3 + -0x34c),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[6] + 0x10),0);
  pCVar6 = (CHostage *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar5[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar6;
  }
  FUN_005b7fdc(pCVar6);
  return pCVar6;
}
