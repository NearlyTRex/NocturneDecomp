// Name: core_thehand.cpp_CTheHand_dtor_FUN_00599c20
// Address: 00599c20
// Address Range: [[00599c20, 00599ca4]]
// Convention: unknown
// Signature: CTheHand * core_thehand_cpp_CTheHand_dtor_FUN_00599c20(CTheHand *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTheHand * core_thehand_cpp_CTheHand_dtor_FUN_00599c20(CTheHand *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CTheHand *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTheHandTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040ee30(&this_ptr->field_0x35dc,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  pCVar4 = (CTheHand *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)&pCVar3[-1].field_0x224c,1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
