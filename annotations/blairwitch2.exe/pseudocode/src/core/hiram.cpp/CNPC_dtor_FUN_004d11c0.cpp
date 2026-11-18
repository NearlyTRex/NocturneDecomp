// Name: core_hiram.cpp_CNPC_dtor_FUN_004d11c0
// Address: 004d11c0
// Address Range: [[004d11c0, 004d1264]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_hiram_cpp_CNPC_dtor_FUN_004d11c0(CNPC *this_ptr,uint flags)

#include "nocturne.h"

CNPC * __cdecl core_hiram_cpp_CNPC_dtor_FUN_004d11c0(CNPC *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  CFlame *pCVar2;
  SFollowFormation *pSVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CNPC *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CNPCTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00511d10(&this_ptr->path_map,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0
                     ((CFlame *)(pCVar1[-1].height_cache[0x42] + 0x53),0);
  pSVar3 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar2[-3].base.particle_systems[3].max_particles,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar3[-1].slots[2].offset.y,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[6] + 0x10),0);
  ptr = (CNPC *)core_actor_cpp_CDemonActor_dtor_FUN_00408930
                          ((CDemonActor *)
                           (pCVar5[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
