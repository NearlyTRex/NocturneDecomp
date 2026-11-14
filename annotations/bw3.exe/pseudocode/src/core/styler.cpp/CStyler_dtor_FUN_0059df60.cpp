// Name: core_styler.cpp_CStyler_dtor_FUN_0059df60
// Address: 0059df60
// Address Range: [[0059df60, 0059e004]]
// Convention: __cdecl
// Signature: CStyler * __cdecl core_styler_cpp_CStyler_dtor_FUN_0059df60(CStyler *this_ptr,uint flags)

#include "nocturne.h"

CStyler * __cdecl core_styler_cpp_CStyler_dtor_FUN_0059df60(CStyler *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CCloth *pCVar2;
  int iVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CStyler *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CStylerTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_0043c280
                     ((CCloth *)(pCVar1[-0x4e].models[1].textures[0xd].texture_name + 4),0);
  iVar3 = core_armour_cpp_FUN_00410370(pCVar2[-1].vertices[0x2c2].connected_indices + 0xd,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar3 + -0x954),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar4[-0x1b].filenames[7] + 8),0);
  pCVar6 = (CStyler *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar5[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar6;
  }
  FUN_005a30c4(pCVar6);
  return pCVar6;
}
