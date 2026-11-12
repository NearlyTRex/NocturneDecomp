// Name: core_hostage.cpp_CHostage_dtor_FUN_004ef910
// Address: 004ef910
// Address Range: [[004ef910, 004ef9a4]]
// Convention: unknown
// Signature: CHostage * core_hostage_cpp_CHostage_dtor_FUN_004ef910(CHostage *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHostage * core_hostage_cpp_CHostage_dtor_FUN_004ef910(CHostage *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CHostage *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHostageTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00533060(&(this_ptr->base).path_map,0);
  iVar2 = core_armour_cpp_FUN_0040ee30(pCVar1[-1].height_cache_tags[10] + 0x36,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar2 + -0x93c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[0] + 0x10),0);
  pCVar5 = (CHostage *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005c0344(pCVar5);
  return pCVar5;
}
