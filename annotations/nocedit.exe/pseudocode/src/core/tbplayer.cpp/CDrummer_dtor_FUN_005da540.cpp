// Name: core_tbplayer.cpp_CDrummer_dtor_FUN_005da540
// Address: 005da540
// Address Range: [[005da540, 005da608]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_CDrummer_dtor_FUN_005da540 (CDrummer *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8, uint d9)

#include "nocturne.h"

CDrummer * __cdecl
core_tbplayer_cpp_CDrummer_dtor_FUN_005da540
          (CDrummer *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CDrummer *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDrummerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)&(this_ptr->base).model_name);
  iVar2 = core_armour_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar1[-1].height_cache_tags[0xb] + 0x39));
  iVar2 = core_armour_cpp_freeFires_FUN_00412700((SFire **)(iVar2 + -0x4b0));
  iVar2 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f **)(iVar2 + -0x20c));
  core_armour_cpp_freeVectors_FUN_004126e0((CVector3f **)(iVar2 + -0xb4));
  iVar2 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,unaff_EBX,unaff_retaddr,
                      (uint)this_ptr);
  ptr = (CDrummer *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].part_visibility_flags + 7),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
