// Name: core_npc.cpp_CNPC_dtor_FUN_00509af0
// Address: 00509af0
// Address Range: [[00509af0, 00509b84]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_00509af0(CNPC *this_ptr,uint flags)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_00509af0(CNPC *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CNPC *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CNPCTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_0050ad40(&this_ptr->path_map,0);
  iVar2 = core_armour_cpp_FUN_00410370(pCVar1[-1].height_cache_tags[4] + 0x2f,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar2 + -0x954),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar3[-0x1b].filenames[7] + 8),0);
  pCVar5 = (CNPC *)core_actor_cpp_CDemonActor_dtor_FUN_00408770
                             ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005a30c4(pCVar5);
  return pCVar5;
}
