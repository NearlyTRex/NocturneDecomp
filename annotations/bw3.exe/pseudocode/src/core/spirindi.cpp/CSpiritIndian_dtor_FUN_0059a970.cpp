// Name: core_spirindi.cpp_CSpiritIndian_dtor_FUN_0059a970
// Address: 0059a970
// Address Range: [[0059a970, 0059aa38]]
// Convention: unknown
// Signature: CSpiritIndian * core_spirindi_cpp_CSpiritIndian_dtor_FUN_0059a970(CSpiritIndian *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritIndian * core_spirindi_cpp_CSpiritIndian_dtor_FUN_0059a970(CSpiritIndian *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CClothList *pCVar2;
  CPathMap *pCVar3;
  int iVar4;
  CDeformableModelInstance *pCVar5;
  CSpiritIndian *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSpiritIndianTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0((CMorph *)&this_ptr->field_0x34174,0);
  pCVar2 = core_cloth_cpp_FUN_0043f900((CClothList *)(pCVar1 + -0x1d0),0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_0050ad40((CPathMap *)(pCVar2 + -0x138dc),0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_0050ad40((CPathMap *)&pCVar3[-2].field_0x138bc,0);
  iVar4 = unkafter_armour_cpp_FUN_00410370(&pCVar3[-1].field_0xa36c,0);
  pCVar2 = core_cloth_cpp_FUN_0043f900((CClothList *)(iVar4 + -0x954),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2 + -0x2db0),0);
  pCVar6 = (CSpiritIndian *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar5[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar6;
  }
  FUN_005a30c4(pCVar6);
  return pCVar6;
}
