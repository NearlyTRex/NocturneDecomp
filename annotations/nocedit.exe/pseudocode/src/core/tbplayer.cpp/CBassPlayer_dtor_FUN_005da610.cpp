// Name: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610
// Address: 005da610
// Address Range: [[005da610, 005da6d8]]
// Convention: __cdecl
// Signature: CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_dtor_FUN_005da610(CBassPlayer *this_ptr,uint flags)

#include "nocturne.h"

CBassPlayer * __cdecl
core_tbplayer_cpp_CBassPlayer_dtor_FUN_005da610(CBassPlayer *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CBassPlayer *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBassPlayerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0(&(this_ptr->base).path_map,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor_FUN_00412720
                     ((CFlame *)(pCVar1[-1].height_cache_tags[0xb] + 0x39),0);
  pSVar3 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar2[-2].base.create_event + 0x20),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)(pSVar3[-0x16].unk + 4),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar4 + -0xf,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar4 + -0x26),0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar5[-0x18].filenames[2] + 0x10),0);
  ptr = (CBassPlayer *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar6[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
