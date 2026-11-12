// Name: core_styler.cpp_CStyler_dtor_FUN_0059df60
// Address: 0059df60
// Address Range: [[0059df60, 0059e004]]
// Convention: unknown
// Signature: CStyler * core_styler_cpp_CStyler_dtor_FUN_0059df60(CStyler *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStyler * core_styler_cpp_CStyler_dtor_FUN_0059df60(CStyler *this_ptr,uint flags)

{
  CMorph *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CStyler *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CStylerTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0(&this_ptr->morph,0);
  iVar2 = core_cloth_cpp_FUN_0043c280(pCVar1[-0x4e].models[1].textures[0xd].texture_name + 4,0);
  iVar2 = core_armour_cpp_FUN_00410370(iVar2 + -0x97f8,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar2 + -0x954),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar3[-0x1b].filenames[7] + 8),0);
  pCVar5 = (CStyler *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005a30c4(pCVar5);
  return pCVar5;
}
