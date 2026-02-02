// Name: core_hiram.cpp_CHiram_dtor_FUN_004f4450
// Address: 004f4450
// Address Range: [[004f4450, 004f4522]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_CHiram_dtor_FUN_004f4450 (CHiram *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9)

#include "nocturne.h"

CHiram * __cdecl
core_hiram_cpp_CHiram_dtor_FUN_004f4450
          (CHiram *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CHiram *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHiramTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CHiramVTable;
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0(&(this_ptr->base).path_map);
  iVar2 = core_armour_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar1[-1].height_cache_tags[0xb] + 0x39));
  iVar2 = core_armour_cpp_freeFires_FUN_00412700((SFire **)(iVar2 + -0x4b0));
  iVar2 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f **)(iVar2 + -0x20c));
  core_armour_cpp_freeVectors_FUN_004126e0((CVector3f **)(iVar2 + -0xb4));
  iVar2 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,unaff_EBX,unaff_retaddr,
                      (uint)this_ptr);
  ptr = (CHiram *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].part_visibility_flags + 7),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
