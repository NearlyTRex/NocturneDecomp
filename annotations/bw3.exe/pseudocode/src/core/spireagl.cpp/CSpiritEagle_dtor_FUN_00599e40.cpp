// Name: core_spireagl.cpp_CSpiritEagle_dtor_FUN_00599e40
// Address: 00599e40
// Address Range: [[00599e40, 00599ef8]]
// Convention: __cdecl
// Signature: CSpiritEagle * __cdecl core_spireagl_cpp_CSpiritEagle_dtor_FUN_00599e40(CSpiritEagle *this_ptr,uint flags)

#include "nocturne.h"

CSpiritEagle * __cdecl core_spireagl_cpp_CSpiritEagle_dtor_FUN_00599e40(CSpiritEagle *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CClothList *pCVar2;
  CPathMap *pCVar3;
  int iVar4;
  CDeformableModelInstance *pCVar5;
  CSpiritEagle *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSpiritEagleTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900
                     ((CClothList *)(pCVar1[-1].models[1].textures + 0xe),0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_0050ad40
                     ((CPathMap *)(pCVar2[-0xb5].filenames[6] + 0x1c),0);
  iVar4 = core_armour_cpp_FUN_00410370(pCVar3[-1].height_cache_tags[4] + 0x2f,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar4 + -0x954),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  pCVar6 = (CSpiritEagle *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar5[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar6;
  }
  FUN_005a30c4(pCVar6);
  return pCVar6;
}
