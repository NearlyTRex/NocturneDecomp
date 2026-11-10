// Name: unkafter_zombiepr.cpp_CZombiePriest_dtor_FUN_0058fc80
// Address: 0058fc80
// Address Range: [[0058fc80, 0058fd04]]
// Convention: unknown
// Signature: CZombiePriest * unkafter_zombiepr_cpp_CZombiePriest_dtor_FUN_0058fc80(CZombiePriest *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombiePriest * unkafter_zombiepr_cpp_CZombiePriest_dtor_FUN_0058fc80(CZombiePriest *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CZombiePriest *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CZombiePriestTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  iVar1 = unkafter_armour_cpp_FUN_00410370(&this_ptr->field_0x385c,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900((CClothList *)(iVar1 + -0x954),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  pCVar4 = (CZombiePriest *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005a30c4(pCVar4);
  return pCVar4;
}
