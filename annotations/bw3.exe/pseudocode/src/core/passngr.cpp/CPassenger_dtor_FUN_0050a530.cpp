// Name: core_passngr.cpp_CPassenger_dtor_FUN_0050a530
// Address: 0050a530
// Address Range: [[0050a530, 0050a602]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_0050a530(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_0050a530(CPassenger *this_ptr,uint flags)

{
  CWerewolf *this_ptr_00;
  CMorph *pCVar1;
  CPathMap *pCVar2;
  int iVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CPassenger *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPassengerTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->werewolf_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable._ub;
  if (this_ptr_00 != (CWerewolf *)0x0) {
    (*((this_ptr_00->base).base.base.vtable._ub)->dtor)((CDemonActor *)this_ptr_00,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0(&this_ptr->morph,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_0050ad40
                     ((CPathMap *)(pCVar1[-0x1a].models[0].textures[7].texture_name + 8),0);
  iVar3 = core_armour_cpp_FUN_00410370(pCVar2[-1].height_cache_tags[4] + 0x2f,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar3 + -0x954),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar4[-0x1b].filenames[7] + 8),0);
  pCVar6 = (CPassenger *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar5[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) != 0) {
    FUN_005a30c4(pCVar6);
    return pCVar6;
  }
  return pCVar6;
}
