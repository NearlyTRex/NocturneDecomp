// Name: core_npc.cpp_CNPC_dtor_FUN_004b68c0
// Address: 004b68c0
// Address Range: [[004b68c0, 004b6988]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004b68c0(CNPC *this_ptr,uint flags)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004b68c0(CNPC *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CNPC *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CNPCTypeInfo_0059ef00);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_004efdd0(&this_ptr->path_map,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_0040fe50
                     ((CFlame *)(pCVar1[-1].height_cache_tags[0xc] + 0x39),0);
  pSVar3 = core_armour_cpp_SFire_arrdtor50_FUN_0040fe30
                     ((SFire *)(pCVar2[-2].base.create_event + 0x10),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor15_FUN_0040fe10
                     ((CVector3f *)&pSVar3[-0x16].bone_index,0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor15_FUN_0040fe10(pCVar4 + -0xf,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar4 + -0x26),0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar5[-0x18].filenames[2] + 0x10),0);
  ptr = (CNPC *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                          ((CDemonActor *)(pCVar6[-1].part_data.visibility_flags + 9),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
