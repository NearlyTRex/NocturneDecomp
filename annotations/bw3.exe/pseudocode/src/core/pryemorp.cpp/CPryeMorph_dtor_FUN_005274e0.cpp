// Name: core_pryemorp.cpp_CPryeMorph_dtor_FUN_005274e0
// Address: 005274e0
// Address Range: [[005274e0, 005275b2]]
// Convention: __cdecl
// Signature: CPryeMorph * __cdecl core_pryemorp_cpp_CPryeMorph_dtor_FUN_005274e0(CPryeMorph *this_ptr,uint flags)

#include "nocturne.h"

CPryeMorph * __cdecl core_pryemorp_cpp_CPryeMorph_dtor_FUN_005274e0(CPryeMorph *this_ptr,uint flags)

{
  CDemonActor *this_ptr_00;
  CMorph *pCVar1;
  CPathMap *pCVar2;
  CFlame *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CPryeMorph *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPryeMorphTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->target_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CPryeMorphVTable._ub;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->dtor)(this_ptr_00,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0(&this_ptr->morph,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_0050ad40
                     ((CPathMap *)(pCVar1[-0x1a].models[0].textures[6].texture_name + 0x10),0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor50_FUN_00410370
                     ((CFlame *)(pCVar2[-1].height_cache_tags[4] + 0x2f),0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043f900
                     ((CClothList *)((int)&pCVar3[-4].base.previous_transform_state.orientation + 4)
                      ,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar4[-0x1b].filenames[7] + 8),0);
  ptr = (CPryeMorph *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408770
                  ((CDemonActor *)(pCVar5[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) != 0) {
    debugFreeChecked(ptr);
    return ptr;
  }
  return ptr;
}
