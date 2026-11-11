// Name: core_passngr.cpp_CPassenger_dtor_FUN_00532850
// Address: 00532850
// Address Range: [[00532850, 00532922]]
// Convention: unknown
// Signature: CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_00532850(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_00532850(CPassenger *this_ptr,uint flags)

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
    ptr = (void *)__vec_delete(this_ptr,&g_CPassengerTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->werewolf_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable._ub;
  if (this_ptr_00 != (CWerewolf *)0x0) {
    (*((this_ptr_00->base).base.base.vtable._ub)->dtor)((CDemonActor *)this_ptr_00,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0(&this_ptr->morph,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_00533060
                     ((CPathMap *)(pCVar1[-0x1a].models[0].textures[7].texture_name + 0x1c),0);
  iVar3 = core_armour_cpp_FUN_0040ee30(pCVar2[-1].height_cache_tags[10] + 0x36,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar3 + -0x93c),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[0] + 0x10),0);
  pCVar6 = (CPassenger *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar5[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) != 0) {
    FUN_005c0344(pCVar6);
    return pCVar6;
  }
  return pCVar6;
}
