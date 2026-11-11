// Name: core_hiram.cpp_CHiram_dtor_FUN_004ed1f0
// Address: 004ed1f0
// Address Range: [[004ed1f0, 004ed28e]]
// Convention: unknown
// Signature: CHiram * core_hiram_cpp_CHiram_dtor_FUN_004ed1f0(CHiram *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHiram * core_hiram_cpp_CHiram_dtor_FUN_004ed1f0(CHiram *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CHiram *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHiramTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CHiramVTable._ub;
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00533060(&(this_ptr->base).path_map,0);
  iVar2 = core_armour_cpp_FUN_0040ee30(pCVar1[-1].height_cache_tags[10] + 0x36,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar2 + -0x93c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[0] + 0x10),0);
  pCVar5 = (CHiram *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005c0344(pCVar5);
  return pCVar5;
}
