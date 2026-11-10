// Name: core_hiram.cpp_CHiram_dtor_FUN_004d0f90
// Address: 004d0f90
// Address Range: [[004d0f90, 004d1042]]
// Convention: unknown
// Signature: CHiram * core_hiram_cpp_CHiram_dtor_FUN_004d0f90(CHiram *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHiram * core_hiram_cpp_CHiram_dtor_FUN_004d0f90(CHiram *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CHiram *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHiramTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CHiramVTable._ub;
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00511d10((CPathMap *)&(this_ptr->base).field_0x10a60,0);
  iVar2 = core_armour_cpp_FUN_0040f2b0(pCVar1[-1].height_cache[0x42] + 0x53,0);
  iVar2 = unkaddr_0059d350_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CHiram *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)&pCVar4[-1].field_0x2000,1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
